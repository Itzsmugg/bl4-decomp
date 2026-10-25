// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1477fdb30 FUN_1477fdb30 body=167 status=ok
// SIG undefined FUN_1477fdb30(void)

bool FUN_1477fdb30(longlong *param_1,longlong *param_2)

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
  
  param_1 = (longlong *)*param_1;
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
LAB_1477fdb5a:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) goto LAB_1477fdb5a;
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
  lVar6 = *param_2;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar8 = 0;
    do {
      if (iVar5 == 0) goto LAB_1477fdba1;
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
    lVar8 = *param_1;
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
LAB_1477fdba1:
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



// FUNCTION 1477fdbd8 FUN_1477fdbd8 body=48 status=ok
// SIG undefined FUN_1477fdbd8(void)

void FUN_1477fdbd8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1477fdc08 FUN_1477fdc08 body=132 status=ok
// SIG undefined FUN_1477fdc08(void)

void FUN_1477fdc08(longlong param_1,int param_2)

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



// FUNCTION 1477fdc8e FUN_1477fdc8e body=113 status=ok
// SIG undefined FUN_1477fdc8e(void)

void FUN_1477fdc8e(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 8 + (longlong)(int)param_2 * 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar4 = (int)param_1[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    iVar5 = 1;
    if (iVar6 < 1) {
      iVar5 = iVar6;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar2),
            (void *)((longlong)(iVar4 - iVar5) * 0x10 + lVar2),(longlong)iVar5 << 4);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 1477fdd00 FUN_1477fdd00 body=62 status=ok
// SIG undefined FUN_1477fdd00(void)

void FUN_1477fdd00(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1477fdd3e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1477fdd3e FUN_1477fdd3e body=93 status=ok
// SIG undefined FUN_1477fdd3e(void)

ulonglong FUN_1477fdd3e(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1477fdd9b FUN_1477fdd9b body=144 status=ok
// SIG undefined FUN_1477fdd9b(void)

undefined8 FUN_1477fdd9b(longlong param_1,uint param_2,int param_3,float *param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  float fVar6;
  
  if (0xfffffff7 < param_5 - 9U && 0xfffffff7 < param_2 - 9) {
    lVar1 = *(longlong *)((&PTR_PTR_14a589830)[param_5 - 1] + (ulonglong)param_2 * 8 + -8);
    if (lVar1 != 0) {
      lVar2 = (ulonglong)param_2 * 4;
      do {
        iVar5 = 0;
        lVar3 = lVar1;
        do {
          *param_4 = 0.0;
          fVar6 = 0.0;
          lVar4 = 0;
          do {
            fVar6 = fVar6 + *(float *)(param_1 + lVar4) * *(float *)(lVar3 + lVar4);
            *param_4 = fVar6;
            lVar4 = lVar4 + 4;
          } while (lVar2 != lVar4);
          param_4 = param_4 + 1;
          iVar5 = iVar5 + 1;
          lVar3 = lVar3 + lVar4;
        } while (iVar5 != param_5);
        param_1 = param_1 + lVar2;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      return CONCAT71((uint7)(uint3)((uint)param_5 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1477fde2c FUN_1477fde2c body=84 status=ok
// SIG undefined FUN_1477fde2c(void)

void FUN_1477fde2c(longlong param_1)

{
  if (*(int *)(param_1 + 0x6c) < 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_14482f6fa(param_1 + 0x60,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0xffffffff80000000;
  *(undefined8 *)(param_1 + 0x50) = 0xffffffff80000000;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 1477fde80 FUN_1477fde80 body=1134 status=ok
// SIG undefined FUN_1477fde80(void)

undefined8 FUN_1477fde80(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  float *pfVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  double *_Src;
  undefined8 uVar9;
  float *pfVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_a8 [32];
  int local_88;
  double *local_78;
  uint local_70;
  float *local_68;
  uint local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x6c) < 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_14482f6fa(param_1 + 0x60,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  if ((undefined8 *)*param_2 != (undefined8 *)0x0) {
    _Src = (double *)(*(code *)**(undefined8 **)*param_2)();
    iVar5 = (**(code **)(*(longlong *)*param_2 + 8))();
    iVar6 = (**(code **)(*(longlong *)*param_2 + 0x20))();
    uVar7 = (**(code **)(*(longlong *)*param_2 + 0x28))();
    if ((uVar7 != 0 && iVar6 != 0) && (iVar5 != 0 && _Src != (double *)0x0)) {
      uVar11 = iVar6 * iVar5;
      iVar8 = (**(code **)(*(longlong *)*param_2 + 0x18))();
      if (iVar8 == 2) {
        iVar8 = *(int *)(param_1 + 0x90);
        plVar1 = (longlong *)(param_1 + 0x60);
        if (iVar5 == iVar8) {
          iVar5 = *(int *)(param_1 + 0x68);
          *(uint *)(param_1 + 0x68) = iVar5 + uVar11;
          if ((uint)(*(int *)(param_1 + 0x6c) - iVar5) < uVar11) {
            FUN_14475e4ac(plVar1,iVar5);
          }
          else if (uVar11 == 0) goto LAB_1477fdfc7;
          memcpy((void *)((longlong)iVar5 * 4 + *plVar1),_Src,(longlong)(int)uVar11 << 2);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x68);
          *(int *)(param_1 + 0x68) = iVar3 + iVar6 * iVar8;
          if ((uint)(*(int *)(param_1 + 0x6c) - iVar3) < (uint)(iVar6 * iVar8)) {
            FUN_14475e4ac(plVar1);
            iVar8 = *(int *)(param_1 + 0x90);
          }
          local_88 = iVar8;
          cVar4 = FUN_1477fdd9b(_Src,iVar5,iVar6,*plVar1);
          if ((cVar4 == '\0') && (*(undefined4 *)(param_1 + 0x68) = 0, *(int *)(param_1 + 0x6c) < 0)
             ) {
            FUN_14482f6fa(plVar1,0);
          }
        }
      }
      else {
        local_58 = (float *)0x0;
        uStack_50 = (ulonglong)uVar11;
        if (uVar11 != 0) {
          FUN_14475e4ac(&local_58,0);
        }
        pfVar10 = local_58;
        iVar8 = (**(code **)(*(longlong *)*param_2 + 0x18))();
        if (4 < iVar8 - 1U) {
switchD_1477fe06f_caseD_2:
          if (local_58 != (float *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1477fdf1b;
        }
        pfVar2 = pfVar10 + uVar11;
        switch(iVar8) {
        case 1:
          if (uVar11 != 0) {
            do {
              *pfVar10 = (float)*_Src;
              pfVar10 = pfVar10 + 1;
              _Src = _Src + 1;
            } while (pfVar10 < pfVar2);
          }
          break;
        case 2:
          goto switchD_1477fe06f_caseD_2;
        case 3:
          if (uVar11 != 0) {
            do {
              *pfVar10 = (float)(int)*(char *)_Src * 0.0078125;
              pfVar10 = pfVar10 + 1;
              _Src = (double *)((longlong)_Src + 1);
            } while (pfVar10 < pfVar2);
          }
          break;
        case 4:
          local_78 = _Src;
          local_70 = uVar11;
          local_68 = pfVar10;
          local_60 = uVar11;
          FUN_142af422d();
          break;
        case 5:
          if (uVar11 != 0) {
            do {
              *pfVar10 = (float)*(int *)_Src * 4.656613e-10;
              pfVar10 = pfVar10 + 1;
              _Src = (double *)((longlong)_Src + 4);
            } while (pfVar10 < pfVar2);
          }
        }
        plVar1 = (longlong *)(param_1 + 0x60);
        if (iVar5 == *(int *)(param_1 + 0x90)) {
          lVar12 = (longlong)(int)(uint)uStack_50;
          if (lVar12 != 0) {
            iVar5 = *(int *)(param_1 + 0x68);
            *(uint *)(param_1 + 0x68) = iVar5 + (uint)uStack_50;
            if ((uint)(*(int *)(param_1 + 0x6c) - iVar5) < (uint)uStack_50) {
              FUN_14475e4ac(plVar1,iVar5);
            }
            memcpy((void *)((longlong)iVar5 * 4 + *plVar1),local_58,lVar12 << 2);
          }
        }
        else {
          uVar11 = *(int *)(param_1 + 0x90) * iVar6;
          iVar8 = *(int *)(param_1 + 0x68);
          *(uint *)(param_1 + 0x68) = iVar8 + uVar11;
          if ((uint)(*(int *)(param_1 + 0x6c) - iVar8) < uVar11) {
            FUN_14475e4ac(plVar1);
          }
          memset((void *)((longlong)iVar8 * 4 + *(longlong *)(param_1 + 0x60)),0,
                 (longlong)(int)uVar11 << 2);
          local_88 = *(int *)(param_1 + 0x90);
          cVar4 = FUN_1477fdd9b(local_58,iVar5,iVar6,*(undefined8 *)(param_1 + 0x60));
          if ((cVar4 == '\0') && (*(undefined4 *)(param_1 + 0x68) = 0, *(int *)(param_1 + 0x6c) < 0)
             ) {
            FUN_14482f6fa(plVar1,0);
          }
        }
        if (local_58 != (float *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_1477fdfc7:
      if (*(longlong *)(param_1 + 0x48) == -0x80000000) {
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
      else if (*(uint *)(param_1 + 0x7c) != 0) {
        fVar13 = ((float)*(uint *)(param_1 + 0x7c) / (float)uVar7) * *(float *)(param_1 + 0x40);
        *(longlong *)(param_1 + 0x48) = (longlong)(int)fVar13;
        *(float *)(param_1 + 0x40) = fVar13 - (float)(int)fVar13;
      }
      (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_58);
      *(float **)(param_1 + 0x70) = local_58;
      *(int *)(param_1 + 0x78) = iVar6;
      *(uint *)(param_1 + 0x7c) = uVar7;
      (**(code **)(*(longlong *)*param_2 + 0x30))((longlong *)*param_2,&local_58);
      *(undefined4 *)(param_1 + 0x80) = (undefined4)local_58;
      *(undefined4 *)(param_1 + 0x84) = local_58._4_4_;
      *(uint *)(param_1 + 0x88) = (uint)uStack_50;
      *(undefined4 *)(param_1 + 0x8c) = uStack_50._4_4_;
      uVar9 = 1;
      goto LAB_1477fdf1d;
    }
  }
LAB_1477fdf1b:
  uVar9 = 0;
LAB_1477fdf1d:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1477fe2f0 FUN_1477fe2f0 body=143 status=ok
// SIG undefined FUN_1477fe2f0(void)

bool FUN_1477fe2f0(char *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  char local_20 [8];
  longlong local_18;
  char local_10 [8];
  longlong local_8;
  
  local_10[0] = '\x01';
  local_8 = *param_2;
  cVar1 = *param_1;
  if (cVar1 != '\x02') {
    lVar2 = *(longlong *)(param_1 + 8);
    pcVar3 = param_1;
    if (local_8 <= lVar2) {
      if (local_8 < lVar2) {
        pcVar3 = local_10;
      }
      else {
        pcVar3 = local_10;
        if (cVar1 == '\x01') {
          pcVar3 = param_1;
        }
      }
    }
    if (*pcVar3 != cVar1) {
      return false;
    }
    if (*(longlong *)(pcVar3 + 8) != lVar2) {
      return false;
    }
  }
  local_20[0] = '\x01';
  local_18 = local_8;
  cVar1 = param_1[0x10];
  if (cVar1 == '\x02') {
    return true;
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  pcVar3 = param_1 + 0x10;
  if (((lVar2 <= local_8) && (pcVar3 = local_20, local_8 <= lVar2)) &&
     (pcVar3 = param_1 + 0x10, cVar1 != '\x01')) {
    pcVar3 = local_20;
  }
  if (*pcVar3 != cVar1) {
    return false;
  }
  return *(longlong *)(pcVar3 + 8) == lVar2;
}



// FUNCTION 1477fe37f FUN_1477fe37f body=161 status=ok
// SIG undefined FUN_1477fe37f(void)

void FUN_1477fe37f(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(&local_30,"Media",1);
  uVar3 = FUN_144a52528();
  plVar4 = (longlong *)FUN_1405f3750(uVar3,local_30,0);
  if (plVar4 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x50))(plVar4);
    lVar2 = plVar4[1];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = *plVar4;
      lVar5 = 0;
      do {
        (**(code **)**(undefined8 **)(lVar1 + lVar5))(*(undefined8 **)(lVar1 + lVar5),param_1);
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)lVar2 * 8 != lVar5);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fe421 FUN_1477fe421 body=162 status=ok
// SIG undefined FUN_1477fe421(void)

void FUN_1477fe421(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(&local_30,"Media",1);
  uVar3 = FUN_144a52528();
  plVar4 = (longlong *)FUN_1405f3750(uVar3,local_30,0);
  if (plVar4 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x50))(plVar4);
    lVar2 = plVar4[1];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = *plVar4;
      lVar5 = 0;
      do {
        (**(code **)(**(longlong **)(lVar1 + lVar5) + 8))(*(longlong **)(lVar1 + lVar5),param_1);
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)lVar2 * 8 != lVar5);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fe4c4 FUN_1477fe4c4 body=136 status=ok
// SIG undefined FUN_1477fe4c4(void)

undefined8 FUN_1477fe4c4(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x98))();
    if (plVar1 != (longlong *)0x0) {
      local_20 = *(undefined8 *)(param_1 + 0x3c8);
      local_18 = *(longlong *)(param_1 + 0x3d0);
      if (local_18 != 0) {
        LOCK();
        *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar1 + 0x20))(plVar1,&local_20);
      uVar2 = 1;
      goto LAB_1477fe530;
    }
  }
  uVar2 = 0;
LAB_1477fe530:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fe54e FUN_1477fe54e body=143 status=ok
// SIG undefined FUN_1477fe54e(void)

void FUN_1477fe54e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  if (*(longlong *)(param_1 + 0x260) != 0) {
    *(undefined8 *)(param_1 + 0x260) = 0;
    plVar3 = *(longlong **)(param_1 + 0x268);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x268) = 0;
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
    FUN_1478004a6(param_1);
    if (*(char *)(param_1 + 0x278) == '\0') {
      FUN_14780052a(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001477fe57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  return;
}



// FUNCTION 1477fe5de FUN_1477fe5de body=226 status=ok
// SIG undefined FUN_1477fe5de(void)

void FUN_1477fe5de(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  FUN_1477fe6c2(param_1 + 0x108,param_2);
  FUN_1477fe7b8(param_1 + 0x108,&local_38);
  plVar3 = local_30;
  *(undefined8 *)(param_1 + 0xf8) = local_38;
  plVar2 = *(longlong **)(param_1 + 0x100);
  if (plVar2 != local_30) {
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
      UNLOCK();
      plVar2 = *(longlong **)(param_1 + 0x100);
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
    *(longlong **)(param_1 + 0x100) = plVar3;
    plVar3 = local_30;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001477fe6b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fe6c2 FUN_1477fe6c2 body=244 status=ok
// SIG undefined FUN_1477fe6c2(void)

void FUN_1477fe6c2(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  plVar2 = (longlong *)param_2[1];
  local_40 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    iVar6 = FUN_147808c3c(param_1,&local_48);
  }
  else {
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    iVar6 = FUN_147808c3c(param_1);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (iVar6 == -1) {
    lVar3 = *param_2;
    lVar4 = param_2[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
      UNLOCK();
    }
    iVar6 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
      FUN_147808d2c(param_1,iVar6);
    }
    lVar5 = *param_1;
    *(longlong *)(lVar5 + (longlong)iVar6 * 0x10) = lVar3;
    *(longlong *)(lVar5 + 8 + (longlong)iVar6 * 0x10) = lVar4;
    local_48 = 0;
    FUN_147808db2(*param_2 + 8,0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477fe7b8 FUN_1477fe7b8 body=106 status=ok
// SIG undefined FUN_1477fe7b8(void)

undefined8 * FUN_1477fe7b8(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  FUN_14780808a();
  if ((int)param_1[1] == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    *param_2 = 0;
    lVar3 = puVar2[1];
    param_2[1] = lVar3;
    if (lVar3 != 0) {
      iVar4 = *(int *)(lVar3 + 8);
      do {
        if (iVar4 == 0) {
          param_2[1] = 0;
          return param_2;
        }
        LOCK();
        iVar1 = *(int *)(lVar3 + 8);
        bVar5 = iVar4 == iVar1;
        if (bVar5) {
          *(int *)(lVar3 + 8) = iVar4 + 1;
          iVar1 = iVar4;
        }
        iVar4 = iVar1;
        UNLOCK();
      } while (!bVar5);
      if (param_2[1] != 0) {
        *param_2 = *puVar2;
      }
    }
  }
  return param_2;
}



// FUNCTION 1477fe822 FUN_1477fe822 body=12 status=ok
// SIG undefined FUN_1477fe822(void)

void FUN_1477fe822(longlong param_1)

{
  FUN_1477fe82e(param_1 + 0x148);
  return;
}



// FUNCTION 1477fe82e FUN_1477fe82e body=244 status=ok
// SIG undefined FUN_1477fe82e(void)

void FUN_1477fe82e(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  plVar2 = (longlong *)param_2[1];
  local_40 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    iVar6 = FUN_147808e60(param_1,&local_48);
  }
  else {
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    iVar6 = FUN_147808e60(param_1);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (iVar6 == -1) {
    lVar3 = *param_2;
    lVar4 = param_2[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
      UNLOCK();
    }
    iVar6 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
      FUN_147808f50(param_1,iVar6);
    }
    lVar5 = *param_1;
    *(longlong *)(lVar5 + (longlong)iVar6 * 0x10) = lVar3;
    *(longlong *)(lVar5 + 8 + (longlong)iVar6 * 0x10) = lVar4;
    local_48 = 0;
    FUN_147808db2(*param_2 + 8,0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477fe924 FUN_1477fe924 body=106 status=ok
// SIG undefined FUN_1477fe924(void)

undefined4 FUN_1477fe924(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x260);
  plVar3 = *(longlong **)(param_1 + 0x268);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (plVar2 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*plVar2 + 0x10))();
    uVar4 = (**(code **)*puVar5)(puVar5,1);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar4;
}



// FUNCTION 1477fe98e FUN_1477fe98e body=240 status=ok
// SIG undefined FUN_1477fe98e(void)

ulonglong FUN_1477fe98e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x3b8) == 0) {
    uVar6 = 0;
  }
  else {
    FUN_1400b22c2(local_50,"Windows");
    plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x68))();
    lVar2 = plVar4[1];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = *plVar4;
      lVar7 = 0;
      do {
        plVar4 = *(longlong **)(lVar1 + lVar7);
        uVar5 = (**(code **)(*plVar4 + 0x28))(plVar4);
        cVar3 = FUN_144a23846(uVar5,local_50);
        if (cVar3 != '\0') {
          local_58 = 0;
          cVar3 = (**(code **)*plVar4)(plVar4,param_2,param_3,0);
          if (cVar3 != '\0') {
            uVar6 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
            goto LAB_1477fea3e;
          }
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)(int)lVar2 * 8 != lVar7);
    }
    uVar6 = 0;
LAB_1477fea3e:
    if (local_50[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fea80 FUN_1477fea80 body=106 status=ok
// SIG undefined FUN_1477fea80(void)

undefined4 FUN_1477fea80(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x260);
  plVar3 = *(longlong **)(param_1 + 0x268);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (plVar2 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*plVar2 + 0x10))();
    uVar4 = (**(code **)*puVar5)(puVar5,3);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar4;
}



// FUNCTION 1477feaea FUN_1477feaea body=106 status=ok
// SIG undefined FUN_1477feaea(void)

undefined4 FUN_1477feaea(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x260);
  plVar3 = *(longlong **)(param_1 + 0x268);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (plVar2 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*plVar2 + 0x10))();
    uVar4 = (**(code **)*puVar5)(puVar5,4);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar4;
}



// FUNCTION 1477feb54 FUN_1477feb54 body=106 status=ok
// SIG undefined FUN_1477feb54(void)

undefined4 FUN_1477feb54(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x260);
  plVar3 = *(longlong **)(param_1 + 0x268);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (plVar2 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*plVar2 + 0x10))();
    uVar4 = (**(code **)*puVar5)(puVar5,5);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar4;
}



// FUNCTION 1477febbe FUN_1477febbe body=326 status=ok
// SIG undefined FUN_1477febbe(void)

void FUN_1477febbe(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  FUN_14603a6ba(param_1 + 0x158);
  *(undefined1 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (*(int *)(param_1 + 0x224) != 0) {
    FUN_1446f8c06(param_1 + 0x218,0);
  }
  *(undefined1 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x234) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 600) = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b0));
  *(undefined8 *)(param_1 + 0x2d8) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x2e8) = 0xbff0000000000000;
  *(undefined8 *)(param_1 + 0x2f0) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x300) = 0xbff0000000000000;
  *(undefined1 *)(param_1 + 0x308) = 0;
  *(undefined8 *)(param_1 + 0x310) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined1 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x348) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x358) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x368) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x378) = 0xbff0000000000000;
  if (*(char *)(param_1 + 0x398) == '\x01') {
    *(undefined1 *)(param_1 + 0x398) = 0;
  }
  *(undefined8 *)(param_1 + 0x3a0) = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001477fecea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b0));
  return;
}



// FUNCTION 1477fed04 FUN_1477fed04 body=98 status=ok
// SIG undefined FUN_1477fed04(void)

undefined4 FUN_1477fed04(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  uStack_28 = 0;
  cVar1 = FUN_1477fed68();
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = local_3c;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fed68 FUN_1477fed68 body=113 status=ok
// SIG undefined FUN_1477fed68(void)

undefined8 FUN_1477fed68(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_2 == -1) {
    param_2 = *(int *)(param_1 + 0xc0);
  }
  if (param_3 == -1) {
    param_3 = FUN_1477ff5ee(param_1,0,param_2);
  }
  if (*(longlong **)(param_1 + 0x260) != (longlong *)0x0) {
    puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x0001477fedb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)*puVar1)(puVar1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1477fedda FUN_1477fedda body=98 status=ok
// SIG undefined FUN_1477fedda(void)

undefined4 FUN_1477fedda(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [48];
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  uStack_28 = 0;
  cVar1 = FUN_1477fed68();
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  uVar2 = 0;
  if (cVar1 != '\0') {
    uVar2 = local_38;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fee3e FUN_1477fee3e body=183 status=ok
// SIG undefined FUN_1477fee3e(void)

undefined8 *
FUN_1477fee3e(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  void *_Src;
  char cVar1;
  longlong lVar2;
  undefined1 auStack_78 [56];
  void *local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (void *)0x0;
  uStack_38 = 0;
  cVar1 = FUN_1477fed68(param_1,param_3,param_4);
  _Src = local_40;
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    lVar2 = (longlong)(int)uStack_38;
    *(int *)(param_2 + 1) = (int)uStack_38;
    if (lVar2 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,uStack_38 & 0xffffffff,0);
      memcpy((void *)*param_2,_Src,lVar2 * 2);
    }
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477feef6 FUN_1477feef6 body=112 status=ok
// SIG undefined FUN_1477feef6(void)

undefined8 * FUN_1477feef6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))();
    (**(code **)(*plVar3 + 8))(plVar3,param_2);
  }
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
  return param_2;
}



// FUNCTION 1477fef66 FUN_1477fef66 body=128 status=ok
// SIG undefined FUN_1477fef66(void)

longlong * FUN_1477fef66(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar2 = *(longlong **)(param_1 + 0x260);
  plVar3 = *(longlong **)(param_1 + 0x268);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (plVar2 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_140e82300();
    plVar2 = (longlong *)*plVar4;
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    *(int *)(param_2 + 1) = (int)plVar4[1];
  }
  else {
    (**(code **)(*plVar2 + 0x78))(plVar2,param_2);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return param_2;
}



// FUNCTION 1477fefe6 FUN_1477fefe6 body=101 status=ok
// SIG undefined FUN_1477fefe6(void)

undefined8 * FUN_1477fefe6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x260);
  plVar3 = *(longlong **)(param_1 + 0x268);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (plVar2 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x70))(plVar2,param_2);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return param_2;
}



// FUNCTION 1477ff04c FUN_1477ff04c body=106 status=ok
// SIG undefined FUN_1477ff04c(void)

undefined4 FUN_1477ff04c(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x38))();
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4,param_2);
  }
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
  return uVar3;
}



// FUNCTION 1477ff0b6 FUN_1477ff0b6 body=114 status=ok
// SIG undefined FUN_1477ff0b6(void)

undefined4 FUN_1477ff0b6(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x38))();
    uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,param_2,param_3);
  }
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
  return uVar3;
}



// FUNCTION 1477ff128 FUN_1477ff128 body=183 status=ok
// SIG undefined FUN_1477ff128(void)

undefined8 * FUN_1477ff128(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar4 == (longlong *)0x0) {
    *param_2 = 0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x3b8);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_38);
    plVar4 = (longlong *)(**(code **)(*plVar3 + 0x70))(plVar3,local_38);
    (**(code **)(*plVar4 + 0x18))(plVar4,param_2);
  }
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ff1e0 FUN_1477ff1e0 body=112 status=ok
// SIG undefined FUN_1477ff1e0(void)

undefined8 FUN_1477ff1e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar3 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))();
    uVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
  }
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
  return uVar4;
}



// FUNCTION 1477ff250 FUN_1477ff250 body=120 status=ok
// SIG undefined FUN_1477ff250(void)

undefined8 * FUN_1477ff250(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))();
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2,param_3);
  }
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
  return param_2;
}



// FUNCTION 1477ff2c8 FUN_1477ff2c8 body=11 status=ok
// SIG undefined FUN_1477ff2c8(void)

undefined4 FUN_1477ff2c8(longlong param_1,int param_2)

{
  return *(undefined4 *)(param_1 + 0xc0 + (longlong)param_2 * 4);
}



// FUNCTION 1477ff2d4 FUN_1477ff2d4 body=251 status=ok
// SIG undefined FUN_1477ff2d4(void)

longlong * FUN_1477ff2d4(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar4 == (longlong *)0x0) {
    *param_2 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar4 + 200))(plVar4,1);
    if (cVar3 == '\0') {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4);
      (**(code **)(*plVar4 + 0x30))(plVar4,local_40);
      local_40[0] = local_40[0] - *(longlong *)(param_1 + 0x30);
      lVar5 = 0;
      if (0 < local_40[0]) {
        lVar5 = local_40[0];
      }
      *param_2 = lVar5;
    }
    else {
      FUN_1477ff3ea(param_1,local_40,0);
      lVar5 = 0;
      if (!SBORROW8(0,local_40[0])) {
        lVar5 = local_40[0];
      }
      *param_2 = lVar5;
    }
  }
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ff3d0 FUN_1477ff3d0 body=25 status=ok
// SIG undefined FUN_1477ff3d0(void)

undefined8 FUN_1477ff3d0(undefined8 param_1,undefined8 param_2)

{
  FUN_1477ff3ea(param_1,param_2,0);
  return param_2;
}



// FUNCTION 1477ff3ea FUN_1477ff3ea body=338 status=ok
// SIG undefined FUN_1477ff3ea(void)

undefined8 * FUN_1477ff3ea(longlong param_1,undefined8 *param_2,byte param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  plVar3 = *(longlong **)(param_1 + 0x260);
  plVar4 = *(longlong **)(param_1 + 0x268);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0x8000000000000000;
    param_2[1] = 0;
    goto LAB_1477ff4fd;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b0));
  cVar5 = (**(code **)(*plVar3 + 200))(plVar3,1);
  if (cVar5 == '\0') {
    FUN_1477ff2d4(param_1,param_2);
LAB_1477ff4dc:
    param_2[1] = 0;
  }
  else {
    if ((param_3 == 0) || (SBORROW8(0,*(longlong *)(param_1 + 0x3a0)))) {
      if (((*(int *)(param_1 + 0x150) == 0) || (*(int *)(param_1 + 0xd8) == -1)) ||
         (*(int *)(param_1 + 0x234) == 0)) {
        if (((*(longlong *)(param_1 + 0xf8) == 0) || (*(longlong *)(param_1 + 0x100) == 0)) ||
           ((*(int *)(*(longlong *)(param_1 + 0x100) + 8) < 1 || (*(int *)(param_1 + 0xc0) == -1))))
        {
          *param_2 = 0x8000000000000000;
          goto LAB_1477ff4dc;
        }
        uVar6 = *(undefined4 *)(param_1 + 0x338);
        uVar7 = *(undefined4 *)(param_1 + 0x33c);
        uVar8 = *(undefined4 *)(param_1 + 0x340);
        uVar9 = *(undefined4 *)(param_1 + 0x344);
      }
      else {
        puVar2 = (undefined4 *)(param_1 + 0x348 + (ulonglong)param_3 * 0x10);
        uVar6 = *puVar2;
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
      }
    }
    else {
      uVar6 = *(undefined4 *)(param_1 + 0x3a0);
      uVar7 = *(undefined4 *)(param_1 + 0x3a4);
      uVar8 = *(undefined4 *)(param_1 + 0x3a8);
      uVar9 = *(undefined4 *)(param_1 + 0x3ac);
    }
    *(undefined4 *)param_2 = uVar6;
    *(undefined4 *)((longlong)param_2 + 4) = uVar7;
    *(undefined4 *)(param_2 + 1) = uVar8;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar9;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b0));
LAB_1477ff4fd:
  if (plVar4 != (longlong *)0x0) {
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
  return param_2;
}



// FUNCTION 1477ff53c FUN_1477ff53c body=25 status=ok
// SIG undefined FUN_1477ff53c(void)

undefined8 FUN_1477ff53c(undefined8 param_1,undefined8 param_2)

{
  FUN_1477ff3ea(param_1,param_2,1);
  return param_2;
}



// FUNCTION 1477ff556 FUN_1477ff556 body=152 status=ok
// SIG undefined FUN_1477ff556(void)

longlong * FUN_1477ff556(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar3 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_140e82300();
    plVar3 = (longlong *)*plVar4;
    *param_2 = (longlong)plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    *(int *)(param_2 + 1) = (int)plVar4[1];
  }
  else {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x38))();
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3,param_4);
  }
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
  return param_2;
}



// FUNCTION 1477ff5ee FUN_1477ff5ee body=117 status=ok
// SIG undefined FUN_1477ff5ee(void)

undefined4 FUN_1477ff5ee(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x38))();
    uVar3 = (**(code **)(*plVar4 + 0x28))(plVar4,param_2,param_3);
  }
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
  return uVar3;
}



// FUNCTION 1477ff664 FUN_1477ff664 body=127 status=ok
// SIG undefined FUN_1477ff664(void)

undefined8 *
FUN_1477ff664(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x38))();
    (**(code **)(*plVar3 + 0x30))(plVar3,param_2,param_3,param_4);
  }
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
  return param_2;
}



// FUNCTION 1477ff6e4 FUN_1477ff6e4 body=145 status=ok
// SIG undefined FUN_1477ff6e4(void)

void FUN_1477ff6e4(void)

{
  char cVar1;
  float fVar2;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  undefined1 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_4c = 2;
  local_48 = 0;
  local_44 = 2;
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  cVar1 = FUN_1477ff776();
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_54 == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)local_58 / (float)local_54;
  }
  if (cVar1 == '\0') {
    fVar2 = 0.0;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar2);
}



// FUNCTION 1477ff776 FUN_1477ff776 body=117 status=ok
// SIG undefined FUN_1477ff776(void)

undefined8 FUN_1477ff776(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (param_2 == -1) {
    param_2 = *(int *)(param_1 + 0xd8);
  }
  if (param_3 == -1) {
    param_3 = FUN_1477ff5ee(param_1,6,param_2);
  }
  if (*(longlong **)(param_1 + 0x260) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x0001477ff7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1477ff7ec FUN_1477ff7ec body=131 status=ok
// SIG undefined FUN_1477ff7ec(void)

undefined8 *
FUN_1477ff7ec(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_3c = 2;
  local_38 = 0;
  local_34 = 2;
  local_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  cVar1 = FUN_1477ff776(0,param_3,param_4,&local_48);
  puVar2 = &DAT_14c967818;
  if (cVar1 != '\0') {
    puVar2 = &local_48;
  }
  *param_2 = *puVar2;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ff870 FUN_1477ff870 body=130 status=ok
// SIG undefined FUN_1477ff870(void)

undefined4 FUN_1477ff870(void)

{
  char cVar1;
  undefined1 auStack_88 [48];
  undefined4 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_54 = 2;
  local_50 = 0;
  local_4c = 2;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  cVar1 = FUN_1477ff776();
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 == '\0') {
    local_58 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ff8f4 FUN_1477ff8f4 body=147 status=ok
// SIG undefined FUN_1477ff8f4(void)

undefined8 *
FUN_1477ff8f4(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 auStack_78 [52];
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_44 = CONCAT31(local_44._1_3_,2);
  uStack_40 = 0;
  uStack_3c = CONCAT31(uStack_3c._1_3_,2);
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  cVar1 = FUN_1477ff776(param_1,param_3,param_4);
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *(undefined4 *)param_2 = local_44;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_40;
    *(undefined4 *)(param_2 + 1) = uStack_3c;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_38;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ff988 FUN_1477ff988 body=204 status=ok
// SIG undefined FUN_1477ff988(void)

undefined8 *
FUN_1477ff988(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  void *_Src;
  char cVar1;
  longlong lVar2;
  undefined1 auStack_88 [52];
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  void *local_40;
  ulonglong uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_54 = 2;
  local_50 = 0;
  local_4c = 2;
  local_48 = 0;
  local_40 = (void *)0x0;
  uStack_38 = 0;
  cVar1 = FUN_1477ff776(param_1,param_3,param_4);
  _Src = local_40;
  if (cVar1 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    lVar2 = (longlong)(int)uStack_38;
    *(int *)(param_2 + 1) = (int)uStack_38;
    if (lVar2 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,uStack_38 & 0xffffffff,0);
      memcpy((void *)*param_2,_Src,lVar2 * 2);
    }
  }
  if (local_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477ffa56 FUN_1477ffa56 body=115 status=ok
// SIG undefined FUN_1477ffa56(void)

undefined4 FUN_1477ffa56(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x260);
  plVar3 = *(longlong **)(param_1 + 0x268);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (plVar2 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar5 = (undefined8 *)(**(code **)(*plVar2 + 0x48))();
    uVar4 = (**(code **)*puVar5)(puVar5,param_2,param_3);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar4;
}



// FUNCTION 1477ffaca FUN_1477ffaca body=108 status=ok
// SIG undefined FUN_1477ffaca(void)

undefined4 FUN_1477ffaca(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x48))();
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4,param_2);
  }
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
  return uVar3;
}



// FUNCTION 1477ffb36 FUN_1477ffb36 body=109 status=ok
// SIG undefined FUN_1477ffb36(void)

ulonglong FUN_1477ffb36(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 unaff_RBX;
  undefined1 uVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar4 == (longlong *)0x0) {
    uVar5 = *(undefined1 *)(param_1 + 0x3b4);
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
    iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
    uVar5 = iVar3 == 1;
  }
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
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar5) & 0xffffffff;
}



// FUNCTION 1477ffba4 FUN_1477ffba4 body=105 status=ok
// SIG undefined FUN_1477ffba4(void)

uint FUN_1477ffba4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
    uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
    uVar3 = uVar3 & 0xffffff01;
  }
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
  return uVar3;
}



// FUNCTION 1477ffc0e FUN_1477ffc0e body=106 status=ok
// SIG undefined FUN_1477ffc0e(void)

uint FUN_1477ffc0e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
    uVar3 = (**(code **)(*plVar4 + 0x20))(plVar4);
    uVar3 = (uVar3 & 2) >> 1;
  }
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
  return uVar3;
}



// FUNCTION 1477ffc78 FUN_1477ffc78 body=101 status=ok
// SIG undefined FUN_1477ffc78(void)

undefined4 FUN_1477ffc78(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
    uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
  }
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
  return uVar3;
}



// FUNCTION 1477ffcde FUN_1477ffcde body=106 status=ok
// SIG undefined FUN_1477ffcde(void)

ulonglong FUN_1477ffcde(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar4 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
    iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),iVar3 == 2);
  }
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
  return uVar5 & 0xffffffff;
}



// FUNCTION 1477ffd48 FUN_1477ffd48 body=106 status=ok
// SIG undefined FUN_1477ffd48(void)

ulonglong FUN_1477ffd48(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar4 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
    iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),iVar3 == 3);
  }
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
  return uVar5 & 0xffffffff;
}



// FUNCTION 1477ffdb2 FUN_1477ffdb2 body=106 status=ok
// SIG undefined FUN_1477ffdb2(void)

ulonglong FUN_1477ffdb2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar4 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
    iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),iVar3 == 4);
  }
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
  return uVar5 & 0xffffffff;
}



// FUNCTION 1477ffe1c FUN_1477ffe1c body=105 status=ok
// SIG undefined FUN_1477ffe1c(void)

ulonglong FUN_1477ffe1c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar4 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
    iVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),iVar3 == 0);
  }
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
  return uVar5 & 0xffffffff;
}



// FUNCTION 1477ffe86 FUN_1477ffe86 body=115 status=ok
// SIG undefined FUN_1477ffe86(void)

ulonglong FUN_1477ffe86(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar4 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
    uVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),uVar3 != 4 && 1 < uVar3);
  }
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
  return uVar5 & 0xffffffff;
}



// FUNCTION 1477ffefa FUN_1477ffefa body=851 status=ok
// SIG undefined FUN_1477ffefa(void)

undefined8
FUN_1477ffefa(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,char param_7,undefined4 param_8,
             undefined8 param_9)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 *local_b0;
  char local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x98))();
  if (plVar5 != (longlong *)0x0) {
    local_60 = *(longlong **)(param_1 + 0x20);
    if (local_60 == (longlong *)0x0) {
      local_60 = (longlong *)0x0;
      local_68 = 0;
    }
    else {
      iVar4 = (int)local_60[1];
      local_68 = 0;
      do {
        if (iVar4 == 0) {
          local_60 = (longlong *)0x0;
          goto LAB_1477fff80;
        }
        LOCK();
        iVar2 = (int)local_60[1];
        bVar11 = iVar4 == iVar2;
        if (bVar11) {
          *(int *)(local_60 + 1) = iVar4 + 1;
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
        UNLOCK();
      } while (!bVar11);
      local_68 = *(undefined8 *)(param_1 + 0x18);
    }
LAB_1477fff80:
    plVar6 = (longlong *)FUN_14001cc68(0x48,0x10);
    FUN_147809068(plVar6,&local_68);
    plVar8 = plVar6 + 2;
    local_58 = plVar8;
    local_50 = plVar6;
    FUN_14780942e(&local_58,plVar8);
    if (plVar6 == (longlong *)0x0) {
      *param_2 = 0x10;
      plVar8 = (longlong *)param_2[1];
      if (plVar8 != (longlong *)0x0) {
        param_2[1] = 0;
LAB_147800019:
        LOCK();
        plVar6 = plVar8 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
joined_r0x000147800053:
          if (iVar4 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      *param_2 = (longlong)plVar8;
      plVar8 = (longlong *)param_2[1];
      if (plVar6 == plVar8) {
        LOCK();
        plVar8 = plVar6 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
          plVar8 = plVar6;
          goto joined_r0x000147800053;
        }
      }
      else {
        param_2[1] = (longlong)plVar6;
        if (plVar8 != (longlong *)0x0) goto LAB_147800019;
      }
    }
    plVar8 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_50 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    plVar8 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_60 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (*param_2 != 0) {
      *(undefined8 *)(*param_2 + 0x28) = param_9;
      lVar7 = FUN_14001cc68(0xd0,0x10);
      if (param_7 == '\0') {
        local_78 = *(undefined8 *)(param_1 + 0x260);
        lStack_70 = *(longlong *)(param_1 + 0x268);
        if (lStack_70 != 0) {
          LOCK();
          *(int *)(lStack_70 + 8) = *(int *)(lStack_70 + 8) + 1;
          UNLOCK();
        }
      }
      else {
        local_78 = 0;
        lStack_70 = 0;
      }
      local_a0 = param_8;
      local_a8 = param_7;
      local_b0 = &local_78;
      local_b8 = param_6;
      FUN_14780024e(lVar7,param_3,param_4,param_5);
      plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar8[1] = (longlong)&DAT_100000001;
      *plVar8 = (longlong)&PTR_FUN_14a58a760;
      plVar8[2] = lVar7;
      if (lVar7 != 0) {
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        local_98 = *param_2;
        local_90 = param_2[1];
        if (local_90 != 0) {
          LOCK();
          *(int *)(local_90 + 8) = *(int *)(local_90 + 8) + 1;
          UNLOCK();
        }
        local_88 = lVar7;
        local_80 = plVar8;
        cVar3 = (**(code **)(*plVar5 + 8))(plVar5,&local_98,&local_88);
        if (cVar3 == '\0') goto LAB_1478001e1;
        uVar9 = 1;
        if (plVar8 == (longlong *)0x0) goto LAB_1477fff42;
        LOCK();
        plVar5 = plVar8 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 != 0) goto LAB_1477fff42;
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
        uVar10 = 1;
        uVar9 = 1;
joined_r0x0001478001d9:
        if (iVar4 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          uVar9 = uVar10;
        }
        goto LAB_1477fff42;
      }
LAB_1478001e1:
      *(undefined1 *)(*param_2 + 0x30) = 1;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        plVar5 = plVar8 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar8)(plVar8);
          uVar10 = 0;
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
          uVar9 = 0;
          goto joined_r0x0001478001d9;
        }
      }
    }
  }
  uVar9 = 0;
LAB_1477fff42:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780024e FUN_14780024e body=335 status=ok
// SIG undefined FUN_14780024e(void)

undefined8 *
FUN_14780024e(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
             undefined8 param_5,undefined8 *param_6,undefined1 param_7,undefined4 param_8)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  *param_1 = &PTR_FUN_14a58a5a0;
  param_1[1] = 0;
  iVar3 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 2) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar3,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar3 * 2);
  }
  param_1[3] = param_3;
  if (param_3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*param_3 + 0x40))(param_3);
  }
  param_1[4] = 0;
  FUN_14485c47a(param_1 + 4,uVar6);
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = param_5;
  param_1[0x17] = *param_6;
  lVar4 = param_6[1];
  param_1[0x18] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x19) = param_7;
  *(undefined4 *)((longlong)param_1 + 0xcc) = param_8;
  if (param_1 + 5 != param_4 && param_4 != (undefined8 *)0x0) {
    FUN_147808fd6(param_1 + 5,param_4);
  }
  plVar5 = (longlong *)param_6[1];
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
  return param_1;
}



// FUNCTION 14780039e FUN_14780039e body=130 status=ok
// SIG undefined FUN_14780039e(void)

void FUN_14780039e(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x98))();
    if (plVar1 != (longlong *)0x0) {
      local_20 = *(undefined8 *)(param_1 + 0x3c8);
      local_18 = *(longlong *)(param_1 + 0x3d0);
      if (local_18 != 0) {
        LOCK();
        *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147800422 FUN_147800422 body=130 status=ok
// SIG undefined FUN_147800422(void)

void FUN_147800422(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x98))();
    if (plVar1 != (longlong *)0x0) {
      local_20 = *(undefined8 *)(param_1 + 0x3c8);
      local_18 = *(longlong *)(param_1 + 0x3d0);
      if (local_18 != 0) {
        LOCK();
        *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478004a6 FUN_1478004a6 body=130 status=ok
// SIG undefined FUN_1478004a6(void)

void FUN_1478004a6(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x98))();
    if (plVar1 != (longlong *)0x0) {
      local_20 = *(undefined8 *)(param_1 + 0x3c8);
      local_18 = *(longlong *)(param_1 + 0x3d0);
      if (local_18 != 0) {
        LOCK();
        *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar1 + 0x28))(plVar1,&local_20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780052a FUN_14780052a body=136 status=ok
// SIG undefined FUN_14780052a(void)

void FUN_14780052a(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x3b8) + 0x98))();
    if (plVar1 != (longlong *)0x0) {
      local_20 = *(undefined8 *)(param_1 + 0x3c8);
      local_18 = *(longlong *)(param_1 + 0x3d0);
      if (local_18 != 0) {
        LOCK();
        *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
        UNLOCK();
      }
      (**(code **)(*plVar1 + 0x30))(plVar1,&local_20,3);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478005b4 FUN_1478005b4 body=1719 status=ok
// SIG undefined FUN_1478005b4(void)

ulonglong FUN_1478005b4(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                       longlong param_5,longlong *param_6,longlong *param_7,char param_8,
                       undefined8 param_9)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  ulonglong uVar11;
  LPCRITICAL_SECTION p_Var12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  LPCRITICAL_SECTION local_80;
  longlong local_78;
  longlong *plStack_70;
  undefined8 *local_68;
  undefined8 *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_8 == '\0') {
    local_58 = *param_7;
    local_50 = (longlong *)param_7[1];
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
  }
  else {
    (**(code **)(*param_6 + 8))(param_6,&local_58,param_1 + 0x10);
  }
  if (local_58 == *(longlong *)(param_1 + 0x260)) {
    lVar13 = *param_2;
    lVar4 = param_2[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar10 = *(longlong **)(param_1 + 0x3d0);
    *(longlong *)(param_1 + 0x3c8) = lVar13;
    *(longlong *)(param_1 + 0x3d0) = lVar4;
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
  }
  else {
    FUN_1477fe54e(param_1);
    p_Var12 = (LPCRITICAL_SECTION)(param_1 + 0x1f0);
    EnterCriticalSection(p_Var12);
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    plVar10 = *(longlong **)(param_1 + 0x268);
    *(longlong *)(param_1 + 0x260) = local_58;
    *(longlong **)(param_1 + 0x268) = local_50;
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
    *(undefined8 *)(param_1 + 0x270) = param_9;
    lVar13 = *param_2;
    lVar4 = param_2[1];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar10 = *(longlong **)(param_1 + 0x3d0);
    *(longlong *)(param_1 + 0x3c8) = lVar13;
    *(longlong *)(param_1 + 0x3d0) = lVar4;
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
      lVar13 = *(longlong *)(param_1 + 0x3c8);
    }
    if (lVar13 == 0) {
      uVar7 = 0;
    }
    else {
      local_88 = *(longlong **)(param_1 + 0x260);
      local_80 = p_Var12;
      puVar9 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      plVar10 = *(longlong **)(param_1 + 0x3d0);
      if (plVar10 == (longlong *)0x0) {
        *puVar9 = &PTR_FUN_14a58a5d8;
        puVar9[2] = lVar13;
        puVar9[3] = 0;
      }
      else {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        *puVar9 = &PTR_FUN_14a58a5d8;
        puVar9[2] = lVar13;
        puVar9[3] = plVar10;
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
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
      local_68 = puVar9;
      local_60 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      local_60[1] = &DAT_100000001;
      *local_60 = &PTR_LAB_14a58a780;
      local_60[2] = puVar9;
      uVar7 = (**(code **)(*local_88 + 0xd0))(local_88,&local_68);
      p_Var12 = local_80;
    }
    *(undefined1 *)(param_1 + 0x278) = uVar7;
    LeaveCriticalSection(p_Var12);
  }
  if (*(longlong *)(param_1 + 0x260) == 0) {
    FUN_147800422(param_1);
    plVar10 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x3b8) + 0xb0))();
    plStack_70 = *(longlong **)(param_1 + 0x20);
    if (plStack_70 == (longlong *)0x0) {
LAB_147800b3a:
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      bVar14 = true;
    }
    else {
      iVar8 = (int)plStack_70[1];
      do {
        if (iVar8 == 0) goto LAB_147800b3a;
        LOCK();
        iVar5 = (int)plStack_70[1];
        bVar14 = iVar8 == iVar5;
        if (bVar14) {
          *(int *)(plStack_70 + 1) = iVar8 + 1;
          iVar5 = iVar8;
        }
        iVar8 = iVar5;
        UNLOCK();
      } while (!bVar14);
      local_78 = *(longlong *)(param_1 + 0x18) + 8;
      if (*(longlong *)(param_1 + 0x18) == 0) {
        local_78 = 0;
      }
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
      bVar14 = false;
    }
    plVar1 = plStack_70;
    (**(code **)(*plVar10 + 8))(plVar10,&local_78);
    plVar10 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_70 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if (!bVar14) {
      LOCK();
      plVar10 = plVar1 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    puVar9 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x3b8) + 0xb0))();
    plStack_70 = *(longlong **)(param_1 + 0x20);
    if (plStack_70 == (longlong *)0x0) {
LAB_1478006c6:
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      bVar14 = true;
    }
    else {
      iVar8 = (int)plStack_70[1];
      do {
        if (iVar8 == 0) goto LAB_1478006c6;
        LOCK();
        iVar5 = (int)plStack_70[1];
        bVar14 = iVar8 == iVar5;
        if (bVar14) {
          *(int *)(plStack_70 + 1) = iVar8 + 1;
          iVar5 = iVar8;
        }
        iVar8 = iVar5;
        UNLOCK();
      } while (!bVar14);
      local_78 = *(longlong *)(param_1 + 0x18) + 8;
      if (*(longlong *)(param_1 + 0x18) == 0) {
        local_78 = 0;
      }
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
      bVar14 = false;
    }
    plVar10 = plStack_70;
    (**(code **)*puVar9)(puVar9,&local_78);
    plVar1 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_70 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (!bVar14) {
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
    (**(code **)(**(longlong **)(param_1 + 0x260) + 0x80))
              (*(longlong **)(param_1 + 0x260),param_1 + 0x27c);
    FUN_144a787a6(param_1 + 0x218,param_3);
    if ((param_5 != 0) && (param_1 + 0x38 != param_5)) {
      FUN_147808fd6(param_1 + 0x38,param_5);
    }
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x260) + 0x50))
                      (*(longlong **)(param_1 + 0x260),param_3,param_4,param_5);
    if (cVar6 != '\0') {
      p_Var12 = (LPCRITICAL_SECTION)(param_1 + 0x2b0);
      EnterCriticalSection(p_Var12);
      *(undefined1 *)(param_1 + 0x1e0) = 0;
      *(undefined1 *)(param_1 + 0x1b0) = 0;
      *(undefined8 *)(param_1 + 0x1b8) = 0;
      *(undefined1 *)(param_1 + 0x1c0) = 0;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
      *(undefined8 *)(param_1 + 0x1d4) = 0;
      *(undefined1 *)(param_1 + 0x1d0) = 1;
      *(undefined1 *)(param_1 + 0x308) = 0;
      *(undefined8 *)(param_1 + 0x310) = 0x8000000000000000;
      *(undefined8 *)(param_1 + 0x318) = 0;
      *(undefined1 *)(param_1 + 800) = 0;
      *(undefined8 *)(param_1 + 0x328) = 0x8000000000000000;
      *(undefined8 *)(param_1 + 0x330) = 0;
      *(undefined8 *)(param_1 + 0x2f0) = 0x8000000000000000;
      *(undefined8 *)(param_1 + 0x300) = 0xbff0000000000000;
      *(undefined8 *)(param_1 + 0x348) = 0x8000000000000000;
      *(undefined8 *)(param_1 + 0x358) = 0x8000000000000000;
      *(undefined8 *)(param_1 + 0x338) = 0x8000000000000000;
      *(undefined8 *)(param_1 + 0x368) = 0x8000000000000000;
      *(undefined8 *)(param_1 + 0x378) = 0xbff0000000000000;
      *(undefined8 *)(param_1 + 0x3a0) = 0x8000000000000000;
      *(undefined4 *)(param_1 + 0x3b0) = 0;
      LeaveCriticalSection(p_Var12);
      *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
      *(undefined4 *)(param_1 + 200) = 0xffffffff;
      *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
      *(undefined8 *)(param_1 + 0xf0) = 0xffffffffffffffff;
      uVar11 = CONCAT71((int7)((ulonglong)p_Var12 >> 8),1);
      if (param_8 != '\0') {
        FUN_14780039e(param_1);
      }
      goto LAB_147800893;
    }
    FUN_147800422(param_1);
    *(undefined4 *)(param_1 + 0x220) = 0;
    if (*(int *)(param_1 + 0x224) != 0) {
      FUN_1446f8c06(param_1 + 0x218,0);
    }
    if (*(char *)(param_1 + 0xb8) == '\x01') {
      *(undefined4 *)(param_1 + 0xb0) = 0;
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        FUN_1400020a8();
      }
      FUN_145a369d8(param_1 + 0x68);
      *(undefined1 *)(param_1 + 0xb8) = 0;
    }
  }
  uVar11 = 0;
LAB_147800893:
  plVar10 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  plVar10 = (longlong *)param_2[1];
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
  plVar10 = (longlong *)param_7[1];
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
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 147800c6c FUN_147800c6c body=484 status=ok
// SIG undefined FUN_147800c6c(void)

undefined4 FUN_147800c6c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong local_60;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0x260);
  plVar3 = *(longlong **)(param_1 + 0x268);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (plVar2 == (longlong *)0x0) {
    uVar5 = 0;
    goto LAB_147800d65;
  }
  plVar7 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2);
  (**(code **)(*plVar7 + 8))(plVar7,&local_40);
  if ((local_40 == 0) || (local_40 == 0x7fffffffffffffff)) {
    local_48 = *param_2;
  }
  else {
    FUN_147800e52(param_1,local_68);
    plVar7 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2);
    cVar4 = (**(code **)(*plVar7 + 0x38))(plVar7);
    if (cVar4 == '\0') {
      local_48 = local_50;
      if (*param_2 < local_50) {
        local_48 = *param_2;
      }
      if (local_48 < local_60) {
        local_48 = local_60;
      }
    }
    else {
      local_48 = (*param_2 - local_60) % (local_50 - local_60) + local_60 +
                 (*param_2 - local_60 >> 0x3f & local_50 - local_60);
    }
  }
  plVar7 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2);
  uVar5 = (**(code **)(*plVar7 + 0x40))(plVar7,&local_48);
  if ((char)uVar5 == '\0') goto LAB_147800d65;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  cVar4 = (**(code **)(*plVar2 + 200))(plVar2,1);
  if (cVar4 == '\0') {
    cVar4 = (**(code **)(*plVar2 + 0xb0))(plVar2);
    if (cVar4 != '\0') {
      uVar6 = (**(code **)(*plVar2 + 200))(plVar2,4);
      uVar8 = 0;
      goto LAB_147800d36;
    }
  }
  else {
    uVar6 = 1;
    uVar8 = 1;
LAB_147800d36:
    FUN_14336a84c(param_1,uVar6,uVar8);
  }
  *(longlong *)(param_1 + 0x3a0) = local_48;
  *(ulonglong *)(param_1 + 0x3a8) = (ulonglong)*(uint *)(param_1 + 0x3b0) << 0x20;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
LAB_147800d65:
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
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 147800e52 FUN_147800e52 body=185 status=ok
// SIG undefined FUN_147800e52(void)

undefined1 * FUN_147800e52(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 1;
  *(undefined8 *)(param_2 + 8) = 0;
  param_2[0x10] = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  if (*(longlong *)(param_1 + 0x260) != 0) {
    cVar1 = FUN_1477feb54();
    if (cVar1 != '\0') {
      FUN_147801afa(param_1,param_2,1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
    (**(code **)(*plVar2 + 8))(plVar2,&local_20);
    lVar3 = 0x7fffffffffffffff;
    if (0 < local_20) {
      lVar3 = local_20;
    }
    param_2[0x10] = 1;
    *(longlong *)(param_2 + 0x18) = lVar3;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147800f0e FUN_147800f0e body=272 status=ok
// SIG undefined FUN_147800f0e(void)

void FUN_147800f0e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  int local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined1 local_30;
  undefined7 uStack_2f;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0x260) != (longlong *)0x0) {
    puVar3 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
    cVar2 = (**(code **)*puVar3)(puVar3,0);
    if (cVar2 != '\0') {
      piVar1 = (int *)(param_1 + 0x160);
      if (SBORROW8(0,*param_2)) {
        local_40 = (uint)local_40._1_3_ << 8;
        uStack_38 = 0;
        local_30 = 0;
        uStack_28 = 0;
        cVar2 = FUN_147801020(piVar1);
        if (cVar2 != '\0') {
          *(ulonglong *)(param_1 + 0x170) = CONCAT71(uStack_2f,local_30);
          *(undefined8 *)(param_1 + 0x178) = uStack_28;
          *piVar1 = local_40;
          *(undefined4 *)(param_1 + 0x164) = uStack_3c;
          *(undefined4 *)(param_1 + 0x168) = (undefined4)uStack_38;
          *(undefined4 *)(param_1 + 0x16c) = uStack_38._4_4_;
          *(undefined1 *)(param_1 + 0x1d0) = 1;
        }
        plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
        lVar6 = *plVar4;
        uVar5 = 0;
      }
      else {
        local_40 = CONCAT31(local_40._1_3_,2);
        uStack_38 = 0;
        local_30 = 2;
        uStack_28 = 0;
        cVar2 = FUN_147801020(piVar1);
        if (cVar2 != '\0') {
          *(ulonglong *)(param_1 + 0x170) = CONCAT71(uStack_2f,local_30);
          *(undefined8 *)(param_1 + 0x178) = uStack_28;
          *piVar1 = local_40;
          *(undefined4 *)(param_1 + 0x164) = uStack_3c;
          *(undefined4 *)(param_1 + 0x168) = (undefined4)uStack_38;
          *(undefined4 *)(param_1 + 0x16c) = uStack_38._4_4_;
          *(undefined1 *)(param_1 + 0x1d0) = 1;
        }
        plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
        lVar6 = *plVar4;
        uVar5 = 1;
      }
      (**(code **)(lVar6 + 0x58))(plVar4,uVar5);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147801020 FUN_147801020 body=158 status=ok
// SIG undefined FUN_147801020(void)

bool FUN_147801020(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *param_1;
  if (cVar1 == '\x02') {
    if (*param_2 != '\x02') {
      return true;
    }
    cVar2 = param_1[0x10];
  }
  else {
    cVar2 = param_1[0x10];
    if (((cVar2 != '\x02') &&
        (((*(longlong *)(param_1 + 0x18) < *(longlong *)(param_1 + 8) ||
          ((*(longlong *)(param_1 + 8) == *(longlong *)(param_1 + 0x18) &&
           (cVar1 == '\0' || cVar2 == '\0')))) && (*param_2 != '\x02')))) &&
       (param_2[0x10] != '\x02')) {
      if (*(longlong *)(param_2 + 0x18) < *(longlong *)(param_2 + 8)) {
        return false;
      }
      if ((*(longlong *)(param_2 + 8) == *(longlong *)(param_2 + 0x18)) &&
         (param_2[0x10] == '\0' || *param_2 == '\0')) {
        return false;
      }
    }
    if (cVar1 != *param_2) {
      return true;
    }
    if (*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) {
      return true;
    }
  }
  if (cVar2 != param_2[0x10]) {
    return true;
  }
  if (cVar2 == '\x02') {
    return false;
  }
  return *(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18);
}



// FUNCTION 1478010be FUN_1478010be body=174 status=ok
// SIG undefined FUN_1478010be(void)

uint FUN_1478010be(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  plVar2 = *(longlong **)(*param_1 + 0x260);
  plVar3 = *(longlong **)(*param_1 + 0x268);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((char)param_1[0xf] == '\0') {
    uVar4 = FUN_14780116c(param_1 + 5);
    uVar4 = uVar4 ^ 1;
  }
  else if ((((char)param_1[1] == '\x02') || ((char)param_1[3] == '\x02')) ||
          ((param_1[2] <= param_1[4] &&
           ((param_1[2] != param_1[4] || ((char)param_1[3] != '\0' && (char)param_1[1] != '\0'))))))
  {
    puVar5 = (undefined8 *)(**(code **)(*plVar2 + 0x10))();
    uVar4 = (**(code **)*puVar5)(puVar5,0);
  }
  else {
    uVar4 = 0;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar4;
}



// FUNCTION 14780116c FUN_14780116c body=67 status=ok
// SIG undefined FUN_14780116c(void)

bool FUN_14780116c(char *param_1)

{
  if ((*param_1 != '\x02') && (param_1[0x18] != '\x02')) {
    if (*(longlong *)(param_1 + 0x28) < *(longlong *)(param_1 + 0x10)) {
      return true;
    }
    if (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_1 + 0x28)) {
      if (*(longlong *)(param_1 + 0x20) < *(longlong *)(param_1 + 8)) {
        return true;
      }
      if (*(longlong *)(param_1 + 8) == *(longlong *)(param_1 + 0x20)) {
        return param_1[0x18] == '\0' || *param_1 == '\0';
      }
    }
  }
  return false;
}



// FUNCTION 1478011b0 FUN_1478011b0 body=1225 status=ok
// SIG undefined FUN_1478011b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1478011b0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar9 = *(longlong **)(*param_1 + 0x260);
  plVar2 = *(longlong **)(*param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if ((char)param_1[0xf] == '\0') {
    plVar8 = param_1 + 5;
    goto LAB_1478012c9;
  }
  if ((((char)param_1[1] == '\x02') || ((char)param_1[3] == '\x02')) ||
     ((param_1[2] <= param_1[4] &&
      ((param_1[2] != param_1[4] || ((char)param_1[3] != '\0' && (char)param_1[1] != '\0')))))) {
    puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9);
    cVar4 = (**(code **)*puVar7)(puVar7,0);
    if (cVar4 == '\0') goto LAB_147801324;
    plVar8 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9);
    iVar5 = (**(code **)(*plVar8 + 0x18))(plVar8);
    if (iVar5 - 4U < 0xfffffffe) {
      plVar8 = (longlong *)&DAT_14cabc0b0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cabc0e0) && (FUN_144b3d300(&DAT_14cabc0e0), DAT_14cabc0e0 == -1))
      {
        DAT_14cabc0b0 = 0;
        _DAT_14cabc0b8 = 0x8000000000000000;
        _DAT_14cabc0c0 = 0;
        DAT_14cabc0c8 = 0;
        _DAT_14cabc0d0 = 0x8000000000000000;
        _DAT_14cabc0d8 = 0;
        _Init_thread_footer(&DAT_14cabc0e0);
      }
      goto LAB_1478012c9;
    }
    plVar8 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9);
    (**(code **)(*plVar8 + 8))(plVar8,&local_50);
    lVar15 = param_1[2];
    lVar14 = param_1[4];
    plVar8 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9);
    cVar4 = (**(code **)(*plVar8 + 0x38))(plVar8);
    if (cVar4 == '\0') {
      if (((char)param_1[0xb] == '\x02') || ((char)param_1[0xd] == '\x02')) {
LAB_147801401:
        dVar3 = ((double)param_1[0xc] / 10000000.0) / ((double)(longlong)local_50 / 10000000.0);
        iVar5 = (int)((ulonglong)(longlong)ROUND(dVar3 + dVar3 + -0.5) >> 1);
      }
      else {
        iVar5 = 0;
        if ((param_1[0xc] <= param_1[0xe]) &&
           ((param_1[0xc] != param_1[0xe] ||
            ((char)param_1[0xd] != '\0' && (char)param_1[0xb] != '\0')))) goto LAB_147801401;
      }
      lVar10 = ((ulonglong)*(uint *)((longlong)param_1 + 0x7c) << 0x20) +
               (longlong)(int)param_1[0x10] + (longlong)iVar5;
      lVar11 = lVar10;
LAB_147801450:
      plVar8 = param_1 + 5;
      *(undefined1 *)(param_1 + 5) = 1;
      param_1[6] = lVar15;
      param_1[7] = lVar10;
      *(undefined1 *)(param_1 + 8) = 0;
      param_1[9] = lVar14;
      param_1[10] = lVar11;
      plVar9 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9);
      uVar6 = FUN_14780116c(plVar8);
      (**(code **)(*plVar9 + 0x58))(plVar9,uVar6 ^ 1);
      param_1[0xd] = param_1[3];
      param_1[0xe] = param_1[4];
      *(int *)(param_1 + 0xb) = (int)param_1[1];
      *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)((longlong)param_1 + 0xc);
      *(int *)(param_1 + 0xc) = (int)param_1[2];
      *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_1 + 0x14);
      *(undefined1 *)(param_1 + 0xf) = 0;
      goto LAB_1478012c9;
    }
    if ((local_50 != 0x7fffffffffffffff) && (local_50 != 0)) {
      fVar16 = *(float *)(*param_1 + 0x22c);
      if ((fVar16 == 0.0) && (!NAN(fVar16))) {
        fVar16 = *(float *)(*param_1 + 0x228);
      }
      lVar11 = param_1[2];
      dVar3 = (double)(longlong)local_50 / 10000000.0;
      dVar17 = ((double)lVar11 / 10000000.0) / dVar3;
      dVar18 = ((double)param_1[4] / 10000000.0) / dVar3;
      uVar6 = (uint)((ulonglong)(longlong)ROUND(dVar17 + dVar17 + -0.5) >> 1);
      uVar12 = (uint)((ulonglong)(longlong)ROUND(dVar18 + dVar18 + -0.5) >> 1);
      if ((((char)param_1[0xb] == '\x02') || ((char)param_1[0xd] == '\x02')) ||
         ((param_1[0xc] <= param_1[0xe] &&
          ((param_1[0xc] != param_1[0xe] ||
           ((char)param_1[0xd] != '\0' && (char)param_1[0xb] != '\0')))))) {
        lVar10 = param_1[0xc];
        if (0.0 <= fVar16) {
          if (lVar11 < lVar10) {
            dVar3 = ((double)lVar10 / 10000000.0) / dVar3;
            iVar5 = ((int)((ulonglong)(longlong)ROUND(dVar3 + dVar3 + -0.5) >> 1) - uVar6) + 1;
            goto LAB_14780160c;
          }
        }
        else if (lVar10 < lVar11) {
          dVar3 = ((double)lVar10 / 10000000.0) / dVar3;
          iVar5 = ~uVar6 + (int)((ulonglong)(longlong)ROUND(dVar3 + dVar3 + -0.5) >> 1);
          goto LAB_14780160c;
        }
      }
      else {
        uVar13 = uVar6;
        if (fVar16 < 0.0) {
          uVar13 = uVar12;
        }
        iVar5 = -uVar13;
LAB_14780160c:
        *(int *)(param_1 + 0x10) = iVar5;
      }
      lVar15 = (lVar15 >> 0x3f & local_50) + lVar15 % (longlong)local_50;
      lVar14 = (lVar14 >> 0x3f & local_50) + lVar14 % (longlong)local_50;
      lVar11 = (ulonglong)*(uint *)((longlong)param_1 + 0x7c) << 0x20;
      lVar10 = (int)(uVar6 + (int)param_1[0x10]) + lVar11;
      lVar11 = (int)(uVar12 + (int)param_1[0x10]) + lVar11;
      goto LAB_147801450;
    }
  }
  else {
LAB_147801324:
    *(undefined1 *)(param_1 + 0xb) = 0;
    param_1[0xc] = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    param_1[0xe] = 0;
  }
  plVar8 = param_1 + 5;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = -0x8000000000000000;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = -0x8000000000000000;
  param_1[10] = 0;
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9);
  (**(code **)(*plVar9 + 0x58))(plVar9,0);
LAB_1478012c9:
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar2 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar8;
}



// FUNCTION 14780167a FUN_14780167a body=22 status=ok
// SIG undefined FUN_14780167a(void)

void FUN_14780167a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1e8);
  *(undefined8 *)(lVar1 + 0x140) = param_2;
  *(undefined8 *)(lVar1 + 0x148) = param_3;
  return;
}



// FUNCTION 147801690 FUN_147801690 body=598 status=ok
// SIG undefined FUN_147801690(void)

ulonglong FUN_147801690(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  longlong *plVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_98 [40];
  longlong local_70;
  int local_68;
  float local_60;
  undefined4 uStack_5c;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  if (*(longlong **)(param_1 + 0x260) != (longlong *)0x0) {
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((param_2 != 0.0) || (NAN(param_2))) {
      plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
      (**(code **)(*plVar6 + 0x28))(plVar6,&local_60,0);
      if (0 < local_58) {
        lVar9 = 0;
        lVar10 = 0;
        do {
          cVar4 = FUN_1461b7448(CONCAT44(uStack_5c,local_60) + lVar9,param_2);
          if (cVar4 != '\0') {
            bVar5 = 0;
            goto LAB_1478017a5;
          }
          lVar10 = lVar10 + 1;
          lVar9 = lVar9 + 0x10;
        } while (lVar10 < local_58);
      }
      plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
      (**(code **)(*plVar6 + 0x28))(plVar6,&local_70,1);
      if (local_68 < 1) {
        bVar5 = 1;
      }
      else {
        iVar8 = 0;
        lVar9 = 0;
        do {
          bVar5 = FUN_1461b7448(local_70 + lVar9,param_2);
          if (bVar5 != 0) break;
          lVar9 = lVar9 + 0x10;
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_68);
        bVar5 = bVar5 ^ 1;
      }
      if (local_70 != 0) {
        FUN_1400020a8();
      }
LAB_1478017a5:
      if (CONCAT44(uStack_5c,local_60) != 0) {
        FUN_1400020a8();
      }
      if (bVar5 != 0) {
        param_2 = 0.0;
        uVar7 = 0;
      }
    }
    plVar6 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
    cVar4 = (**(code **)(*plVar6 + 0x50))(plVar6,param_2);
    if (cVar4 != '\0') {
      if ((*(float *)(param_1 + 0x22c) != param_2) ||
         (NAN(*(float *)(param_1 + 0x22c)) || NAN(param_2))) {
        local_60 = param_2;
        FUN_145e1b092(param_1,7);
        if (0.0 <= *(float *)(param_1 + 0x228) * param_2) {
          if (((param_2 == 0.0) && (!NAN(param_2))) &&
             (plVar6 = *(longlong **)(param_1 + 0x100), plVar6 != (longlong *)0x0)) {
            iVar8 = (int)plVar6[1];
            do {
              if (iVar8 == 0) goto LAB_147801822;
              LOCK();
              iVar3 = (int)plVar6[1];
              bVar11 = iVar8 == iVar3;
              if (bVar11) {
                *(int *)(plVar6 + 1) = iVar8 + 1;
                iVar3 = iVar8;
              }
              iVar8 = iVar3;
              UNLOCK();
            } while (!bVar11);
            if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
              (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x38))();
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
        }
        else {
          FUN_14336a84c(param_1,0,0);
        }
LAB_147801822:
        if ((param_2 != 0.0) || (NAN(param_2))) {
          *(float *)(param_1 + 0x228) = param_2;
        }
        *(float *)(param_1 + 0x22c) = param_2;
      }
      goto LAB_147801840;
    }
  }
  uVar7 = 0;
LAB_147801840:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1478018e8 FUN_1478018e8 body=28 status=ok
// SIG undefined FUN_1478018e8(void)

undefined8 FUN_1478018e8(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x260) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478018fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x260) + 0x88))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 147801904 FUN_147801904 body=71 status=ok
// SIG undefined FUN_147801904(void)

undefined8 FUN_147801904(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_1 + 0x260) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x00014780193e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 14780194c FUN_14780194c body=83 status=ok
// SIG undefined FUN_14780194c(void)

undefined8 FUN_14780194c(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_1 + 0x260) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x38))();
                    /* WARNING: Could not recover jumptable at 0x00014780198e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x58))(plVar1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1478019a0 FUN_1478019a0 body=97 status=ok
// SIG undefined FUN_1478019a0(void)

undefined8 FUN_1478019a0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_1 + 0x260) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x0001478019ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3,param_4);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147801a02 FUN_147801a02 body=64 status=ok
// SIG undefined FUN_147801a02(void)

undefined8 FUN_147801a02(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (*(longlong **)(param_1 + 0x260) != (longlong *)0x0) {
    plVar1 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x48))();
                    /* WARNING: Could not recover jumptable at 0x000147801a36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3,*(code **)(*plVar1 + 0x18));
    return uVar2;
  }
  return 0;
}



// FUNCTION 147801a42 FUN_147801a42 body=182 status=ok
// SIG undefined FUN_147801a42(void)

undefined4 FUN_147801a42(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0x260) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
    (**(code **)(*plVar2 + 0x28))(plVar2,&local_40,param_3);
    if (local_38 < 1) {
      uVar1 = 0;
    }
    else {
      lVar4 = 0;
      lVar3 = 0;
      do {
        uVar1 = FUN_1461b7448(local_40 + lVar4,param_2);
        if ((char)uVar1 != '\0') break;
        lVar3 = lVar3 + 1;
        lVar4 = lVar4 + 0x10;
      } while (lVar3 < local_38);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 147801afa FUN_147801afa body=130 status=ok
// SIG undefined FUN_147801afa(void)

undefined1 * FUN_147801afa(longlong param_1,undefined1 *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar3 == (longlong *)0x0) {
    *param_2 = 2;
    *(undefined8 *)(param_2 + 8) = 0;
    param_2[0x10] = 2;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))();
    (**(code **)(*plVar3 + 0x60))(plVar3,param_2,param_3);
  }
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
  return param_2;
}



// FUNCTION 147801b7c FUN_147801b7c body=108 status=ok
// SIG undefined FUN_147801b7c(void)

undefined4 FUN_147801b7c(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
    uVar3 = (**(code **)(*plVar4 + 0x68))(plVar4,param_2);
  }
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
  return uVar3;
}



// FUNCTION 147801be8 FUN_147801be8 body=144 status=ok
// SIG undefined FUN_147801be8(void)

void FUN_147801be8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b0));
  *(undefined8 *)(param_1 + 0x2d8) = param_2;
  *(undefined8 *)(param_1 + 0x2e0) = 0;
  QueryPerformanceCounter(&local_28);
  *(double *)(param_1 + 0x2e8) = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b0));
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147801c7a FUN_147801c7a body=435 status=ok
// SIG undefined FUN_147801c7a(void)

bool FUN_147801c7a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  char *pcVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar7 = (char *)FUN_1478011b0(param_1 + 0x158);
  lVar1 = *(longlong *)(pcVar7 + 8);
  lVar2 = *(longlong *)(pcVar7 + 0x20);
  if (pcVar7[0x18] == '\x02' || *pcVar7 == '\x02') goto LAB_147801cc3;
  lVar3 = *(longlong *)(pcVar7 + 0x10);
  lVar4 = *(longlong *)(pcVar7 + 0x28);
  if (lVar3 <= lVar4) {
    if (lVar2 < lVar1 || lVar3 != lVar4) {
      if (lVar3 != lVar4 || lVar1 <= lVar2) {
LAB_147801cc3:
        puVar8 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
        bVar10 = false;
        cVar5 = (**(code **)*puVar8)(puVar8,0);
        if (cVar5 == '\0') goto LAB_147801d50;
        if ((*(char *)(param_1 + 0x1e0) == '\0') && (*(char *)(param_1 + 0x230) == '\0')) {
          cVar5 = (**(code **)(**(longlong **)(param_1 + 0x260) + 200))
                            (*(longlong **)(param_1 + 0x260),1);
          cVar6 = FUN_1477ffdb2(param_1);
          if (cVar5 != '\0') {
            if (cVar6 == '\0') {
              plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
              cVar5 = (**(code **)(*plVar9 + 0x38))(plVar9);
              if (cVar5 == '\0') {
                if (-1 < lVar2) {
                  plVar9 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
                  (**(code **)(*plVar9 + 8))(plVar9,&local_38);
                  if (lVar1 < local_38) goto LAB_147801d3c;
                }
                goto LAB_147801d4e;
              }
            }
LAB_147801d3c:
            bVar10 = true;
            goto LAB_147801d50;
          }
          bVar10 = true;
          if (cVar6 != '\0') goto LAB_147801d50;
          cVar5 = FUN_1477ffd48(param_1);
          if (((cVar5 != '\0') &&
              (0.0 < *(float *)(param_1 + 0x22c) || *(float *)(param_1 + 0x22c) == 0.0)) &&
             (*(int *)(param_1 + 0x150) != 0)) {
            bVar10 = *(longlong *)(param_1 + 600) <= lVar2;
            goto LAB_147801d50;
          }
        }
      }
    }
    else if ((lVar1 != lVar2) || (pcVar7[0x18] != '\0' && *pcVar7 != '\0')) goto LAB_147801cc3;
  }
LAB_147801d4e:
  bVar10 = false;
LAB_147801d50:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar10;
}



// FUNCTION 147801e2e FUN_147801e2e body=259 status=ok
// SIG undefined FUN_147801e2e(void)

void FUN_147801e2e(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < (longlong)(int)param_1[1]) {
    uVar7 = (longlong)(int)param_1[1];
    do {
      uVar8 = uVar7 - 1;
      lVar2 = *param_1;
      plVar9 = *(longlong **)(lVar2 + 8 + uVar8 * 0x10);
      bVar4 = true;
      if (plVar9 == (longlong *)0x0) {
LAB_147801e82:
        plVar9 = (longlong *)0x0;
LAB_147801e85:
        FUN_1478080f2(param_1,uVar8 & 0xffffffff);
        FUN_147808152(param_1);
        if (!bVar4) goto LAB_147801e9c;
      }
      else {
        iVar6 = (int)plVar9[1];
        do {
          if (iVar6 == 0) goto LAB_147801e82;
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar10 = iVar6 == iVar5;
          if (bVar10) {
            *(int *)(plVar9 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar10);
        plVar3 = *(longlong **)(lVar2 + uVar8 * 0x10);
        if (plVar3 == (longlong *)0x0) {
          bVar4 = false;
          goto LAB_147801e85;
        }
        (**(code **)(*plVar3 + 0x18))(plVar3);
        local_50 = param_2;
        FUN_147808db2(plVar3 + 1,4,&local_50);
LAB_147801e9c:
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
      bVar4 = 1 < (longlong)uVar7;
      uVar7 = uVar8;
    } while (bVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147801f32 FUN_147801f32 body=259 status=ok
// SIG undefined FUN_147801f32(void)

void FUN_147801f32(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < (longlong)(int)param_1[1]) {
    uVar7 = (longlong)(int)param_1[1];
    do {
      uVar8 = uVar7 - 1;
      lVar2 = *param_1;
      plVar9 = *(longlong **)(lVar2 + 8 + uVar8 * 0x10);
      bVar4 = true;
      if (plVar9 == (longlong *)0x0) {
LAB_147801f86:
        plVar9 = (longlong *)0x0;
LAB_147801f89:
        FUN_14780950c(param_1,uVar8 & 0xffffffff);
        FUN_14780956c(param_1);
        if (!bVar4) goto LAB_147801fa0;
      }
      else {
        iVar6 = (int)plVar9[1];
        do {
          if (iVar6 == 0) goto LAB_147801f86;
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar10 = iVar6 == iVar5;
          if (bVar10) {
            *(int *)(plVar9 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar10);
        plVar3 = *(longlong **)(lVar2 + uVar8 * 0x10);
        if (plVar3 == (longlong *)0x0) {
          bVar4 = false;
          goto LAB_147801f89;
        }
        (**(code **)(*plVar3 + 0x18))(plVar3);
        local_50 = param_2;
        FUN_147808db2(plVar3 + 1,4,&local_50);
LAB_147801fa0:
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
      bVar4 = 1 < (longlong)uVar7;
      uVar7 = uVar8;
    } while (bVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147802036 FUN_147802036 body=259 status=ok
// SIG undefined FUN_147802036(void)

void FUN_147802036(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < (longlong)(int)param_1[1]) {
    uVar7 = (longlong)(int)param_1[1];
    do {
      uVar8 = uVar7 - 1;
      lVar2 = *param_1;
      plVar9 = *(longlong **)(lVar2 + 8 + uVar8 * 0x10);
      bVar4 = true;
      if (plVar9 == (longlong *)0x0) {
LAB_14780208a:
        plVar9 = (longlong *)0x0;
LAB_14780208d:
        FUN_147809608(param_1,uVar8 & 0xffffffff);
        FUN_147809668(param_1);
        if (!bVar4) goto LAB_1478020a4;
      }
      else {
        iVar6 = (int)plVar9[1];
        do {
          if (iVar6 == 0) goto LAB_14780208a;
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar10 = iVar6 == iVar5;
          if (bVar10) {
            *(int *)(plVar9 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar10);
        plVar3 = *(longlong **)(lVar2 + uVar8 * 0x10);
        if (plVar3 == (longlong *)0x0) {
          bVar4 = false;
          goto LAB_14780208d;
        }
        (**(code **)(*plVar3 + 0x18))(plVar3);
        local_50 = param_2;
        FUN_147808db2(plVar3 + 1,4,&local_50);
LAB_1478020a4:
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
      bVar4 = 1 < (longlong)uVar7;
      uVar7 = uVar8;
    } while (bVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14780213a FUN_14780213a body=259 status=ok
// SIG undefined FUN_14780213a(void)

void FUN_14780213a(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < (longlong)(int)param_1[1]) {
    uVar7 = (longlong)(int)param_1[1];
    do {
      uVar8 = uVar7 - 1;
      lVar2 = *param_1;
      plVar9 = *(longlong **)(lVar2 + 8 + uVar8 * 0x10);
      bVar4 = true;
      if (plVar9 == (longlong *)0x0) {
LAB_14780218e:
        plVar9 = (longlong *)0x0;
LAB_147802191:
        FUN_147809704(param_1,uVar8 & 0xffffffff);
        FUN_147809764(param_1);
        if (!bVar4) goto LAB_1478021a8;
      }
      else {
        iVar6 = (int)plVar9[1];
        do {
          if (iVar6 == 0) goto LAB_14780218e;
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar10 = iVar6 == iVar5;
          if (bVar10) {
            *(int *)(plVar9 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar10);
        plVar3 = *(longlong **)(lVar2 + uVar8 * 0x10);
        if (plVar3 == (longlong *)0x0) {
          bVar4 = false;
          goto LAB_147802191;
        }
        (**(code **)(*plVar3 + 0x18))(plVar3);
        local_50 = param_2;
        FUN_147808db2(plVar3 + 1,4,&local_50);
LAB_1478021a8:
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
      bVar4 = 1 < (longlong)uVar7;
      uVar7 = uVar8;
    } while (bVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14780223e FUN_14780223e body=329 status=ok
// SIG undefined FUN_14780223e(void)

void FUN_14780223e(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  
  plVar5 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if ((plVar5 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar5 + 200))(plVar5,6), cVar3 == '\0')
     ) {
    uVar4 = 0xffffffff;
    uVar6 = 0;
    if (*(char *)(param_1 + 0xb8) == '\x01') {
      uVar7 = 0xffffffff;
      uVar8 = 0xffffffff;
      uVar9 = 0;
      if (*(char *)(param_1 + 0x54) == '\x01') goto LAB_14780230b;
    }
    else {
      uVar7 = 0xffffffff;
      uVar8 = 0xffffffff;
      uVar9 = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xd4) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xc0) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xc4) = 0xffffffff;
    *(undefined4 *)(param_1 + 200) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xcc) = 0xffffffff;
    *(undefined8 *)(param_1 + 0xf0) = 0xffffffffffffffff;
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x38))(plVar5);
    uVar10 = 0;
    do {
      uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5,uVar10 & 0xffffffff);
      *(undefined4 *)(param_1 + 0xc0 + uVar10 * 4) = uVar4;
      uVar10 = uVar10 + 1;
    } while (uVar10 != 7);
    if ((*(char *)(param_1 + 0xb8) == '\0') || (*(char *)(param_1 + 0x54) != '\x01'))
    goto LAB_14780234c;
LAB_14780230b:
    uVar9 = *(undefined4 *)(param_1 + 0x38);
    uVar8 = *(undefined4 *)(param_1 + 0x3c);
    uVar7 = *(undefined4 *)(param_1 + 0x40);
    uVar4 = *(undefined4 *)(param_1 + 0x48);
    uVar6 = *(undefined4 *)(param_1 + 0x50);
  }
  *(undefined4 *)(param_1 + 0xc0) = uVar9;
  *(undefined4 *)(param_1 + 0xc4) = uVar8;
  *(undefined4 *)(param_1 + 200) = uVar7;
  *(undefined4 *)(param_1 + 0xd0) = uVar4;
  *(undefined4 *)(param_1 + 0xd8) = uVar6;
LAB_14780234c:
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
                    /* WARNING: Could not recover jumptable at 0x000147802376. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147802388 FUN_147802388 body=128 status=ok
// SIG undefined FUN_147802388(void)

undefined8 FUN_147802388(longlong param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x260);
  plVar2 = *(longlong **)(param_1 + 0x268);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  if (plVar4 != (longlong *)0x0) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x38))();
    iVar3 = (**(code **)(*plVar4 + 8))(plVar4,param_2);
    if ((int)param_3 < iVar3) {
      *(int *)(param_1 + 0xc0 + (longlong)param_2 * 4) = (int)param_3;
      uVar5 = CONCAT71((uint7)((ulonglong)param_3 >> 8) & 0xffffff,1);
      goto LAB_1478023db;
    }
  }
  uVar5 = 0;
LAB_1478023db:
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
  return uVar5;
}



// FUNCTION 147802408 FUN_147802408 body=309 status=ok
// SIG undefined FUN_147802408(void)

void FUN_147802408(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  
  plVar5 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x38))();
  lVar1 = param_1 + 0xdc;
  bVar8 = false;
  uVar6 = 0;
LAB_14780243c:
  do {
    iVar7 = *(int *)(param_1 + 0xc0 + uVar6 * 4);
    iVar2 = *(int *)(lVar1 + uVar6 * 4);
    if (iVar2 == iVar7) goto LAB_147802449;
    if (iVar7 == -1) goto LAB_147802493;
    switch(uVar6 & 0xffffffff) {
    case 0:
      if (((*(longlong *)(param_1 + 0xf8) == 0) || (*(longlong *)(param_1 + 0x100) == 0)) ||
         (*(int *)(*(longlong *)(param_1 + 0x100) + 8) < 1)) goto LAB_147802493;
      break;
    case 1:
      iVar3 = *(int *)(param_1 + 0x120);
      goto joined_r0x000147802491;
    case 2:
      iVar3 = *(int *)(param_1 + 0x130);
joined_r0x000147802491:
      if (iVar3 == 0) {
LAB_147802493:
        iVar7 = -1;
      }
      break;
    case 4:
      iVar3 = *(int *)(param_1 + 0x140);
      goto joined_r0x0001478024d6;
    case 6:
      iVar3 = *(int *)(param_1 + 0x150);
joined_r0x0001478024d6:
      if (iVar3 != 0) break;
      goto LAB_147802493;
    }
    if (iVar2 != iVar7) {
      cVar4 = (**(code **)(*plVar5 + 0x48))(plVar5,uVar6 & 0xffffffff,iVar7);
      if (cVar4 != '\0') {
        *(int *)(lVar1 + uVar6 * 4) = iVar7;
        bVar8 = true;
        bVar9 = uVar6 == 6;
        uVar6 = uVar6 + 1;
        if (bVar9) goto LAB_1478024fa;
        goto LAB_14780243c;
      }
      *(undefined4 *)(param_1 + 0xc0 + uVar6 * 4) = *(undefined4 *)(lVar1 + uVar6 * 4);
    }
LAB_147802449:
    uVar6 = uVar6 + 1;
    if (uVar6 == 7) {
      if (!bVar8) {
        return;
      }
LAB_1478024fa:
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x260) + 200))
                        (*(longlong **)(param_1 + 0x260),5);
      if (cVar4 != '\0') {
        return;
      }
      FUN_14336a84c(param_1,0,0);
      return;
    }
  } while( true );
}



// FUNCTION 14780253e FUN_14780253e body=502 status=ok
// SIG undefined FUN_14780253e(void)

void FUN_14780253e(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong lStack_38;
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  FUN_147803586(param_1,0);
  if (((!SBORROW8(0,*(longlong *)(param_1 + 0x3a0))) || (*(char *)(param_1 + 0x230) != '\0')) ||
     (cVar1 = FUN_1478010be(param_1 + 0x158), cVar1 != '\0')) goto LAB_147802587;
  if (*(longlong *)(param_1 + 0x368) == -0x8000000000000000) {
    local_40 = -0x8000000000000000;
    lStack_38 = 0;
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x28))();
    cVar1 = (**(code **)(*plVar2 + 0x68))(plVar2,&local_40);
    if (cVar1 == '\0') goto LAB_147802587;
  }
  else {
    if (*(float *)(param_1 + 0x22c) <= 0.0) goto LAB_147802587;
    local_40 = -0x8000000000000000;
    lStack_38 = 0;
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x28))();
    cVar1 = (**(code **)(*plVar2 + 0x68))(plVar2,&local_40);
    if ((cVar1 == '\0') || (lStack_38 != *(longlong *)(param_1 + 0x370))) goto LAB_147802587;
    fVar7 = *(float *)(param_1 + 0x22c);
    lVar3 = local_40 - *(longlong *)(param_1 + 0x368);
    if ((fVar7 == 0.0) && (!NAN(fVar7))) {
      fVar7 = *(float *)(param_1 + 0x228);
    }
    lVar4 = -lVar3;
    if (0.0 <= fVar7) {
      lVar4 = lVar3;
    }
    cVar1 = FUN_14780116c(param_1 + 0x308);
    if (cVar1 == '\0') {
      if (*(longlong *)(param_1 + 0x318) != *(longlong *)(param_1 + 0x330)) goto LAB_14780260d;
      dVar5 = (double)(*(longlong *)(param_1 + 0x328) - *(longlong *)(param_1 + 0x310));
      dVar5 = dVar5 + dVar5;
    }
    else {
      auVar6 = roundpd(ZEXT816(0x412e848100000000),ZEXT816(0x412e848100000000),1);
      dVar5 = auVar6._0_8_;
    }
    if (lVar4 < (longlong)dVar5) goto LAB_147802587;
  }
LAB_14780260d:
  QueryPerformanceCounter(&local_30);
  dVar5 = (double)local_30.QuadPart * DAT_14c83f420;
  *(longlong *)(param_1 + 0x368) = local_40;
  *(longlong *)(param_1 + 0x370) = lStack_38;
  *(double *)(param_1 + 0x378) = dVar5 + 16777216.0;
LAB_147802587:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147802736 FUN_147802736 body=1318 status=ok
// SIG undefined FUN_147802736(void)

uint FUN_147802736(longlong param_1,undefined8 *param_2,float param_3,longlong param_4,char param_5)

{
  int *piVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  bool bVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  double local_80;
  longlong local_78;
  LARGE_INTEGER local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar17 = *(longlong **)(param_1 + 0x100);
  bVar3 = true;
  if (plVar17 == (longlong *)0x0) {
LAB_147802853:
    plVar17 = (longlong *)0x0;
LAB_147802855:
    cVar11 = FUN_1478010be(param_1 + 0x158);
    if (cVar11 == '\0') {
      if (!SBORROW8(0,*(longlong *)(param_1 + 0x368))) {
        if (((param_3 == 0.0) && (!NAN(param_3))) &&
           (cVar11 = FUN_14780116c(param_1 + 0x308), cVar11 != '\0')) {
          uVar13 = -(uint)(*(float *)(param_1 + 0x228) == 0.0);
          param_3 = (float)(~uVar13 & (uint)*(float *)(param_1 + 0x228) | uVar13 & 0x3f800000);
        }
        lVar19 = *(longlong *)(param_1 + 0x368);
        uVar2 = *(undefined8 *)(param_1 + 0x370);
        *(undefined1 *)param_2 = 1;
        param_2[1] = lVar19;
        param_2[2] = uVar2;
        *(undefined1 *)(param_2 + 3) = 0;
        param_2[4] = (longlong)((float)param_4 * ABS(param_3)) + lVar19;
        param_2[5] = uVar2;
        goto LAB_147802965;
      }
LAB_14780287b:
      uVar13 = 0;
    }
    else {
      puVar15 = (undefined8 *)FUN_1478011b0(param_1 + 0x158);
      uVar2 = puVar15[1];
      uVar4 = *(undefined4 *)(puVar15 + 2);
      uVar5 = *(undefined4 *)((longlong)puVar15 + 0x14);
      uVar6 = *(undefined4 *)(puVar15 + 3);
      uVar7 = *(undefined4 *)((longlong)puVar15 + 0x1c);
      uVar8 = puVar15[4];
      uVar9 = puVar15[5];
      *param_2 = *puVar15;
      param_2[1] = uVar2;
      *(undefined4 *)(param_2 + 2) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar5;
      *(undefined4 *)(param_2 + 3) = uVar6;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uVar7;
      param_2[4] = uVar8;
      param_2[5] = uVar9;
LAB_147802965:
      cVar11 = FUN_14780116c(param_2);
      if (cVar11 != '\0') goto LAB_14780287b;
      plVar14 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
      (**(code **)(*plVar14 + 8))(plVar14,&local_70);
      FUN_147800e52(param_1,&local_90);
      if ((local_70.QuadPart != 0) && (local_70.QuadPart != 0x7fffffffffffffff)) {
        plVar14 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
        cVar11 = (**(code **)(*plVar14 + 0x38))(plVar14);
        lVar19 = param_2[1];
        if (cVar11 == '\0') {
          if (local_78 <= lVar19) {
            lVar19 = local_78;
          }
          if (lVar19 < local_88) {
            lVar19 = local_88;
          }
          param_2[1] = lVar19;
          if ((longlong)param_2[4] < local_78) {
            local_78 = param_2[4];
          }
          if (local_78 < local_88) {
            local_78 = local_88;
          }
          param_2[4] = local_78;
        }
        else {
          uVar20 = local_78 - local_88;
          lVar16 = (lVar19 - local_88 >> 0x3f & uVar20) + (lVar19 - local_88) % (longlong)uVar20;
          lVar18 = param_2[4] - local_88;
          lVar18 = (lVar18 >> 0x3f & uVar20) + lVar18 % (longlong)uVar20;
          if (lVar18 < lVar16) {
            lVar16 = lVar16 + local_88;
            lVar18 = lVar18 + local_88;
            if (lVar16 != lVar19) {
              param_2[1] = lVar16;
              param_2[2] = param_2[2] + -1;
            }
            if (lVar18 != param_2[4]) {
              param_2[4] = lVar18;
              param_2[5] = param_2[5] + 1;
            }
          }
        }
      }
      uVar13 = FUN_14780116c(param_2);
      uVar13 = uVar13 ^ 1;
    }
    if (bVar3) goto LAB_14780281e;
  }
  else {
    iVar12 = (int)plVar17[1];
    do {
      if (iVar12 == 0) goto LAB_147802853;
      LOCK();
      iVar10 = (int)plVar17[1];
      bVar21 = iVar12 == iVar10;
      if (bVar21) {
        *(int *)(plVar17 + 1) = iVar12 + 1;
        iVar10 = iVar12;
      }
      iVar12 = iVar10;
      UNLOCK();
    } while (!bVar21);
    bVar3 = false;
    if ((*(char *)(param_1 + 0x230) != '\x01') ||
       (plVar14 = *(longlong **)(param_1 + 0xf8), bVar3 = false, plVar14 == (longlong *)0x0))
    goto LAB_147802855;
    (**(code **)(*plVar14 + 0x30))(plVar14,&local_90);
    if (!SBORROW8(0,local_90)) {
      QueryPerformanceCounter(&local_70);
      dVar22 = (double)local_70.QuadPart * DAT_14c83f420 + 16777216.0;
      if (param_5 == '\0') {
        dVar23 = (double)(**(code **)(**(longlong **)(param_1 + 0x3b8) + 0xb8))();
        lVar19 = local_90;
        if (((0.0 <= dVar22 - dVar23) && (dVar22 - dVar23 <= 0.3)) &&
           ((0.0 <= dVar22 - local_80 && (dVar22 - local_80 <= 0.25)))) {
          dVar22 = (double)(**(code **)(**(longlong **)(param_1 + 0x3b8) + 0xb8))();
          dVar22 = (double)param_3 * (dVar22 - local_80);
          goto LAB_1478028d9;
        }
      }
      else {
        dVar22 = (double)param_3 * (dVar22 - local_80);
LAB_1478028d9:
        auVar24._8_8_ = 0;
        auVar24._0_8_ = dVar22 * 10000000.0 + 0.5;
        auVar24 = roundpd(auVar24,auVar24,1);
        lVar19 = (longlong)auVar24._0_8_ + local_90;
      }
      lVar16 = local_88;
      if (((param_3 == 0.0) && (!NAN(param_3))) &&
         (cVar11 = FUN_14780116c(param_1 + 0x308), cVar11 != '\0')) {
        uVar13 = -(uint)(*(float *)(param_1 + 0x228) == 0.0);
        param_3 = (float)(~uVar13 & (uint)*(float *)(param_1 + 0x228) | uVar13 & 0x3f800000);
      }
      *(undefined1 *)param_2 = 1;
      param_2[1] = lVar19;
      param_2[2] = lVar16;
      *(undefined1 *)(param_2 + 3) = 0;
      param_2[4] = (longlong)((float)param_4 * ABS(param_3)) + lVar19;
      param_2[5] = lVar16;
      bVar3 = false;
      goto LAB_147802965;
    }
    if (((param_3 == 0.0 && param_5 == '\0') &&
        (*(longlong *)(param_1 + 0x3a0) == -0x8000000000000000)) &&
       (cVar11 = FUN_14780116c(param_1 + 0x308), cVar11 != '\0')) {
      local_70.QuadPart = -0x8000000000000000;
      local_68 = 0;
      plVar14 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x28))();
      cVar11 = (**(code **)(*plVar14 + 0x68))(plVar14,&local_70);
      if (cVar11 == '\0') goto LAB_1478027ff;
      *(undefined1 *)param_2 = 1;
      ((LARGE_INTEGER *)(param_2 + 1))->QuadPart = (LONGLONG)local_70;
      param_2[2] = local_68;
      *(undefined1 *)(param_2 + 3) = 0;
      param_2[4] = param_4 + local_70.QuadPart;
      param_2[5] = local_68;
      uVar13 = FUN_14780116c(param_2);
      uVar13 = uVar13 ^ 1;
    }
    else {
LAB_1478027ff:
      uVar13 = 0;
    }
  }
  LOCK();
  plVar14 = plVar17 + 1;
  *(int *)plVar14 = (int)*plVar14 + -1;
  UNLOCK();
  if ((int)*plVar14 == 0) {
    (**(code **)*plVar17)(plVar17);
    LOCK();
    piVar1 = (int *)((longlong)plVar17 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
LAB_14780281e:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13;
}



// FUNCTION 147802c5e FUN_147802c5e body=486 status=ok
// SIG undefined FUN_147802c5e(void)

void FUN_147802c5e(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  float fVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong *local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x3a0) == -0x8000000000000000) {
    local_b8 = *param_3;
    uStack_b4 = param_3[1];
    uStack_b0 = param_3[2];
    uStack_ac = param_3[3];
    local_a8 = param_3[4];
    uStack_a4 = param_3[5];
    uStack_a0 = param_3[6];
    uStack_9c = param_3[7];
    local_98 = param_3[8];
    uStack_94 = param_3[9];
    uStack_90 = param_3[10];
    uStack_8c = param_3[0xb];
    cVar4 = (**(code **)(*param_2 + 0x10))(param_2,&local_b8,&local_58);
    if (cVar4 != '\0') {
      do {
        if (local_58 != 0) {
          local_88 = local_58;
          local_80 = plStack_50;
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
            UNLOCK();
          }
          FUN_14780526e(param_1 + 0x118,&local_88);
          plVar3 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_80)(local_80);
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
        local_b8 = *param_3;
        uStack_b4 = param_3[1];
        uStack_b0 = param_3[2];
        uStack_ac = param_3[3];
        local_a8 = param_3[4];
        uStack_a4 = param_3[5];
        uStack_a0 = param_3[6];
        uStack_9c = param_3[7];
        local_98 = param_3[8];
        uStack_94 = param_3[9];
        uStack_90 = param_3[10];
        uStack_8c = param_3[0xb];
        cVar4 = (**(code **)(*param_2 + 0x10))(param_2,&local_b8,&local_58);
      } while (cVar4 != '\0');
    }
  }
  else {
    fVar5 = *(float *)(param_1 + 0x22c);
    local_68 = 0;
    local_60 = *(undefined8 *)(param_1 + 0x3a8);
    if (fVar5 < 0.0) {
      local_68 = 0x7fffffffffffffff;
    }
    local_88 = CONCAT71(local_88._1_7_,1);
    local_80 = (longlong *)0x0;
    uStack_78 = 0;
    local_70 = 0;
    if ((fVar5 == 0.0) && (!NAN(fVar5))) {
      fVar5 = *(float *)(param_1 + 0x228);
    }
    (**(code **)(*param_2 + 0x90))(param_2,&local_88,fVar5 < 0.0);
  }
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147802e46 FUN_147802e46 body=486 status=ok
// SIG undefined FUN_147802e46(void)

void FUN_147802e46(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  float fVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong *local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x3a0) == -0x8000000000000000) {
    local_b8 = *param_3;
    uStack_b4 = param_3[1];
    uStack_b0 = param_3[2];
    uStack_ac = param_3[3];
    local_a8 = param_3[4];
    uStack_a4 = param_3[5];
    uStack_a0 = param_3[6];
    uStack_9c = param_3[7];
    local_98 = param_3[8];
    uStack_94 = param_3[9];
    uStack_90 = param_3[10];
    uStack_8c = param_3[0xb];
    cVar4 = (**(code **)(*param_2 + 0x30))(param_2,&local_b8,&local_58);
    if (cVar4 != '\0') {
      do {
        if (local_58 != 0) {
          local_88 = local_58;
          local_80 = plStack_50;
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
            UNLOCK();
          }
          FUN_14780526e(param_1 + 0x138,&local_88);
          plVar3 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_80)(local_80);
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
        local_b8 = *param_3;
        uStack_b4 = param_3[1];
        uStack_b0 = param_3[2];
        uStack_ac = param_3[3];
        local_a8 = param_3[4];
        uStack_a4 = param_3[5];
        uStack_a0 = param_3[6];
        uStack_9c = param_3[7];
        local_98 = param_3[8];
        uStack_94 = param_3[9];
        uStack_90 = param_3[10];
        uStack_8c = param_3[0xb];
        cVar4 = (**(code **)(*param_2 + 0x30))(param_2,&local_b8,&local_58);
      } while (cVar4 != '\0');
    }
  }
  else {
    fVar5 = *(float *)(param_1 + 0x22c);
    local_68 = 0;
    local_60 = *(undefined8 *)(param_1 + 0x3a8);
    if (fVar5 < 0.0) {
      local_68 = 0x7fffffffffffffff;
    }
    local_88 = CONCAT71(local_88._1_7_,1);
    local_80 = (longlong *)0x0;
    uStack_78 = 0;
    local_70 = 0;
    if ((fVar5 == 0.0) && (!NAN(fVar5))) {
      fVar5 = *(float *)(param_1 + 0x228);
    }
    (**(code **)(*param_2 + 0x98))(param_2,&local_88,fVar5 < 0.0);
  }
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14780302e FUN_14780302e body=1367 status=ok
// SIG undefined FUN_14780302e(void)

ulonglong FUN_14780302e(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  undefined8 unaff_RBP;
  undefined7 uVar10;
  ulonglong uVar9;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined8 local_130;
  undefined1 local_128 [8];
  undefined8 local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  char local_e8 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  char local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  longlong *plStack_b0;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar10 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if (*(longlong **)(param_1 + 0x260) == (longlong *)0x0) {
    uVar9 = CONCAT71(uVar10,1);
    goto LAB_14780313d;
  }
  (**(code **)(**(longlong **)(param_1 + 0x260) + 0xc0))();
  local_b8 = (longlong *)0x0;
  plStack_b0 = (longlong *)0x0;
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x260) + 200))(*(longlong **)(param_1 + 0x260),3);
  if (cVar5 == '\0') {
    fVar14 = *(float *)(param_1 + 0x22c);
    if ((fVar14 == 0.0) && (!NAN(fVar14))) {
      fVar14 = *(float *)(param_1 + 0x228);
    }
    cVar5 = FUN_1478046a0(param_1,param_1 + 0x308,param_3,fVar14 < 0.0);
    uVar9 = CONCAT71(uVar10,1);
    if (cVar5 == '\0') {
      uVar9 = CONCAT71(uVar10,fVar14 < 0.0);
      local_138 = FUN_1478010be(param_1 + 0x158);
      iVar8 = (**(code **)(*param_2 + 0x60))(param_2,param_3,&local_b8,uVar9 & 0xffffffff);
      if (iVar8 == 3) {
        uVar12 = *(undefined8 *)(param_3 + 0x20);
        local_130 = 0x8000000000000000;
        if (fVar14 < 0.0) {
          local_130 = uVar12;
        }
        uVar13 = *(undefined8 *)(param_3 + 0x28);
        uVar3 = 0;
        if (fVar14 < 0.0) {
          uVar12 = 0x8000000000000000;
          uVar13 = 0;
          uVar3 = *(undefined8 *)(param_3 + 0x28);
        }
        cVar5 = '\x02' - (fVar14 < 0.0);
        uVar9 = CONCAT71(uVar10,cVar5);
        do {
          local_e0 = local_130;
          local_e8[0] = cVar5;
          local_d8 = uVar3;
          local_d0 = (fVar14 < 0.0) + '\x01';
          local_c8 = uVar12;
          local_c0 = uVar13;
          cVar7 = (**(code **)(*param_2 + 0x40))(param_2,local_e8,&local_b8);
        } while (cVar7 != '\0');
        if (local_b8 == (longlong *)0x0) {
LAB_147803530:
          plVar4 = plStack_b0;
          local_b8 = (longlong *)0x0;
          if (plStack_b0 == (longlong *)0x0) {
            uVar9 = 0;
            goto LAB_14780313d;
          }
          plStack_b0 = (longlong *)0x0;
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
        else if (0.0 <= fVar14) {
          (**(code **)(*local_b8 + 0x60))(local_b8,&local_90);
          (**(code **)(*local_b8 + 0x20))(local_b8,&local_98);
          if (((longlong)uStack_88 <= (longlong)*(longlong **)(param_3 + 0x10)) &&
             ((uStack_88 != *(longlong **)(param_3 + 0x10) ||
              (CONCAT44(uStack_94,local_98) + (longlong)local_90 <= *(longlong *)(param_3 + 8)))))
          goto LAB_147803530;
        }
        else {
          (**(code **)(*local_b8 + 0x60))(local_b8,&local_f8);
          (**(code **)(*local_b8 + 0x20))(local_b8,&local_a0);
          if ((*(longlong *)(param_3 + 0x10) <= local_f0) &&
             ((local_f0 != *(longlong *)(param_3 + 0x10) ||
              (*(longlong *)(param_3 + 8) <= local_f8 - CONCAT44(uStack_9c,local_a0)))))
          goto LAB_147803530;
        }
      }
      else if ((iVar8 == 2) &&
              ((((*(longlong *)(param_1 + 0xf8) == 0 || (*(longlong *)(param_1 + 0x100) == 0)) ||
                (*(int *)(*(longlong *)(param_1 + 0x100) + 8) < 1)) ||
               (*(int *)(param_1 + 0xc0) == -1)))) {
        *(undefined8 *)(param_1 + 0x368) = 0x8000000000000000;
        *(undefined8 *)(param_1 + 0x378) = 0xbff0000000000000;
      }
      goto LAB_1478030fb;
    }
  }
  else {
    uVar9 = CONCAT71(uVar10,2);
    do {
      local_128[0] = 2;
      local_120 = 0x8000000000000000;
      local_118 = 0;
      local_110 = 2;
      local_108 = 0x8000000000000000;
      local_100 = 0;
      cVar5 = (**(code **)(*param_2 + 0x40))(param_2,local_128,&local_b8);
    } while (cVar5 != '\0');
LAB_1478030fb:
    if (local_b8 == (longlong *)0x0) {
      uVar9 = 0;
    }
    else {
      (**(code **)(*local_b8 + 0x60))(local_b8,&local_f8);
      (**(code **)(*local_b8 + 0x20))(local_b8,&local_90);
      lVar11 = (longlong)local_90 + local_f8;
      local_90 = local_b8;
      uStack_88 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_b0 + 1) = (int)plStack_b0[1] + 1;
        UNLOCK();
      }
      FUN_14780513c(param_1 + 0x148,&local_90);
      plVar4 = uStack_88;
      if (uStack_88 != (longlong *)0x0) {
        LOCK();
        plVar1 = uStack_88 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*uStack_88)(uStack_88);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b0));
      *(longlong *)(param_1 + 0x348) = local_f8;
      *(longlong *)(param_1 + 0x350) = local_f0;
      *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_1 + 0x348);
      *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_1 + 0x350);
      *(undefined1 *)(param_1 + 0x308) = 1;
      *(undefined4 *)(param_1 + 0x309) = local_98;
      *(uint *)(param_1 + 0x30c) = CONCAT31((undefined3)uStack_94,local_98._3_1_);
      *(longlong *)(param_1 + 0x310) = local_f8;
      *(longlong *)(param_1 + 0x318) = local_f0;
      *(undefined1 *)(param_1 + 800) = 0;
      *(undefined4 *)(param_1 + 0x321) = local_a0;
      *(uint *)(param_1 + 0x324) = CONCAT31((undefined3)uStack_9c,local_a0._3_1_);
      *(longlong *)(param_1 + 0x328) = lVar11;
      *(longlong *)(param_1 + 0x330) = local_f0;
      (**(code **)(*local_b8 + 0x68))(local_b8,&local_90);
      if (&local_90 != (undefined8 *)(param_1 + 0x380)) {
        if ((local_78 & 1) == 0) {
          if (*(char *)(param_1 + 0x398) != '\x01') goto LAB_14780339c;
          uVar6 = 0;
        }
        else {
          *(undefined8 *)(param_1 + 0x390) = local_80;
          *(undefined4 *)(param_1 + 0x380) = (undefined4)local_90;
          *(undefined4 *)(param_1 + 900) = local_90._4_4_;
          *(undefined4 *)(param_1 + 0x388) = (undefined4)uStack_88;
          *(undefined4 *)(param_1 + 0x38c) = uStack_88._4_4_;
          uVar6 = 1;
        }
        *(undefined1 *)(param_1 + 0x398) = uVar6;
      }
LAB_14780339c:
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b0));
      FUN_147803586(param_1,param_1 + 0x348);
      uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
    }
  }
  plVar4 = plStack_b0;
  if (plStack_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_b0)(plStack_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_14780313d:
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147803586 FUN_147803586 body=747 status=ok
// SIG undefined FUN_147803586(void)

void FUN_147803586(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  byte bVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78;
  longlong local_70;
  longlong lStack_68;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  if ((*(int *)(param_1 + 0x150) == 0) || (*(int *)(param_1 + 0xd8) == -1)) {
    if (*(char *)(param_1 + 0x230) != '\x01') {
      *(undefined8 *)(param_1 + 0x3a0) = 0x8000000000000000;
      goto LAB_1478036ef;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b0));
    if ((*(longlong *)(param_1 + 0x3a8) < *(longlong *)(param_1 + 0x340)) ||
       ((*(longlong *)(param_1 + 0x340) == *(longlong *)(param_1 + 0x3a8) &&
        (*(longlong *)(param_1 + 0x3a0) <= *(longlong *)(param_1 + 0x338))))) {
      *(undefined8 *)(param_1 + 0x3a0) = 0x8000000000000000;
    }
LAB_1478036e6:
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b0));
  }
  else {
    if (SBORROW8(0,*(longlong *)(param_1 + 0x3a0))) goto LAB_1478036ef;
    local_48 = -0x8000000000000000;
    uStack_40 = 0;
    if (param_2 == (longlong *)0x0) {
      plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x28))();
      (**(code **)(*plVar4 + 0x68))(plVar4,&local_48);
    }
    else {
      local_48 = *param_2;
      uStack_40 = param_2[1];
    }
    if (local_48 == -0x8000000000000000) goto LAB_1478036ef;
    if (*(char *)(param_1 + 0x230) == '\x01') {
      bVar3 = FUN_1478010be(param_1 + 0x158);
      bVar3 = bVar3 ^ 1;
    }
    else {
      bVar3 = 0;
    }
    fVar9 = *(float *)(param_1 + 0x22c);
    if ((fVar9 == 0.0) && (!NAN(fVar9))) {
      fVar9 = *(float *)(param_1 + 0x228);
    }
    puVar1 = (undefined4 *)(param_1 + 0x3a0);
    iVar5 = (int)((ulonglong)(uStack_40 - (int)uStack_40) >> 0x20);
    iVar6 = (int)((ulonglong)
                  (*(longlong *)(param_1 + 0x3a8) - (longlong)(int)*(longlong *)(param_1 + 0x3a8))
                 >> 0x20);
    if (0.0 <= fVar9) {
      if (iVar6 <= iVar5) {
        if (bVar3 != 0) {
          QueryPerformanceCounter(&local_78);
          dVar2 = (double)CONCAT71(local_78.QuadPart._1_7_,local_78.s.LowPart._0_1_) * DAT_14c83f420
          ;
          *(undefined4 *)(param_1 + 0x368) = (undefined4)local_48;
          *(undefined4 *)(param_1 + 0x36c) = local_48._4_4_;
          *(undefined4 *)(param_1 + 0x370) = (undefined4)uStack_40;
          *(undefined4 *)(param_1 + 0x374) = uStack_40._4_4_;
          *(double *)(param_1 + 0x378) = dVar2 + 16777216.0;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b0));
        *(undefined4 *)(param_1 + 0x358) = *puVar1;
        *(undefined4 *)(param_1 + 0x35c) = *(undefined4 *)(param_1 + 0x3a4);
        *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_1 + 0x3a8);
        *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_1 + 0x3ac);
        goto LAB_147803853;
      }
      plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x28))();
      local_58 = *puVar1;
      uStack_54 = *(undefined4 *)(param_1 + 0x3a4);
      uStack_50 = *(undefined4 *)(param_1 + 0x3a8);
      uStack_4c = *(undefined4 *)(param_1 + 0x3ac);
      lVar8 = *plVar4;
      uVar7 = 0;
    }
    else {
      if (iVar5 <= iVar6) {
        if (bVar3 != 0) {
          QueryPerformanceCounter(&local_78);
          dVar2 = (double)CONCAT71(local_78.QuadPart._1_7_,local_78.s.LowPart._0_1_) * DAT_14c83f420
          ;
          *(undefined4 *)(param_1 + 0x368) = (undefined4)local_48;
          *(undefined4 *)(param_1 + 0x36c) = local_48._4_4_;
          *(undefined4 *)(param_1 + 0x370) = (undefined4)uStack_40;
          *(undefined4 *)(param_1 + 0x374) = uStack_40._4_4_;
          *(double *)(param_1 + 0x378) = dVar2 + 16777216.0;
        }
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b0));
LAB_147803853:
        *(undefined8 *)(param_1 + 0x3a0) = 0x8000000000000000;
        goto LAB_1478036e6;
      }
      plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x28))();
      local_58 = *puVar1;
      uStack_54 = *(undefined4 *)(param_1 + 0x3a4);
      uStack_50 = *(undefined4 *)(param_1 + 0x3a8);
      uStack_4c = *(undefined4 *)(param_1 + 0x3ac);
      lVar8 = *plVar4;
      uVar7 = 1;
    }
    local_60 = 0;
    local_78.s.LowPart._0_1_ = 1;
    local_70 = local_48;
    lStack_68 = uStack_40;
    (**(code **)(lVar8 + 0x80))(plVar4,&local_78,uVar7);
  }
LAB_1478036ef:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147803872 FUN_147803872 body=547 status=ok
// SIG undefined FUN_147803872(void)

void FUN_147803872(longlong param_1,longlong param_2)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  longlong local_50;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x230) == '\0') {
    fVar1 = *(float *)(param_1 + 0x22c);
    cVar2 = FUN_1478010be(param_1 + 0x158);
    if ((cVar2 == '\0') && (!SBORROW8(0,*(longlong *)(param_1 + 0x368)))) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x260) + 200))
                        (*(longlong **)(param_1 + 0x260),2);
      if (cVar2 == '\0') {
        lVar3 = (longlong)((float)param_2 * fVar1) + *(longlong *)(param_1 + 0x368);
      }
      else {
        QueryPerformanceCounter(&local_58);
        dVar6 = (double)local_58.QuadPart * DAT_14c83f420 + 16777216.0;
        lVar3 = (longlong)((double)fVar1 * (dVar6 - *(double *)(param_1 + 0x378))) +
                *(longlong *)(param_1 + 0x368);
        *(double *)(param_1 + 0x378) = dVar6;
      }
      *(longlong *)(param_1 + 0x368) = lVar3;
      plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
      (**(code **)(*plVar4 + 8))(plVar4,&local_38);
      FUN_147800e52(param_1,&local_58);
      plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
      cVar2 = (**(code **)(*plVar4 + 0x38))(plVar4);
      if (cVar2 == '\0') {
        if (0.0 <= fVar1) {
          if (((local_38 != 0) && (local_38 != 0x7fffffffffffffff)) &&
             (local_40 <= *(longlong *)(param_1 + 0x368))) {
            *(longlong *)(param_1 + 0x368) = local_40 + -1;
          }
        }
        else if (*(longlong *)(param_1 + 0x368) < local_50) {
          *(longlong *)(param_1 + 0x368) = local_50;
        }
      }
      else if ((local_38 != 0) && (local_38 != 0x7fffffffffffffff)) {
        lVar3 = *(longlong *)(param_1 + 0x368);
        if (0.0 <= fVar1) {
          if (lVar3 < local_40) goto LAB_147803896;
          lVar5 = *(longlong *)(param_1 + 0x370);
          do {
            lVar3 = lVar3 - (local_40 - local_50);
            lVar5 = lVar5 + 1;
          } while (local_40 <= lVar3);
        }
        else {
          if (local_50 <= lVar3) goto LAB_147803896;
          lVar5 = *(longlong *)(param_1 + 0x370);
          do {
            lVar3 = lVar3 + (local_40 - local_50);
            lVar5 = lVar5 + -1;
          } while (lVar3 < local_50);
        }
        *(longlong *)(param_1 + 0x368) = lVar3;
        *(longlong *)(param_1 + 0x370) = lVar5;
      }
    }
  }
LAB_147803896:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147803a96 FUN_147803a96 body=314 status=ok
// SIG undefined FUN_147803a96(void)

void FUN_147803a96(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  local_68 = param_3[4];
  uStack_64 = param_3[5];
  uStack_60 = param_3[6];
  uStack_5c = param_3[7];
  cVar4 = (**(code **)(*param_2 + 0x18))(param_2);
  if (cVar4 != '\0') {
    do {
      if (local_58 != 0) {
        local_88 = local_58;
        local_80 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
          UNLOCK();
        }
        FUN_14780526e(param_1 + 0x118,&local_88);
        plVar3 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_80)(local_80);
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
      local_78 = *param_3;
      uStack_74 = param_3[1];
      uStack_70 = param_3[2];
      uStack_6c = param_3[3];
      local_68 = param_3[4];
      uStack_64 = param_3[5];
      uStack_60 = param_3[6];
      uStack_5c = param_3[7];
      cVar4 = (**(code **)(*param_2 + 0x18))(param_2,&local_78,&local_58);
    } while (cVar4 != '\0');
  }
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
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
  return;
}



// FUNCTION 147803bd2 FUN_147803bd2 body=458 status=ok
// SIG undefined FUN_147803bd2(void)

void FUN_147803bd2(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  void *_Src;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_b8 [32];
  longlong *local_98 [2];
  longlong *local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = (longlong *)0x0;
  plStack_50 = (longlong *)0x0;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  local_68 = param_3[4];
  uStack_64 = param_3[5];
  uStack_60 = param_3[6];
  uStack_5c = param_3[7];
  cVar5 = (**(code **)(*param_2 + 0x38))(param_2);
  if (cVar5 != '\0') {
    do {
      if (local_58 != (longlong *)0x0) {
        local_88 = local_58;
        local_80 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
          UNLOCK();
        }
        cVar5 = FUN_14780526e(param_1 + 0x138,&local_88);
        plVar4 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_80)(local_80);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        if (cVar5 == '\0') {
          (**(code **)(*local_58 + 0x10))(local_58,local_98);
          puVar6 = (undefined8 *)FUN_1447a1f4a(local_98);
          local_88 = (longlong *)0x0;
          uVar3 = *(uint *)(puVar6 + 1);
          _Src = (void *)*puVar6;
          local_80 = (longlong *)CONCAT44(local_80._4_4_,uVar3);
          if ((longlong)(int)uVar3 == 0) {
            local_80 = (longlong *)(ulonglong)uVar3;
          }
          else {
            FUN_1446dd670(&local_88,uVar3,0);
            memcpy(local_88,_Src,(longlong)(int)uVar3 * 2);
          }
          if (local_98[0] != (longlong *)0x0) {
            (**(code **)(*local_98[0] + 0x10))();
          }
          if (local_88 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      local_78 = *param_3;
      uStack_74 = param_3[1];
      uStack_70 = param_3[2];
      uStack_6c = param_3[3];
      local_68 = param_3[4];
      uStack_64 = param_3[5];
      uStack_60 = param_3[6];
      uStack_5c = param_3[7];
      cVar5 = (**(code **)(*param_2 + 0x38))(param_2,&local_78);
    } while (cVar5 != '\0');
  }
  plVar4 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147803d9e FUN_147803d9e body=1019 status=ok
// SIG undefined FUN_147803d9e(void)

void FUN_147803d9e(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  DWORD *pDVar3;
  longlong *plVar4;
  DWORD DVar5;
  longlong *plVar6;
  char cVar7;
  DWORD DVar8;
  undefined4 uVar9;
  undefined8 unaff_RBP;
  DWORD *pDVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  float fVar16;
  undefined1 auStack_178 [40];
  DWORD *local_150;
  undefined4 local_144;
  LPCRITICAL_SECTION local_140;
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
  char local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  char local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  LARGE_INTEGER local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
  if (!SBORROW8(0,*(longlong *)(param_1 + 0x3a0))) {
    local_80 = *(undefined8 *)(param_1 + 0x3a8);
    fVar16 = *(float *)(param_1 + 0x22c);
    local_88 = 0;
    if (fVar16 < 0.0) {
      local_88 = 0x7fffffffffffffff;
    }
    local_a8.s.LowPart._0_1_ = 1;
    uStack_a0 = (longlong *)0x0;
    uStack_98 = 0;
    local_90 = 0;
    if ((fVar16 == 0.0) && (!NAN(fVar16))) {
      fVar16 = *(float *)(param_1 + 0x228);
    }
    (**(code **)(*param_2 + 0x88))(param_2,&local_a8,fVar16 < 0.0);
  }
  pDVar10 = *(DWORD **)(param_1 + 0x100);
  uVar9 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (pDVar10 == (DWORD *)0x0) {
LAB_147804003:
    pDVar10 = (DWORD *)0x0;
LAB_147804005:
    if ((*(int *)(param_1 + 0x150) == 0) || (*(int *)(param_1 + 0xd8) == -1)) {
      do {
        local_138 = *param_3;
        uStack_134 = param_3[1];
        uStack_130 = param_3[2];
        uStack_12c = param_3[3];
        local_128 = param_3[4];
        uStack_124 = param_3[5];
        uStack_120 = param_3[6];
        uStack_11c = param_3[7];
        local_118 = param_3[8];
        uStack_114 = param_3[9];
        uStack_110 = param_3[10];
        uStack_10c = param_3[0xb];
        cVar7 = (**(code **)*param_2)(param_2,&local_138,&local_78);
      } while (cVar7 != '\0');
      cVar7 = (char)uVar9;
    }
    else {
      fVar16 = *(float *)(param_1 + 0x22c);
      local_140 = (LPCRITICAL_SECTION)(param_1 + 0x2b0);
      local_150 = pDVar10;
      local_144 = uVar9;
      EnterCriticalSection(local_140);
      uVar14 = *(undefined8 *)(param_1 + 0x348);
      uVar13 = 0x8000000000000000;
      if (fVar16 < 0.0) {
        uVar13 = uVar14;
      }
      uVar12 = 0;
      uVar11 = *(undefined8 *)(param_1 + 0x350);
      if (fVar16 < 0.0) {
        uVar11 = 0;
        uVar14 = 0x8000000000000000;
        uVar12 = *(undefined8 *)(param_1 + 0x350);
      }
      LeaveCriticalSection(local_140);
      do {
        local_108[0] = '\x02' - (fVar16 < 0.0);
        local_100 = uVar13;
        local_f8 = uVar12;
        local_f0 = (fVar16 < 0.0) + '\x01';
        local_e8 = uVar14;
        local_e0 = uVar11;
        cVar7 = (**(code **)*param_2)(param_2,local_108,&local_78);
      } while (cVar7 != '\0');
      pDVar10 = local_150;
      cVar7 = (char)local_144;
    }
    if (cVar7 != '\0') goto LAB_147804133;
  }
  else {
    DVar8 = pDVar10[2];
    do {
      if (DVar8 == 0) goto LAB_147804003;
      LOCK();
      DVar5 = pDVar10[2];
      bVar15 = DVar8 == DVar5;
      if (bVar15) {
        pDVar10[2] = DVar8 + 1;
        DVar5 = DVar8;
      }
      DVar8 = DVar5;
      UNLOCK();
    } while (!bVar15);
    plVar6 = *(longlong **)(param_1 + 0xf8);
    if (plVar6 == (longlong *)0x0) {
      uVar9 = 0;
      goto LAB_147804005;
    }
    cVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,1);
    if (cVar7 != '\0') {
      local_150 = (DWORD *)(param_1 + 0x2f0);
      do {
        local_d8 = *param_3;
        uStack_d4 = param_3[1];
        uStack_d0 = param_3[2];
        uStack_cc = param_3[3];
        local_c8 = param_3[4];
        uStack_c4 = param_3[5];
        uStack_c0 = param_3[6];
        uStack_bc = param_3[7];
        local_b8 = param_3[8];
        uStack_b4 = param_3[9];
        uStack_b0 = param_3[10];
        uStack_ac = param_3[0xb];
        cVar7 = (**(code **)*param_2)(param_2,&local_d8,&local_78);
        if (cVar7 == '\0') break;
        if (local_78 != (longlong *)0x0) {
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b0));
          (**(code **)(*local_78 + 0x30))(local_78,&local_a8);
          *local_150 = local_a8.s.LowPart;
          local_150[1] = local_a8.s.HighPart;
          local_150[2] = (DWORD)uStack_a0;
          local_150[3] = uStack_a0._4_4_;
          QueryPerformanceCounter(&local_a8);
          *(double *)(param_1 + 0x300) = (double)local_a8.QuadPart * DAT_14c83f420 + 16777216.0;
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b0));
          local_a8.QuadPart = (LONGLONG)local_78;
          uStack_a0 = plStack_70;
          if (plStack_70 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
            UNLOCK();
          }
          (**(code **)*plVar6)(plVar6,&local_a8);
          plVar4 = uStack_a0;
          if (uStack_a0 != (longlong *)0x0) {
            LOCK();
            plVar1 = uStack_a0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*uStack_a0)(uStack_a0);
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
        cVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,1);
      } while (cVar7 != '\0');
    }
  }
  LOCK();
  pDVar3 = pDVar10 + 2;
  *pDVar3 = *pDVar3 - 1;
  UNLOCK();
  if (*pDVar3 == 0) {
    (*(code *)**(undefined8 **)pDVar10)(pDVar10);
    LOCK();
    pDVar3 = pDVar10 + 3;
    *pDVar3 = *pDVar3 - 1;
    UNLOCK();
    if (*pDVar3 == 0) {
      (**(code **)(*(longlong *)pDVar10 + 0x10))(pDVar10);
    }
  }
LAB_147804133:
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_70 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14780419a FUN_14780419a body=486 status=ok
// SIG undefined FUN_14780419a(void)

void FUN_14780419a(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  float fVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong *local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x3a0) == -0x8000000000000000) {
    local_b8 = *param_3;
    uStack_b4 = param_3[1];
    uStack_b0 = param_3[2];
    uStack_ac = param_3[3];
    local_a8 = param_3[4];
    uStack_a4 = param_3[5];
    uStack_a0 = param_3[6];
    uStack_9c = param_3[7];
    local_98 = param_3[8];
    uStack_94 = param_3[9];
    uStack_90 = param_3[10];
    uStack_8c = param_3[0xb];
    cVar4 = (**(code **)(*param_2 + 0x20))(param_2,&local_b8,&local_58);
    if (cVar4 != '\0') {
      do {
        if (local_58 != 0) {
          local_88 = local_58;
          local_80 = plStack_50;
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
            UNLOCK();
          }
          FUN_1478053a0(param_1 + 0x128,&local_88);
          plVar3 = local_80;
          if (local_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_80)(local_80);
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
        local_b8 = *param_3;
        uStack_b4 = param_3[1];
        uStack_b0 = param_3[2];
        uStack_ac = param_3[3];
        local_a8 = param_3[4];
        uStack_a4 = param_3[5];
        uStack_a0 = param_3[6];
        uStack_9c = param_3[7];
        local_98 = param_3[8];
        uStack_94 = param_3[9];
        uStack_90 = param_3[10];
        uStack_8c = param_3[0xb];
        cVar4 = (**(code **)(*param_2 + 0x20))(param_2,&local_b8,&local_58);
      } while (cVar4 != '\0');
    }
  }
  else {
    fVar5 = *(float *)(param_1 + 0x22c);
    local_68 = 0;
    local_60 = *(undefined8 *)(param_1 + 0x3a8);
    if (fVar5 < 0.0) {
      local_68 = 0x7fffffffffffffff;
    }
    local_88 = CONCAT71(local_88._1_7_,1);
    local_80 = (longlong *)0x0;
    uStack_78 = 0;
    local_70 = 0;
    if ((fVar5 == 0.0) && (!NAN(fVar5))) {
      fVar5 = *(float *)(param_1 + 0x228);
    }
    (**(code **)(*param_2 + 0xa0))(param_2,&local_88,fVar5 < 0.0);
  }
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147804382 FUN_147804382 body=480 status=ok
// SIG undefined FUN_147804382(void)

void FUN_147804382(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_d8 [32];
  LPCRITICAL_SECTION local_b8;
  longlong local_b0;
  LARGE_INTEGER local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
  local_98 = *param_3;
  uStack_94 = param_3[1];
  uStack_90 = param_3[2];
  uStack_8c = param_3[3];
  local_88 = param_3[4];
  uStack_84 = param_3[5];
  uStack_80 = param_3[6];
  uStack_7c = param_3[7];
  cVar4 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar4 != '\0') {
    local_b0 = param_1 + 0x108;
    local_b8 = (LPCRITICAL_SECTION)(param_1 + 0x2b0);
    do {
      if (local_78 != (longlong *)0x0) {
        local_a8.QuadPart = (LONGLONG)local_78;
        uStack_a0 = plStack_70;
        if (plStack_70 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
          UNLOCK();
        }
        cVar4 = FUN_1478054b6(local_b0,&local_a8);
        plVar3 = uStack_a0;
        if (uStack_a0 != (longlong *)0x0) {
          LOCK();
          plVar1 = uStack_a0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*uStack_a0)(uStack_a0);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        lpCriticalSection = local_b8;
        if (cVar4 != '\0') {
          EnterCriticalSection(local_b8);
          (**(code **)(*local_78 + 0x30))(local_78,&local_a8);
          *(DWORD *)(param_1 + 0x2f0) = local_a8.s.LowPart;
          *(LONG *)(param_1 + 0x2f4) = local_a8.s.HighPart;
          *(undefined4 *)(param_1 + 0x2f8) = (undefined4)uStack_a0;
          *(undefined4 *)(param_1 + 0x2fc) = uStack_a0._4_4_;
          QueryPerformanceCounter(&local_a8);
          *(double *)(param_1 + 0x300) = (double)local_a8.QuadPart * DAT_14c83f420 + 16777216.0;
          LeaveCriticalSection(lpCriticalSection);
        }
      }
      local_98 = *param_3;
      uStack_94 = param_3[1];
      uStack_90 = param_3[2];
      uStack_8c = param_3[3];
      local_88 = param_3[4];
      uStack_84 = param_3[5];
      uStack_80 = param_3[6];
      uStack_7c = param_3[7];
      cVar4 = (**(code **)(*param_2 + 8))(param_2,&local_98,&local_78);
    } while (cVar4 != '\0');
  }
  plVar3 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147804564 FUN_147804564 body=314 status=ok
// SIG undefined FUN_147804564(void)

void FUN_147804564(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  local_68 = param_3[4];
  uStack_64 = param_3[5];
  uStack_60 = param_3[6];
  uStack_5c = param_3[7];
  cVar4 = (**(code **)(*param_2 + 0x28))(param_2);
  if (cVar4 != '\0') {
    do {
      if (local_58 != 0) {
        local_88 = local_58;
        local_80 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
          UNLOCK();
        }
        FUN_1478053a0(param_1 + 0x128,&local_88);
        plVar3 = local_80;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_80 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_80)(local_80);
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
      local_78 = *param_3;
      uStack_74 = param_3[1];
      uStack_70 = param_3[2];
      uStack_6c = param_3[3];
      local_68 = param_3[4];
      uStack_64 = param_3[5];
      uStack_60 = param_3[6];
      uStack_5c = param_3[7];
      cVar4 = (**(code **)(*param_2 + 0x28))(param_2,&local_78,&local_58);
    } while (cVar4 != '\0');
  }
  plVar3 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_50 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_50)(plStack_50);
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
  return;
}



// FUNCTION 1478046a0 FUN_1478046a0 body=2466 status=ok
// SIG undefined FUN_1478046a0(void)

undefined8 FUN_1478046a0(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auStack_118 [39];
  undefined1 local_f1;
  char local_f0 [8];
  longlong local_e8;
  longlong lStack_e0;
  char local_d8;
  undefined7 uStack_d7;
  longlong local_d0;
  longlong lStack_c8;
  char local_c0 [8];
  longlong local_b8;
  longlong lStack_b0;
  char local_a8 [8];
  longlong local_a0;
  longlong lStack_98;
  char local_90;
  undefined4 local_8f;
  undefined3 uStack_8b;
  longlong local_88;
  longlong local_80;
  char local_78;
  undefined4 uStack_77;
  undefined3 uStack_73;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined4 uStack_58;
  undefined3 uStack_54;
  undefined4 uStack_50;
  undefined3 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar1 = FUN_14780116c(param_3);
  if (cVar1 != '\0') goto LAB_1478046dd;
  uVar4 = 0;
  if (!SBORROW8(0,*(longlong *)(param_1 + 0x3a0))) goto LAB_1478046df;
  cVar1 = FUN_14780116c(param_2);
  if (cVar1 == '\0') {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
    (**(code **)(*plVar2 + 8))(plVar2,&local_60);
    lVar8 = *(longlong *)(param_3 + 0x10);
    lVar3 = *(longlong *)(param_3 + 0x28);
    if (lVar8 == lVar3) {
      local_88 = *(longlong *)(param_3 + 8);
      local_70 = *(longlong *)(param_3 + 0x20);
      local_90 = '\x01';
      local_80 = 0;
      local_78 = '\0';
      local_68 = 0;
      plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x260) + 0x10))();
      cVar1 = (**(code **)(*plVar2 + 0x38))(plVar2);
      if (((cVar1 == '\0') && (local_60 != 0)) && (local_60 != 0x7fffffffffffffff)) {
        FUN_147800e52(param_1,local_f0);
        lVar3 = CONCAT71(uStack_d7,local_d8);
        local_c0[0] = '\x01';
        local_b8 = local_e8;
        lStack_b0 = 0;
        local_a8[0] = '\0';
        lStack_98 = 0;
        if (local_78 == '\x02' || local_90 == '\x02') {
LAB_14780483d:
          if (local_e8 < lVar3) {
            pcVar9 = local_a8;
            if (local_78 != '\x02') goto LAB_147804f30;
            goto LAB_147804853;
          }
LAB_147804c60:
          local_90 = '\0';
          local_88 = -0x8000000000000000;
          local_80 = 0;
          local_78 = '\0';
          local_70 = -0x8000000000000000;
          local_68 = 0;
        }
        else {
          if (local_68 < local_80) goto LAB_147804c60;
          if (local_80 != local_68) goto LAB_14780483d;
          if (local_70 < local_88) goto LAB_147804c60;
          if (local_88 != local_70) goto LAB_14780483d;
          local_68 = local_80;
          if ((local_78 == '\0' || local_90 == '\0') || lVar3 <= local_e8) goto LAB_147804c60;
LAB_147804f30:
          bVar12 = local_68 == 0;
          pcVar9 = &local_78;
          if (((-1 < local_68) && (local_f1 = bVar12, !bVar12 || lVar3 <= local_70)) &&
             ((pcVar9 = local_a8, local_70 <= lVar3 && local_68 == 0 && (local_78 == '\0')))) {
            pcVar9 = &local_78;
          }
LAB_147804853:
          pcVar6 = local_c0;
          if (local_90 != '\x02') {
            pcVar6 = &local_90;
            if (((local_80 < 1) && (local_80 != 0 || local_88 <= local_e8)) &&
               (pcVar6 = local_c0, local_e8 <= local_88 && local_80 == 0)) {
              pcVar6 = local_c0;
              if (local_90 == '\0') {
                pcVar6 = &local_90;
              }
            }
          }
          local_90 = *pcVar6;
          uStack_4c = (undefined3)((uint)*(undefined4 *)(pcVar6 + 4) >> 8);
          uStack_50 = *(undefined4 *)(pcVar6 + 1);
          local_88 = *(longlong *)(pcVar6 + 8);
          local_80 = *(longlong *)(pcVar6 + 0x10);
          local_78 = *pcVar9;
          uStack_54 = (undefined3)((uint)*(undefined4 *)(pcVar9 + 4) >> 8);
          uStack_58 = *(undefined4 *)(pcVar9 + 1);
          local_70 = *(longlong *)(pcVar9 + 8);
          local_68 = *(longlong *)(pcVar9 + 0x10);
        }
        local_8f = uStack_50;
        uStack_8b = uStack_4c;
        uStack_77 = uStack_58;
        uStack_73 = uStack_54;
      }
LAB_1478049b3:
      lVar3 = 0;
      if ((local_60 != 0) && (local_60 != 0x7fffffffffffffff)) {
        lVar3 = (longlong)((double)local_60 * (double)(*(int *)(param_2 + 0x10) - (int)lVar8));
      }
      local_a0 = *(longlong *)(param_2 + 0x20) + lVar3;
      lVar3 = lVar3 + *(longlong *)(param_2 + 8);
      local_c0[0] = '\x01';
      lStack_b0 = 0;
      local_a8[0] = '\0';
      lStack_98 = 0;
      local_b8 = lVar3;
      if (param_4 != '\0') {
        if ((local_80 < 1) && ((local_80 != 0 || (local_88 < local_a0)))) {
          cVar1 = FUN_147805044(local_c0,&local_90);
          if (cVar1 == '\0') goto LAB_1478046dd;
          if (lStack_b0 < lStack_98) {
            lVar8 = -0x7fffffffffffffff;
          }
          else if (lStack_98 < lStack_b0) {
            lVar8 = -0x8000000000000000;
          }
          else {
            lVar8 = local_b8 - local_a0;
          }
          local_e8 = local_b8 + lVar8;
          lStack_e0 = lStack_b0;
          local_d8 = '\0';
          local_d0 = local_b8;
          lStack_c8 = lStack_b0;
LAB_147804a9b:
          local_d8 = '\0';
          if (local_78 != '\x02' && local_90 != '\x02') {
            if (local_68 < local_80) {
              bVar12 = true;
              lVar8 = 0;
              goto LAB_147804d00;
            }
            if (local_80 != local_68) goto LAB_147804abf;
            if (local_70 < local_88) {
              bVar12 = true;
              lVar8 = 0;
              goto LAB_147804d62;
            }
            if ((local_88 != local_70) || (local_78 != '\0' && local_90 != '\0'))
            goto LAB_147804abf;
            bVar12 = true;
            lVar8 = 0;
LAB_147804d6d:
            if (local_78 == '\0' || local_90 == '\0') goto LAB_147804d05;
LAB_147804b65:
            if (local_d0 <= local_e8) goto LAB_147804d05;
            pcVar9 = &local_d8;
            if (local_78 != '\x02') {
              bVar13 = SBORROW8(local_68,lStack_c8);
              lVar3 = local_68 - lStack_c8;
              pcVar9 = &local_78;
              if (lStack_c8 <= local_68) {
                bVar11 = false;
                if (local_68 == lStack_c8) {
                  bVar13 = SBORROW8(local_70,local_d0);
                  lVar3 = local_70 - local_d0;
                  bVar11 = local_70 == local_d0;
                  if (local_70 < local_d0) goto LAB_147804b98;
                }
                pcVar9 = &local_d8;
                if ((bVar11 || bVar13 != lVar3 < 0) && (local_78 == '\0')) {
                  pcVar9 = &local_78;
                }
              }
            }
LAB_147804b98:
            pcVar6 = local_f0;
            if (local_90 != '\x02') {
              bVar13 = SBORROW8(local_80,lStack_c8);
              lVar3 = local_80 - lStack_c8;
              pcVar6 = &local_90;
              if (local_80 <= lStack_c8) {
                if (local_80 == lStack_c8) {
                  bVar13 = SBORROW8(local_88,local_e8);
                  lVar3 = local_88 - local_e8;
                  if (local_e8 < local_88) goto LAB_147804ba8;
                }
                pcVar6 = local_f0;
                if (bVar13 == lVar3 < 0) {
                  pcVar6 = local_f0;
                  if (local_90 == '\0') {
                    pcVar6 = &local_90;
                  }
                }
              }
            }
LAB_147804ba8:
            lVar3 = *(longlong *)(pcVar6 + 8);
            lVar10 = *(longlong *)(pcVar6 + 0x10);
            lVar7 = *(longlong *)(pcVar9 + 8);
            lVar5 = *(longlong *)(pcVar9 + 0x10);
          }
          else {
LAB_147804abf:
            if ((local_a8[0] == '\x02' || local_c0[0] == '\x02') ||
               ((lStack_b0 <= lStack_98 &&
                ((lStack_b0 != lStack_98 ||
                 ((local_b8 <= local_a0 &&
                  ((local_b8 != local_a0 || (local_a8[0] != '\0' && local_c0[0] != '\0')))))))))) {
              pcVar9 = &local_78;
              if (local_78 == '\x02') {
                pcVar9 = local_a8;
              }
              if (local_78 != '\x02' && local_a8[0] != '\x02') {
                bVar12 = SBORROW8(local_68,lStack_98);
                lVar8 = local_68 - lStack_98;
                pcVar9 = &local_78;
                if (lStack_98 <= local_68) {
                  bVar13 = false;
                  if (local_68 == lStack_98) {
                    bVar12 = SBORROW8(local_70,local_a0);
                    lVar8 = local_70 - local_a0;
                    bVar13 = local_70 == local_a0;
                    if (local_70 < local_a0) goto LAB_147804b14;
                  }
                  pcVar9 = local_a8;
                  if ((bVar13 || bVar12 != lVar8 < 0) && (local_78 == '\0')) {
                    pcVar9 = &local_78;
                  }
                }
              }
LAB_147804b14:
              pcVar6 = &local_90;
              if (local_90 == '\x02') {
                pcVar6 = local_c0;
              }
              if (local_90 != '\x02' && local_c0[0] != '\x02') {
                bVar12 = SBORROW8(local_80,lStack_b0);
                lVar8 = local_80 - lStack_b0;
                pcVar6 = &local_90;
                if (local_80 <= lStack_b0) {
                  if (local_80 == lStack_b0) {
                    bVar12 = SBORROW8(local_88,local_b8);
                    lVar8 = local_88 - local_b8;
                    if (local_b8 < local_88) goto LAB_147804b3e;
                  }
                  pcVar6 = local_c0;
                  if (bVar12 == lVar8 < 0) {
                    pcVar6 = local_c0;
                    if (local_90 == '\0') {
                      pcVar6 = &local_90;
                    }
                  }
                }
              }
LAB_147804b3e:
              lVar3 = *(longlong *)(pcVar6 + 8);
              lVar10 = *(longlong *)(pcVar6 + 0x10);
              lVar8 = *(longlong *)(pcVar9 + 8);
              lVar7 = *(longlong *)(pcVar9 + 0x10);
            }
            else {
              lVar7 = 0;
              lVar8 = -0x8000000000000000;
              lVar10 = 0;
              lVar3 = -0x8000000000000000;
            }
            lVar8 = lVar8 - lVar3;
            bVar12 = lVar7 <= lVar10;
            if (lVar7 < lVar10) {
              lVar8 = -0x8000000000000000;
            }
            if (local_78 == '\x02' || local_90 == '\x02') goto LAB_147804b65;
LAB_147804d00:
            if (local_80 <= local_68) {
              if (local_80 == local_68) {
LAB_147804d62:
                if (local_70 < local_88) goto LAB_147804d05;
                if (local_88 == local_70) goto LAB_147804d6d;
              }
              goto LAB_147804b65;
            }
LAB_147804d05:
            lVar5 = 0;
            lVar7 = -0x8000000000000000;
            lVar10 = 0;
            lVar3 = -0x8000000000000000;
          }
          lVar7 = lVar7 - lVar3;
          if (lVar5 < lVar10) {
            lVar7 = -0x8000000000000000;
          }
          lVar3 = 0x7fffffffffffffff;
          if (lVar10 < lVar5) {
            lVar7 = lVar3;
          }
          lStack_e0 = lStack_c8;
          if ((bVar12) && (lVar8 < lVar7)) goto LAB_1478046dd;
        }
LAB_147804a28:
        uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
        goto LAB_1478046df;
      }
      if ((local_68 < 0) || ((local_68 == 0 && (local_70 <= lVar3)))) goto LAB_147804a28;
      cVar1 = FUN_147805044(local_c0,&local_90);
      if (cVar1 != '\0') {
        if (lStack_b0 < lStack_98) {
          lVar8 = 0x7fffffffffffffff;
        }
        else if (lStack_98 < lStack_b0) {
          lVar8 = -0x8000000000000000;
        }
        else {
          lVar8 = local_a0 - local_b8;
        }
        local_e8 = local_a0;
        lStack_e0 = lStack_98;
        local_d8 = '\0';
        local_d0 = local_a0 + lVar8;
        lStack_c8 = lStack_98;
        goto LAB_147804a9b;
      }
    }
    else if ((ulonglong)(lVar3 - (int)lVar3 ^ lVar8 - (int)lVar8) >> 0x20 == 0) {
      dVar16 = (double)((int)lVar3 - (int)lVar8);
      if (param_4 == '\0') {
        auVar15._0_8_ = ((double)local_60 / 10000000.0) * dVar16 * 10000000.0 + 0.5;
        auVar15._8_8_ = 0;
        auVar15 = roundpd(auVar15,auVar15,1);
        local_70 = (longlong)auVar15._0_8_ + *(longlong *)(param_3 + 0x20);
        local_88 = *(longlong *)(param_3 + 8);
        local_90 = '\x01';
        local_80 = 0;
        local_78 = '\0';
        local_68 = 0;
      }
      else {
        local_70 = *(longlong *)(param_3 + 0x20);
        auVar14._0_8_ = ((double)local_60 / 10000000.0) * dVar16 * 10000000.0 + 0.5;
        auVar14._8_8_ = 0;
        auVar15 = roundpd(auVar14,auVar14,1);
        local_88 = *(longlong *)(param_3 + 8) - (longlong)auVar15._0_8_;
        local_90 = '\x01';
        local_80 = 0;
        local_78 = '\0';
        local_68 = 0;
        lVar8 = lVar3;
      }
      goto LAB_1478049b3;
    }
  }
LAB_1478046dd:
  uVar4 = 0;
LAB_1478046df:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147805044 FUN_147805044 body=248 status=ok
// SIG undefined FUN_147805044(void)

undefined8 FUN_147805044(char *param_1,char *param_2)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  bool bVar6;
  bool bVar7;
  
  cVar2 = FUN_14780116c();
  if ((cVar2 == '\0') && (uVar4 = FUN_14780116c(param_2), (char)uVar4 == '\0')) {
    uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
    bVar3 = true;
    if (*param_2 != '\x02' && param_1[0x18] != '\x02') {
      bVar3 = true;
      bVar6 = true;
      if (*(longlong *)(param_1 + 0x28) <= *(longlong *)(param_2 + 0x10)) {
        if (*(longlong *)(param_1 + 0x28) == *(longlong *)(param_2 + 0x10)) {
          lVar1 = *(longlong *)(param_1 + 0x20);
          bVar3 = *(longlong *)(param_2 + 8) < lVar1;
          uVar5 = (undefined7)((ulonglong)lVar1 >> 8);
          bVar6 = *(longlong *)(param_2 + 8) <= lVar1;
        }
        else {
          bVar3 = false;
          uVar5 = 0;
          bVar6 = false;
        }
      }
      if (param_1[0x18] == '\x01') {
        if (*param_2 == '\x01') {
          bVar3 = bVar6;
        }
        uVar5 = 0;
      }
    }
    bVar6 = true;
    if (param_2[0x18] != '\x02' && *param_1 != '\x02') {
      bVar6 = true;
      bVar7 = true;
      if (*(longlong *)(param_2 + 0x28) <= *(longlong *)(param_1 + 0x10)) {
        if (*(longlong *)(param_1 + 0x10) == *(longlong *)(param_2 + 0x28)) {
          bVar6 = *(longlong *)(param_1 + 8) < *(longlong *)(param_2 + 0x20);
          bVar7 = *(longlong *)(param_1 + 8) <= *(longlong *)(param_2 + 0x20);
        }
        else {
          bVar6 = false;
          bVar7 = false;
        }
      }
      if ((*param_1 == '\x01') && (param_2[0x18] == '\x01')) {
        bVar6 = bVar7;
      }
    }
    uVar4 = CONCAT71(uVar5,bVar3 & bVar6);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 14780513c FUN_14780513c body=305 status=ok
// SIG undefined FUN_14780513c(void)

ulonglong FUN_14780513c(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)(int)param_1[1] < 1) {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  }
  else {
    uVar8 = 0;
    uVar10 = (longlong)(int)param_1[1];
    do {
      uVar11 = uVar10 - 1;
      lVar2 = *param_1;
      plVar9 = *(longlong **)(lVar2 + 8 + uVar11 * 0x10);
      bVar4 = true;
      if (plVar9 == (longlong *)0x0) {
LAB_1478051f3:
        plVar9 = (longlong *)0x0;
LAB_1478051f6:
        FUN_147809704(param_1,uVar11 & 0xffffffff);
        FUN_147809764(param_1);
        if (!bVar4) goto LAB_1478051c8;
      }
      else {
        iVar7 = (int)plVar9[1];
        do {
          if (iVar7 == 0) goto LAB_1478051f3;
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar12 = iVar7 == iVar5;
          if (bVar12) {
            *(int *)(plVar9 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar12);
        plVar3 = *(longlong **)(lVar2 + uVar11 * 0x10);
        if (plVar3 == (longlong *)0x0) {
          bVar4 = false;
          goto LAB_1478051f6;
        }
        cVar6 = (**(code **)(*plVar3 + 0x10))(plVar3,1);
        if (cVar6 == '\0') {
          uVar8 = 1;
        }
        else {
          (**(code **)*plVar3)(plVar3,param_2);
          FUN_147808db2(plVar3 + 1,3,local_50);
        }
LAB_1478051c8:
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
      bVar4 = 1 < (longlong)uVar10;
      uVar10 = uVar11;
    } while (bVar4);
    uVar8 = uVar8 ^ 1;
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffff01;
}



// FUNCTION 14780526e FUN_14780526e body=305 status=ok
// SIG undefined FUN_14780526e(void)

ulonglong FUN_14780526e(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)(int)param_1[1] < 1) {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  }
  else {
    uVar8 = 0;
    uVar10 = (longlong)(int)param_1[1];
    do {
      uVar11 = uVar10 - 1;
      lVar2 = *param_1;
      plVar9 = *(longlong **)(lVar2 + 8 + uVar11 * 0x10);
      bVar4 = true;
      if (plVar9 == (longlong *)0x0) {
LAB_147805325:
        plVar9 = (longlong *)0x0;
LAB_147805328:
        FUN_14780950c(param_1,uVar11 & 0xffffffff);
        FUN_14780956c(param_1);
        if (!bVar4) goto LAB_1478052fa;
      }
      else {
        iVar7 = (int)plVar9[1];
        do {
          if (iVar7 == 0) goto LAB_147805325;
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar12 = iVar7 == iVar5;
          if (bVar12) {
            *(int *)(plVar9 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar12);
        plVar3 = *(longlong **)(lVar2 + uVar11 * 0x10);
        if (plVar3 == (longlong *)0x0) {
          bVar4 = false;
          goto LAB_147805328;
        }
        cVar6 = (**(code **)(*plVar3 + 0x10))(plVar3,1);
        if (cVar6 == '\0') {
          uVar8 = 1;
        }
        else {
          (**(code **)*plVar3)(plVar3,param_2);
          FUN_147808db2(plVar3 + 1,3,local_50);
        }
LAB_1478052fa:
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
      bVar4 = 1 < (longlong)uVar10;
      uVar10 = uVar11;
    } while (bVar4);
    uVar8 = uVar8 ^ 1;
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffff01;
}



// FUNCTION 1478053a0 FUN_1478053a0 body=277 status=ok
// SIG undefined FUN_1478053a0(void)

void FUN_1478053a0(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < (longlong)(int)param_1[1]) {
    uVar8 = (longlong)(int)param_1[1];
    do {
      uVar9 = uVar8 - 1;
      lVar2 = *param_1;
      plVar10 = *(longlong **)(lVar2 + 8 + uVar9 * 0x10);
      bVar4 = true;
      if (plVar10 == (longlong *)0x0) {
LAB_14780544c:
        plVar10 = (longlong *)0x0;
LAB_14780544f:
        FUN_147809608(param_1,uVar9 & 0xffffffff);
        FUN_147809668(param_1);
        if (!bVar4) goto LAB_147805425;
      }
      else {
        iVar7 = (int)plVar10[1];
        do {
          if (iVar7 == 0) goto LAB_14780544c;
          LOCK();
          iVar5 = (int)plVar10[1];
          bVar11 = iVar7 == iVar5;
          if (bVar11) {
            *(int *)(plVar10 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar11);
        plVar3 = *(longlong **)(lVar2 + uVar9 * 0x10);
        if (plVar3 == (longlong *)0x0) {
          bVar4 = false;
          goto LAB_14780544f;
        }
        cVar6 = (**(code **)(*plVar3 + 0x10))(plVar3,1);
        if (cVar6 != '\0') {
          (**(code **)*plVar3)(plVar3,param_2);
          FUN_147808db2(plVar3 + 1,3,local_50);
        }
LAB_147805425:
        LOCK();
        plVar3 = plVar10 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      bVar4 = 1 < (longlong)uVar8;
      uVar8 = uVar9;
    } while (bVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478054b6 FUN_1478054b6 body=305 status=ok
// SIG undefined FUN_1478054b6(void)

ulonglong FUN_1478054b6(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 unaff_RSI;
  ulonglong uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)(int)param_1[1] < 1) {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  }
  else {
    uVar8 = 0;
    uVar10 = (longlong)(int)param_1[1];
    do {
      uVar11 = uVar10 - 1;
      lVar2 = *param_1;
      plVar9 = *(longlong **)(lVar2 + 8 + uVar11 * 0x10);
      bVar4 = true;
      if (plVar9 == (longlong *)0x0) {
LAB_14780556d:
        plVar9 = (longlong *)0x0;
LAB_147805570:
        FUN_1478080f2(param_1,uVar11 & 0xffffffff);
        FUN_147808152(param_1);
        if (!bVar4) goto LAB_147805542;
      }
      else {
        iVar7 = (int)plVar9[1];
        do {
          if (iVar7 == 0) goto LAB_14780556d;
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar12 = iVar7 == iVar5;
          if (bVar12) {
            *(int *)(plVar9 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar12);
        plVar3 = *(longlong **)(lVar2 + uVar11 * 0x10);
        if (plVar3 == (longlong *)0x0) {
          bVar4 = false;
          goto LAB_147805570;
        }
        cVar6 = (**(code **)(*plVar3 + 0x10))(plVar3,1);
        if (cVar6 == '\0') {
          uVar8 = 1;
        }
        else {
          (**(code **)*plVar3)(plVar3,param_2);
          FUN_147808db2(plVar3 + 1,3,local_50);
        }
LAB_147805542:
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
      bVar4 = 1 < (longlong)uVar10;
      uVar10 = uVar11;
    } while (bVar4);
    uVar8 = uVar8 ^ 1;
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffff01;
}



// FUNCTION 1478055e8 FUN_1478055e8 body=505 status=ok
// SIG undefined FUN_1478055e8(void)

void FUN_1478055e8(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  longlong lStack_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar19 = (int)param_1[1];
  if (0 < iVar19) {
    uVar20 = 0;
    do {
      puVar21 = (undefined8 *)(*param_1 + (longlong)(int)uVar20 * 0x20);
      cVar16 = FUN_14780994c(puVar21,param_2);
      if ((cVar16 != '\0') || (cVar16 = FUN_147809a1a(puVar21,param_2), cVar16 != '\0')) {
        lStack_70 = param_2[3];
        local_78 = param_2[2];
        uVar14 = local_78;
        lStack_80 = puVar21[3];
        local_88 = puVar21[2];
        uVar13 = local_88;
        local_88._0_1_ = (char)puVar21[2];
        puVar17 = &local_88;
        if ((char)local_88 != '\x02') {
          local_78._0_1_ = (char)param_2[2];
          puVar17 = &local_78;
          if (((((char)local_78 != '\x02') && (puVar17 = &local_88, lStack_80 <= lStack_70)) &&
              (puVar17 = &local_78, lStack_70 <= lStack_80)) && ((char)local_88 == '\x01')) {
            puVar17 = &local_88;
          }
        }
        lStack_90 = param_2[1];
        local_98 = *param_2;
        uVar12 = local_98;
        lStack_a0 = puVar21[1];
        local_a8 = *puVar21;
        uVar11 = local_a8;
        local_a8._0_1_ = (char)*puVar21;
        puVar21 = &local_a8;
        if ((char)local_a8 != '\x02') {
          local_98._0_1_ = (char)*param_2;
          puVar21 = &local_98;
          if ((((char)local_98 != '\x02') && (puVar21 = &local_a8, lStack_90 <= lStack_a0)) &&
             ((puVar21 = &local_98, lStack_a0 <= lStack_90 && ((char)local_a8 == '\x01')))) {
            puVar21 = &local_a8;
          }
        }
        local_68 = *puVar21;
        uVar10 = puVar21[1];
        uVar15 = local_68;
        local_58 = *puVar17;
        uStack_50 = puVar17[1];
        local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
        uStack_60._0_4_ = (undefined4)uVar10;
        uStack_60._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
        param_2[2] = local_58;
        param_2[3] = uStack_50;
        *(undefined4 *)param_2 = (undefined4)local_68;
        *(undefined4 *)((longlong)param_2 + 4) = local_68._4_4_;
        *(undefined4 *)(param_2 + 1) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_60._4_4_;
        iVar19 = (int)param_1[1];
        iVar18 = ~uVar20 + iVar19;
        local_a8 = uVar11;
        local_98 = uVar12;
        local_88 = uVar13;
        local_78 = uVar14;
        local_68 = uVar15;
        uStack_60 = uVar10;
        if (iVar18 != 0) {
          if (0 < iVar18) {
            iVar18 = 1;
          }
          memmove((void *)((longlong)(int)uVar20 * 0x20 + *param_1),
                  (void *)((longlong)(iVar19 - iVar18) * 0x20 + *param_1),(longlong)iVar18 << 5);
          iVar19 = (int)param_1[1];
        }
        uVar20 = uVar20 - 1;
        *(int *)(param_1 + 1) = iVar19 + -1;
        FUN_147809b44(param_1);
      }
      uVar20 = uVar20 + 1;
      iVar19 = (int)param_1[1];
    } while ((int)uVar20 < iVar19);
  }
  *(uint *)(param_1 + 1) = iVar19 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar19 + 1U) {
    FUN_147809be6(param_1,iVar19);
  }
  lVar2 = *param_1;
  uVar3 = *(undefined4 *)param_2;
  uVar4 = *(undefined4 *)((longlong)param_2 + 4);
  uVar5 = *(undefined4 *)(param_2 + 1);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar8 = *(undefined4 *)(param_2 + 3);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x1c);
  puVar1 = (undefined4 *)(lVar2 + 0x10 + (longlong)iVar19 * 0x20);
  *puVar1 = *(undefined4 *)(param_2 + 2);
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  puVar1 = (undefined4 *)(lVar2 + (longlong)iVar19 * 0x20);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478057e2 FUN_1478057e2 body=450 status=ok
// SIG undefined FUN_1478057e2(void)

undefined8 *
FUN_1478057e2(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  *param_1 = &PTR_FUN_14a5898f0;
  FUN_1478059a4(param_1 + 1);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 2;
  param_1[0x11] = &PTR_FUN_14a58a7c0;
  param_1[0x15] = &PTR_FUN_14a58a7f0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x16),4000);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = param_4;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 2;
  param_1[0x1e] = &PTR_FUN_14a58a850;
  param_1[0x22] = &PTR_FUN_14a58a880;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x23));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x23),4000);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 2;
  param_1[0x2b] = &PTR_FUN_14a58a7c0;
  param_1[0x2f] = &PTR_FUN_14a58a7f0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x30),4000);
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 2;
  param_1[0x38] = &PTR_FUN_14a58a8e0;
  param_1[0x3c] = &PTR_FUN_14a58a910;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3d));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x3d),4000);
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  return param_1;
}



// FUNCTION 1478059a4 FUN_1478059a4 body=167 status=ok
// SIG undefined FUN_1478059a4(void)

undefined8 * FUN_1478059a4(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 2;
  *param_1 = &PTR_FUN_14a58a680;
  param_1[4] = &PTR_FUN_14a58a6c0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 5),4000);
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *param_1 = &PTR_FUN_14a58a610;
  param_1[4] = &PTR_FUN_14a58a650;
  param_1[0xd] = 0x8000000000000000;
  param_1[0xe] = 0;
  param_1[0xf] = 0xbff0000000000000;
  return param_1;
}



// FUNCTION 147805a4c FUN_147805a4c body=83 status=ok
// SIG undefined FUN_147805a4c(void)

void FUN_147805a4c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5898f0;
  FUN_147805aa0(param_1 + 0x38);
  FUN_147805b12(param_1 + 0x2b);
  FUN_147805b84(param_1 + 0x1e);
  FUN_147805b12(param_1 + 0x11);
  FUN_147805bf6(param_1 + 1);
  return;
}



// FUNCTION 147805aa0 FUN_147805aa0 body=113 status=ok
// SIG undefined FUN_147805aa0(void)

void FUN_147805aa0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a58a8e0;
  param_1[4] = &PTR_FUN_14a58a910;
  FUN_14780b249(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  *param_1 = &PTR__purecall_14a58a940;
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147805b12 FUN_147805b12 body=113 status=ok
// SIG undefined FUN_147805b12(void)

void FUN_147805b12(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a58a7c0;
  param_1[4] = &PTR_FUN_14a58a7f0;
  FUN_14780b1b7(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  *param_1 = &PTR__purecall_14a58a820;
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147805b84 FUN_147805b84 body=113 status=ok
// SIG undefined FUN_147805b84(void)

void FUN_147805b84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a58a850;
  param_1[4] = &PTR_FUN_14a58a880;
  FUN_14780b200(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  *param_1 = &PTR__purecall_14a58a8b0;
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147805bf6 FUN_147805bf6 body=113 status=ok
// SIG undefined FUN_147805bf6(void)

void FUN_147805bf6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a58a680;
  param_1[4] = &PTR_FUN_14a58a6c0;
  FUN_147808960(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 5));
  *param_1 = &PTR__purecall_14a58a6f0;
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147805c68 FUN_147805c68 body=74 status=ok
// SIG undefined FUN_147805c68(void)

void FUN_147805c68(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  FUN_147805cb3(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147805cb3 FUN_147805cb3 body=311 status=ok
// SIG undefined FUN_147805cb3(void)

ulonglong FUN_147805cb3(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined1 local_58;
  longlong local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  plVar5 = (longlong *)(param_1 + 0x20);
  cVar4 = (**(code **)(*(longlong *)(param_1 + 0x20) + 8))(plVar5);
  if (cVar4 != '\0') {
    (**(code **)(*local_48 + 0x30))(local_48,&local_68);
    (**(code **)(*local_48 + 0x10))(local_48,&local_70);
    local_50 = local_70 + CONCAT71(uStack_67,local_68);
    local_68 = 1;
    local_58 = 0;
    cVar4 = FUN_147809a1a(param_2,&local_68);
    if (cVar4 != '\0') {
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
      }
      plVar3 = (longlong *)param_3[1];
      *param_3 = local_48;
      param_3[1] = plStack_40;
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
      (**(code **)(*plVar5 + 0x20))(plVar5);
      uVar6 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
      goto LAB_147805cf7;
    }
  }
  uVar6 = 0;
LAB_147805cf7:
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147805dec FUN_147805dec body=77 status=ok
// SIG undefined FUN_147805dec(void)

void FUN_147805dec(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  FUN_147805e3a(param_1 + 0x88);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147805e3a FUN_147805e3a body=310 status=ok
// SIG undefined FUN_147805e3a(void)

ulonglong FUN_147805e3a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined1 local_58;
  longlong local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  plVar5 = (longlong *)(param_1 + 0x20);
  cVar4 = (**(code **)(*(longlong *)(param_1 + 0x20) + 8))(plVar5);
  if (cVar4 != '\0') {
    (**(code **)(*local_48 + 0x18))(local_48,&local_68);
    (**(code **)*local_48)(local_48,&local_70);
    local_50 = local_70 + CONCAT71(uStack_67,local_68);
    local_68 = 1;
    local_58 = 0;
    cVar4 = FUN_147809a1a(param_2,&local_68);
    if (cVar4 != '\0') {
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
      }
      plVar3 = (longlong *)param_3[1];
      *param_3 = local_48;
      param_3[1] = plStack_40;
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
      (**(code **)(*plVar5 + 0x20))(plVar5);
      uVar6 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
      goto LAB_147805e7e;
    }
  }
  uVar6 = 0;
LAB_147805e7e:
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147805f72 FUN_147805f72 body=77 status=ok
// SIG undefined FUN_147805f72(void)

void FUN_147805f72(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  FUN_147805fc0(param_1 + 0xf0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147805fc0 FUN_147805fc0 body=311 status=ok
// SIG undefined FUN_147805fc0(void)

ulonglong FUN_147805fc0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined1 local_58;
  longlong local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  plVar5 = (longlong *)(param_1 + 0x20);
  cVar4 = (**(code **)(*(longlong *)(param_1 + 0x20) + 8))(plVar5);
  if (cVar4 != '\0') {
    (**(code **)(*local_48 + 0x18))(local_48,&local_68);
    (**(code **)(*local_48 + 8))(local_48,&local_70);
    local_50 = local_70 + CONCAT71(uStack_67,local_68);
    local_68 = 1;
    local_58 = 0;
    cVar4 = FUN_147809a1a(param_2,&local_68);
    if (cVar4 != '\0') {
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
      }
      plVar3 = (longlong *)param_3[1];
      *param_3 = local_48;
      param_3[1] = plStack_40;
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
      (**(code **)(*plVar5 + 0x20))(plVar5);
      uVar6 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
      goto LAB_147806004;
    }
  }
  uVar6 = 0;
LAB_147806004:
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478060f8 FUN_1478060f8 body=77 status=ok
// SIG undefined FUN_1478060f8(void)

void FUN_1478060f8(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  FUN_147805e3a(param_1 + 0x158);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147806146 FUN_147806146 body=77 status=ok
// SIG undefined FUN_147806146(void)

void FUN_147806146(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  FUN_147806194(param_1 + 0x1c0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147806194 FUN_147806194 body=311 status=ok
// SIG undefined FUN_147806194(void)

ulonglong FUN_147806194(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined1 local_68;
  undefined7 uStack_67;
  undefined1 local_58;
  longlong local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  plVar5 = (longlong *)(param_1 + 0x20);
  cVar4 = (**(code **)(*(longlong *)(param_1 + 0x20) + 8))(plVar5);
  if (cVar4 != '\0') {
    (**(code **)(*local_48 + 0x60))(local_48,&local_68);
    (**(code **)(*local_48 + 0x20))(local_48,&local_70);
    local_50 = local_70 + CONCAT71(uStack_67,local_68);
    local_68 = 1;
    local_58 = 0;
    cVar4 = FUN_147809a1a(param_2,&local_68);
    if (cVar4 != '\0') {
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
      }
      plVar3 = (longlong *)param_3[1];
      *param_3 = local_48;
      param_3[1] = plStack_40;
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
      (**(code **)(*plVar5 + 0x20))(plVar5);
      uVar6 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
      goto LAB_1478061d8;
    }
  }
  uVar6 = 0;
LAB_1478061d8:
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478062cc FUN_1478062cc body=82 status=ok
// SIG undefined FUN_1478062cc(void)

void FUN_1478062cc(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  local_18 = param_2[8];
  uStack_14 = param_2[9];
  uStack_10 = param_2[10];
  uStack_c = param_2[0xb];
  FUN_14780631f(param_1 + 8);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780631f FUN_14780631f body=327 status=ok
// SIG undefined FUN_14780631f(void)

undefined4 FUN_14780631f(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  plVar6 = (longlong *)(param_1 + 0x20);
  cVar4 = (**(code **)(*(longlong *)(param_1 + 0x20) + 8))(plVar6);
  if (cVar4 == '\0') {
    uVar5 = 0;
  }
  else {
    (**(code **)(*local_48 + 0x30))(local_48,&local_58);
    (**(code **)(*local_48 + 0x10))(local_48,&local_90);
    local_68 = local_90 + CONCAT44(uStack_54,local_58);
    local_88 = 1;
    local_80 = local_58;
    uStack_7c = uStack_54;
    uStack_78 = uStack_50;
    uStack_74 = uStack_4c;
    local_70 = 0;
    uVar5 = FUN_147805044(param_2);
    if ((char)uVar5 != '\0') {
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
      }
      plVar3 = (longlong *)param_3[1];
      *param_3 = local_48;
      param_3[1] = plStack_40;
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
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  plVar6 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147806468 FUN_147806468 body=85 status=ok
// SIG undefined FUN_147806468(void)

void FUN_147806468(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  local_18 = param_2[8];
  uStack_14 = param_2[9];
  uStack_10 = param_2[10];
  uStack_c = param_2[0xb];
  FUN_1478064be(param_1 + 0x88);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478064be FUN_1478064be body=326 status=ok
// SIG undefined FUN_1478064be(void)

undefined4 FUN_1478064be(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  plVar6 = (longlong *)(param_1 + 0x20);
  cVar4 = (**(code **)(*(longlong *)(param_1 + 0x20) + 8))(plVar6);
  if (cVar4 == '\0') {
    uVar5 = 0;
  }
  else {
    (**(code **)(*local_48 + 0x18))(local_48,&local_58);
    (**(code **)*local_48)(local_48,&local_90);
    local_68 = local_90 + CONCAT44(uStack_54,local_58);
    local_88 = 1;
    local_80 = local_58;
    uStack_7c = uStack_54;
    uStack_78 = uStack_50;
    uStack_74 = uStack_4c;
    local_70 = 0;
    uVar5 = FUN_147805044(param_2);
    if ((char)uVar5 != '\0') {
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
      }
      plVar3 = (longlong *)param_3[1];
      *param_3 = local_48;
      param_3[1] = plStack_40;
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
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  plVar6 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147806606 FUN_147806606 body=85 status=ok
// SIG undefined FUN_147806606(void)

void FUN_147806606(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  local_18 = param_2[8];
  uStack_14 = param_2[9];
  uStack_10 = param_2[10];
  uStack_c = param_2[0xb];
  FUN_1478064be(param_1 + 0x158);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14780665c FUN_14780665c body=85 status=ok
// SIG undefined FUN_14780665c(void)

void FUN_14780665c(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  local_18 = param_2[8];
  uStack_14 = param_2[9];
  uStack_10 = param_2[10];
  uStack_c = param_2[0xb];
  FUN_1478066b2(param_1 + 0xf0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478066b2 FUN_1478066b2 body=327 status=ok
// SIG undefined FUN_1478066b2(void)

undefined4 FUN_1478066b2(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  plVar6 = (longlong *)(param_1 + 0x20);
  cVar4 = (**(code **)(*(longlong *)(param_1 + 0x20) + 8))(plVar6);
  if (cVar4 == '\0') {
    uVar5 = 0;
  }
  else {
    (**(code **)(*local_48 + 0x18))(local_48,&local_58);
    (**(code **)(*local_48 + 8))(local_48,&local_90);
    local_68 = local_90 + CONCAT44(uStack_54,local_58);
    local_88 = 1;
    local_80 = local_58;
    uStack_7c = uStack_54;
    uStack_78 = uStack_50;
    uStack_74 = uStack_4c;
    local_70 = 0;
    uVar5 = FUN_147805044(param_2);
    if ((char)uVar5 != '\0') {
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
      }
      plVar3 = (longlong *)param_3[1];
      *param_3 = local_48;
      param_3[1] = plStack_40;
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
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  plVar6 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478067fa FUN_1478067fa body=85 status=ok
// SIG undefined FUN_1478067fa(void)

void FUN_1478067fa(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  local_18 = param_2[8];
  uStack_14 = param_2[9];
  uStack_10 = param_2[10];
  uStack_c = param_2[0xb];
  FUN_147806850(param_1 + 0x1c0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147806850 FUN_147806850 body=327 status=ok
// SIG undefined FUN_147806850(void)

undefined4 FUN_147806850(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined1 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_70;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = (longlong *)0x0;
  plStack_40 = (longlong *)0x0;
  plVar6 = (longlong *)(param_1 + 0x20);
  cVar4 = (**(code **)(*(longlong *)(param_1 + 0x20) + 8))(plVar6);
  if (cVar4 == '\0') {
    uVar5 = 0;
  }
  else {
    (**(code **)(*local_48 + 0x60))(local_48,&local_58);
    (**(code **)(*local_48 + 0x20))(local_48,&local_90);
    local_68 = local_90 + CONCAT44(uStack_54,local_58);
    local_88 = 1;
    local_80 = local_58;
    uStack_7c = uStack_54;
    uStack_78 = uStack_50;
    uStack_74 = uStack_4c;
    local_70 = 0;
    uVar5 = FUN_147805044(param_2);
    if ((char)uVar5 != '\0') {
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
        UNLOCK();
      }
      plVar3 = (longlong *)param_3[1];
      *param_3 = local_48;
      param_3[1] = plStack_40;
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
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
  }
  plVar6 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147806998 FUN_147806998 body=73 status=ok
// SIG undefined FUN_147806998(void)

void FUN_147806998(longlong param_1)

{
  FUN_1478069e2(param_1 + 8);
  FUN_147806a2c(param_1 + 0xf0);
  FUN_147806a7c(param_1 + 0x88);
  FUN_147806a7c(param_1 + 0x158);
  FUN_147806acc(param_1 + 0x1c0);
  return;
}



// FUNCTION 1478069e2 FUN_1478069e2 body=74 status=ok
// SIG undefined FUN_1478069e2(void)

void FUN_1478069e2(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  FUN_147808906(param_1);
  *(undefined8 *)(param_1 + 0x68) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x78) = 0xbff0000000000000;
                    /* WARNING: Could not recover jumptable at 0x000147806a25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 147806a2c FUN_147806a2c body=79 status=ok
// SIG undefined FUN_147806a2c(void)

void FUN_147806a2c(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  FUN_14780b200(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_14780b292(param_1 + 0x50,0);
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
                    /* WARNING: Could not recover jumptable at 0x000147806a67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 147806a7c FUN_147806a7c body=79 status=ok
// SIG undefined FUN_147806a7c(void)

void FUN_147806a7c(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  FUN_14780b1b7(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_14780b2f2(param_1 + 0x50,0);
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
                    /* WARNING: Could not recover jumptable at 0x000147806ab7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 147806acc FUN_147806acc body=79 status=ok
// SIG undefined FUN_147806acc(void)

void FUN_147806acc(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  FUN_14780b249(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_14780b352(param_1 + 0x50,0);
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
                    /* WARNING: Could not recover jumptable at 0x000147806b07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 147806b1c FUN_147806b1c body=44 status=ok
// SIG undefined FUN_147806b1c(void)

char FUN_147806b1c(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_147806b48(param_1 + 0x1c0);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = (iVar2 != 1) + '\x01';
  }
  return cVar1;
}



// FUNCTION 147806b48 FUN_147806b48 body=2097 status=ok
// SIG undefined FUN_147806b48(void)

char FUN_147806b48(longlong param_1,char *param_2,longlong *param_3,undefined1 param_4,char param_5)

{
  int *piVar1;
  longlong *plVar2;
  void *_Dst;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  char *pcVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  bool bVar23;
  bool bVar24;
  undefined1 auStack_128 [32];
  uint *local_108;
  int *local_100;
  char *local_f8;
  longlong local_f0;
  char *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  LPCRITICAL_SECTION local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  char local_88 [8];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70 [8];
  longlong local_68;
  longlong local_60;
  int local_54;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_f8 = (char *)CONCAT71(local_f8._1_7_,param_4);
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *param_3 = 0;
  plVar11 = (longlong *)param_3[1];
  if (plVar11 != (longlong *)0x0) {
    param_3[1] = 0;
    LOCK();
    plVar3 = plVar11 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  local_d0 = (LPCRITICAL_SECTION)(param_1 + 0x28);
  local_e0 = param_3;
  EnterCriticalSection(local_d0);
  local_100 = &local_54;
  local_108 = &local_50;
  local_f0 = param_1;
  FUN_14780b3b2(param_1,param_2,(ulonglong)local_f8 & 0xff,&local_4c);
  uVar19 = (ulonglong)local_4c;
  if (-1 < (int)local_4c) {
    local_e8 = param_2;
    if (param_5 == '\0') {
      if (local_4c == local_50) {
        lVar21 = *(longlong *)(*(longlong *)(local_f0 + 0x50) + uVar19 * 0x10);
        lVar14 = *(longlong *)(*(longlong *)(local_f0 + 0x50) + 8 + uVar19 * 0x10);
        if (lVar14 != 0) {
          LOCK();
          *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
          UNLOCK();
        }
        plVar11 = (longlong *)(local_f0 + 0x50);
        plVar3 = (longlong *)local_e0[1];
        *local_e0 = lVar21;
        local_e0[1] = lVar14;
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
        FUN_14780b0a0(plVar11,local_4c);
      }
      else {
        lVar21 = local_f0;
        uVar17 = local_4c;
        if ((int)local_4c <= (int)local_50) {
          lVar15 = uVar19 << 4;
          lVar12 = -1;
          lVar14 = 0;
          local_f8 = param_2 + 0x18;
          uVar22 = uVar19;
          do {
            lVar21 = *(longlong *)(lVar21 + 0x50);
            (**(code **)(**(longlong **)(lVar21 + lVar15) + 0x60))
                      (*(longlong **)(lVar21 + lVar15),&local_98);
            (**(code **)(**(longlong **)(lVar21 + lVar15) + 0x20))
                      (*(longlong **)(lVar21 + lVar15),&local_a0);
            lVar16 = local_90;
            lVar18 = local_a0 + local_98;
            (**(code **)(**(longlong **)(lVar21 + lVar15) + 0x60))
                      (*(longlong **)(lVar21 + lVar15),&local_b0);
            pcVar6 = local_e8;
            local_88[0] = '\x01';
            local_80 = local_b0;
            uStack_7c = uStack_ac;
            uStack_78 = uStack_a8;
            uStack_74 = uStack_a4;
            local_70[0] = '\0';
            local_60 = lVar16;
            local_68 = lVar18;
            cVar4 = FUN_147805044(local_e8);
            lVar21 = local_f0;
            iVar20 = (int)uVar19;
            if (cVar4 != '\0') {
              if ((((local_88[0] == '\x02') || (local_70[0] == '\x02')) ||
                  ((CONCAT44(uStack_74,uStack_78) <= local_60 &&
                   ((CONCAT44(uStack_74,uStack_78) != local_60 ||
                    ((CONCAT44(uStack_7c,local_80) <= local_68 &&
                     ((CONCAT44(uStack_7c,local_80) != local_68 ||
                      (local_70[0] != '\0' && local_88[0] != '\0')))))))))) &&
                 (cVar4 = FUN_14780116c(pcVar6), cVar4 == '\0')) {
                pcVar8 = local_f8;
                if ((local_70[0] != '\x02') && (pcVar8 = local_70, *local_f8 != '\x02')) {
                  lVar16 = *(longlong *)(pcVar6 + 0x28);
                  bVar24 = SBORROW8(local_60,lVar16);
                  lVar18 = local_60 - lVar16;
                  if (lVar16 <= local_60) {
                    bVar23 = false;
                    if (local_60 == lVar16) {
                      lVar16 = *(longlong *)(pcVar6 + 0x20);
                      bVar24 = SBORROW8(local_68,lVar16);
                      lVar18 = local_68 - lVar16;
                      bVar23 = local_68 == lVar16;
                      if (local_68 < lVar16) goto LAB_147807106;
                    }
                    pcVar8 = local_f8;
                    if ((bVar23 || bVar24 != lVar18 < 0) && (local_70[0] == '\0')) {
                      pcVar8 = local_70;
                    }
                  }
                }
LAB_147807106:
                pcVar13 = pcVar6;
                if ((local_88[0] != '\x02') && (pcVar13 = local_88, *pcVar6 != '\x02')) {
                  lVar10 = CONCAT44(uStack_74,uStack_78);
                  lVar16 = *(longlong *)(pcVar6 + 0x10);
                  bVar24 = SBORROW8(lVar10,lVar16);
                  lVar18 = lVar10 - lVar16;
                  if (lVar10 <= lVar16) {
                    if (lVar10 == lVar16) {
                      lVar10 = CONCAT44(uStack_7c,local_80);
                      lVar16 = *(longlong *)(pcVar6 + 8);
                      bVar24 = SBORROW8(lVar10,lVar16);
                      lVar18 = lVar10 - lVar16;
                      if (lVar16 < lVar10) goto LAB_147807137;
                    }
                    pcVar13 = pcVar6;
                    if ((bVar24 == lVar18 < 0) && (pcVar13 = local_88, local_88[0] != '\0')) {
                      pcVar13 = pcVar6;
                    }
                  }
                }
LAB_147807137:
                lVar16 = *(longlong *)(pcVar13 + 8);
                lVar18 = *(longlong *)(pcVar13 + 0x10);
                lVar10 = *(longlong *)(pcVar8 + 8);
                lVar7 = *(longlong *)(pcVar8 + 0x10);
              }
              else {
                lVar7 = 0;
                lVar10 = -0x8000000000000000;
                lVar18 = 0;
                lVar16 = -0x8000000000000000;
              }
              lVar10 = lVar10 - lVar16;
              if (lVar7 < lVar18) {
                lVar10 = -0x8000000000000000;
              }
              if (lVar18 < lVar7) {
                lVar10 = 0x7fffffffffffffff;
              }
              if (lVar14 <= lVar10 || lVar12 != 0x7fffffffffffffff) {
                uVar22 = uVar19 & 0xffffffff;
                lVar14 = lVar10;
                lVar12 = 0x7fffffffffffffff;
              }
            }
            uVar17 = (uint)uVar22;
            uVar19 = uVar19 + 1;
            lVar15 = lVar15 + 0x10;
          } while (iVar20 < (int)local_50);
        }
        lVar14 = *(longlong *)(*(longlong *)(lVar21 + 0x50) + (longlong)(int)uVar17 * 0x10);
        lVar21 = *(longlong *)(*(longlong *)(lVar21 + 0x50) + 8 + (longlong)(int)uVar17 * 0x10);
        if (lVar21 != 0) {
          LOCK();
          *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
          UNLOCK();
        }
        plVar11 = (longlong *)local_e0[1];
        *local_e0 = lVar14;
        local_e0[1] = lVar21;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar11 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        iVar20 = (uVar17 - local_4c) + 1;
        if (iVar20 == 0) goto LAB_147806ecd;
        plVar11 = (longlong *)(local_f0 + 0x50);
        FUN_14780b53a(plVar11,local_4c,iVar20);
      }
LAB_147807277:
      FUN_14780b116(plVar11);
    }
    else if ((int)local_4c <= (int)local_50) {
      local_d8 = (longlong *)(local_f0 + 0x50);
      uVar17 = ~local_4c;
      iVar20 = local_4c - 1;
      lVar21 = uVar19 << 4;
      local_c8 = 0x7fffffffffffffff;
      do {
        lVar14 = *local_d8;
        (**(code **)(**(longlong **)(lVar14 + lVar21) + 0x60))
                  (*(longlong **)(lVar14 + lVar21),&local_98);
        (**(code **)(**(longlong **)(lVar14 + lVar21) + 0x20))
                  (*(longlong **)(lVar14 + lVar21),&local_b0);
        lVar15 = local_90;
        lVar16 = CONCAT44(uStack_ac,local_b0) + local_98;
        (**(code **)(**(longlong **)(lVar14 + lVar21) + 0x60))
                  (*(longlong **)(lVar14 + lVar21),&local_80);
        local_88[0] = '\x01';
        local_70[0] = '\0';
        local_60 = lVar15;
        lVar12 = CONCAT44(uStack_74,uStack_78);
        local_68 = lVar16;
        if ((lVar15 < lVar12) ||
           (((lVar18 = CONCAT44(uStack_7c,local_80), lVar12 == lVar15 && (lVar16 <= lVar18)) ||
            (cVar4 = FUN_14780116c(), cVar4 != '\0')))) {
          lVar18 = 0;
          lVar16 = -0x8000000000000000;
          lVar15 = 0;
          lVar12 = -0x8000000000000000;
        }
        else {
          pcVar6 = local_70;
          if (local_e8[0x18] != '\x02') {
            lVar10 = *(longlong *)(local_e8 + 0x28);
            if (lVar10 <= lVar15) {
              if (lVar15 == lVar10) {
                if ((*(longlong *)(local_e8 + 0x20) <= lVar16) &&
                   (pcVar6 = local_e8 + 0x18, lVar16 <= *(longlong *)(local_e8 + 0x20))) {
LAB_147807300:
                  pcVar6 = local_70;
                }
              }
              else {
                pcVar6 = local_e8 + 0x18;
                if (lVar15 <= lVar10) goto LAB_147807300;
              }
            }
          }
          pcVar8 = local_88;
          if (((*local_e8 != '\x02') && (lVar12 <= *(longlong *)(local_e8 + 0x10))) &&
             ((pcVar8 = local_e8, lVar12 == *(longlong *)(local_e8 + 0x10) &&
              (*(longlong *)(local_e8 + 8) < lVar18)))) {
            pcVar8 = local_88;
          }
          lVar12 = *(longlong *)(pcVar8 + 8);
          lVar15 = *(longlong *)(pcVar8 + 0x10);
          lVar16 = *(longlong *)(pcVar6 + 8);
          lVar18 = *(longlong *)(pcVar6 + 0x10);
        }
        pcVar6 = local_e8;
        lVar16 = lVar16 - lVar12;
        if (lVar18 < lVar15) {
          lVar16 = -0x8000000000000000;
        }
        if (lVar15 < lVar18) {
          lVar16 = local_c8;
        }
        plVar11 = *(longlong **)(lVar14 + lVar21);
        if ((char)local_f8 == '\0') {
          (**(code **)(*plVar11 + 0x20))(plVar11,&local_a0);
          if (lVar16 < local_a0) {
            (**(code **)(**(longlong **)(lVar14 + lVar21) + 0x60))
                      (*(longlong **)(lVar14 + lVar21),&local_98);
            (**(code **)(**(longlong **)(lVar14 + lVar21) + 0x20))
                      (*(longlong **)(lVar14 + lVar21),&local_b8);
            if (*(longlong *)(pcVar6 + 0x28) <= local_90) {
              lVar12 = -0x8000000000000000;
              if (local_90 <= *(longlong *)(pcVar6 + 0x28)) {
                lVar12 = *(longlong *)(pcVar6 + 0x20) - (local_98 + local_b8);
              }
              goto LAB_147806e35;
            }
            goto LAB_147806e3e;
          }
LAB_147807156:
          lVar12 = *(longlong *)(lVar14 + lVar21);
          lVar21 = *(longlong *)(lVar14 + 8 + lVar21);
          if (lVar21 != 0) {
            LOCK();
            *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
            UNLOCK();
          }
          plVar11 = (longlong *)local_e0[1];
          *local_e0 = lVar12;
          local_e0[1] = lVar21;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar11 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
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
          plVar11 = local_d8;
          if (-uVar17 != local_4c) {
            FUN_14780b53a(local_d8);
            goto LAB_147807277;
          }
          break;
        }
        (**(code **)(*plVar11 + 0x20))(plVar11,&local_c0);
        if (local_c0 <= lVar16) goto LAB_147807156;
        (**(code **)(**(longlong **)(lVar14 + lVar21) + 0x60))
                  (*(longlong **)(lVar14 + lVar21),&local_b0);
        if (CONCAT44(uStack_a4,uStack_a8) <= *(longlong *)(pcVar6 + 0x10)) {
          lVar12 = -0x8000000000000000;
          if (*(longlong *)(pcVar6 + 0x10) <= CONCAT44(uStack_a4,uStack_a8)) {
            lVar12 = CONCAT44(uStack_ac,local_b0) - *(longlong *)(pcVar6 + 8);
          }
LAB_147806e35:
          if (lVar12 < lVar16) goto LAB_147807156;
        }
LAB_147806e3e:
        uVar17 = uVar17 - 1;
        iVar20 = iVar20 + 1;
        lVar21 = lVar21 + 0x10;
      } while (iVar20 < (int)local_50);
    }
  }
LAB_147806ecd:
  iVar20 = local_54;
  plVar11 = local_e0;
  lVar21 = local_f0;
  lVar14 = (longlong)local_54;
  if (lVar14 != 0) {
    lVar12 = local_f0 + 0x50;
    _Dst = *(void **)(local_f0 + 0x50);
    FUN_14780b249(_Dst,local_54);
    iVar5 = *(int *)(lVar21 + 0x58) - iVar20;
    iVar9 = iVar20;
    if (iVar5 != 0) {
      memmove(_Dst,(void *)(lVar14 * 0x10 + (longlong)_Dst),(longlong)iVar5 << 4);
      iVar9 = *(int *)(lVar21 + 0x58);
    }
    *(int *)(lVar21 + 0x58) = iVar9 - iVar20;
    FUN_14780b116(lVar12);
  }
  cVar4 = '\0';
  if (*plVar11 == 0) {
    if (local_54 == 0) {
      cVar4 = '\x01';
    }
    else {
      cVar4 = (*(int *)(lVar21 + 0x58) == 0) + '\x01';
    }
  }
  LeaveCriticalSection(local_d0);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return cVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147807386 FUN_147807386 body=437 status=ok
// SIG undefined FUN_147807386(void)

ulonglong FUN_147807386(longlong param_1,longlong *param_2,char param_3,longlong param_4)

{
  longlong *plVar1;
  void *_Dst;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_88 [40];
  LPCRITICAL_SECTION local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
  EnterCriticalSection(lpCriticalSection);
  lVar7 = (longlong)*(int *)(param_1 + 0x58);
  uVar6 = 0;
  if (0 < lVar7) {
    plVar1 = (longlong *)(param_1 + 0x50);
    local_60 = lpCriticalSection;
    if (param_3 == '\0') {
      uVar5 = lVar7 + 1;
      lVar7 = lVar7 << 4;
      do {
        lVar7 = lVar7 + -0x10;
        (**(code **)(**(longlong **)(*plVar1 + lVar7) + 0x60))
                  (*(longlong **)(*plVar1 + lVar7),&local_58);
        if ((local_50 < param_2[1]) || ((local_50 == param_2[1] && (local_58 < *param_2))))
        goto LAB_1478074ab;
        uVar5 = uVar5 - 1;
        lpCriticalSection = local_60;
      } while (1 < uVar5);
    }
    else {
      uVar5 = lVar7 + 1;
      lVar7 = lVar7 << 4;
      do {
        lVar7 = lVar7 + -0x10;
        (**(code **)(**(longlong **)(*plVar1 + lVar7) + 0x60))
                  (*(longlong **)(*plVar1 + lVar7),&local_58);
        if ((param_2[1] < local_50) || ((local_50 == param_2[1] && (*param_2 < local_58))))
        goto LAB_1478074ab;
        uVar5 = uVar5 - 1;
        lpCriticalSection = local_60;
      } while (1 < uVar5);
    }
  }
  goto LAB_147807478;
LAB_1478074ab:
  lpCriticalSection = local_60;
  uVar4 = (int)uVar5 - 2;
  if (-1 < (int)uVar4) {
    uVar6 = (ulonglong)(uVar4 & 0x7fffffff);
    lVar7 = uVar6 << 4;
    lVar8 = 0;
    uVar6 = uVar6 + 1;
    do {
      (**(code **)(**(longlong **)(*plVar1 + lVar7) + 0x20))
                (*(longlong **)(*plVar1 + lVar7),&local_58);
      lVar8 = lVar8 + local_58;
      if (param_4 < lVar8) {
        _Dst = *(void **)(param_1 + 0x50);
        iVar9 = (int)uVar6;
        FUN_14780b249(_Dst,uVar6 & 0xffffffff);
        iVar3 = iVar9;
        if (*(int *)(param_1 + 0x58) != iVar9) {
          memmove(_Dst,(void *)((uVar6 & 0xffffffff) * 0x10 + (longlong)_Dst),
                  (longlong)(*(int *)(param_1 + 0x58) - iVar9) << 4);
          iVar3 = *(int *)(param_1 + 0x58);
        }
        *(int *)(param_1 + 0x58) = iVar3 - iVar9;
        FUN_14780b116(plVar1);
        goto LAB_147807478;
      }
      lVar7 = lVar7 + -0x10;
      uVar5 = uVar6 - 1;
      bVar2 = 0 < (longlong)uVar6;
      uVar6 = uVar5;
    } while (uVar5 != 0 && bVar2);
    uVar6 = 0;
  }
LAB_147807478:
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 147807548 FUN_147807548 body=436 status=ok
// SIG undefined FUN_147807548(void)

ulonglong FUN_147807548(longlong param_1,longlong *param_2,char param_3,longlong param_4)

{
  longlong *plVar1;
  void *_Dst;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_88 [40];
  LPCRITICAL_SECTION local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
  EnterCriticalSection(lpCriticalSection);
  lVar7 = (longlong)*(int *)(param_1 + 0x58);
  uVar6 = 0;
  if (0 < lVar7) {
    plVar1 = (longlong *)(param_1 + 0x50);
    local_60 = lpCriticalSection;
    if (param_3 == '\0') {
      uVar5 = lVar7 + 1;
      lVar7 = lVar7 << 4;
      do {
        lVar7 = lVar7 + -0x10;
        (**(code **)(**(longlong **)(*plVar1 + lVar7) + 0x18))
                  (*(longlong **)(*plVar1 + lVar7),&local_58);
        if ((local_50 < param_2[1]) || ((local_50 == param_2[1] && (local_58 < *param_2))))
        goto LAB_14780766d;
        uVar5 = uVar5 - 1;
        lpCriticalSection = local_60;
      } while (1 < uVar5);
    }
    else {
      uVar5 = lVar7 + 1;
      lVar7 = lVar7 << 4;
      do {
        lVar7 = lVar7 + -0x10;
        (**(code **)(**(longlong **)(*plVar1 + lVar7) + 0x18))
                  (*(longlong **)(*plVar1 + lVar7),&local_58);
        if ((param_2[1] < local_50) || ((local_50 == param_2[1] && (*param_2 < local_58))))
        goto LAB_14780766d;
        uVar5 = uVar5 - 1;
        lpCriticalSection = local_60;
      } while (1 < uVar5);
    }
  }
  goto LAB_14780763a;
LAB_14780766d:
  lpCriticalSection = local_60;
  uVar4 = (int)uVar5 - 2;
  if (-1 < (int)uVar4) {
    uVar6 = (ulonglong)(uVar4 & 0x7fffffff);
    lVar7 = uVar6 << 4;
    lVar8 = 0;
    uVar6 = uVar6 + 1;
    do {
      (**(code **)**(undefined8 **)(*plVar1 + lVar7))(*(undefined8 **)(*plVar1 + lVar7),&local_58);
      lVar8 = lVar8 + local_58;
      if (param_4 < lVar8) {
        _Dst = *(void **)(param_1 + 0x50);
        iVar9 = (int)uVar6;
        FUN_14780b1b7(_Dst,uVar6 & 0xffffffff);
        iVar3 = iVar9;
        if (*(int *)(param_1 + 0x58) != iVar9) {
          memmove(_Dst,(void *)((uVar6 & 0xffffffff) * 0x10 + (longlong)_Dst),
                  (longlong)(*(int *)(param_1 + 0x58) - iVar9) << 4);
          iVar3 = *(int *)(param_1 + 0x58);
        }
        *(int *)(param_1 + 0x58) = iVar3 - iVar9;
        FUN_14780a2da(plVar1);
        goto LAB_14780763a;
      }
      lVar7 = lVar7 + -0x10;
      uVar5 = uVar6 - 1;
      bVar2 = 0 < (longlong)uVar6;
      uVar6 = uVar5;
    } while (uVar5 != 0 && bVar2);
    uVar6 = 0;
  }
LAB_14780763a:
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 147807716 FUN_147807716 body=437 status=ok
// SIG undefined FUN_147807716(void)

ulonglong FUN_147807716(longlong param_1,longlong *param_2,char param_3,longlong param_4)

{
  longlong *plVar1;
  void *_Dst;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_88 [40];
  LPCRITICAL_SECTION local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x28);
  EnterCriticalSection(lpCriticalSection);
  lVar7 = (longlong)*(int *)(param_1 + 0x58);
  uVar6 = 0;
  if (0 < lVar7) {
    plVar1 = (longlong *)(param_1 + 0x50);
    local_60 = lpCriticalSection;
    if (param_3 == '\0') {
      uVar5 = lVar7 + 1;
      lVar7 = lVar7 << 4;
      do {
        lVar7 = lVar7 + -0x10;
        (**(code **)(**(longlong **)(*plVar1 + lVar7) + 0x18))
                  (*(longlong **)(*plVar1 + lVar7),&local_58);
        if ((local_50 < param_2[1]) || ((local_50 == param_2[1] && (local_58 < *param_2))))
        goto LAB_14780783b;
        uVar5 = uVar5 - 1;
        lpCriticalSection = local_60;
      } while (1 < uVar5);
    }
    else {
      uVar5 = lVar7 + 1;
      lVar7 = lVar7 << 4;
      do {
        lVar7 = lVar7 + -0x10;
        (**(code **)(**(longlong **)(*plVar1 + lVar7) + 0x18))
                  (*(longlong **)(*plVar1 + lVar7),&local_58);
        if ((param_2[1] < local_50) || ((local_50 == param_2[1] && (*param_2 < local_58))))
        goto LAB_14780783b;
        uVar5 = uVar5 - 1;
        lpCriticalSection = local_60;
      } while (1 < uVar5);
    }
  }
  goto LAB_147807808;
LAB_14780783b:
  lpCriticalSection = local_60;
  uVar4 = (int)uVar5 - 2;
  if (-1 < (int)uVar4) {
    uVar6 = (ulonglong)(uVar4 & 0x7fffffff);
    lVar7 = uVar6 << 4;
    lVar8 = 0;
    uVar6 = uVar6 + 1;
    do {
      (**(code **)(**(longlong **)(*plVar1 + lVar7) + 8))(*(longlong **)(*plVar1 + lVar7),&local_58)
      ;
      lVar8 = lVar8 + local_58;
      if (param_4 < lVar8) {
        _Dst = *(void **)(param_1 + 0x50);
        iVar9 = (int)uVar6;
        FUN_14780b200(_Dst,uVar6 & 0xffffffff);
        iVar3 = iVar9;
        if (*(int *)(param_1 + 0x58) != iVar9) {
          memmove(_Dst,(void *)((uVar6 & 0xffffffff) * 0x10 + (longlong)_Dst),
                  (longlong)(*(int *)(param_1 + 0x58) - iVar9) << 4);
          iVar3 = *(int *)(param_1 + 0x58);
        }
        *(int *)(param_1 + 0x58) = iVar3 - iVar9;
        FUN_14780a9ec(plVar1);
        goto LAB_147807808;
      }
      lVar7 = lVar7 + -0x10;
      uVar5 = uVar6 - 1;
      bVar2 = 0 < (longlong)uVar6;
      uVar6 = uVar5;
    } while (uVar5 != 0 && bVar2);
    uVar6 = 0;
  }
LAB_147807808:
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 147807998 FUN_147807998 body=45 status=ok
// SIG undefined FUN_147807998(void)

longlong FUN_147807998(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145e1ac52(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478079c6 FUN_1478079c6 body=45 status=ok
// SIG undefined FUN_1478079c6(void)

longlong FUN_1478079c6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_145e1ac52(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478079f6 FUN_1478079f6 body=150 status=ok
// SIG undefined FUN_1478079f6(void)

undefined4 FUN_1478079f6(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (longlong *)0x0;
  plStack_30 = (longlong *)0x0;
  uVar4 = FUN_14780ac48(param_1 + 0x1e0);
  if ((char)uVar4 != '\0') {
    (**(code **)(*local_38 + 0x60))(local_38,&local_48);
    *param_2 = local_48;
    param_2[1] = uStack_44;
    param_2[2] = uStack_40;
    param_2[3] = uStack_3c;
  }
  plVar3 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147807a8e FUN_147807a8e body=33 status=ok
// SIG undefined FUN_147807a8e(void)

bool FUN_147807a8e(longlong param_1,longlong param_2)

{
  FUN_14780ae58(param_1 + 0x1e0);
  return 0 < *(int *)(param_2 + 8);
}



// FUNCTION 147807ab0 FUN_147807ab0 body=30 status=ok
// SIG undefined FUN_147807ab0(void)

bool FUN_147807ab0(longlong param_1,longlong param_2)

{
  FUN_14780874a(param_1 + 0x28);
  return 0 < *(int *)(param_2 + 8);
}



// FUNCTION 147807b2c FUN_147807b2c body=38 status=ok
// SIG undefined FUN_147807b2c(void)

undefined8 FUN_147807b2c(undefined8 param_1,int param_2)

{
  FUN_147805a4c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147807bee FUN_147807bee body=59 status=ok
// SIG undefined FUN_147807bee(void)

undefined8 FUN_147807bee(longlong *param_1)

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



// FUNCTION 147807d34 FUN_147807d34 body=46 status=ok
// SIG undefined FUN_147807d34(void)

void FUN_147807d34(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x78) = 0;
  if (*(longlong *)(param_2 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_145a369d8(param_2 + 0x30);
  return;
}



// FUNCTION 147807d78 FUN_147807d78 body=88 status=ok
// SIG undefined FUN_147807d78(void)

undefined1 FUN_147807d78(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar14);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[4];
      uVar8 = puVar1[5];
      uVar9 = puVar1[6];
      uVar10 = puVar1[7];
      uVar11 = *(undefined4 *)((longlong)puVar1 + 0x1f);
      uVar12 = *(undefined4 *)((longlong)puVar1 + 0x23);
      uVar13 = *(undefined4 *)((longlong)puVar1 + 0x27);
      lVar2 = param_2 + 0x30 + lVar14;
      *(undefined4 *)(lVar2 + -0x15) = *(undefined4 *)((longlong)puVar1 + 0x1b);
      *(undefined4 *)(lVar2 + -0x11) = uVar11;
      *(undefined4 *)(lVar2 + -0xd) = uVar12;
      *(undefined4 *)(lVar2 + -9) = uVar13;
      *(undefined4 *)(lVar2 + -0x20) = uVar7;
      *(undefined4 *)(lVar2 + -0x1c) = uVar8;
      *(undefined4 *)(lVar2 + -0x18) = uVar9;
      *(undefined4 *)(lVar2 + -0x14) = uVar10;
      *(undefined4 *)(lVar2 + -0x30) = uVar3;
      *(undefined4 *)(lVar2 + -0x2c) = uVar4;
      *(undefined4 *)(lVar2 + -0x28) = uVar5;
      *(undefined4 *)(lVar2 + -0x24) = uVar6;
      FUN_147807ed0();
      lVar14 = lVar14 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147807df8 FUN_147807df8 body=59 status=ok
// SIG undefined FUN_147807df8(void)

undefined8 FUN_147807df8(longlong *param_1)

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



// FUNCTION 147807e44 FUN_147807e44 body=62 status=ok
// SIG undefined FUN_147807e44(void)

void FUN_147807e44(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x80) == '\x01') {
    *(undefined4 *)(param_2 + 0x78) = 0;
    if (*(longlong *)(param_2 + 0x70) != 0) {
      FUN_1400020a8();
    }
    FUN_145a369d8(param_2 + 0x30);
    *(undefined1 *)(param_2 + 0x80) = 0;
  }
  return;
}



// FUNCTION 147807ed0 FUN_147807ed0 body=122 status=ok
// SIG undefined FUN_147807ed0(void)

longlong FUN_147807ed0(longlong param_1,longlong param_2)

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
    FUN_147807f4a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147807f4a FUN_147807f4a body=201 status=ok
// SIG undefined FUN_147807f4a(void)

undefined8 * FUN_147807f4a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145a36a10(param_1,(ulonglong)uVar1);
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
          FUN_147808014(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 10;
        puVar6 = puVar6 + 10;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 147808014 FUN_147808014 body=116 status=ok
// SIG undefined FUN_147808014(void)

undefined8 * FUN_147808014(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1);
  }
  param_1[4] = param_2[4];
  return param_1;
}



// FUNCTION 14780808a FUN_14780808a body=104 status=ok
// SIG undefined FUN_14780808a(void)

void FUN_14780808a(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(int)param_1[1];
  if (0 < (longlong)uVar4) {
    lVar3 = uVar4 * 0x10 + -8;
    do {
      if (((*(longlong *)(*param_1 + -8 + lVar3) == 0) ||
          (lVar1 = *(longlong *)(*param_1 + lVar3), lVar1 == 0)) || (*(int *)(lVar1 + 8) < 1)) {
        FUN_1478080f2(param_1,(int)uVar4 + -1);
        FUN_147808152(param_1);
      }
      lVar3 = lVar3 + -0x10;
      bVar2 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 1478080f2 FUN_1478080f2 body=95 status=ok
// SIG undefined FUN_1478080f2(void)

void FUN_1478080f2(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 8 + (longlong)(int)param_2 * 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar4 = (int)param_1[1];
  if (~param_2 + iVar4 != 0) {
    _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar4) << 4);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 147808152 FUN_147808152 body=62 status=ok
// SIG undefined FUN_147808152(void)

void FUN_147808152(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147808190(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147808190 FUN_147808190 body=93 status=ok
// SIG undefined FUN_147808190(void)

ulonglong FUN_147808190(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1478081ee FUN_1478081ee body=38 status=ok
// SIG undefined FUN_1478081ee(void)

undefined8 FUN_1478081ee(undefined8 param_1,int param_2)

{
  FUN_147808272();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14780821a FUN_14780821a body=43 status=ok
// SIG undefined FUN_14780821a(void)

undefined8 FUN_14780821a(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  cVar1 = FUN_144a76f74(param_1 + 0x20,1,0);
  if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
  }
  return uVar2;
}



// FUNCTION 147808272 FUN_147808272 body=142 status=ok
// SIG undefined FUN_147808272(void)

void FUN_147808272(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a58a5a0;
  plVar3 = (longlong *)param_1[0x18];
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
  if (*(char *)(param_1 + 0x15) == '\x01') {
    *(undefined4 *)(param_1 + 0x14) = 0;
    if (param_1[0x13] != 0) {
      FUN_1400020a8();
    }
    FUN_145a369d8(param_1 + 0xb);
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147808300 FUN_147808300 body=141 status=ok
// SIG undefined FUN_147808300(void)

ulonglong FUN_147808300(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if ((*(int *)(param_1 + 0x60) < 1) || (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x60))) {
    uVar2 = *param_2;
    lVar3 = param_2[1];
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    iVar1 = *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x5c) < iVar1 + 1U) {
      FUN_147808a0a((longlong *)(param_1 + 0x50),iVar1);
    }
    lVar4 = *(longlong *)(param_1 + 0x50);
    *(undefined8 *)(lVar4 + (longlong)iVar1 * 0x10) = uVar2;
    *(longlong *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = lVar3;
    uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    uVar5 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return uVar5 & 0xffffffff;
}



// FUNCTION 147808392 FUN_147808392 body=43 status=ok
// SIG undefined FUN_147808392(void)

undefined4 FUN_147808392(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  uVar1 = *(undefined4 *)(param_1 + 100);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 1478083be FUN_1478083be body=38 status=ok
// SIG undefined FUN_1478083be(void)

undefined8 FUN_1478083be(undefined8 param_1,int param_2)

{
  FUN_147805bf6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478083e4 FUN_1478083e4 body=61 status=ok
// SIG undefined FUN_1478083e4(void)

undefined4 * FUN_1478083e4(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x78);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  uVar2 = *(undefined4 *)(param_1 + 0x70);
  uVar3 = *(undefined4 *)(param_1 + 0x74);
  *param_2 = *(undefined4 *)(param_1 + 0x68);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return param_2;
}



// FUNCTION 147808422 FUN_147808422 body=66 status=ok
// SIG undefined FUN_147808422(void)

void FUN_147808422(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x68) = 0x8000000000000000;
  *(undefined8 *)(param_1 + 0x78) = 0xbff0000000000000;
                    /* WARNING: Could not recover jumptable at 0x00014780845d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 147808464 FUN_147808464 body=213 status=ok
// SIG undefined FUN_147808464(void)

ulonglong FUN_147808464(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  longlong *plVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar5 = 0;
  }
  else {
    plVar6 = (longlong *)(param_1 + 0x30);
    lVar3 = *(longlong *)*plVar6;
    plVar4 = (longlong *)((longlong *)*plVar6)[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar3 != 0);
    if (lVar3 != 0) {
      FUN_147808a90(plVar6,0);
      FUN_147808b06(plVar6);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)param_2[1];
      *param_2 = lVar3;
      param_2[1] = (longlong)plVar4;
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
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar5 & 0xffffffff;
}



// FUNCTION 14780853a FUN_14780853a body=180 status=ok
// SIG undefined FUN_14780853a(void)

ulonglong FUN_14780853a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (*(int *)(param_1 + 0x38) == 0) {
LAB_1478085b6:
    uVar6 = 0;
    goto LAB_1478085b8;
  }
  lVar3 = **(longlong **)(param_1 + 0x30);
  plVar4 = (longlong *)(*(longlong **)(param_1 + 0x30))[1];
  if (plVar4 == (longlong *)0x0) {
    if (lVar3 == 0) goto LAB_1478085b6;
LAB_147808579:
    plVar5 = (longlong *)param_2[1];
    *param_2 = lVar3;
    param_2[1] = (longlong)plVar4;
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
    uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if (plVar4 == (longlong *)0x0) goto LAB_1478085b8;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (lVar3 != 0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      goto LAB_147808579;
    }
    uVar6 = 0;
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_1478085b8:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar6 & 0xffffffff;
}



// FUNCTION 1478085ee FUN_1478085ee body=347 status=ok
// SIG undefined FUN_1478085ee(void)

ulonglong FUN_1478085ee(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar7 = *(int *)(param_1 + 0x38);
  if (iVar7 == 0) {
    uVar9 = 0;
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0x30);
    lVar3 = *plVar8;
    plVar4 = (longlong *)plVar8[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar7 = *(int *)(param_1 + 0x38);
      plVar8 = *(longlong **)(param_1 + 0x30);
    }
    lVar5 = plVar8[(longlong)(iVar7 + -1) * 2];
    plVar8 = (longlong *)plVar8[(longlong)(iVar7 + -1) * 2 + 1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),lVar5 != 0 && lVar3 != 0);
    if (lVar5 != 0 && lVar3 != 0) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)param_2[1];
      *param_2 = lVar3;
      param_2[1] = (longlong)plVar4;
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
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)param_3[1];
      *param_3 = lVar5;
      param_3[1] = (longlong)plVar8;
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
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar4 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar9 & 0xffffffff;
}



// FUNCTION 14780874a FUN_14780874a body=312 status=ok
// SIG undefined FUN_14780874a(void)

void FUN_14780874a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [40];
  longlong local_80;
  LPCRITICAL_SECTION local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(local_78);
  local_80 = (longlong)*(int *)(param_1 + 0x38);
  if (0 < local_80) {
    local_80 = local_80 << 4;
    lVar8 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_58);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar8);
        (**(code **)(*plVar2 + 0x10))(plVar2,&local_60);
        uVar6 = local_50;
        lVar9 = local_60 + local_58;
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar8);
        (**(code **)(*plVar2 + 0x30))(plVar2,&local_70);
        uVar5 = local_68;
        uVar4 = local_70;
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_147808ba8(param_2,iVar1);
        }
        lVar3 = *param_2;
        lVar7 = (longlong)iVar1 * 0x30;
        *(undefined1 *)(lVar3 + lVar7) = 1;
        *(undefined8 *)(lVar3 + 8 + lVar7) = uVar4;
        *(undefined8 *)(lVar3 + 0x10 + lVar7) = uVar5;
        *(undefined1 *)(lVar3 + 0x18 + lVar7) = 0;
        *(longlong *)(lVar3 + 0x20 + lVar7) = lVar9;
        *(undefined8 *)(lVar3 + 0x28 + lVar7) = uVar6;
      }
      lVar8 = lVar8 + 0x10;
    } while (local_80 != lVar8);
  }
  LeaveCriticalSection(local_78);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147808884 FUN_147808884 body=84 status=ok
// SIG undefined FUN_147808884(void)

ulonglong FUN_147808884(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((*(int *)(param_1 + 0x38) == 0) ||
     (puVar1 = (undefined8 *)(param_1 + 0x30), *(longlong *)*puVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    FUN_147808a90(puVar1,0);
    FUN_147808b06(puVar1);
    uVar2 = CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar2 & 0xffffffff;
}



// FUNCTION 1478088d8 FUN_1478088d8 body=45 status=ok
// SIG undefined FUN_1478088d8(void)

longlong FUN_1478088d8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_147805bf6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147808906 FUN_147808906 body=79 status=ok
// SIG undefined FUN_147808906(void)

void FUN_147808906(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  FUN_147808960(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    FUN_1478089aa(param_1 + 0x50,0);
  }
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
                    /* WARNING: Could not recover jumptable at 0x000147808941. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return;
}



// FUNCTION 147808960 FUN_147808960 body=73 status=ok
// SIG undefined FUN_147808960(void)

void FUN_147808960(longlong param_1,int param_2)

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



// FUNCTION 1478089aa FUN_1478089aa body=96 status=ok
// SIG undefined FUN_1478089aa(void)

void FUN_1478089aa(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 147808a0a FUN_147808a0a body=132 status=ok
// SIG undefined FUN_147808a0a(void)

void FUN_147808a0a(longlong param_1,int param_2)

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



// FUNCTION 147808a90 FUN_147808a90 body=118 status=ok
// SIG undefined FUN_147808a90(void)

void FUN_147808a90(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 147808b06 FUN_147808b06 body=63 status=ok
// SIG undefined FUN_147808b06(void)

void FUN_147808b06(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147808b46(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 147808b46 FUN_147808b46 body=97 status=ok
// SIG undefined FUN_147808b46(void)

ulonglong FUN_147808b46(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147808ba8 FUN_147808ba8 body=147 status=ok
// SIG undefined FUN_147808ba8(void)

void FUN_147808ba8(longlong param_1,int param_2)

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



// FUNCTION 147808c3c FUN_147808c3c body=240 status=ok
// SIG undefined FUN_147808c3c(void)

ulonglong FUN_147808c3c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    param_1 = (longlong *)*param_1;
    plVar10 = param_1;
    do {
      plVar7 = (longlong *)plVar10[1];
      if (plVar7 == (longlong *)0x0) {
LAB_147808c8a:
        plVar7 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_147808c8a;
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
      }
      lVar8 = *plVar10;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 == (longlong *)0x0) {
LAB_147808cd0:
        lVar9 = 0;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_147808cd0;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
        lVar9 = *param_2;
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
      if (plVar7 == (longlong *)0x0) {
        lVar8 = 0;
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
      if (lVar8 == lVar9) {
        return (ulonglong)((longlong)plVar10 - (longlong)param_1) >> 4 & 0xffffffff;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != param_1 + (longlong)(int)lVar4 * 2);
  }
  return 0xffffffff;
}



// FUNCTION 147808d2c FUN_147808d2c body=132 status=ok
// SIG undefined FUN_147808d2c(void)

void FUN_147808d2c(longlong param_1,int param_2)

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



// FUNCTION 147808db2 FUN_147808db2 body=173 status=ok
// SIG undefined FUN_147808db2(void)

void FUN_147808db2(longlong *param_1,undefined4 param_2,undefined8 param_3)

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
        goto LAB_147808e39;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_147808e39:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 147808e60 FUN_147808e60 body=240 status=ok
// SIG undefined FUN_147808e60(void)

ulonglong FUN_147808e60(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    param_1 = (longlong *)*param_1;
    plVar10 = param_1;
    do {
      plVar7 = (longlong *)plVar10[1];
      if (plVar7 == (longlong *)0x0) {
LAB_147808eae:
        plVar7 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_147808eae;
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
      }
      lVar8 = *plVar10;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 == (longlong *)0x0) {
LAB_147808ef4:
        lVar9 = 0;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_147808ef4;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
        lVar9 = *param_2;
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
      if (plVar7 == (longlong *)0x0) {
        lVar8 = 0;
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
      if (lVar8 == lVar9) {
        return (ulonglong)((longlong)plVar10 - (longlong)param_1) >> 4 & 0xffffffff;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != param_1 + (longlong)(int)lVar4 * 2);
  }
  return 0xffffffff;
}



// FUNCTION 147808f50 FUN_147808f50 body=132 status=ok
// SIG undefined FUN_147808f50(void)

void FUN_147808f50(longlong param_1,int param_2)

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



// FUNCTION 147808fd6 FUN_147808fd6 body=146 status=ok
// SIG undefined FUN_147808fd6(void)

undefined8 * FUN_147808fd6(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined4 *)(param_1 + 0xf) = 0;
    if (param_1[0xe] != 0) {
      FUN_1400020a8();
    }
    FUN_145a369d8(param_1 + 6);
  }
  uVar8 = *param_2;
  uVar9 = param_2[1];
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1f);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x23);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x27);
  *(undefined4 *)((longlong)param_1 + 0x1b) = *(undefined4 *)((longlong)param_2 + 0x1b);
  *(undefined4 *)((longlong)param_1 + 0x1f) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x23) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x27) = uVar7;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  *param_1 = uVar8;
  param_1[1] = uVar9;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  FUN_147807ed0(param_1 + 6,param_2 + 6);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return param_1;
}



// FUNCTION 147809068 FUN_147809068 body=155 status=ok
// SIG undefined FUN_147809068(void)

undefined8 * FUN_147809068(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a58a720;
  uVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[2] = &PTR_FUN_14a58a740;
    param_1[5] = uVar2;
    param_1[6] = 0;
    param_1[7] = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 8) = 0;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[2] = &PTR_FUN_14a58a740;
    param_1[5] = uVar2;
    param_1[6] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    param_1[7] = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 8) = 0;
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  return param_1;
}



// FUNCTION 14780910e FUN_14780910e body=29 status=ok
// SIG undefined FUN_14780910e(void)

undefined8 FUN_14780910e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14780912c FUN_14780912c body=38 status=ok
// SIG undefined FUN_14780912c(void)

undefined8 FUN_14780912c(undefined8 param_1,int param_2)

{
  FUN_147809388();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147809152 FUN_147809152 body=490 status=ok
// SIG undefined FUN_147809152(void)

ulonglong FUN_147809152(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 unaff_RSI;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_71;
  undefined8 local_70;
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1478091c0:
    uVar13 = 0;
  }
  else {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_1478091c0;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar14 = iVar8 == iVar6;
      if (bVar14) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar14);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar13 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      param_2 = (longlong *)*param_2;
      local_70 = *(undefined8 *)(param_1 + 0x28);
      local_71 = (**(code **)(*param_2 + 0x28))(param_2);
      local_58 = param_2[0x17];
      local_50 = param_2[0x18];
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      uVar9 = (**(code **)(*param_2 + 0x20))(param_2);
      uVar10 = (**(code **)(*param_2 + 0x18))(param_2);
      uVar11 = (**(code **)(*param_2 + 0x10))(param_2);
      uVar12 = (**(code **)(*param_2 + 8))(param_2);
      plVar5 = *(longlong **)(param_1 + 0x10);
      local_a8 = uVar10;
      local_a0 = uVar9;
      if (plVar5 == (longlong *)0x0) {
LAB_14780926a:
        local_68 = 0;
        plStack_60 = (longlong *)0x0;
        local_88 = local_70;
        local_90 = local_71;
        local_98 = &local_58;
        cVar7 = FUN_1478005b4(lVar4,&local_68,uVar12,uVar11);
      }
      else {
        iVar8 = (int)plVar5[1];
        do {
          if (iVar8 == 0) goto LAB_14780926a;
          LOCK();
          iVar6 = (int)plVar5[1];
          bVar14 = iVar8 == iVar6;
          if (bVar14) {
            *(int *)(plVar5 + 1) = iVar8 + 1;
            iVar6 = iVar8;
          }
          iVar8 = iVar6;
          UNLOCK();
        } while (!bVar14);
        local_68 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        local_88 = local_70;
        local_90 = local_71;
        local_98 = &local_58;
        plStack_60 = plVar5;
        cVar7 = FUN_1478005b4(lVar4,&local_68,uVar12,uVar11);
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
      if (cVar7 != '\0') {
        *(undefined1 *)(param_1 + 0x30) = 1;
      }
    }
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 147809388 FUN_147809388 body=166 status=ok
// SIG undefined FUN_147809388(void)

void FUN_147809388(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  *param_1 = &PTR_FUN_14a58a740;
  if ((*(char *)(param_1 + 6) == '\0') &&
     (plVar3 = (longlong *)param_1[4], plVar3 != (longlong *)0x0)) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1478093a1;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    lVar4 = param_1[3];
    if (lVar4 != 0) {
      (*(code *)**(undefined8 **)(lVar4 + 0x10))(lVar4 + 0x10,4);
    }
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
LAB_1478093a1:
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001478093ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14780942e FUN_14780942e body=167 status=ok
// SIG undefined FUN_14780942e(void)

void FUN_14780942e(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1478094a9;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1478094a9;
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
LAB_1478094a9:
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
                    /* WARNING: Could not recover jumptable at 0x0001478094c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1478094d6 FUN_1478094d6 body=24 status=ok
// SIG undefined FUN_1478094d6(void)

void FUN_1478094d6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478094ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1478094ee FUN_1478094ee body=29 status=ok
// SIG undefined FUN_1478094ee(void)

undefined8 FUN_1478094ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14780950c FUN_14780950c body=95 status=ok
// SIG undefined FUN_14780950c(void)

void FUN_14780950c(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 8 + (longlong)(int)param_2 * 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar4 = (int)param_1[1];
  if (~param_2 + iVar4 != 0) {
    _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar4) << 4);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 14780956c FUN_14780956c body=62 status=ok
// SIG undefined FUN_14780956c(void)

void FUN_14780956c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1478095aa(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1478095aa FUN_1478095aa body=93 status=ok
// SIG undefined FUN_1478095aa(void)

ulonglong FUN_1478095aa(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147809608 FUN_147809608 body=95 status=ok
// SIG undefined FUN_147809608(void)

void FUN_147809608(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 8 + (longlong)(int)param_2 * 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar4 = (int)param_1[1];
  if (~param_2 + iVar4 != 0) {
    _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar4) << 4);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 147809668 FUN_147809668 body=62 status=ok
// SIG undefined FUN_147809668(void)

void FUN_147809668(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1478096a6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1478096a6 FUN_1478096a6 body=93 status=ok
// SIG undefined FUN_1478096a6(void)

ulonglong FUN_1478096a6(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147809704 FUN_147809704 body=95 status=ok
// SIG undefined FUN_147809704(void)

void FUN_147809704(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  void *_Dst;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 8 + (longlong)(int)param_2 * 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar4 = (int)param_1[1];
  if (~param_2 + iVar4 != 0) {
    _Dst = (void *)(lVar2 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar4) << 4);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 147809764 FUN_147809764 body=62 status=ok
// SIG undefined FUN_147809764(void)

void FUN_147809764(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1478097a2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1478097a2 FUN_1478097a2 body=93 status=ok
// SIG undefined FUN_1478097a2(void)

ulonglong FUN_1478097a2(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 147809800 FUN_147809800 body=162 status=ok
// SIG undefined FUN_147809800(void)

void FUN_147809800(longlong *param_1,undefined4 param_2)

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
        goto LAB_14780987e;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14780987e:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1478098a2 FUN_1478098a2 body=130 status=ok
// SIG undefined FUN_1478098a2(void)

undefined8 * FUN_1478098a2(undefined8 *param_1)

{
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a58a7a0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 2;
  param_1[2] = &PTR_FUN_14a58a8e0;
  param_1[6] = &PTR_FUN_14a58a910;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 7),4000);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xffffffff;
  return param_1;
}



// FUNCTION 14780992e FUN_14780992e body=29 status=ok
// SIG undefined FUN_14780992e(void)

undefined8 FUN_14780992e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14780994c FUN_14780994c body=206 status=ok
// SIG undefined FUN_14780994c(void)

undefined8 FUN_14780994c(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined8 uVar5;
  bool bVar6;
  
  cVar1 = *param_1;
  if (((cVar1 == '\x02') || (param_1[0x10] == '\x02')) ||
     ((*(longlong *)(param_1 + 8) <= *(longlong *)(param_1 + 0x18) &&
      ((*(longlong *)(param_1 + 8) != *(longlong *)(param_1 + 0x18) ||
       (param_1[0x10] != '\0' && cVar1 != '\0')))))) {
    cVar2 = *param_2;
    cVar3 = param_2[0x10];
    if (cVar2 != '\x02') {
      if (cVar3 != '\x02') {
        if (*(longlong *)(param_2 + 0x18) < *(longlong *)(param_2 + 8)) {
          return 0;
        }
        if ((*(longlong *)(param_2 + 8) == *(longlong *)(param_2 + 0x18)) &&
           (cVar3 == '\0' || cVar2 == '\0')) {
          return 0;
        }
      }
      cVar4 = param_1[0x10];
      if ((cVar4 != '\x02') && (*(longlong *)(param_1 + 0x18) == *(longlong *)(param_2 + 8))) {
        uVar5 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x18) >> 8),1);
        if (cVar4 == '\x01' && cVar2 == '\0') {
          return uVar5;
        }
        bVar6 = cVar2 == '\x01' && cVar4 == '\0';
        goto LAB_14780999b;
      }
    }
    if ((cVar3 != '\x02' && cVar1 != '\x02') &&
       (*(longlong *)(param_2 + 0x18) == *(longlong *)(param_1 + 8))) {
      uVar5 = CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x18) >> 8),1);
      if (cVar3 == '\x01' && cVar1 == '\0') {
        return uVar5;
      }
      bVar6 = cVar1 == '\x01' && cVar3 == '\0';
LAB_14780999b:
      return CONCAT71((int7)((ulonglong)uVar5 >> 8),bVar6);
    }
  }
  return 0;
}



// FUNCTION 147809a1a FUN_147809a1a body=297 status=ok
// SIG undefined FUN_147809a1a(void)

undefined8 FUN_147809a1a(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong in_RAX;
  uint7 uVar7;
  undefined7 uVar8;
  bool bVar9;
  
  cVar1 = *param_1;
  if (cVar1 != '\x02') {
    cVar2 = param_1[0x10];
    uVar7 = (uint7)((ulonglong)in_RAX >> 8);
    in_RAX = CONCAT71(uVar7,cVar2);
    if (cVar2 != '\x02') {
      if (*(longlong *)(param_1 + 0x18) < *(longlong *)(param_1 + 8)) {
        return 0;
      }
      if ((*(longlong *)(param_1 + 8) == *(longlong *)(param_1 + 0x18)) &&
         (in_RAX = (ulonglong)uVar7 << 8, cVar2 == '\0' || cVar1 == '\0')) {
        return 0;
      }
    }
  }
  cVar2 = *param_2;
  cVar3 = param_2[0x10];
  if (cVar2 == '\x02') {
    uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
    bVar6 = true;
    bVar9 = true;
    if (cVar1 == '\x02' || cVar3 == '\x02') goto LAB_147809ae7;
  }
  else {
    if (cVar3 != '\x02') {
      in_RAX = *(longlong *)(param_2 + 0x18);
      if ((in_RAX < *(longlong *)(param_2 + 8)) ||
         ((*(longlong *)(param_2 + 8) == in_RAX &&
          (in_RAX = CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2 == '\0'),
          cVar3 == '\0' || cVar2 == '\0')))) {
        return 0;
      }
    }
    uVar8 = (undefined7)((ulonglong)in_RAX >> 8);
    bVar6 = true;
    if (param_1[0x10] != '\x02') {
      lVar4 = *(longlong *)(param_1 + 0x18);
      lVar5 = *(longlong *)(param_2 + 8);
      bVar6 = lVar5 < lVar4;
      if (param_1[0x10] == '\x01') {
        bVar6 = lVar5 < lVar4;
        if (cVar2 == '\x01') {
          bVar6 = lVar5 <= lVar4;
        }
        uVar8 = 0;
      }
    }
    bVar9 = true;
    if (cVar1 == '\x02' || cVar3 == '\x02') goto LAB_147809ae7;
  }
  lVar4 = *(longlong *)(param_1 + 8);
  lVar5 = *(longlong *)(param_2 + 0x18);
  bVar9 = lVar4 < lVar5;
  if (cVar1 == '\x01') {
    bVar9 = lVar4 < lVar5;
    if (cVar3 == '\x01') {
      bVar9 = lVar4 <= lVar5;
    }
  }
LAB_147809ae7:
  return CONCAT71(uVar8,bVar6 & bVar9);
}



// FUNCTION 147809b44 FUN_147809b44 body=63 status=ok
// SIG undefined FUN_147809b44(void)

void FUN_147809b44(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147809b84(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,8);
  }
  return;
}



// FUNCTION 147809b84 FUN_147809b84 body=97 status=ok
// SIG undefined FUN_147809b84(void)

ulonglong FUN_147809b84(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 147809be6 FUN_147809be6 body=132 status=ok
// SIG undefined FUN_147809be6(void)

void FUN_147809be6(longlong param_1,int param_2)

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



// FUNCTION 147809c6c FUN_147809c6c body=141 status=ok
// SIG undefined FUN_147809c6c(void)

ulonglong FUN_147809c6c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if ((*(int *)(param_1 + 0x60) < 1) || (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x60))) {
    uVar2 = *param_2;
    lVar3 = param_2[1];
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    iVar1 = *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x5c) < iVar1 + 1U) {
      FUN_14780a1f2((longlong *)(param_1 + 0x50),iVar1);
    }
    lVar4 = *(longlong *)(param_1 + 0x50);
    *(undefined8 *)(lVar4 + (longlong)iVar1 * 0x10) = uVar2;
    *(longlong *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = lVar3;
    uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    uVar5 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return uVar5 & 0xffffffff;
}



// FUNCTION 147809cfe FUN_147809cfe body=43 status=ok
// SIG undefined FUN_147809cfe(void)

undefined4 FUN_147809cfe(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  uVar1 = *(undefined4 *)(param_1 + 100);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 147809d2a FUN_147809d2a body=38 status=ok
// SIG undefined FUN_147809d2a(void)

undefined8 FUN_147809d2a(undefined8 param_1,int param_2)

{
  FUN_147805b12();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147809d50 FUN_147809d50 body=211 status=ok
// SIG undefined FUN_147809d50(void)

ulonglong FUN_147809d50(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  longlong *plVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar5 = 0;
  }
  else {
    plVar6 = (longlong *)(param_1 + 0x30);
    lVar3 = *(longlong *)*plVar6;
    plVar4 = (longlong *)((longlong *)*plVar6)[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar3 != 0);
    if (lVar3 != 0) {
      FUN_14780a278(plVar6);
      FUN_14780a2da(plVar6);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)param_2[1];
      *param_2 = lVar3;
      param_2[1] = (longlong)plVar4;
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
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar5 & 0xffffffff;
}



// FUNCTION 147809e24 FUN_147809e24 body=180 status=ok
// SIG undefined FUN_147809e24(void)

ulonglong FUN_147809e24(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (*(int *)(param_1 + 0x38) == 0) {
LAB_147809ea0:
    uVar6 = 0;
    goto LAB_147809ea2;
  }
  lVar3 = **(longlong **)(param_1 + 0x30);
  plVar4 = (longlong *)(*(longlong **)(param_1 + 0x30))[1];
  if (plVar4 == (longlong *)0x0) {
    if (lVar3 == 0) goto LAB_147809ea0;
LAB_147809e63:
    plVar5 = (longlong *)param_2[1];
    *param_2 = lVar3;
    param_2[1] = (longlong)plVar4;
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
    uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if (plVar4 == (longlong *)0x0) goto LAB_147809ea2;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (lVar3 != 0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      goto LAB_147809e63;
    }
    uVar6 = 0;
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_147809ea2:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar6 & 0xffffffff;
}



// FUNCTION 147809ed8 FUN_147809ed8 body=347 status=ok
// SIG undefined FUN_147809ed8(void)

ulonglong FUN_147809ed8(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar7 = *(int *)(param_1 + 0x38);
  if (iVar7 == 0) {
    uVar9 = 0;
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0x30);
    lVar3 = *plVar8;
    plVar4 = (longlong *)plVar8[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar7 = *(int *)(param_1 + 0x38);
      plVar8 = *(longlong **)(param_1 + 0x30);
    }
    lVar5 = plVar8[(longlong)(iVar7 + -1) * 2];
    plVar8 = (longlong *)plVar8[(longlong)(iVar7 + -1) * 2 + 1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),lVar5 != 0 && lVar3 != 0);
    if (lVar5 != 0 && lVar3 != 0) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)param_2[1];
      *param_2 = lVar3;
      param_2[1] = (longlong)plVar4;
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
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)param_3[1];
      *param_3 = lVar5;
      param_3[1] = (longlong)plVar8;
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
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar4 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar9 & 0xffffffff;
}



// FUNCTION 14780a034 FUN_14780a034 body=311 status=ok
// SIG undefined FUN_14780a034(void)

void FUN_14780a034(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_a8 [40];
  longlong local_80;
  LPCRITICAL_SECTION local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(local_78);
  local_80 = (longlong)*(int *)(param_1 + 0x38);
  if (0 < local_80) {
    local_80 = local_80 << 4;
    lVar9 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar9);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_58);
        puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x30) + lVar9);
        (**(code **)*puVar3)(puVar3,&local_60);
        uVar7 = local_50;
        lVar10 = local_60 + local_58;
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar9);
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_70);
        uVar6 = local_68;
        uVar5 = local_70;
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_147808ba8(param_2,iVar1);
        }
        lVar4 = *param_2;
        lVar8 = (longlong)iVar1 * 0x30;
        *(undefined1 *)(lVar4 + lVar8) = 1;
        *(undefined8 *)(lVar4 + 8 + lVar8) = uVar5;
        *(undefined8 *)(lVar4 + 0x10 + lVar8) = uVar6;
        *(undefined1 *)(lVar4 + 0x18 + lVar8) = 0;
        *(longlong *)(lVar4 + 0x20 + lVar8) = lVar10;
        *(undefined8 *)(lVar4 + 0x28 + lVar8) = uVar7;
      }
      lVar9 = lVar9 + 0x10;
    } while (local_80 != lVar9);
  }
  LeaveCriticalSection(local_78);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14780a16c FUN_14780a16c body=82 status=ok
// SIG undefined FUN_14780a16c(void)

ulonglong FUN_14780a16c(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((*(int *)(param_1 + 0x38) == 0) ||
     (puVar1 = (undefined8 *)(param_1 + 0x30), *(longlong *)*puVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    FUN_14780a278(puVar1);
    FUN_14780a2da(puVar1);
    uVar2 = CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar2 & 0xffffffff;
}



// FUNCTION 14780a1be FUN_14780a1be body=45 status=ok
// SIG undefined FUN_14780a1be(void)

longlong FUN_14780a1be(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_147805b12(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14780a1f2 FUN_14780a1f2 body=132 status=ok
// SIG undefined FUN_14780a1f2(void)

void FUN_14780a1f2(longlong param_1,int param_2)

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



// FUNCTION 14780a278 FUN_14780a278 body=97 status=ok
// SIG undefined FUN_14780a278(void)

void FUN_14780a278(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  longlong *plVar3;
  int iVar4;
  
  _Dst = (void *)*param_1;
  plVar3 = *(longlong **)((longlong)_Dst + 8);
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
  if (*(int *)(param_1 + 1) + -1 == 0) {
    iVar4 = 0;
  }
  else {
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(*(int *)(param_1 + 1) + -1) << 4);
    iVar4 = *(int *)(param_1 + 1) + -1;
  }
  *(int *)(param_1 + 1) = iVar4;
  return;
}



// FUNCTION 14780a2da FUN_14780a2da body=63 status=ok
// SIG undefined FUN_14780a2da(void)

void FUN_14780a2da(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14780a31a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14780a31a FUN_14780a31a body=97 status=ok
// SIG undefined FUN_14780a31a(void)

ulonglong FUN_14780a31a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14780a37c FUN_14780a37c body=141 status=ok
// SIG undefined FUN_14780a37c(void)

ulonglong FUN_14780a37c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if ((*(int *)(param_1 + 0x60) < 1) || (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x60))) {
    uVar2 = *param_2;
    lVar3 = param_2[1];
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    iVar1 = *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x5c) < iVar1 + 1U) {
      FUN_14780a904((longlong *)(param_1 + 0x50),iVar1);
    }
    lVar4 = *(longlong *)(param_1 + 0x50);
    *(undefined8 *)(lVar4 + (longlong)iVar1 * 0x10) = uVar2;
    *(longlong *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = lVar3;
    uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    uVar5 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return uVar5 & 0xffffffff;
}



// FUNCTION 14780a40e FUN_14780a40e body=43 status=ok
// SIG undefined FUN_14780a40e(void)

undefined4 FUN_14780a40e(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  uVar1 = *(undefined4 *)(param_1 + 100);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 14780a43a FUN_14780a43a body=38 status=ok
// SIG undefined FUN_14780a43a(void)

undefined8 FUN_14780a43a(undefined8 param_1,int param_2)

{
  FUN_147805b84();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14780a460 FUN_14780a460 body=211 status=ok
// SIG undefined FUN_14780a460(void)

ulonglong FUN_14780a460(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  longlong *plVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar5 = 0;
  }
  else {
    plVar6 = (longlong *)(param_1 + 0x30);
    lVar3 = *(longlong *)*plVar6;
    plVar4 = (longlong *)((longlong *)*plVar6)[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar3 != 0);
    if (lVar3 != 0) {
      FUN_14780a98a(plVar6);
      FUN_14780a9ec(plVar6);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)param_2[1];
      *param_2 = lVar3;
      param_2[1] = (longlong)plVar4;
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
    }
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar4 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar5 & 0xffffffff;
}



// FUNCTION 14780a534 FUN_14780a534 body=180 status=ok
// SIG undefined FUN_14780a534(void)

ulonglong FUN_14780a534(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if (*(int *)(param_1 + 0x38) == 0) {
LAB_14780a5b0:
    uVar6 = 0;
    goto LAB_14780a5b2;
  }
  lVar3 = **(longlong **)(param_1 + 0x30);
  plVar4 = (longlong *)(*(longlong **)(param_1 + 0x30))[1];
  if (plVar4 == (longlong *)0x0) {
    if (lVar3 == 0) goto LAB_14780a5b0;
LAB_14780a573:
    plVar5 = (longlong *)param_2[1];
    *param_2 = lVar3;
    param_2[1] = (longlong)plVar4;
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
    uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    if (plVar4 == (longlong *)0x0) goto LAB_14780a5b2;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (lVar3 != 0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      goto LAB_14780a573;
    }
    uVar6 = 0;
  }
  LOCK();
  plVar5 = plVar4 + 1;
  *(int *)plVar5 = (int)*plVar5 + -1;
  UNLOCK();
  if ((int)*plVar5 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
LAB_14780a5b2:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar6 & 0xffffffff;
}



// FUNCTION 14780a5e8 FUN_14780a5e8 body=347 status=ok
// SIG undefined FUN_14780a5e8(void)

ulonglong FUN_14780a5e8(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  iVar7 = *(int *)(param_1 + 0x38);
  if (iVar7 == 0) {
    uVar9 = 0;
  }
  else {
    plVar8 = *(longlong **)(param_1 + 0x30);
    lVar3 = *plVar8;
    plVar4 = (longlong *)plVar8[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      iVar7 = *(int *)(param_1 + 0x38);
      plVar8 = *(longlong **)(param_1 + 0x30);
    }
    lVar5 = plVar8[(longlong)(iVar7 + -1) * 2];
    plVar8 = (longlong *)plVar8[(longlong)(iVar7 + -1) * 2 + 1];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),lVar5 != 0 && lVar3 != 0);
    if (lVar5 != 0 && lVar3 != 0) {
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)param_2[1];
      *param_2 = lVar3;
      param_2[1] = (longlong)plVar4;
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
      }
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)param_3[1];
      *param_3 = lVar5;
      param_3[1] = (longlong)plVar8;
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
      }
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar4 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar9 & 0xffffffff;
}



// FUNCTION 14780a744 FUN_14780a744 body=312 status=ok
// SIG undefined FUN_14780a744(void)

void FUN_14780a744(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [40];
  longlong local_80;
  LPCRITICAL_SECTION local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (LPCRITICAL_SECTION)(param_1 + 8);
  EnterCriticalSection(local_78);
  local_80 = (longlong)*(int *)(param_1 + 0x38);
  if (0 < local_80) {
    local_80 = local_80 << 4;
    lVar8 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_58);
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar8);
        (**(code **)(*plVar2 + 8))(plVar2,&local_60);
        uVar6 = local_50;
        lVar9 = local_60 + local_58;
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + lVar8);
        (**(code **)(*plVar2 + 0x18))(plVar2,&local_70);
        uVar5 = local_68;
        uVar4 = local_70;
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_147808ba8(param_2,iVar1);
        }
        lVar3 = *param_2;
        lVar7 = (longlong)iVar1 * 0x30;
        *(undefined1 *)(lVar3 + lVar7) = 1;
        *(undefined8 *)(lVar3 + 8 + lVar7) = uVar4;
        *(undefined8 *)(lVar3 + 0x10 + lVar7) = uVar5;
        *(undefined1 *)(lVar3 + 0x18 + lVar7) = 0;
        *(longlong *)(lVar3 + 0x20 + lVar7) = lVar9;
        *(undefined8 *)(lVar3 + 0x28 + lVar7) = uVar6;
      }
      lVar8 = lVar8 + 0x10;
    } while (local_80 != lVar8);
  }
  LeaveCriticalSection(local_78);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14780a87e FUN_14780a87e body=82 status=ok
// SIG undefined FUN_14780a87e(void)

ulonglong FUN_14780a87e(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((*(int *)(param_1 + 0x38) == 0) ||
     (puVar1 = (undefined8 *)(param_1 + 0x30), *(longlong *)*puVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    FUN_14780a98a(puVar1);
    FUN_14780a9ec(puVar1);
    uVar2 = CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return uVar2 & 0xffffffff;
}



// FUNCTION 14780a8d0 FUN_14780a8d0 body=45 status=ok
// SIG undefined FUN_14780a8d0(void)

longlong FUN_14780a8d0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_147805b84(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14780a904 FUN_14780a904 body=132 status=ok
// SIG undefined FUN_14780a904(void)

void FUN_14780a904(longlong param_1,int param_2)

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



// FUNCTION 14780a98a FUN_14780a98a body=97 status=ok
// SIG undefined FUN_14780a98a(void)

void FUN_14780a98a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  longlong *plVar3;
  int iVar4;
  
  _Dst = (void *)*param_1;
  plVar3 = *(longlong **)((longlong)_Dst + 8);
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
  if (*(int *)(param_1 + 1) + -1 == 0) {
    iVar4 = 0;
  }
  else {
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(*(int *)(param_1 + 1) + -1) << 4);
    iVar4 = *(int *)(param_1 + 1) + -1;
  }
  *(int *)(param_1 + 1) = iVar4;
  return;
}



// FUNCTION 14780a9ec FUN_14780a9ec body=63 status=ok
// SIG undefined FUN_14780a9ec(void)

void FUN_14780a9ec(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14780aa2c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14780aa2c FUN_14780aa2c body=97 status=ok
// SIG undefined FUN_14780aa2c(void)

ulonglong FUN_14780aa2c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14780aa8e FUN_14780aa8e body=141 status=ok
// SIG undefined FUN_14780aa8e(void)

ulonglong FUN_14780aa8e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if ((*(int *)(param_1 + 0x60) < 1) || (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x60))) {
    uVar2 = *param_2;
    lVar3 = param_2[1];
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    iVar1 = *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x5c) < iVar1 + 1U) {
      FUN_14780b01a((longlong *)(param_1 + 0x50),iVar1);
    }
    lVar4 = *(longlong *)(param_1 + 0x50);
    *(undefined8 *)(lVar4 + (longlong)iVar1 * 0x10) = uVar2;
    *(longlong *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = lVar3;
    uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    uVar5 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return uVar5 & 0xffffffff;
}



// FUNCTION 14780ab20 FUN_14780ab20 body=43 status=ok
// SIG undefined FUN_14780ab20(void)

undefined4 FUN_14780ab20(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  uVar1 = *(undefined4 *)(param_1 + 100);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  return uVar1;
}



// FUNCTION 14780ab4c FUN_14780ab4c body=38 status=ok
// SIG undefined FUN_14780ab4c(void)

undefined8 FUN_14780ab4c(undefined8 param_1,int param_2)

{
  FUN_147805aa0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


