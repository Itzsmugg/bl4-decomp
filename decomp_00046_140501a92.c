// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140501a92 FUN_140501a92 body=228 status=ok
// SIG undefined FUN_140501a92(void)

longlong FUN_140501a92(void)

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
  if (DAT_14cb61300 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1486d8e4f;
    local_40 = FUN_1464f24e2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxMovingPlatformActorInterface",&DAT_14cb61300,
                  &DAT_1486d8e4e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb61300;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140501b78 FUN_140501b78 body=171 status=ok
// SIG undefined FUN_140501b78(void)

undefined8 * FUN_140501b78(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *param_1 = &PTR_FUN_14a176fc0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined2 *)((longlong)param_1 + 0x6c) = *(undefined2 *)(param_2 + 0x6c);
  *param_1 = &DAT_14a176f00;
  param_1[0xe] = 0;
  iVar1 = *(int *)(param_2 + 0x78);
  _Src = *(void **)(param_2 + 0x70);
  *(int *)(param_1 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  }
  else {
    FUN_140501c24(param_1 + 0xe,iVar1,0);
    memcpy((void *)param_1[0xe],_Src,(longlong)iVar1 * 0x1c);
  }
  return param_1;
}



// FUNCTION 140501c24 FUN_140501c24 body=337 status=ok
// SIG undefined FUN_140501c24(void)

void FUN_140501c24(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x1c;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140501c99;
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
LAB_140501c99:
    iVar5 = (int)(uVar4 / 0x1c);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x1c,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140501d76 FUN_140501d76 body=269 status=ok
// SIG undefined FUN_140501d76(void)

void FUN_140501d76(longlong param_1,int param_2)

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



// FUNCTION 140501ebc FUN_140501ebc body=49 status=ok
// SIG undefined FUN_140501ebc(void)

void FUN_140501ebc(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x408) + 0x30))(param_1 + 0x408);
  *param_3 = uVar1;
  return;
}



// FUNCTION 140501f00 FUN_140501f00 body=114 status=ok
// SIG undefined FUN_140501f00(void)

undefined8 FUN_140501f00(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 4),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  *param_4 = 1;
  return 1;
}



// FUNCTION 140501f72 FUN_140501f72 body=169 status=ok
// SIG undefined FUN_140501f72(void)

void FUN_140501f72(longlong *param_1,float param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c997b3c) {
    FUN_144b3d300(&DAT_14c997b3c);
    if (DAT_14c997b3c == -1) {
      DAT_14c997b38 = 1.8446743e+19;
      _Init_thread_footer(&DAT_14c997b3c);
    }
  }
  if (*param_1 != 0) {
    FUN_14050201c(*param_1,SUB84((double)(float)(~-(uint)(DAT_14c997b38 < param_2) &
                                                 (uint)(param_2 * param_2) |
                                                -(uint)(DAT_14c997b38 < param_2) & 0x7f7fffff),0));
    return;
  }
  return;
}



// FUNCTION 14050201c FUN_14050201c body=272 status=ok
// SIG undefined FUN_14050201c(void)

void FUN_14050201c(longlong param_1,double param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x40);
  if ((lVar5 != 0) && (1 < *(byte *)(lVar5 + 0x90))) {
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(float *)(lVar5 + 0x19c) = (float)param_2;
    *(byte *)(lVar5 + 0x94) = *(byte *)(lVar5 + 0x94) | 8;
    if ((lVar6 != 0) && (lVar5 = *(longlong *)(lVar6 + 8), lVar5 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar5 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar7 + lVar8) = lVar6;
          *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x00014050209b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar5 + 0x98) + 0x160,lVar6);
      return;
    }
  }
  return;
}



// FUNCTION 140502138 FUN_140502138 body=901 status=ok
// SIG undefined FUN_140502138(void)

void FUN_140502138(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  float fVar14;
  undefined1 auStack_b8 [32];
  float local_98;
  float local_90;
  undefined4 local_88;
  undefined1 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar11 = param_1 + 8;
    if (((*(longlong *)(param_1 + 0x248) == 0) ||
        (plVar10 = *(longlong **)(param_1 + 0x250), plVar10 == (longlong *)0x0)) ||
       ((int)plVar10[1] < 1)) {
      cVar5 = '\0';
    }
    else {
      iVar9 = (int)plVar10[1];
      do {
        if (iVar9 == 0) {
          cVar5 = FUN_140591fd6(0);
          goto LAB_1405021c7;
        }
        LOCK();
        iVar4 = (int)plVar10[1];
        bVar13 = iVar9 == iVar4;
        if (bVar13) {
          *(int *)(plVar10 + 1) = iVar9 + 1;
          iVar4 = iVar9;
        }
        iVar9 = iVar4;
        UNLOCK();
      } while (!bVar13);
      cVar5 = FUN_140591fd6(*(undefined8 *)(param_1 + 0x248));
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
LAB_1405021c7:
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0xb0))(*(longlong **)(param_1 + 0x38),lVar11);
    if ((0 < *(int *)(param_1 + 0x268)) || (0 < *(int *)(param_1 + 0x26c))) {
      fVar14 = (float)DAT_14c759090;
      if (DAT_14c9670a0 == (longlong *)0x0) {
        plVar10 = (longlong *)FUN_14001cc68(0x78,0x10);
        FUN_14593912e(plVar10,1,1);
        DAT_14c9670a0 = plVar10;
      }
      (**(code **)(*DAT_14c9670a0 + 0x50))(DAT_14c9670a0,&local_44);
      plVar10 = *(longlong **)(param_1 + 0x38);
      local_88 = *(undefined4 *)(param_1 + 0x268);
      local_98 = (float)*(int *)(param_1 + 0x274);
      local_60 = (undefined4)DAT_14c964cb0;
      uStack_5c = DAT_14c964cb0._4_4_;
      uStack_58 = (undefined4)DAT_14c964cb8;
      uStack_54 = DAT_14c964cb8._4_4_;
      local_50 = DAT_14c964cc0;
      if (DAT_14c964cc0 != 0) {
        LOCK();
        *(int *)(DAT_14c964cc0 + 8) = *(int *)(DAT_14c964cc0 + 8) + 1;
        UNLOCK();
      }
      local_80 = 0;
      local_90 = fVar14;
      (**(code **)(*plVar10 + 0x50))(plVar10,lVar11,local_44,&local_60);
      plVar10 = *(longlong **)(param_1 + 0x38);
      local_88 = *(undefined4 *)(param_1 + 0x26c);
      local_98 = (float)*(int *)(param_1 + 0x278);
      local_78 = (undefined4)DAT_14c964cc8;
      uStack_74 = DAT_14c964cc8._4_4_;
      uStack_70 = (undefined4)DAT_14c964cd0;
      uStack_6c = DAT_14c964cd0._4_4_;
      local_68 = DAT_14c964cd8;
      if (DAT_14c964cd8 != 0) {
        LOCK();
        *(int *)(DAT_14c964cd8 + 8) = *(int *)(DAT_14c964cd8 + 8) + 1;
        UNLOCK();
      }
      local_80 = 0;
      local_90 = fVar14;
      (**(code **)(*plVar10 + 0x50))(plVar10,lVar11,local_44,&local_78);
    }
    if (((*(char *)(param_1 + 0x299) == '\x01') &&
        (bVar6 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x188))(), bVar6 < 5)) &&
       (((0x19U >> (bVar6 & 0x1f) & 1) != 0 && (cVar5 == '\0')))) {
      plVar10 = *(longlong **)(param_1 + 0x38);
      uVar7 = (**(code **)(*(longlong *)(param_1 + 8) + 0x108))(lVar11);
      uVar8 = (**(code **)(*(longlong *)(param_1 + 8) + 0x100))(lVar11);
      iVar9 = (**(code **)(*plVar10 + 0xb8))(plVar10,lVar11,uVar8,uVar7);
      lVar11 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))();
      if ((lVar11 == 0) ||
         (((bVar6 = *(byte *)(lVar11 + 0x152), bVar6 != 1 &&
           ((6 < bVar6 || ((0x68U >> (bVar6 & 0x1f) & 1) == 0)))) ||
          (lVar11 = *(longlong *)(lVar11 + 0x1f0), lVar11 == 0)))) {
        if (iVar9 != 0) {
LAB_140502480:
          *(undefined1 *)(param_1 + 0x299) = 0;
          *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x29c);
          *(undefined1 *)(param_1 + 0xf0) = 1;
          *(undefined8 *)(param_1 + 0x29c) = 0xffffffffffffffff;
        }
      }
      else if ((longlong)*(int *)(lVar11 + 0x40) != 0) {
        lVar12 = 0;
        do {
          lVar3 = *(longlong *)(*(longlong *)(lVar11 + 0x38) + lVar12);
          if ((lVar3 != 0) && (plVar10 = *(longlong **)(lVar3 + 0x30), plVar10 != (longlong *)0x0))
          {
            cVar5 = (**(code **)(*plVar10 + 0xe48))();
            if ((iVar9 != 0) && (cVar5 != '\0')) goto LAB_140502480;
            break;
          }
          lVar12 = lVar12 + 8;
        } while ((longlong)*(int *)(lVar11 + 0x40) * 8 != lVar12);
      }
    }
    *(undefined8 *)(param_1 + 0x274) = DAT_14c967818;
    *(undefined8 *)(param_1 + 0x268) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405024be FUN_1405024be body=1228 status=ok
// SIG undefined FUN_1405024be(void)

void FUN_1405024be(undefined8 *param_1,longlong param_2,char *param_3,undefined4 param_4)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int *piVar7;
  size_t sVar8;
  int iVar9;
  ulonglong *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  ulonglong *local_180;
  undefined8 local_178;
  undefined4 local_170;
  ulonglong *local_168;
  int local_160;
  undefined1 local_15c;
  undefined1 auStack_15a [2];
  ulonglong local_158 [33];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((((param_1[0x10] != 0) && (*(int *)((longlong)param_1 + 0x7c) != 0)) &&
      (uVar3 = *(uint *)(param_1 + 0xf), -1 < (int)uVar3)) &&
     ((((int)uVar3 < DAT_14c9647dc &&
       (plVar13 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar13 != (longlong *)0x0)) &&
      (((int)plVar13[2] == *(int *)((longlong)param_1 + 0x7c) &&
       ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))))) {
    if (((*(uint *)(plVar13 + 1) & 0x10200000) == 0) && ((longlong *)*plVar13 != (longlong *)0x0)) {
      uVar5 = (**(code **)(*(longlong *)*plVar13 + 0x180))();
    }
    else {
      uVar5 = 0;
    }
    plVar13 = (longlong *)FUN_140502abf(uVar5);
    if (plVar13 != (longlong *)0x0) {
      local_170 = *(undefined4 *)(param_1 + 1);
      local_178 = *param_1;
      cVar2 = (**(code **)(*plVar13 + 0xd8))(plVar13);
      if (cVar2 == *(char *)((longlong)param_1 + 0xe)) {
        iVar4 = *(int *)((longlong)param_1 + 0x74);
        *(int *)((longlong)param_1 + 0x74) = iVar4 + 1;
        uVar6 = (ulonglong)*(int *)(param_1 + 0xd);
        if ((longlong)uVar6 < 1) {
          *(int *)((longlong)param_1 + 0x74) = iVar4;
        }
        else {
          bVar14 = false;
          do {
            lVar11 = uVar6 * 0x10 + -8;
            uVar15 = uVar6;
            while (((lVar17 = param_1[0xc], *(int *)(lVar17 + lVar11) != 0 &&
                    (plVar13 = *(longlong **)(lVar17 + -8 + lVar11), plVar13 != (longlong *)0x0)) &&
                   (local_188 = param_4,
                   cVar2 = (**(code **)(*plVar13 + 0x60))(plVar13,param_1,param_2,param_3),
                   cVar2 != '\0'))) {
              lVar11 = lVar11 + -0x10;
              bVar1 = uVar15 < 2;
              uVar15 = uVar15 - 1;
              if (bVar1) {
                *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + -1;
                if (bVar14) goto LAB_140502971;
                goto LAB_1405025ce;
              }
            }
            uVar6 = uVar15 - 1;
            bVar14 = true;
          } while (1 < uVar15);
          *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + -1;
LAB_140502971:
          FUN_14474d06a(param_1 + 0xc);
        }
LAB_1405025ce:
        plVar13 = (longlong *)param_1[0x10];
        cVar2 = *param_3;
        if (cVar2 == '\x03') {
          puVar10 = *(ulonglong **)(param_3 + 4);
        }
        else if (cVar2 == '\x02') {
          iVar4 = *(int *)(param_3 + 0xc);
          puVar10 = DAT_14cb7c570;
          if ((iVar4 != 1) && (puVar10 = DAT_14cb7c578, iVar4 != 0)) {
            memset(local_158,0,0x100);
            FUN_1407bf796(local_158,0x100,&DAT_149dfc0ac,iVar4);
            FUN_1446ddc76(&local_180,local_158,1);
            puVar10 = local_180;
          }
        }
        else if (cVar2 == '\x01') {
          puVar10 = &DAT_14cb7c580;
          if (*(int *)(param_3 + 0xc) != 0) {
            puVar10 = &DAT_14cb7c588;
          }
          puVar10 = (ulonglong *)*puVar10;
        }
        else {
          local_180 = (ulonglong *)0x0;
          puVar10 = local_180;
        }
        local_180 = puVar10;
        cVar2 = *(char *)(param_2 + 0x38);
        if (cVar2 == '\x03') {
          local_168 = *(ulonglong **)(param_2 + 0x3c);
        }
        else if (cVar2 == '\x02') {
          iVar4 = *(int *)(param_2 + 0x44);
          local_168 = DAT_14cb7c570;
          if ((iVar4 != 1) && (local_168 = DAT_14cb7c578, iVar4 != 0)) {
            memset(local_158,0,0x100);
            FUN_1407bf796(local_158,0x100,&DAT_149dfc0ac,iVar4);
            sVar8 = strlen((char *)local_158);
            iVar4 = (int)sVar8;
            if (iVar4 == 0) {
LAB_140502983:
              uVar15 = 0;
              uVar6 = 0;
            }
            else {
              lVar11 = (longlong)iVar4;
              if (local_158 <= auStack_15a + lVar11 + 1) {
                lVar17 = 0;
                lVar12 = 0;
LAB_140502812:
                if ((byte)(auStack_15a[lVar12 + lVar11 + 1] - 0x30) < 10) goto code_r0x000140502821;
                iVar9 = (int)lVar12;
                if (iVar9 == 0 || iVar4 <= -iVar9) goto LAB_14050284a;
                lVar17 = 0;
                if (((uint)-iVar9 < 0xb) && (auStack_15a[lVar12 + lVar11 + 1] == '_')) {
                  if ((iVar9 != -1) && (*(char *)((longlong)local_158 + lVar12 + lVar11) == '0'))
                  goto LAB_14050284a;
                  lVar16 = 0;
                  do {
                    lVar17 = (longlong)*(char *)((longlong)local_158 + lVar12 + lVar11) +
                             lVar16 * 10;
                    lVar16 = lVar17 + -0x30;
                    lVar12 = lVar12 + 1;
                  } while (lVar12 != 0);
                  if (lVar16 < 0x7fffffff) {
                    iVar4 = iVar4 + iVar9 + -1;
                    lVar17 = lVar17 + -0x2f;
                  }
                  else {
LAB_14050284a:
                    lVar17 = 0;
                  }
                }
                goto LAB_14050284d;
              }
              lVar17 = 0;
LAB_140502855:
              local_15c = 0;
              local_168 = local_158;
              local_160 = iVar4;
              uVar3 = FUN_14001a6c0(&local_168,1);
              uVar6 = lVar17 << 0x20;
              uVar15 = (ulonglong)uVar3;
            }
            local_168 = (ulonglong *)(uVar15 | uVar6);
          }
        }
        else if (cVar2 == '\x01') {
          local_168 = &DAT_14cb7c580;
          if (*(int *)(param_2 + 0x44) != 0) {
            local_168 = &DAT_14cb7c588;
          }
          local_168 = (ulonglong *)*local_168;
        }
        else {
          local_168 = (ulonglong *)0x0;
        }
        piVar7 = (int *)&DAT_14c948618;
        puVar10 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
        if (((*(int *)(param_2 + 0x10) != 0) && (5 < *(int *)(param_2 + 0x14))) &&
           (*(int *)(param_2 + 0x10) != DAT_14c948000)) {
          piVar7 = (int *)(*(longlong *)(param_2 + 0x28) + 0x3c);
          puVar10 = (ulonglong *)(*(longlong *)(param_2 + 0x28) + 0x40);
        }
        uVar6 = *puVar10;
        if ((uVar6 == DAT_14c948034) && (*piVar7 != DAT_14c948030)) {
          FUN_14011791e(local_158,*piVar7,uVar6 >> 0x20);
          uVar6 = local_158[0];
        }
        local_188 = param_4;
        local_158[0] = uVar6;
        (**(code **)(*plVar13 + 0x68))(plVar13,local_158,&local_168,&local_180);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140502821:
  lVar16 = lVar12 + -1;
  lVar12 = lVar12 + -1;
  if ((ulonglong *)((longlong)(auStack_15a + lVar11 + 1) + lVar16) < local_158) {
LAB_14050284d:
    if (iVar4 == 0) goto LAB_140502983;
    goto LAB_140502855;
  }
  goto LAB_140502812;
}



// FUNCTION 14050298c FUN_14050298c body=212 status=ok
// SIG undefined FUN_14050298c(void)

undefined1 FUN_14050298c(longlong param_1,uint *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  uVar4 = *param_2;
  uVar5 = param_2[2];
  if (uVar5 != 0) {
    uVar4 = uVar5 >> 0xd ^ uVar4 - uVar5;
    uVar7 = uVar4 << 8 ^ (-0x61c88647 - uVar5) - uVar4;
    uVar8 = uVar7 >> 0xd ^ (uVar5 - uVar4) - uVar7;
    uVar5 = uVar8 >> 0xc ^ (uVar4 - uVar7) - uVar8;
    uVar4 = uVar5 << 0x10 ^ (uVar7 - uVar8) - uVar5;
    uVar7 = uVar4 >> 5 ^ (uVar8 - uVar5) - uVar4;
    uVar5 = uVar7 >> 3 ^ (uVar5 - uVar4) - uVar7;
    uVar4 = uVar5 << 10 ^ (uVar4 - uVar7) - uVar5;
    uVar4 = uVar4 >> 0xf ^ uVar7 - (uVar5 + uVar4);
  }
  iVar3 = FUN_140502a60((longlong *)(param_1 + 0x78),uVar4);
  if (iVar3 == -1) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x78);
    uVar2 = 0;
    lVar6 = lVar1 + (longlong)iVar3 * 0x70;
    if ((lVar6 != 0) && (lVar1 + (longlong)iVar3 * 0x70 != -0x10)) {
      uVar2 = *(undefined1 *)(lVar6 + 0x60);
    }
  }
  return uVar2;
}



// FUNCTION 140502a60 FUN_140502a60 body=95 status=ok
// SIG undefined FUN_140502a60(void)

int FUN_140502a60(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1 * 0x70;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x68 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140502abf FUN_140502abf body=410 status=ok
// SIG undefined FUN_140502abf(void)

undefined8 FUN_140502abf(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_1 != 0) && (lVar3 = *(longlong *)(param_1 + 0x1f0), lVar3 != 0)) {
    if (DAT_14cb5e538 == 0) {
      local_30 = &local_18;
      local_18 = &LAB_1417c5d06;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1417ad04a;
      local_38 = &LAB_1486a7af7;
      local_40 = &LAB_1464e1631;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x1000000c;
      local_60 = 8;
      local_68 = 0x420;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
      lVar3 = *(longlong *)(param_1 + 0x1f0);
      if (lVar3 == 0) goto LAB_140502c48;
    }
    if (((((DAT_14cb5e538 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) &&
         (*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8)
          == DAT_14cb5e538 + 0x30 && (*(longlong *)(lVar3 + 0x1e0) != 0)))) &&
       ((plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0x1e0) + 0x38), plVar2 != (longlong *)0x0 &&
        ((plVar2 = (longlong *)(**(code **)(*plVar2 + 0x308))(plVar2,0), plVar2 != (longlong *)0x0
         && (lVar3 = (**(code **)(*plVar2 + 0x2b0))(plVar2), lVar3 != 0)))))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
    }
  }
LAB_140502c48:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 140502c6a FUN_140502c6a body=115 status=ok
// SIG undefined FUN_140502c6a(void)

ulonglong FUN_140502c6a(longlong param_1)

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
LAB_140502cc0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140502cc0;
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



// FUNCTION 140502ce8 FUN_140502ce8 body=405 status=ok
// SIG undefined FUN_140502ce8(void)

void FUN_140502ce8(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  undefined8 ***pppuVar9;
  undefined1 auStack_88 [40];
  undefined8 **local_60;
  undefined4 local_58;
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_2 + 0x7c) != 0) {
    uVar1 = *(uint *)(param_2 + 0x78);
    uVar6 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140502d5a;
    puVar7 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar7 != (undefined8 *)0x0) &&
       ((*(int *)(puVar7 + 2) == *(int *)(param_2 + 0x7c) &&
        ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
      uVar6 = *puVar7;
      goto LAB_140502d5a;
    }
  }
  uVar6 = 0;
LAB_140502d5a:
  lVar4 = FUN_140502f56(uVar6);
  if (lVar4 != 0) {
    piVar5 = (int *)&DAT_14c948618;
    puVar8 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
    if (((*(int *)(param_3 + 0x10) != 0) && (5 < *(int *)(param_3 + 0x14))) &&
       (*(int *)(param_3 + 0x10) != DAT_14c948000)) {
      piVar5 = (int *)(*(longlong *)(param_3 + 0x28) + 0x3c);
      puVar8 = (ulonglong *)(*(longlong *)(param_3 + 0x28) + 0x40);
    }
    local_60 = (undefined8 **)*puVar8;
    if (((undefined8 ***)local_60 == DAT_14c948034) && (*piVar5 != DAT_14c948030)) {
      FUN_14011791e(local_50,*piVar5,(ulonglong)local_60 >> 0x20);
      local_60 = local_50[0];
    }
    local_58 = 0xffffffff;
    cVar3 = FUN_140502e7e(lVar4,&local_60,param_1);
    if (cVar3 != '\0') {
      FUN_140459c40(param_3 + 0x38,local_50);
      FUN_140af060e(lVar4,&local_60,local_50);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
      if (pcVar2 != (code *)0x0) {
        pppuVar9 = local_50;
        if (0x18 < local_38) {
          pppuVar9 = (undefined8 ***)local_50[0];
        }
        (*pcVar2)(pppuVar9);
      }
      if (0x18 < local_38) {
        FUN_1400020a8(local_50[0]);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140502e7e FUN_140502e7e body=216 status=ok
// SIG undefined FUN_140502e7e(void)

undefined4 FUN_140502e7e(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = param_1 + 0x10;
  lVar3 = (longlong)(int)param_2[1];
  if ((lVar3 < 0) || (*(int *)(param_1 + 0x918) <= (int)param_2[1])) {
    lVar4 = *param_2;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x910);
    if (*(longlong *)(param_1 + 0x910) == 0) {
      lVar5 = lVar1;
    }
    lVar4 = *param_2;
    if (*(longlong *)(lVar5 + 0x28 + lVar3 * 0x48) == lVar4) {
      lVar5 = lVar5 + lVar3 * 0x48;
LAB_140502eb5:
      if (lVar5 == 0) {
        return 0;
      }
      return CONCAT31((int3)(~*(uint *)(lVar5 + 0x30) >> 8),
                      (*(uint *)(param_3 + 0x20) & ~*(uint *)(lVar5 + 0x30)) == 0);
    }
  }
  if (lVar4 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x910);
    if (*(longlong *)(param_1 + 0x910) == 0) {
      lVar3 = lVar1;
    }
    if ((longlong)*(int *)(param_1 + 0x918) != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(lVar3 + 0x28 + lVar5) == lVar4) {
          uVar2 = (int)(lVar5 >> 3) * 0x38e38e39;
          *(uint *)(param_2 + 1) = uVar2;
          if ((int)uVar2 < 0) {
            return 0;
          }
          if (*(int *)(param_1 + 0x918) <= (int)uVar2) {
            return 0;
          }
          if (*(longlong *)(param_1 + 0x910) != 0) {
            lVar1 = *(longlong *)(param_1 + 0x910);
          }
          lVar5 = lVar1 + (ulonglong)(uVar2 & 0x7fffffff) * 0x48;
          goto LAB_140502eb5;
        }
        lVar5 = lVar5 + 0x48;
      } while ((longlong)*(int *)(param_1 + 0x918) * 0x48 != lVar5);
    }
    *(undefined4 *)(param_2 + 1) = 0xffffffff;
  }
  return 0;
}



// FUNCTION 140502f56 FUN_140502f56 body=480 status=ok
// SIG undefined FUN_140502f56(void)

undefined8 FUN_140502f56(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  if (param_1 != (longlong *)0x0) {
    if (DAT_14c9a4e08 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_1470c76a3;
      local_50 = FUN_1462ab034;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
    }
    lVar1 = (**(code **)(*param_1 + 0x288))(param_1,DAT_14c9a4e08);
    if (lVar1 != 0) {
      if (DAT_14c9a4e08 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_1470c76a3;
        local_50 = FUN_1462ab034;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
      }
      lVar2 = FUN_144718840(lVar1,DAT_14c9a4e08);
      if ((lVar1 != lVar2) && (lVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050314a FUN_14050314a body=16 status=ok
// SIG undefined FUN_14050314a(void)

void FUN_14050314a(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong *plStack_38;
  longlong *plStack_30;
  undefined1 auStack_24 [4];
  ulonglong uStack_20;
  
  if (param_1[1] != 0) {
    FUN_1405036c4();
    return;
  }
  uStack_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = param_2;
  if (param_3 == 0) {
    param_3 = FUN_144938c96(param_2);
  }
  *param_1 = param_3;
  plStack_38 = param_1;
  plStack_30 = param_1 + 1;
  FUN_140503212(param_1 + 3,auStack_24,&plStack_38,0);
  *(byte *)((longlong)param_1 + 0x14) = (byte)*(undefined4 *)(param_2 + 8) >> 5 & 1;
LAB_1405031b9:
  lVar2 = param_2;
  lVar1 = lVar2;
  if (*(longlong *)(lVar2 + 0x20) != 0) goto code_r0x0001405031c8;
  goto LAB_1405031d3;
code_r0x0001405031c8:
  param_2 = *(longlong *)(lVar2 + 0x20);
  if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) != 0) {
    lVar1 = FUN_142840154(lVar2);
LAB_1405031d3:
    if (lVar1 != 0) {
      if ((*(byte *)(lVar1 + 0x2d) & 2) != 0) {
        *(undefined1 *)((longlong)param_1 + 0x14) = 0;
      }
      if ((uStack_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    param_2 = *(longlong *)(lVar2 + 0x20);
  }
  goto LAB_1405031b9;
}



// FUNCTION 14050315a FUN_14050315a body=182 status=ok
// SIG undefined FUN_14050315a(void)

void FUN_14050315a(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = param_2;
  if (param_3 == 0) {
    param_3 = FUN_144938c96(param_2);
  }
  *param_1 = param_3;
  local_38 = param_1;
  local_30 = param_1 + 1;
  FUN_140503212(param_1 + 3,local_24,&local_38,0);
  *(byte *)((longlong)param_1 + 0x14) = (byte)*(undefined4 *)(param_2 + 8) >> 5 & 1;
LAB_1405031b9:
  lVar2 = param_2;
  lVar1 = lVar2;
  if (*(longlong *)(lVar2 + 0x20) != 0) goto code_r0x0001405031c8;
  goto LAB_1405031d3;
code_r0x0001405031c8:
  param_2 = *(longlong *)(lVar2 + 0x20);
  if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) != 0) {
    lVar1 = FUN_142840154(lVar2);
LAB_1405031d3:
    if (lVar1 != 0) {
      if ((*(byte *)(lVar1 + 0x2d) & 2) != 0) {
        *(undefined1 *)((longlong)param_1 + 0x14) = 0;
      }
      if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    param_2 = *(longlong *)(lVar2 + 0x20);
  }
  goto LAB_1405031b9;
}



// FUNCTION 140503212 FUN_140503212 body=343 status=ok
// SIG undefined FUN_140503212(void)

undefined4 *
FUN_140503212(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140503402(param_1,local_50);
  puVar1 = (ulonglong *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_48 = uVar4;
  local_48[1] = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_14050336a(param_1,uVar3,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140503742(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050336a FUN_14050336a body=152 status=ok
// SIG undefined FUN_14050336a(void)

void FUN_14050336a(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_14686a9ac((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_14050338e;
    }
  }
  uVar5 = 0;
LAB_14050338e:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 140503402 FUN_140503402 body=706 status=ok
// SIG undefined FUN_140503402(void)

int * FUN_140503402(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_14482b872(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1405035bb;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_1405035bb:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1405036c4 FUN_1405036c4 body=124 status=ok
// SIG undefined FUN_1405036c4(void)

void FUN_1405036c4(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  longlong *local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (param_2 != 0) {
    if (param_3 == 0) {
      param_3 = FUN_144938c96(param_2);
    }
    local_28 = &local_38;
    local_20 = &local_30;
    local_38 = param_3;
    FUN_140503212(param_1 + 0x18,local_14,&local_28,0);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140503742 FUN_140503742 body=679 status=ok
// SIG undefined FUN_140503742(void)

void FUN_140503742(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1405037a6;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_1405037a6:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = *(ulonglong *)(lVar6 + lVar12 * 0x18);
      uVar2 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x14 + lVar12 * 0x18) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar12 * 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 1405039ea FUN_1405039ea body=203 status=ok
// SIG undefined FUN_1405039ea(void)

void FUN_1405039ea(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  iVar1 = (int)param_2[1];
  uVar3 = uVar2 + iVar1;
  if (uVar2 < uVar3) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_14050411e(param_1,uVar3);
    if (uVar3 < 4) {
      iVar1 = 1;
    }
    else {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar1 = 1 << ((byte)iVar1 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar1)) {
      *(int *)(param_1 + 0x48) = iVar1;
      FUN_140503e74(param_1);
    }
    iVar1 = (int)param_2[1];
  }
  if (iVar1 != 0) {
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 << 3;
    do {
      FUN_140503ab8(param_1,local_2c,lVar4,0);
      lVar4 = lVar4 + 8;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140503ab8 FUN_140503ab8 body=335 status=ok
// SIG undefined FUN_140503ab8(void)

undefined4 *
FUN_140503ab8(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140503c9e(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_140503c08(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140503e74(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140503c08 FUN_140503c08 body=149 status=ok
// SIG undefined FUN_140503c08(void)

void FUN_140503c08(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_146ceabe0(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = (int)plVar2[1];
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_140503c76;
    }
  }
  uVar1 = 0;
LAB_140503c76:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 140503c9e FUN_140503c9e body=470 status=ok
// SIG undefined FUN_140503c9e(void)

int * FUN_140503c9e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
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
      FUN_1446efaca(param_1,iVar11);
    }
    iVar5 = (int)param_1[5];
    if (iVar5 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar8 = iVar5 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar7 = iVar5 + 1;
    iVar12 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar12 = iVar5;
    }
    if (iVar12 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar5) {
        if (iVar5 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar8 = iVar5;
        }
        else {
          uVar13 = iVar5 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar13) {
              uVar6 = uVar13;
            }
          }
          else {
            uVar6 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar6 << 2,0);
          iVar8 = (int)(uVar3 >> 2);
          iVar7 = -0x20;
          if ((int)uVar13 <= iVar8) {
            iVar7 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar9,iVar8);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar8 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar5 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x10);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x10) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar5 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar5 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 140503e74 FUN_140503e74 body=682 status=ok
// SIG undefined FUN_140503e74(void)

void FUN_140503e74(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_140503ed8;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_140503ed8:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x10;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 14050411e FUN_14050411e body=710 status=ok
// SIG undefined FUN_14050411e(void)

void FUN_14050411e(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  
  uVar14 = *(uint *)(param_1 + 1);
  uVar11 = param_2 - uVar14;
  if (uVar11 != 0 && (int)uVar14 <= (int)param_2) {
    uVar3 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar3);
    }
    iVar13 = *(int *)((longlong)param_1 + 0xc);
    uVar9 = uVar14;
    if (iVar13 < (int)param_2) {
      FUN_14474875a(param_1);
      uVar9 = *(uint *)(param_1 + 1);
      iVar13 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = uVar9 + uVar11;
    if (iVar13 - uVar9 < uVar11) {
      FUN_1446efaca(param_1);
    }
    if ((int)uVar9 < (int)param_2) {
      lVar1 = *param_1;
      iVar13 = *(int *)((longlong)param_1 + 0x34);
      puVar8 = (undefined4 *)(uVar3 * 0x10 + lVar1 + -0xc);
      do {
        iVar2 = (int)uVar3;
        if (iVar13 != 0) {
          *(int *)(lVar1 + (longlong)(int)param_1[6] * 0x10) = iVar2 + -1;
        }
        puVar8[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar12 = 0xffffffff;
        }
        else {
          uVar12 = (undefined4)param_1[6];
        }
        uVar3 = uVar3 - 1;
        *puVar8 = uVar12;
        *(int *)(param_1 + 6) = iVar2 + -1;
        iVar13 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar13;
        puVar8 = puVar8 + -4;
      } while ((longlong)(int)uVar9 < (longlong)uVar3);
    }
    if (uVar14 == 0) {
      *(uint *)(param_1 + 5) = uVar11;
      if (param_2 != 0) {
        plVar10 = param_1 + 2;
        uVar14 = uVar11 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar14) {
          FUN_14499171c(plVar10,0,uVar14,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar11 + 0x1f & 0xffffffe0;
        }
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = plVar10;
        }
        if (uVar11 < 0x101) {
          uVar14 = uVar14 + (uVar14 == 0);
        }
        memset(plVar6,0,(ulonglong)(uVar14 << 2));
        iVar13 = (int)param_1[5];
        iVar2 = iVar13 + 0x1f;
        if (-1 < iVar13) {
          iVar2 = iVar13;
        }
        if (iVar13 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar10 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar13 % 0x20);
          *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar11) {
      plVar10 = param_1 + 2;
      iVar13 = (int)param_1[5];
      if (param_2 != uVar14) {
        if (iVar13 == 0) {
          iVar2 = -1;
        }
        else {
          iVar2 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar2 = iVar13 + -1;
          }
          iVar2 = iVar2 >> 5;
        }
        iVar15 = iVar13 + uVar11;
        iVar5 = iVar13 + uVar11 + -1;
        iVar7 = iVar13 + uVar11 + 0x1e;
        if (-1 < iVar5) {
          iVar7 = iVar5;
        }
        if (iVar7 >> 5 == iVar2) {
          *(int *)(param_1 + 5) = iVar15;
        }
        else {
          if (*(int *)((longlong)param_1 + 0x2c) < iVar15) {
            if (iVar15 + 0x1fU < 0xa0) {
              iVar15 = 0x80;
              iVar2 = iVar13;
            }
            else {
              uVar14 = iVar15 + 0x1fU >> 5;
              if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
                uVar9 = 4;
                if (4 < uVar14) {
                  uVar9 = uVar14;
                }
              }
              else {
                uVar9 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
              }
              uVar3 = FUN_144a3809e(uVar9 << 2,0);
              iVar2 = (int)(uVar3 >> 2);
              iVar15 = -0x20;
              if ((int)uVar14 <= iVar2) {
                iVar15 = iVar2 << 5;
              }
              iVar2 = (int)param_1[5];
            }
            *(int *)((longlong)param_1 + 0x2c) = iVar15;
            FUN_1446efbd8(plVar10,iVar2);
            iVar15 = (int)param_1[5] + uVar11;
          }
          iVar2 = iVar15 + 0x1f;
          if (-1 < iVar15) {
            iVar2 = iVar15;
          }
          *(int *)(param_1 + 5) = iVar15;
          if (iVar15 % 0x20 != 0) {
            plVar6 = (longlong *)param_1[4];
            if ((longlong *)param_1[4] == (longlong *)0x0) {
              plVar6 = plVar10;
            }
            bVar4 = -(char)(iVar15 % 0x20);
            *(uint *)((longlong)plVar6 + (longlong)(iVar2 >> 5) * 4) =
                 (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar2 >> 5) * 4) << (bVar4 & 0x1f))
                 >> (bVar4 & 0x1f);
          }
        }
      }
      FUN_1447c6044(plVar10,iVar13,uVar11,0);
      return;
    }
  }
  return;
}



// FUNCTION 1405043e4 FUN_1405043e4 body=151 status=ok
// SIG undefined FUN_1405043e4(void)

undefined8 * FUN_1405043e4(undefined8 *param_1,undefined8 param_2)

{
  DWORD DVar1;
  PSRWLOCK SRWLock;
  
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 0;
  DVar1 = GetCurrentThreadId();
  SRWLock = (PSRWLOCK)*param_1;
  if (*(DWORD *)&SRWLock[0x14].Ptr == DVar1) {
    return param_1;
  }
  if (*(DWORD *)&SRWLock[0x15].Ptr != 0xffffffff && *(DWORD *)&SRWLock[0x15].Ptr != DVar1) {
    return param_1;
  }
  if (*(DWORD *)&SRWLock[0x15].Ptr != DVar1) {
    AcquireSRWLockExclusive(SRWLock);
    SRWLock = (PSRWLOCK)*param_1;
    if ((*(DWORD *)&SRWLock[0x14].Ptr == DVar1) ||
       (*(DWORD *)&SRWLock[0x15].Ptr != 0xffffffff && *(DWORD *)&SRWLock[0x15].Ptr != DVar1)) {
      ReleaseSRWLockExclusive(SRWLock);
      if ((*(byte *)((longlong)param_1 + 9) & 1) == 0) {
        return param_1;
      }
      SRWLock = (PSRWLOCK)*param_1;
      goto LAB_14050445a;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  *(undefined1 *)((longlong)param_1 + 9) = 1;
LAB_14050445a:
  *(DWORD *)&SRWLock[0x14].Ptr = DVar1;
  return param_1;
}



// FUNCTION 14050447c FUN_14050447c body=273 status=ok
// SIG undefined FUN_14050447c(void)

void FUN_14050447c(longlong param_1)

{
  longlong *plVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong *plVar4;
  longlong *plVar5;
  int *piVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  DWORD local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    DVar3 = GetCurrentThreadId();
    DVar2 = *(DWORD *)(param_1 + 0xa8);
    LOCK();
    plVar1 = *(longlong **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    UNLOCK();
    if (plVar1 != (longlong *)0x0) {
      local_60 = param_1 + 0x40;
      plVar4 = (longlong *)0x0;
      do {
        plVar5 = plVar1;
        LOCK();
        plVar1 = (longlong *)*plVar5;
        *plVar5 = (longlong)plVar4;
        UNLOCK();
        plVar4 = plVar5;
      } while (plVar1 != (longlong *)0x0);
      do {
        plVar1 = plVar5 + 1;
        plVar4 = (longlong *)*plVar5;
        if ((DVar2 == DVar3) || (*(int *)(param_1 + 0xa8) == -1)) {
          local_58 = param_1;
          local_50 = DVar3;
          (*(code *)(&PTR_FUN_149e349b0)[*(byte *)(plVar5 + 0xc)])(&local_58,plVar1);
        }
        else {
          FUN_142788414(local_60,plVar1);
        }
        (*(code *)(&PTR_LAB_149e349c0)[*(byte *)(plVar5 + 0xc)])(plVar1);
        piVar6 = (int *)((longlong)plVar5 + (-8 - (ulonglong)*(uint *)(plVar5 + -1)));
        LOCK();
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (*piVar6 == 0) {
          FUN_144705e74(piVar6,*(longlong *)(piVar6 + 0x10) - (longlong)piVar6);
        }
        plVar5 = plVar4;
      } while (plVar4 != (longlong *)0x0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050458e FUN_14050458e body=21 status=ok
// SIG undefined FUN_14050458e(void)

void FUN_14050458e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001405045a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x370))(param_1,1,param_2,param_3);
  return;
}



// FUNCTION 1405045a4 FUN_1405045a4 body=158 status=ok
// SIG undefined FUN_1405045a4(void)

void FUN_1405045a4(longlong *param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_140504726(param_3,0);
  }
  *(undefined4 *)(param_4 + 8) = 0;
  if (*(int *)(param_4 + 0xc) < 0) {
    FUN_140504644(param_4,0);
  }
  local_38 = 0;
  uStack_30 = 0;
  uVar1 = (**(code **)(*param_1 + 0x2d0))(param_1);
  FUN_1449d3882(uVar1,param_2,param_3,param_4);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140504644 FUN_140504644 body=226 status=ok
// SIG undefined FUN_140504644(void)

void FUN_140504644(longlong param_1,int param_2)

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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
      }
    }
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



// FUNCTION 140504726 FUN_140504726 body=226 status=ok
// SIG undefined FUN_140504726(void)

void FUN_140504726(longlong param_1,int param_2)

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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
      }
    }
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



// FUNCTION 140504808 FUN_140504808 body=401 status=ok
// SIG undefined FUN_140504808(void)

double * FUN_140504808(longlong *param_1,double *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = (**(code **)(*param_1 + 0x2b8))();
  if (cVar2 != '\0') {
    if (param_4 == 0) {
      param_4 = *(longlong *)(param_3 + 8);
    }
    if (param_4 != 0) {
      iVar1 = *(int *)(param_3 + 0x20);
      if ((longlong)iVar1 == 0) {
        fVar5 = 0.0;
      }
      else {
        fVar5 = 0.0;
        lVar4 = 0;
        do {
          fVar5 = fVar5 + *(float *)(*(longlong *)(param_3 + 0x18) + lVar4);
          lVar4 = lVar4 + 4;
        } while ((longlong)iVar1 * 4 - lVar4 != 0);
      }
      iVar3 = 1;
      if (1 < iVar1) {
        iVar3 = iVar1;
      }
      if (1e-08 < fVar5 / (float)iVar3) {
        FUN_14050499a(param_4,&local_38,1,0x3fe0000000000000);
        if (((9.999999747378752e-05 < ABS(local_38)) || (9.999999747378752e-05 < ABS(local_30))) ||
           (9.999999747378752e-05 < ABS(local_28))) {
          if (*(int *)(param_4 + 0x10) < 1) {
            lVar4 = 0;
          }
          else {
            lVar4 = **(longlong **)(param_4 + 8);
          }
          if (*(char *)(lVar4 + 0x270) == '\0') {
            dVar6 = *(double *)(lVar4 + 0x100) * *(double *)(lVar4 + 0x100) +
                    *(double *)(lVar4 + 0xf0) * *(double *)(lVar4 + 0xf0) +
                    *(double *)(lVar4 + 0xf8) * *(double *)(lVar4 + 0xf8);
          }
          else {
            dVar6 = 0.0;
          }
        }
        else {
          dVar6 = 1.79769313486232e+308;
        }
        *param_2 = dVar6;
        *(undefined1 *)(param_2 + 1) = 1;
        goto LAB_140504923;
      }
    }
  }
  *(undefined1 *)(param_2 + 1) = 0;
LAB_140504923:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050499a FUN_14050499a body=881 status=ok
// SIG undefined FUN_14050499a(void)

void FUN_14050499a(longlong param_1,double *param_2,char param_3,double param_4)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  double dVar14;
  undefined1 auStack_118 [39];
  char local_f1;
  ulonglong local_f0;
  longlong local_e8;
  double *local_e0;
  longlong local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a0;
  
  dVar5 = DAT_14c8464f0;
  dVar3 = DAT_14c8464e8;
  dVar4 = DAT_14c8464e0;
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (1.0 <= param_4) {
    param_4 = 1.0;
  }
  if (param_4 <= -1.0) {
    param_4 = -1.0;
  }
  local_e0 = param_2;
  dVar14 = cos((param_4 * 0.5 + 0.5) * 3.1415927410125732);
  iVar7 = *(int *)(param_1 + 0x10);
  if (0 < iVar7) {
    lVar9 = 0;
    local_f1 = param_3;
    local_e8 = param_1;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar9 * 8);
      if (lVar2 != 0) {
        if (param_3 == '\0') {
          iVar1 = *(int *)(lVar2 + 0x2a8);
          param_1 = local_e8;
          param_3 = local_f1;
          if (0 < (longlong)iVar1) {
            local_d8 = *(longlong *)(lVar2 + 0x2a0);
            local_f0 = local_d8 + 0x18;
            lVar11 = local_d8 + 0xb0;
            lVar13 = 0;
            do {
              lVar8 = (longlong)*(int *)(local_d8 + 0x4f8 + lVar13 * 0x520);
              if (0 < lVar8) {
                lVar10 = 0;
                do {
                  FUN_14571e7c0(local_f0 + lVar10,&local_d0,lVar2 != *(longlong *)(lVar11 + lVar10))
                  ;
                  if (local_c0 <= dVar14) {
                    dVar4 = dVar4 + local_d0;
                    dVar3 = dVar3 + local_c8;
                    dVar5 = dVar5 + local_c0;
                  }
                  lVar10 = lVar10 + 0x138;
                } while (lVar8 * 0x138 - lVar10 != 0);
              }
              lVar13 = lVar13 + 1;
              local_f0 = local_f0 + 0x520;
              lVar11 = lVar11 + 0x520;
              param_1 = local_e8;
              param_3 = local_f1;
            } while (lVar13 != iVar1);
          }
        }
        else {
          uVar6 = FUN_1449d3b02(lVar2);
          local_b8 = 0;
          uStack_b0 = (ulonglong)uVar6;
          if (uVar6 != 0) {
            FUN_140504d0c(&local_b8,0);
            FUN_140504e6e(lVar2);
            lVar11 = local_b8;
            if (0 < (int)uVar6) {
              uVar12 = 0;
              local_f0 = (ulonglong)uVar6;
              do {
                lVar13 = *(longlong *)(lVar11 + uVar12 * 8);
                if ((lVar13 != 0) && (iVar7 = *(int *)(lVar13 + 0x4f8), 0 < (longlong)iVar7)) {
                  lVar8 = 0;
                  do {
                    FUN_14571e7c0(lVar13 + 0x18 + lVar8,&local_d0,
                                  lVar2 != *(longlong *)(lVar13 + 0xb0 + lVar8));
                    if (local_c0 <= dVar14) {
                      dVar4 = dVar4 + local_d0;
                      dVar3 = dVar3 + local_c8;
                      dVar5 = dVar5 + local_c0;
                    }
                    lVar8 = lVar8 + 0x138;
                  } while ((longlong)iVar7 * 0x138 - lVar8 != 0);
                }
                uVar12 = uVar12 + 1;
                param_1 = local_e8;
                param_3 = local_f1;
              } while (uVar12 != local_f0);
            }
            if (lVar11 != 0) {
              FUN_1400020a8(lVar11);
            }
          }
          iVar7 = *(int *)(param_1 + 0x10);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar7);
  }
  dVar14 = dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3;
  if ((dVar14 != 1.0) || (NAN(dVar14))) {
    if (dVar14 < 9.99999993922529e-09) {
      local_e0[2] = DAT_14c8464f0;
      dVar3 = DAT_14c8464e8;
      *local_e0 = DAT_14c8464e0;
      local_e0[1] = dVar3;
      goto LAB_140504bd4;
    }
    dVar14 = 1.0 / SQRT(dVar14);
    dVar5 = dVar5 * dVar14;
    dVar3 = dVar3 * dVar14;
    dVar4 = dVar4 * dVar14;
  }
  *local_e0 = dVar4;
  local_e0[1] = dVar3;
  local_e0[2] = dVar5;
LAB_140504bd4:
  if ((local_a0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140504d0c FUN_140504d0c body=353 status=ok
// SIG undefined FUN_140504d0c(void)

void FUN_140504d0c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140504d91;
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
LAB_140504d91:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140504e6e FUN_140504e6e body=550 status=ok
// SIG undefined FUN_140504e6e(void)

void FUN_140504e6e(longlong param_1,longlong param_2)

{
  double dVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  double *pdVar6;
  longlong lVar7;
  ulonglong uVar8;
  double *pdVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x2a8) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x2a0);
    lVar5 = (longlong)*(int *)(param_1 + 0x2a8) * 0x520 + lVar4;
    pdVar9 = (double *)(lVar4 + 0x1e0);
    iVar10 = 0;
    do {
      if (*(int *)(lVar4 + 0x500) == 5) {
        lVar12 = *(longlong *)(lVar4 + 0x508);
      }
      else {
        lVar12 = 0;
      }
      if (*(int *)(lVar4 + 0x510) == 5) {
        lVar7 = *(longlong *)(lVar4 + 0x518);
      }
      else {
        lVar7 = 0;
      }
      if (lVar12 == 0) {
LAB_140504f03:
        bVar2 = false;
      }
      else if ((*(byte *)(lVar12 + 0x20) & 1) == 0) {
        if ((((9.99999993922529e-09 < ABS(*(double *)(lVar12 + 0x60))) ||
             (9.99999993922529e-09 < ABS(*(double *)(lVar12 + 0x68)))) ||
            (9.99999993922529e-09 < ABS(*(double *)(lVar12 + 0x70)))) ||
           ((9.99999993922529e-09 < ABS(*(double *)(lVar12 + 0x48)) ||
            (9.99999993922529e-09 < ABS(*(double *)(lVar12 + 0x50)))))) goto LAB_140504f03;
        bVar2 = ABS(*(double *)(lVar12 + 0x58)) <= 9.99999993922529e-09;
      }
      else {
        bVar2 = true;
      }
      if ((lVar7 == 0) || ((*(byte *)(lVar7 + 0x20) & 1) != 0)) {
LAB_140504f2f:
        uVar11 = (ulonglong)*(int *)(lVar4 + 0x4f8);
        if (0 < (longlong)uVar11) {
          if (*(double *)(lVar4 + 0xa8) <= 0.0) {
            uVar8 = 0;
            pdVar6 = pdVar9;
            do {
              if (uVar11 - 1 == uVar8) goto LAB_140504f3b;
              dVar1 = *pdVar6;
              pdVar6 = pdVar6 + 0x27;
              uVar8 = uVar8 + 1;
            } while (dVar1 <= 0.0);
            if (uVar11 <= uVar8) goto LAB_140504f3b;
          }
          lVar12 = (longlong)iVar10;
          iVar10 = iVar10 + 1;
          *(longlong *)(param_2 + lVar12 * 8) = lVar4;
        }
      }
      else {
        if ((9.99999993922529e-09 < ABS(*(double *)(lVar7 + 0x60))) ||
           ((((9.99999993922529e-09 < ABS(*(double *)(lVar7 + 0x68)) ||
              (9.99999993922529e-09 < ABS(*(double *)(lVar7 + 0x70)))) ||
             (9.99999993922529e-09 < ABS(*(double *)(lVar7 + 0x48)))) ||
            (9.99999993922529e-09 < ABS(*(double *)(lVar7 + 0x50)))))) {
          bVar3 = false;
        }
        else {
          bVar3 = ABS(*(double *)(lVar7 + 0x58)) <= 9.99999993922529e-09;
        }
        if ((lVar12 == 0) || (bVar2 || bVar3)) goto LAB_140504f2f;
      }
LAB_140504f3b:
      lVar4 = lVar4 + 0x520;
      pdVar9 = pdVar9 + 0xa4;
    } while (lVar4 != lVar5);
  }
  return;
}



// FUNCTION 140505094 FUN_140505094 body=50 status=ok
// SIG undefined FUN_140505094(void)

void FUN_140505094(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x18))(param_2,param_1);
  if (*(int *)(param_1 + 0xac) != 1) {
    return;
  }
  FUN_14376e4da(param_1,0);
  return;
}



// FUNCTION 1405050c6 FUN_1405050c6 body=1016 status=ok
// SIG undefined FUN_1405050c6(void)

void FUN_1405050c6(longlong *param_1,float *param_2)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  float fVar14;
  undefined1 auStack_148 [32];
  float **local_128;
  float *local_118;
  uint local_110;
  longlong local_108;
  undefined4 local_100;
  float local_fc;
  double local_f8;
  double local_f0;
  float local_e8 [2];
  double local_e0;
  undefined4 local_d8;
  float local_d4;
  double adStack_d0 [15];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 == (float *)0x0) goto LAB_1405053e4;
  cVar6 = (**(code **)(*param_1 + 0x28))();
  if (cVar6 == '\0') goto LAB_1405053e4;
  uVar8 = *(uint *)(param_1 + 9);
  if ((uVar8 & 2) != 0) {
    dVar2 = (double)param_1[0x13] * (double)param_1[0x13] +
            (double)param_1[0x14] * (double)param_1[0x14];
    if ((dVar2 == 0.0) && (!NAN(dVar2))) {
      param_1[0x13] = 0x3ff0000000000000;
      param_1[0x14] = 0x3ff0000000000000;
      *(undefined4 *)(param_1 + 0x11) = 0;
      *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x12) = 0;
      *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f800000;
    }
  }
  uVar7 = (**(code **)(*param_1 + 0x30))(param_1,(uVar8 & 2) >> 1);
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
  uVar10 = 0xd;
  if (*(char *)((longlong)param_2 + 0xa1) == '\0') {
    uVar10 = uVar7;
  }
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar10;
  if (*(char *)(param_2 + 0x28) == '\0') {
    fVar14 = param_2[0x2c];
  }
  else {
    fVar14 = 1.0;
  }
  dVar2 = (double)fVar14;
  dVar3 = (double)param_1[2] * dVar2;
  dVar4 = (double)param_1[1] * dVar2;
  local_f8 = dVar4;
  local_f0 = dVar3;
  if ((((char)param_1[0x17] != '\0') || (*(char *)((longlong)param_1 + 0xb9) != '\0')) ||
     (*(char *)((longlong)param_1 + 0xcc) == '\0')) {
    (**(code **)(*param_1 + 0x38))(param_1,local_e8);
    if ((char)param_1[0x17] == '\0') {
      bVar1 = *(byte *)((longlong)param_1 + 0xb9);
      if (bVar1 != 0) goto LAB_140505244;
    }
    else {
      dVar4 = dVar4 - (double)(int)((double)CONCAT44(local_e8[1],local_e8[0]) * 0.5);
      bVar1 = *(byte *)((longlong)param_1 + 0xb9);
      local_f8 = dVar4;
LAB_140505244:
      if ((bVar1 & 1) != 0) {
        dVar3 = dVar3 - (double)(int)(local_e0 * 0.5);
        local_f0 = dVar3;
      }
    }
    if ((*(char *)((longlong)param_1 + 0xcc) == '\0') &&
       (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) != (longlong *)0x0)) {
      cVar6 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 8))();
      if (cVar6 != '\0') {
        lVar9 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0x578) + 0x2f0))();
        param_1[0x2c] = lVar9;
        param_1[0x1d] = (longlong)(dVar4 + -2.0);
        param_1[0x1e] = (longlong)(dVar3 + -2.0);
        param_1[0x24] = (longlong)((double)CONCAT44(local_e8[1],local_e8[0]) + 2.0 + 2.0);
        param_1[0x25] = (longlong)(local_e0 + 2.0 + 2.0);
        *(undefined1 *)(param_1 + 0x20) = 1;
        FUN_1405054c0(param_1 + 0x1c,param_2);
      }
    }
  }
  local_58 = 0x600000000;
  bVar13 = (uVar8 & 2) != 0;
  if (bVar13) {
    local_e8[1] = (float)((double)param_1[0x14] * dVar2);
    local_e8[0] = (float)(dVar2 * (double)param_1[0x13]);
    local_d4 = *(float *)((longlong)param_1 + 0x3c) * *param_2;
    local_58 = 0x600000001;
    local_e0 = (double)param_1[0x11];
    local_d8 = (undefined4)param_1[0x12];
  }
  uVar8 = (uint)bVar13;
  local_110 = uVar8;
  if (*(char *)((longlong)param_1 + 0xba) == '\x01') {
    uVar11 = (ulonglong)uVar8;
    (local_e8 + uVar11 * 6)[0] = -1.0;
    (local_e8 + uVar11 * 6)[1] = -1.0;
    uVar5 = *(undefined8 *)((longlong)param_1 + 0xc4);
    (&local_e0)[uVar11 * 3] = *(double *)((longlong)param_1 + 0xbc);
    *(undefined8 *)(&local_d8 + uVar11 * 6) = uVar5;
    uVar12 = (ulonglong)(uVar8 + 2);
    adStack_d0[uVar11 * 3] = 0.007812505573383532;
    dVar2 = *(double *)((longlong)param_1 + 0xc4);
    adStack_d0[uVar11 * 3 + 1] = *(double *)((longlong)param_1 + 0xbc);
    adStack_d0[uVar11 * 3 + 2] = dVar2;
    *(undefined1 **)(local_e8 + uVar12 * 6) = &DAT_3f8000003f800000;
    uVar5 = *(undefined8 *)((longlong)param_1 + 0xc4);
    (&local_e0)[uVar12 * 3] = *(double *)((longlong)param_1 + 0xbc);
    *(undefined8 *)(&local_d8 + uVar12 * 6) = uVar5;
    local_110 = uVar8 | 4;
    local_58 = CONCAT44(local_58._4_4_,uVar8) | 4;
    adStack_d0[uVar11 * 3 + 6] = -0.007812501848093234;
    dVar2 = *(double *)((longlong)param_1 + 0xc4);
    adStack_d0[uVar11 * 3 + 7] = *(double *)((longlong)param_1 + 0xbc);
    adStack_d0[uVar11 * 3 + 8] = dVar2;
  }
  local_100 = (undefined4)param_1[7];
  local_108 = param_1[6];
  local_fc = *(float *)((longlong)param_1 + 0x3c) * *param_2;
  local_118 = local_e8;
  local_128 = &local_118;
  (**(code **)(*param_1 + 0x40))(param_1,param_2,&local_f8);
LAB_1405053e4:
  if ((local_50 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405054c0 FUN_1405054c0 body=4583 status=ok
// SIG undefined FUN_1405054c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405054c0(longlong param_1,float *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  double dVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 uVar21;
  longlong lVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  float fVar50;
  undefined1 auVar51 [16];
  double dVar52;
  double dVar53;
  float fVar54;
  float fVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  float fVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  longlong **local_1d0;
  undefined4 local_1c8;
  longlong **local_1c0;
  longlong *local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  float *local_198;
  double local_190;
  undefined8 local_188;
  undefined4 local_180;
  longlong *local_178;
  double dStack_170;
  undefined1 local_168 [16];
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  dVar24 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x88),0x4076800000000000);
  dVar24 = (double)(~-(ulonglong)(dVar24 < 0.0) & (ulonglong)dVar24 |
                   (ulonglong)(dVar24 + 360.0) & -(ulonglong)(dVar24 < 0.0));
  if ((dVar24 != 0.0) || (NAN(dVar24))) {
LAB_140505ec1:
    local_1a8 = *(double *)(param_1 + 0x48) * *(double *)(param_1 + 0xa8);
    uStack_1a0 = 0;
    local_1b8 = (longlong *)(*(double *)(param_1 + 0x40) * *(double *)(param_1 + 0xa0));
    dStack_1b0 = 0.0;
    dVar24 = *(double *)(param_1 + 0x88) * 0.01745329238474369;
    dVar29 = *(double *)(param_1 + 0x90) * 0.01745329238474369;
    dVar30 = *(double *)(param_1 + 0x98) * 0.01745329238474369;
    dVar25 = sin(dVar24);
    dVar26 = sin(dVar29);
    dVar27 = sin(dVar30);
    sin(0.0);
    dVar28 = cos(dVar24);
    dVar29 = cos(dVar29);
    dVar30 = cos(dVar30);
    cos(0.0);
    dVar15 = local_1a8;
    dVar24 = dVar28 * dVar29;
    dVar31 = dVar26 * dVar28;
    dVar36 = dVar25 * dVar27 * dVar29 - dVar26 * dVar30;
    dVar32 = dVar25 * dVar27 * dVar26 + dVar29 * dVar30;
    dVar35 = -dVar27 * dVar28;
    dVar4 = -(dVar25 * dVar30 * dVar29 + dVar26 * dVar27);
    dVar60 = dVar29 * dVar27 - dVar26 * dVar25 * dVar30;
    local_190 = dVar28 * dVar30;
    dVar40 = local_190 * 0.0;
    dVar27 = dVar4 * 0.0;
    dVar45 = dVar60 * 0.0;
    dVar29 = ((dVar24 * -(double)local_1b8 - dVar36 * local_1a8) - dVar27) + DAT_14c8464e0;
    dVar47 = ((dVar31 * -(double)local_1b8 - dVar32 * local_1a8) - dVar45) + DAT_14c8464e8;
    dVar28 = DAT_14c8464e0 * 0.0;
    dVar34 = DAT_14c8464e8 * 0.0;
    dVar30 = ((-(double)local_1b8 * dVar25 - dVar35 * local_1a8) - dVar40) + DAT_14c8464f0;
    dVar26 = ((-(double)local_1b8 * 0.0 - local_1a8 * 0.0) - 0.0) + 1.0;
    dVar37 = DAT_14c8464f0 * 0.0;
    dVar41 = dVar24 + dVar36 * 0.0 + dVar27 + dVar28;
    dVar42 = dVar31 + dVar32 * 0.0 + dVar45 + dVar34;
    dVar56 = dVar25 + dVar35 * 0.0 + dVar40 + dVar37;
    dVar43 = dVar24 * 0.0 + dVar36 + dVar27 + dVar28;
    dVar45 = dVar31 * 0.0 + dVar32 + dVar45 + dVar34;
    dVar40 = dVar35 + dVar25 * 0.0 + dVar40 + dVar37;
    dVar28 = dVar24 * 0.0 + dVar36 * 0.0 + dVar4 + dVar28;
    dVar34 = dVar31 * 0.0 + dVar32 * 0.0 + dVar60 + dVar34;
    dVar37 = dVar25 * 0.0 + dVar35 * 0.0 + local_190 + dVar37;
    dVar4 = (double)local_1b8 * 0.0 + dVar56 * 0.0 + dVar42 * 0.0 + dVar41 * 1.0;
    dVar27 = local_1a8 * 0.0 + dVar56 * 0.0 + dVar42 * 1.0 + dVar41 * 0.0;
    dVar57 = dVar56 * 1.0 + dVar42 * 0.0 + dVar41 * 0.0 + 0.0;
    dVar58 = dVar56 * 0.0 + dVar42 * 0.0 + dVar41 * 0.0 + 0.0;
    dVar25 = (double)local_1b8 * 0.0 + dVar40 * 0.0 + dVar45 * 0.0 + dVar43 * 1.0;
    dVar32 = local_1a8 * 0.0 + dVar40 * 0.0 + dVar45 * 1.0 + dVar43 * 0.0;
    dVar61 = dVar40 * 1.0 + dVar45 * 0.0 + dVar43 * 0.0 + 0.0;
    dVar62 = dVar40 * 0.0 + dVar45 * 0.0 + dVar43 * 0.0 + 0.0;
    dVar24 = (double)local_1b8 * 0.0 + dVar37 * 0.0 + dVar34 * 0.0 + dVar28 * 1.0;
    dVar45 = local_1a8 * 0.0 + dVar37 * 0.0 + dVar34 * 1.0 + dVar28 * 0.0;
    dVar36 = dVar37 * 1.0 + dVar34 * 0.0 + dVar28 * 0.0 + 0.0;
    dVar52 = dVar37 * 0.0 + dVar34 * 0.0 + dVar28 * 0.0 + 0.0;
    local_1a8 = 0.0;
    uStack_1a0 = 0x3ff0000000000000;
    dVar31 = (double)local_1b8 * dVar26 + dVar30 * 0.0 + dVar47 * 0.0 + dVar29 * 1.0;
    dVar35 = dVar15 * dVar26 + dVar30 * 0.0 + dVar47 * 1.0 + dVar29 * 0.0;
    dVar28 = dVar26 * 0.0 + dVar30 * 1.0 + dVar47 * 0.0 + dVar29 * 0.0;
    dVar34 = dVar26 * 1.0 + dVar30 * 0.0 + dVar47 * 0.0 + dVar29 * 0.0;
    dVar47 = dVar24 * 0.0;
    dVar56 = dVar45 * 0.0;
    dVar41 = dVar31 * 0.0;
    dVar42 = dVar35 * 0.0;
    dVar40 = dVar25 * 0.0 + dVar4 + dVar47 + dVar41;
    dVar43 = dVar32 * 0.0 + dVar27 + dVar56 + dVar42;
    dVar44 = dVar25 + dVar4 * 0.0 + dVar47 + dVar41;
    dVar46 = dVar32 + dVar27 * 0.0 + dVar56 + dVar42;
    dVar41 = dVar4 * 0.0 + dVar25 * 0.0 + dVar24 + dVar41;
    dVar42 = dVar27 * 0.0 + dVar32 * 0.0 + dVar45 + dVar42;
    dVar30 = -*(double *)(param_1 + 0x10);
    dVar48 = -*(double *)(param_1 + 0x10);
    dVar29 = *(double *)(param_1 + 8);
    dVar24 = *(double *)(param_1 + 8);
    dVar37 = dVar36 * 0.0;
    dVar53 = dVar52 * 0.0;
    dVar26 = ((dVar30 * dVar61 - dVar57 * dVar29) - dVar37) + dVar28;
    dVar49 = ((dVar48 * dVar62 - dVar58 * dVar24) - dVar53) + dVar34;
    dVar28 = dVar28 * 0.0;
    dVar34 = dVar34 * 0.0;
    dVar45 = dVar61 * 0.0 + dVar57 + dVar37 + dVar28;
    dVar15 = dVar62 * 0.0 + dVar58 + dVar53 + dVar34;
    dVar60 = dVar61 + dVar57 * 0.0 + dVar37 + dVar28;
    dVar53 = dVar62 + dVar58 * 0.0 + dVar53 + dVar34;
    dVar28 = dVar57 * 0.0 + dVar61 * 0.0 + dVar36 + dVar28;
    dVar34 = dVar58 * 0.0 + dVar62 * 0.0 + dVar52 + dVar34;
    dVar36 = *(double *)(param_1 + 8);
    dVar37 = *(double *)(param_1 + 0x10);
    dVar31 = ((dVar25 * dVar30 - dVar4 * dVar29) - dVar47) + dVar31;
    dVar35 = ((dVar32 * dVar48 - dVar27 * dVar24) - dVar56) + dVar35;
    local_1b8 = (longlong *)(dVar36 * dVar15 + dVar45 * 0.0 + dVar43 * 0.0 + dVar40 * 1.0);
    dStack_1b0 = dVar37 * dVar15 + dVar45 * 0.0 + dVar43 * 1.0 + dVar40 * 0.0;
    dVar24 = dVar15 * 1.0 + dVar45 * 0.0 + dVar43 * 0.0 + dVar40 * 0.0;
    dStack_158 = dVar36 * dVar53 + dVar60 * 0.0 + dVar46 * 0.0 + dVar44 * 1.0;
    dStack_150 = dVar37 * dVar53 + dVar60 * 0.0 + dVar46 * 1.0 + dVar44 * 0.0;
    dStack_148 = dVar53 * 0.0 + dVar60 * 1.0 + dVar46 * 0.0 + dVar44 * 0.0;
    dStack_140 = dVar53 * 1.0 + dVar60 * 0.0 + dVar46 * 0.0 + dVar44 * 0.0;
    local_138 = dVar36 * dVar34 + dVar28 * 0.0 + dVar42 * 0.0 + dVar41 * 1.0;
    dStack_130 = dVar37 * dVar34 + dVar28 * 0.0 + dVar42 * 1.0 + dVar41 * 0.0;
    local_128 = dVar34 * 0.0 + dVar28 * 1.0 + dVar42 * 0.0 + dVar41 * 0.0;
    dStack_120 = dVar34 * 1.0 + dVar28 * 0.0 + dVar42 * 0.0 + dVar41 * 0.0;
    local_118 = dVar36 * dVar49 + dVar26 * 0.0 + dVar35 * 0.0 + dVar31 * 1.0;
    dStack_110 = dVar37 * dVar49 + dVar26 * 0.0 + dVar35 * 1.0 + dVar31 * 0.0;
    local_108 = dVar49 * 0.0 + dVar26 * 1.0 + dVar35 * 0.0 + dVar31 * 0.0;
    dStack_100 = dVar49 * 1.0 + dVar26 * 0.0 + dVar35 * 0.0 + dVar31 * 0.0;
    local_168._8_4_ = SUB84(dVar24,0);
    local_168._0_8_ = dVar15 * 0.0 + dVar45 * 1.0 + dVar43 * 0.0 + dVar40 * 0.0;
    local_168._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    local_178 = local_1b8;
    dStack_170 = dStack_1b0;
    FUN_147d8e05e(param_2);
  }
  else {
    dVar24 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x90),0x4076800000000000);
    dVar24 = (double)(~-(ulonglong)(dVar24 < 0.0) & (ulonglong)dVar24 |
                     (ulonglong)(dVar24 + 360.0) & -(ulonglong)(dVar24 < 0.0));
    if ((dVar24 != 0.0) || (NAN(dVar24))) goto LAB_140505ec1;
    dVar24 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x98),0x4076800000000000);
    dVar24 = (double)(~-(ulonglong)(dVar24 < 0.0) & (ulonglong)dVar24 |
                     (ulonglong)(dVar24 + 360.0) & -(ulonglong)(dVar24 < 0.0));
    if ((dVar24 != 0.0) || (NAN(dVar24))) goto LAB_140505ec1;
  }
  plVar18 = *(longlong **)(param_1 + 0x78);
  local_198 = param_2;
  if (plVar18 != (longlong *)0x0) {
    local_180 = *(undefined4 *)(param_1 + 0x38);
    local_188 = *(undefined8 *)(param_1 + 0x30);
    fVar50 = *(float *)(param_1 + 0x3c) * *param_2;
    local_1d0 = &local_178;
    local_178 = (longlong *)0x0;
    dStack_170 = 0.0;
    local_168._0_8_ = local_168._4_8_ << 0x20;
    local_168._8_8_ = 0;
    dStack_158 = 0.0;
    dStack_150 = 0.0;
    dStack_148 = 0.0;
    local_1d8 = CONCAT44(local_1d8._4_4_,*(undefined4 *)(param_1 + 0x1c));
    local_1c8 = CONCAT31(local_1c8._1_3_,1);
    lVar16 = FUN_14011db44(param_2,1,*(undefined8 *)(param_1 + 0x28),plVar18);
    if (*(longlong *)(param_2 + 0x1a) == 0) {
      uVar21 = 0xffffffff;
    }
    else {
      uVar21 = *(undefined4 *)(*(longlong *)(param_2 + 0x1a) + 0x18);
    }
    fVar55 = *(float *)(param_1 + 0x50);
    dVar28 = (double)fVar55;
    dVar24 = *(double *)(param_1 + 8);
    dVar29 = *(double *)(param_1 + 0x10);
    fVar54 = (float)(dVar24 * dVar28);
    fVar59 = (float)(dVar29 * dVar28);
    dVar30 = *(double *)(param_1 + 0x40);
    dVar26 = *(double *)(param_1 + 0x60);
    dVar4 = *(double *)(param_1 + 0x58);
    dVar27 = *(double *)(param_1 + 0x48);
    lVar23 = lVar16 + 0x180;
    iVar5 = *(int *)(lVar16 + 0x290);
    *(uint *)(lVar16 + 0x290) = iVar5 + 1U;
    if (*(uint *)(lVar16 + 0x294) < iVar5 + 1U) {
      FUN_14021e72e(lVar23,iVar5);
    }
    lVar22 = *(longlong *)(lVar16 + 0x280);
    if (*(longlong *)(lVar16 + 0x280) == 0) {
      lVar22 = lVar23;
    }
    lVar19 = (longlong)iVar5 * 0x40;
    *(float *)(lVar22 + lVar19) = fVar54;
    *(float *)(lVar22 + 4 + lVar19) = fVar59;
    *(undefined4 *)(lVar22 + 8 + lVar19) = 0;
    *(float *)(lVar22 + 0xc + lVar19) = fVar55;
    puVar17 = (undefined8 *)(lVar22 + 0x10 + lVar19);
    *puVar17 = 0;
    puVar17[1] = 0;
    *(float *)(lVar22 + 0x20 + lVar19) = (float)dVar4;
    *(float *)(lVar22 + 0x24 + lVar19) = (float)dVar26;
    *(undefined8 *)(lVar22 + 0x28 + lVar19) = local_188;
    *(undefined4 *)(lVar22 + 0x30 + lVar19) = local_180;
    *(float *)(lVar22 + 0x34 + lVar19) = fVar50;
    *(undefined4 *)(lVar22 + 0x38 + lVar19) = uVar21;
    dVar26 = *(double *)(param_1 + 0x60);
    dVar4 = *(double *)(param_1 + 0x68);
    fVar55 = (float)((dVar24 + dVar30) * dVar28);
    uVar3 = *(undefined4 *)(param_1 + 0x50);
    iVar6 = *(int *)(lVar16 + 0x290);
    lVar22 = (longlong)iVar6;
    *(uint *)(lVar16 + 0x290) = iVar6 + 1U;
    if (*(uint *)(lVar16 + 0x294) < iVar6 + 1U) {
      FUN_14021e72e(lVar23,iVar6);
    }
    lVar19 = *(longlong *)(lVar16 + 0x280);
    if (*(longlong *)(lVar16 + 0x280) == 0) {
      lVar19 = lVar23;
    }
    lVar20 = lVar22 * 0x40;
    *(float *)(lVar19 + lVar20) = fVar55;
    *(float *)(lVar19 + 4 + lVar20) = fVar59;
    *(undefined4 *)(lVar19 + 8 + lVar20) = 0;
    *(undefined4 *)(lVar19 + 0xc + lVar20) = uVar3;
    puVar17 = (undefined8 *)(lVar19 + 0x10 + lVar20);
    *puVar17 = 0;
    puVar17[1] = 0;
    *(float *)(lVar19 + 0x20 + lVar20) = (float)dVar4;
    *(float *)(lVar19 + 0x24 + lVar20) = (float)dVar26;
    *(undefined8 *)(lVar19 + 0x28 + lVar20) = local_188;
    *(undefined4 *)(lVar19 + 0x30 + lVar20) = local_180;
    *(float *)(lVar19 + 0x34 + lVar20) = fVar50;
    *(undefined4 *)(lVar19 + 0x38 + lVar20) = uVar21;
    dVar24 = *(double *)(param_1 + 0x70);
    dVar30 = *(double *)(param_1 + 0x58);
    fVar59 = (float)((dVar29 + dVar27) * dVar28);
    uVar3 = *(undefined4 *)(param_1 + 0x50);
    iVar6 = *(int *)(lVar16 + 0x290);
    *(uint *)(lVar16 + 0x290) = iVar6 + 1U;
    local_1b8 = plVar18;
    if (*(uint *)(lVar16 + 0x294) < iVar6 + 1U) {
      FUN_14021e72e(lVar23,iVar6);
    }
    lVar19 = *(longlong *)(lVar16 + 0x280);
    if (*(longlong *)(lVar16 + 0x280) == 0) {
      lVar19 = lVar23;
    }
    lVar20 = (longlong)iVar6 * 0x40;
    *(float *)(lVar19 + lVar20) = fVar54;
    *(float *)(lVar19 + 4 + lVar20) = fVar59;
    *(undefined4 *)(lVar19 + 8 + lVar20) = 0;
    *(undefined4 *)(lVar19 + 0xc + lVar20) = uVar3;
    puVar17 = (undefined8 *)(lVar19 + 0x10 + lVar20);
    *puVar17 = 0;
    puVar17[1] = 0;
    *(float *)(lVar19 + 0x20 + lVar20) = (float)dVar30;
    *(float *)(lVar19 + 0x24 + lVar20) = (float)dVar24;
    *(undefined8 *)(lVar19 + 0x28 + lVar20) = local_188;
    *(undefined4 *)(lVar19 + 0x30 + lVar20) = local_180;
    *(float *)(lVar19 + 0x34 + lVar20) = fVar50;
    *(undefined4 *)(lVar19 + 0x38 + lVar20) = uVar21;
    dVar24 = *(double *)(param_1 + 0x70);
    dVar29 = *(double *)(param_1 + 0x68);
    uVar3 = *(undefined4 *)(param_1 + 0x50);
    iVar7 = *(int *)(lVar16 + 0x290);
    *(uint *)(lVar16 + 0x290) = iVar7 + 1U;
    if (*(uint *)(lVar16 + 0x294) < iVar7 + 1U) {
      FUN_14021e72e(lVar23,iVar7,lVar22);
    }
    plVar18 = local_1b8;
    if (*(longlong *)(lVar16 + 0x280) != 0) {
      lVar23 = *(longlong *)(lVar16 + 0x280);
    }
    lVar19 = (longlong)iVar7 * 0x40;
    *(float *)(lVar23 + lVar19) = fVar55;
    *(float *)(lVar23 + 4 + lVar19) = fVar59;
    *(undefined4 *)(lVar23 + 8 + lVar19) = 0;
    *(undefined4 *)(lVar23 + 0xc + lVar19) = uVar3;
    puVar17 = (undefined8 *)(lVar23 + 0x10 + lVar19);
    *puVar17 = 0;
    puVar17[1] = 0;
    *(float *)(lVar23 + 0x20 + lVar19) = (float)dVar29;
    *(float *)(lVar23 + 0x24 + lVar19) = (float)dVar24;
    *(undefined8 *)(lVar23 + 0x28 + lVar19) = local_188;
    *(undefined4 *)(lVar23 + 0x30 + lVar19) = local_180;
    *(float *)(lVar23 + 0x34 + lVar19) = fVar50;
    *(undefined4 *)(lVar23 + 0x38 + lVar19) = uVar21;
    local_168._0_8_ = local_168._4_8_ << 0x20;
    local_178 = (longlong *)0x0;
    dStack_170 = 0.0;
    local_168._8_8_ = 0;
    dStack_158 = 0.0;
    dStack_150 = 0.0;
    dStack_148 = 0.0;
    local_1c8 = *(undefined4 *)(param_1 + 0x1c);
    local_1d8 = *(undefined8 *)(param_1 + 0x28);
    local_1d0 = (longlong **)local_1b8;
    local_1c0 = &local_178;
    FUN_14002b732(lVar16,iVar5,lVar22,iVar7);
    local_168._0_8_ = local_168._4_8_ << 0x20;
    local_178 = (longlong *)0x0;
    dStack_170 = 0.0;
    local_168._8_8_ = 0;
    dStack_158 = 0.0;
    dStack_150 = 0.0;
    dStack_148 = 0.0;
    local_1c8 = *(undefined4 *)(param_1 + 0x1c);
    local_1d8 = *(undefined8 *)(param_1 + 0x28);
    local_1d0 = (longlong **)plVar18;
    local_1c0 = &local_178;
    FUN_14002b732(lVar16,iVar5,iVar7,iVar6);
    param_2 = local_198;
    goto LAB_140505cef;
  }
  lVar16 = FUN_144914fe6(param_2,*(undefined4 *)
                                  (*(longlong *)(param_2 + 6) + (longlong)((int)param_2[8] + -1) * 4
                                  ));
  lVar23 = (longlong)((int)param_2[0xc] + -1) * 0x90 + *(longlong *)(param_2 + 10);
  if ((longlong)*(int *)(lVar16 + 0x10) < 1) {
LAB_140505719:
    local_1b8 = (longlong *)(lVar16 + 8);
    puVar17 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    local_1a8 = (double)CONCAT71(local_1a8._1_7_,*(undefined1 *)(param_1 + 0x20));
    uVar10 = *(undefined8 *)(param_1 + 0x80);
    fVar50 = param_2[0x27];
    *puVar17 = &PTR_FUN_14aaf7430;
    plVar18 = (longlong *)FUN_14001cc68(0x420,0x10);
    plVar18[1] = (longlong)&DAT_100000001;
    *plVar18 = (longlong)&PTR_FUN_14aaf7460;
    FUN_143740272(plVar18 + 2,fVar50,uVar10,lVar23);
    puVar17[1] = plVar18 + 2;
    puVar17[2] = plVar18;
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
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
    plVar18 = local_1b8;
    *(undefined1 *)(puVar17 + 3) = local_1a8._0_1_;
    iVar5 = *(int *)(lVar16 + 0x10);
    *(uint *)(lVar16 + 0x10) = iVar5 + 1U;
    if (*(uint *)(lVar16 + 0x14) < iVar5 + 1U) {
      FUN_1417f94f0(local_1b8,iVar5);
    }
    *(undefined8 **)(*plVar18 + (longlong)iVar5 * 8) = puVar17;
    param_2 = local_198;
  }
  else {
    puVar17 = (undefined8 *)
              (**(code **)(**(longlong **)
                             (*(longlong *)(lVar16 + 8) + -8 + (longlong)*(int *)(lVar16 + 0x10) * 8
                             ) + 0x20))();
    if (((puVar17 == (undefined8 *)0x0) ||
        (*(longlong *)puVar17[1] != *(longlong *)(param_1 + 0x80))) ||
       ((int)((longlong *)puVar17[1])[0x12] != *(int *)(lVar23 + 0x80))) goto LAB_140505719;
  }
  if (*(longlong *)(param_2 + 0x1a) == 0) {
    uVar21 = 0xffffffff;
  }
  else {
    uVar21 = *(undefined4 *)(*(longlong *)(param_2 + 0x1a) + 0x18);
  }
  auVar51 = maxps(*(undefined1 (*) [16])(param_1 + 0x30),_DAT_149e1a200);
  auVar51 = minps(auVar51,_DAT_149e1a210);
  fVar50 = auVar51._0_4_;
  fVar55 = auVar51._4_4_;
  fVar54 = auVar51._8_4_;
  uVar3 = *(undefined4 *)(&DAT_149e1bee0 + (ulonglong)((int)fVar50 + 0xc7000000U >> 0x14) * 4);
  uVar8 = *(undefined4 *)
           (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar55 + -0x39000000) >> 0x14) * 4);
  uVar9 = *(undefined4 *)
           (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar54 + -0x39000000) >> 0x14) * 4);
  dVar24 = *(double *)(param_1 + 0x70);
  dVar29 = *(double *)(param_1 + 0x60);
  dVar30 = *(double *)(param_1 + 0x68);
  dVar26 = *(double *)(param_1 + 0x58);
  dVar4 = *(double *)(param_1 + 0x48);
  dVar27 = *(double *)(param_1 + 0x40);
  dVar28 = *(double *)(param_1 + 8);
  dVar34 = *(double *)(param_1 + 0x10);
  lVar16 = puVar17[1];
  iVar5 = *(int *)(lVar16 + 0x408);
  lVar23 = (longlong)iVar5;
  *(uint *)(lVar16 + 0x408) = iVar5 + 1U;
  if (*(uint *)(lVar16 + 0x40c) < iVar5 + 1U) {
    FUN_1417f9236((longlong *)(lVar16 + 0x400),iVar5);
  }
  auVar39._4_4_ = uVar8;
  auVar39._0_4_ = uVar3;
  auVar38._0_4_ = (uint)fVar50 >> 0xc;
  auVar38._4_4_ = (uint)fVar55 >> 0xc;
  auVar38._8_4_ = (uint)fVar54 >> 0xc;
  auVar38._12_4_ = (uint)auVar51._12_4_ >> 0xc;
  auVar39._8_4_ = uVar9;
  auVar39._12_4_ = 0;
  auVar39 = pmaddwd(auVar38 & _DAT_1499d1ec0 | _DAT_1499378f0,auVar39);
  auVar33._4_4_ = (int)(fVar55 * 0.0 + 0.5) | auVar39._4_4_ >> 0x10;
  auVar33._12_4_ = (int)(auVar51._12_4_ * 255.0 + 0.5) | auVar39._12_4_ >> 0x10;
  auVar33._0_4_ = (int)(fVar54 * 0.0 + 0.5) | auVar39._8_4_ >> 0x10;
  auVar33._8_4_ = (int)(fVar50 * 0.0 + 0.5) | auVar39._0_4_ >> 0x10;
  auVar51 = packssdw(auVar33,auVar33);
  sVar11 = auVar51._0_2_;
  sVar12 = auVar51._2_2_;
  sVar13 = auVar51._4_2_;
  sVar14 = auVar51._6_2_;
  lVar16 = *(longlong *)(lVar16 + 0x400);
  *(float *)(lVar16 + lVar23 * 0x28) = (float)dVar28;
  *(float *)(lVar16 + 4 + lVar23 * 0x28) = (float)dVar34;
  *(float *)(lVar16 + 8 + lVar23 * 0x28) = (float)dVar27;
  *(float *)(lVar16 + 0xc + lVar23 * 0x28) = (float)dVar4;
  *(float *)(lVar16 + 0x10 + lVar23 * 0x28) = (float)dVar26;
  *(float *)(lVar16 + 0x14 + lVar23 * 0x28) = (float)dVar29;
  *(float *)(lVar16 + 0x18 + lVar23 * 0x28) = (float)(dVar30 - dVar26);
  *(float *)(lVar16 + 0x1c + lVar23 * 0x28) = (float)(dVar24 - dVar29);
  *(undefined4 *)(lVar16 + 0x20 + lVar23 * 0x28) = uVar21;
  *(uint *)(lVar16 + 0x24 + lVar23 * 0x28) =
       CONCAT13((0 < sVar14) * (sVar14 < 0x100) * auVar51[6] - (0xff < sVar14),
                CONCAT12((0 < sVar13) * (sVar13 < 0x100) * auVar51[4] - (0xff < sVar13),
                         CONCAT11((0 < sVar12) * (sVar12 < 0x100) * auVar51[2] - (0xff < sVar12),
                                  (0 < sVar11) * (sVar11 < 0x100) * auVar51[0] - (0xff < sVar11))));
LAB_140505cef:
  dVar24 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x88),0x4076800000000000);
  dVar24 = (double)(~-(ulonglong)(dVar24 < 0.0) & (ulonglong)dVar24 |
                   (ulonglong)(dVar24 + 360.0) & -(ulonglong)(dVar24 < 0.0));
  if ((dVar24 == 0.0) && (!NAN(dVar24))) {
    dVar24 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x90),0x4076800000000000);
    dVar24 = (double)(~-(ulonglong)(dVar24 < 0.0) & (ulonglong)dVar24 |
                     (ulonglong)(dVar24 + 360.0) & -(ulonglong)(dVar24 < 0.0));
    if ((dVar24 == 0.0) && (!NAN(dVar24))) {
      dVar24 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x98));
      dVar24 = (double)(~-(ulonglong)(dVar24 < 0.0) & (ulonglong)dVar24 |
                       (ulonglong)(dVar24 + 360.0) & -(ulonglong)(dVar24 < 0.0));
      if ((dVar24 == 0.0) && (!NAN(dVar24))) {
        if ((local_f0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
  }
  param_2[0xc] = (float)((int)param_2[0xc] + -1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_1f8);
}



// FUNCTION 14050671c FUN_14050671c body=67 status=ok
// SIG undefined FUN_14050671c(void)

int FUN_14050671c(longlong param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  
  cVar1 = (**(code **)(*(longlong *)(param_1 + -0x38) + 0x60))(param_1 + -0x38);
  if (cVar1 == '\0') {
    if (*(longlong **)(param_1 + 0x2298) == (longlong *)0x0) {
      iVar3 = 0;
    }
    else {
      bVar2 = (**(code **)(**(longlong **)(param_1 + 0x2298) + 0x368))();
      iVar3 = (uint)bVar2 + (uint)bVar2 * 2;
    }
  }
  else {
    iVar3 = 3;
  }
  return iVar3;
}



// FUNCTION 140506774 FUN_140506774 body=135 status=ok
// SIG undefined FUN_140506774(void)

ulonglong FUN_140506774(ulonglong param_1)

{
  int *piVar1;
  PSRWLOCK SRWLock;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  SRWLock = *(PSRWLOCK *)(param_1 + 0x1af0);
  AcquireSRWLockShared(SRWLock);
  if (*(int *)(param_1 + 0x1ab8) < 1) {
    lVar2 = param_1 + 0x17e0;
    if (*(longlong *)(param_1 + 0x1a80) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x1a80);
    }
    piVar1 = (int *)(param_1 + 0x1a88);
    if ((longlong)*piVar1 == 0) {
      param_1 = 0;
    }
    else {
      lVar3 = 0;
      do {
        bVar4 = *(char *)(lVar2 + lVar3) == '\0';
        param_1 = CONCAT71((int7)(param_1 >> 8),bVar4);
        if (bVar4) break;
        bVar4 = (longlong)*piVar1 * 0xa8 + -0xa8 != lVar3;
        lVar3 = lVar3 + 0xa8;
      } while (bVar4);
    }
  }
  else {
    param_1 = CONCAT71((int7)(param_1 >> 8),1);
  }
  ReleaseSRWLockShared(SRWLock);
  return param_1 & 0xffffffff;
}



// FUNCTION 1405067fc FUN_1405067fc body=564 status=ok
// SIG undefined FUN_1405067fc(void)

ulonglong FUN_1405067fc(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 unaff_RSI;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    if ((longlong)*(int *)(param_1 + 0x168) != 0) {
      lVar10 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x160) + lVar10);
        if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x8a0) == *param_2)) &&
           (*(char *)(lVar3 + 0x290) == '\x01')) {
          uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
          goto LAB_14050680e;
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)*(int *)(param_1 + 0x168) * 8 != lVar10);
    }
    if (*(int *)(param_1 + 0x4c) != 0) {
      uVar2 = *(uint *)(param_1 + 0x48);
      uVar9 = 0;
      if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14050680e;
      plVar7 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((plVar7 != (longlong *)0x0) &&
          (((int)plVar7[2] == *(int *)(param_1 + 0x4c) &&
           ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) &&
         (plVar7 = (longlong *)*plVar7, plVar7 != (longlong *)0x0)) {
        uVar4 = FUN_140437988();
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar4);
        if (plVar7 != (longlong *)0x0) {
          uVar4 = FUN_140437988();
          plVar5 = (longlong *)FUN_144718840(plVar7,uVar4);
          uVar9 = 0;
          if ((plVar7 == plVar5) || (uVar9 = 0, plVar5 == (longlong *)0x0)) goto LAB_14050680e;
          plVar7 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5);
          if ((*param_2 != 0) && ((longlong)(int)plVar7[1] != 0)) {
            lVar10 = 0;
            uVar9 = 0;
            do {
              if (*(longlong *)(*plVar7 + 0x68 + lVar10) == *param_2) {
                iVar6 = (int)(lVar10 >> 3) * -0xf0f0f0f;
                uVar9 = 0;
                if ((iVar6 != -1) && (lVar10 = *plVar7 + (longlong)iVar6 * 0x88, lVar10 != 0)) {
                  if ((longlong)*(int *)(lVar10 + 0x10) == 0) goto LAB_14050680c;
                  puVar11 = *(undefined8 **)(lVar10 + 8);
                  puVar8 = puVar11 + (longlong)*(int *)(lVar10 + 0x10) * 2;
                  uVar9 = 0;
                  goto LAB_14050699b;
                }
                break;
              }
              lVar10 = lVar10 + 0x88;
            } while ((longlong)(int)plVar7[1] * 0x88 != lVar10);
            goto LAB_14050680e;
          }
        }
      }
    }
  }
LAB_14050680c:
  uVar9 = 0;
LAB_14050680e:
  return uVar9 & 0xffffffff;
  while( true ) {
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
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    puVar11 = puVar11 + 2;
    if (puVar11 == puVar8) break;
LAB_14050699b:
    plVar7 = (longlong *)*puVar11;
    plVar5 = (longlong *)puVar11[1];
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    lVar10 = (**(code **)(*plVar7 + 0x50))();
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x290) == '\x01')) {
      uVar9 = 1;
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
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      break;
    }
  }
  goto LAB_14050680e;
}



// FUNCTION 140506a30 FUN_140506a30 body=4400 status=ok
// SIG undefined FUN_140506a30(void)

/* WARNING: Removing unreachable block (ram,0x0001405076d7) */

void FUN_140506a30(longlong param_1)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  void *pvVar6;
  undefined1 auVar7 [16];
  double dVar8;
  longlong *plVar9;
  DWORD DVar10;
  char cVar11;
  char cVar12;
  DWORD DVar13;
  DWORD DVar14;
  longlong lVar15;
  LPVOID lpTlsValue;
  longlong lVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined8 unaff_RSI;
  longlong *plVar21;
  undefined8 *puVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  int iVar26;
  longlong *plVar27;
  longlong *plVar28;
  bool bVar29;
  undefined1 auStack_228 [32];
  longlong *local_208;
  longlong *local_200;
  ulonglong local_1f0;
  longlong *local_1e8;
  undefined8 *local_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  ulonglong local_1c8;
  longlong local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  longlong local_198;
  ulonglong local_190;
  ulonglong local_188;
  undefined4 *local_180;
  longlong *local_178;
  undefined8 local_170;
  undefined8 local_168;
  longlong local_160;
  longlong local_158;
  ulonglong uStack_150;
  longlong local_148;
  ulonglong uStack_140;
  longlong local_138;
  ulonglong uStack_130;
  void *local_128;
  ulonglong uStack_120;
  longlong local_118;
  ulonglong uStack_110;
  longlong *local_108;
  undefined8 *local_100;
  undefined8 local_f8;
  longlong local_f0;
  char local_e8;
  undefined8 local_e0;
  uint local_d8;
  int local_d4;
  int *local_d0;
  undefined8 local_c8;
  undefined1 local_bc [4];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  plVar27 = *(longlong **)(param_1 + 0xf80);
  if (plVar27 != (longlong *)0x0) {
    bVar3 = *(byte *)(param_1 + 0xfe0);
    uVar24 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),*(undefined1 *)(param_1 + 0xfe5));
    cVar12 = *(char *)(param_1 + 0xfe1);
    lVar16 = *(longlong *)(param_1 + 0xf70);
    if ((lVar16 != 0) && ((*(byte *)(lVar16 + 0x31) & 4) != 0)) {
      FUN_1449d3f9e(lVar16);
    }
    cVar11 = FUN_1405080a6(param_1);
    if (cVar11 != '\0') {
      FUN_1449d3f9e(*(undefined8 *)(param_1 + 0xaf8));
    }
    if (cVar12 != '\0') {
      lVar25 = (ulonglong)bVar3 * 0x20;
      lVar15 = param_1 + lVar25 + 0xf88;
      if (0 < *(int *)(param_1 + lVar25 + 0xf90)) {
        DVar13 = DAT_14c7585d0;
        local_1f0 = (ulonglong)bVar3;
        local_160 = lVar15;
        if (DAT_14c7585d0 == 0xffffffff) {
          DVar13 = TlsAlloc();
          DVar14 = 0xffffffff;
          LOCK();
          bVar29 = DAT_14c7585d0 != 0xffffffff;
          DVar10 = DVar13;
          if (bVar29) {
            DVar14 = DAT_14c7585d0;
            DVar10 = DAT_14c7585d0;
          }
          DAT_14c7585d0 = DVar10;
          UNLOCK();
          if (bVar29) {
            TlsFree(DVar13);
            DVar13 = DVar14;
          }
        }
        lVar15 = param_1 + lVar25;
        plVar21 = (longlong *)(lVar15 + 0xfe8);
        lpTlsValue = TlsGetValue(DVar13);
        if (lpTlsValue == (LPVOID)0x0) {
          lpTlsValue = (LPVOID)FUN_140036a08(&local_b8);
          FUN_140fddf04(lpTlsValue);
          TlsSetValue(DVar13,lpTlsValue);
        }
        local_100 = (undefined8 *)((longlong)lpTlsValue + 0x10);
        local_f8 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
        local_f0 = *(longlong *)((longlong)lpTlsValue + 0x20);
        local_e8 = '\0';
        local_e0 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
        *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_100;
        *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = (longlong *)0x0;
        local_200 = &local_158;
        local_128 = (void *)0x0;
        uStack_120 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_208 = &local_118;
        FUN_140507c0e(plVar27,lVar16,uVar24 & 0xffffffff,plVar21);
        cVar12 = FUN_140284ae6(param_1);
        if (cVar12 != '\0') {
          lVar16 = FUN_1478f7af0(*(undefined8 *)(param_1 + 0xaf8),0,0);
          if (lVar16 != 0) {
            if ((((((local_108 == (longlong *)0x0) || (*(int *)((longlong)local_108 + 0x34) == 0))
                  || (uVar18 = *(uint *)(local_108 + 6), (int)uVar18 < 0)) ||
                 ((DAT_14c9647dc <= (int)uVar18 ||
                  (lVar23 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8),
                  lVar23 == 0)))) ||
                (*(int *)(lVar23 + 0x10) != *(int *)((longlong)local_108 + 0x34))) ||
               ((((*(uint *)(lVar23 + 8) & 0x10200000) != 0 || (local_108[9] == 0)) ||
                ((int)local_108[1] < 1)))) {
              uVar20 = FUN_1478f851c(*(undefined8 *)(param_1 + 0xaf8));
              FUN_147a0c344(lVar16 + 0x38,uVar20);
              FUN_1478e2ea2(lVar16 + 0x50,uVar20);
            }
            else {
              FUN_1474ff7d8(lVar16 + 0x38,&local_118);
              local_1d0 = (longlong *)(lVar16 + 0x50);
              if (local_1d0 != plVar21) {
                iVar26 = *(int *)(lVar15 + 0xff0);
                local_1e8 = (longlong *)(longlong)iVar26;
                local_1e0 = (undefined8 *)*plVar21;
                *(int *)(lVar16 + 0x58) = iVar26;
                if (iVar26 == 0 && *(int *)(lVar16 + 0x5c) == 0) {
                  *(undefined4 *)(lVar16 + 0x5c) = 0;
                }
                else {
                  FUN_1447563a6(local_1d0,iVar26);
                  if (iVar26 != 0) {
                    memcpy((void *)*local_1d0,local_1e0,(longlong)local_1e8 << 4);
                  }
                }
              }
              *(undefined1 *)(lVar16 + 0x60) = *(undefined1 *)(lVar15 + 0xff8);
              FUN_147a0c152(lVar16 + 0x70,&local_158);
            }
            *(byte *)(lVar16 + 0xb0) = *(byte *)(lVar16 + 0xb0) | 1;
          }
          local_200 = &local_158;
          local_208 = &local_118;
          FUN_140507c0e(plVar27,*(undefined8 *)(param_1 + 0xaf8),uVar24 & 0xffffffff,plVar21);
        }
        lVar25 = param_1 + lVar25;
        plVar21 = (longlong *)(lVar25 + 0xf98);
        lVar16 = (**(code **)(*plVar27 + 0x308))(plVar27);
        plVar28 = (longlong *)(lVar16 + 0x30);
        if (((((((local_108 == (longlong *)0x0) || (*(int *)((longlong)local_108 + 0x34) == 0)) ||
               (uVar18 = *(uint *)(local_108 + 6), (int)uVar18 < 0)) ||
              ((DAT_14c9647dc <= (int)uVar18 ||
               (lVar15 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8), lVar15 == 0
               )))) || ((*(int *)(lVar15 + 0x10) != *(int *)((longlong)local_108 + 0x34) ||
                        (((*(uint *)(lVar15 + 8) & 0x10200000) != 0 || (local_108[9] == 0)))))) ||
            ((int)local_108[1] < 1)) || ((int)uStack_110 < 1)) {
          iVar26 = (int)local_1f0;
          if (plVar28 != plVar21) {
            iVar5 = *(int *)(lVar16 + 0x38);
            pvVar6 = *(void **)(lVar16 + 0x30);
            *(int *)(lVar25 + 4000) = iVar5;
            if (iVar5 == 0 && *(int *)(lVar25 + 0xfa4) == 0) {
              *(undefined4 *)(lVar25 + 0xfa4) = 0;
            }
            else {
              FUN_144756262(plVar21,iVar5);
              if (iVar5 != 0) {
                memcpy((void *)*plVar21,pvVar6,(longlong)iVar5 * 0x60);
              }
            }
          }
        }
        else {
          FUN_142400cf0(local_118);
          local_1e8 = (longlong *)(ulonglong)*(uint *)(lVar16 + 0x38);
          FUN_140ee84a4(plVar21,local_1e8,1);
          if ((uStack_110 & 0xffffffff) == 0) {
            uVar18 = 0;
          }
          else {
            uVar24 = 0;
            uVar18 = 0;
            do {
              uVar4 = *(ushort *)(*local_108 + uVar24 * 2);
              if (uVar18 < uVar4) {
                lVar25 = (ulonglong)(uint)uVar4 - (ulonglong)uVar18;
                lVar16 = (ulonglong)uVar18 * 0x60;
                do {
                  puVar17 = (undefined8 *)(*plVar28 + lVar16);
                  puVar22 = (undefined8 *)(*plVar21 + lVar16);
                  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
                    *puVar22 = *puVar17;
                    puVar17 = puVar17 + 1;
                    puVar22 = puVar22 + 1;
                  }
                  lVar16 = lVar16 + 0x60;
                  lVar25 = lVar25 + -1;
                } while (lVar25 != 0);
              }
              puVar17 = (undefined8 *)(uVar24 * 0x60 + local_118);
              puVar22 = (undefined8 *)((ulonglong)((uint)uVar4 * 0x60) + *plVar21);
              for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
                *puVar22 = *puVar17;
                puVar17 = puVar17 + 1;
                puVar22 = puVar22 + 1;
              }
              uVar18 = uVar4 + 1;
              uVar24 = uVar24 + 1;
            } while (uVar24 != (uStack_110 & 0xffffffff));
          }
          iVar26 = (int)local_1f0;
          if ((int)uVar18 < (int)local_1e8) {
            lVar25 = (longlong)local_1e8 - (ulonglong)uVar18;
            lVar16 = (ulonglong)(uVar18 << 5) * 3;
            do {
              puVar17 = (undefined8 *)(*plVar28 + lVar16);
              puVar22 = (undefined8 *)(*plVar21 + lVar16);
              for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
                *puVar22 = *puVar17;
                puVar17 = puVar17 + 1;
                puVar22 = puVar22 + 1;
              }
              lVar16 = lVar16 + 0x60;
              lVar25 = lVar25 + -1;
            } while (lVar25 != 0);
          }
        }
        plVar9 = local_108;
        pvVar6 = local_128;
        lVar16 = *plVar21;
        lVar25 = *plVar28;
        dVar1 = *(double *)(lVar16 + 0x30);
        dVar2 = *(double *)(lVar25 + 0x30);
        dVar8 = *(double *)(lVar16 + 0x28) - *(double *)(lVar25 + 0x28);
        auVar7._8_4_ = SUB84(dVar8,0);
        auVar7._0_8_ = *(double *)(lVar16 + 0x20) - *(double *)(lVar25 + 0x20);
        auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        *(undefined1 (*) [16])(param_1 + 0xfc8) = auVar7;
        *(double *)(param_1 + 0xfd8) = dVar1 - dVar2;
        if ((((local_108 != (longlong *)0x0) && (*(int *)((longlong)local_108 + 0x34) != 0)) &&
            (uVar18 = *(uint *)(local_108 + 6), -1 < (int)uVar18)) &&
           ((((int)uVar18 < DAT_14c9647dc &&
             (lVar16 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8), lVar16 != 0))
            && (((*(int *)(lVar16 + 0x10) == *(int *)((longlong)local_108 + 0x34) &&
                 (((*(uint *)(lVar16 + 8) & 0x10200000) == 0 && (local_108[9] != 0)))) &&
                (0 < (int)local_108[1])))))) {
          lVar16 = param_1 + (ulonglong)(uint)(iVar26 << 6);
          plVar28 = (longlong *)(lVar16 + 0x1028);
          if (&local_158 != plVar28) {
            iVar26 = (int)uStack_120;
            lVar25 = (longlong)(int)uStack_120;
            *(int *)(lVar16 + 0x1060) = (int)uStack_120;
            if ((int)uStack_120 == 0 && *(int *)(lVar16 + 0x1064) == 0) {
              *(undefined4 *)(lVar16 + 0x1064) = 0;
            }
            else {
              FUN_1474d4b9c((undefined8 *)(lVar16 + 0x1058),uStack_120 & 0xffffffff);
              if (iVar26 != 0) {
                memcpy(*(void **)(lVar16 + 0x1058),pvVar6,lVar25 << 3);
              }
            }
          }
          uVar24 = uStack_140;
          iVar26 = (int)uStack_140;
          if ((int)uStack_140 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uStack_140 & 0xffffffff);
          }
          FUN_144716758(*(undefined8 *)(lVar16 + 0x1038),*(undefined4 *)(lVar16 + 0x1040));
          *(undefined4 *)(lVar16 + 0x1040) = 0;
          if (*(int *)(lVar16 + 0x1044) != iVar26) {
            FUN_147a147b4(lVar16 + 0x1038,uVar24 & 0xffffffff);
          }
          FUN_1403b0d30(plVar28,uStack_150 & 0xffffffff);
          uVar24 = uStack_130;
          iVar26 = (int)uStack_130;
          if ((int)uStack_130 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uStack_130 & 0xffffffff);
          }
          FUN_144723c10(*(undefined8 *)(lVar16 + 0x1048),*(undefined4 *)(lVar16 + 0x1050));
          *(undefined4 *)(lVar16 + 0x1050) = 0;
          if (*(int *)(lVar16 + 0x1054) != iVar26) {
            FUN_1474d8698(lVar16 + 0x1048,uVar24 & 0xffffffff);
          }
          lVar25 = (longlong)(int)uStack_150;
          if (0 < lVar25) {
            local_1c0 = 0;
            local_178 = plVar27;
            do {
              local_98 = 0;
              local_90 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_8c = 0xffffffff00000080;
              local_84 = 0;
              local_78 = (undefined1 *)0x0;
              local_70 = 0;
              local_1d0 = (longlong *)(local_1c0 * 0x10);
              local_1f0 = (ulonglong)*(int *)(local_158 + 8 + (longlong)local_1d0);
              if (local_1f0 != 0) {
                local_1e8 = *(longlong **)(local_158 + (longlong)local_1d0);
                local_1f0 = local_1f0 << 2;
                lVar15 = 0;
                do {
                  local_d4 = *(int *)((longlong)local_1e8 + lVar15);
                  local_d8 = (uint)*(ushort *)(*plVar9 + (longlong)local_d4 * 2);
                  local_d0 = &local_d4;
                  local_c8 = &local_d8;
                  FUN_147a14814(&local_b8,local_bc,&local_d0);
                  lVar15 = lVar15 + 4;
                } while (local_1f0 != lVar15);
              }
              local_1c8 = *(ulonglong *)(*(longlong *)(lVar16 + 0x1058) + local_1c0 * 8);
              local_1e8 = (longlong *)(local_148 + (longlong)local_1d0);
              local_1d0 = (longlong *)((longlong)local_1d0 + local_138);
              iVar26 = *(int *)(lVar16 + 0x1040);
              *(uint *)(lVar16 + 0x1040) = iVar26 + 1U;
              if (*(uint *)(lVar16 + 0x1044) < iVar26 + 1U) {
                FUN_147935b4e(lVar16 + 0x1038,iVar26);
              }
              local_1b0 = *(longlong **)(lVar16 + 0x1038);
              local_1b0[(longlong)iVar26 * 2] = 0;
              (local_1b0 + (longlong)iVar26 * 2)[1] = 0;
              local_1e0 = (undefined8 *)(longlong)*(int *)(lVar16 + 0x1050);
              uVar18 = *(int *)(lVar16 + 0x1050) + 1;
              *(uint *)(lVar16 + 0x1050) = uVar18;
              if (*(uint *)(lVar16 + 0x1054) < uVar18) {
                FUN_1474d86f8(lVar16 + 0x1048,local_1e0);
              }
              local_1b8 = *(longlong **)(lVar16 + 0x1048);
              puVar17 = (undefined8 *)((longlong)local_1e0 * 0x10);
              local_1b8[(longlong)local_1e0 * 2] = 0;
              (local_1b8 + (longlong)local_1e0 * 2)[1] = 0;
              local_1f0 = (ulonglong)*(int *)(lVar16 + 0x1030);
              uVar18 = *(int *)(lVar16 + 0x1030) + 1;
              *(uint *)(lVar16 + 0x1030) = uVar18;
              local_1e0 = puVar17;
              if (*(uint *)(lVar16 + 0x1034) < uVar18) {
                FUN_140bfc2d4(plVar28,local_1f0);
              }
              local_198 = *plVar28;
              lVar15 = local_1f0 * 0x10;
              puVar17 = (undefined8 *)(local_198 + lVar15);
              *puVar17 = 0;
              puVar17[1] = 0;
              local_1f0 = (ulonglong)(int)local_1e8[1];
              if (0 < (longlong)local_1f0) {
                local_1a8 = local_1c8 >> 0x20;
                local_1b0 = local_1b0 + (longlong)iVar26 * 2;
                local_1b8 = (longlong *)((longlong)local_1b8 + (longlong)local_1e0);
                local_198 = local_198 + lVar15;
                local_190 = local_1c8 & 0xffff;
                local_188 = (ulonglong)((uint)(local_1c8 >> 0x10) & 0x7fff);
                uVar24 = 0;
                do {
                  if ((int)uStack_b0 != local_84) {
                    uVar18 = *(uint *)(*local_1e8 + 0x10 + uVar24 * 0x14);
                    puVar19 = local_78;
                    if (local_78 == (undefined1 *)0x0) {
                      puVar19 = local_80;
                    }
                    iVar26 = *(int *)(puVar19 + (ulonglong)(local_70 - 1U & uVar18) * 4);
                    if (iVar26 != -1) {
                      puVar17 = (undefined8 *)(*local_1e8 + uVar24 * 0x14);
                      local_1e0 = (undefined8 *)(uVar24 * 0x10 + *local_1d0);
                      do {
                        lVar15 = local_b8 + (longlong)iVar26 * 0x10;
                        if (*(uint *)(local_b8 + (longlong)iVar26 * 0x10) == uVar18) {
                          local_180 = (undefined4 *)(lVar15 + 4);
                          if (local_180 != (undefined4 *)0x0 && lVar15 != 0) {
                            local_1a0 = CONCAT44(local_1a0._4_4_,*local_180);
                            local_168 = *puVar17;
                            local_170 = puVar17[1];
                            local_1d8 = (longlong)(int)local_1b0[1];
                            uVar18 = (int)local_1b0[1] + 1;
                            *(uint *)(local_1b0 + 1) = uVar18;
                            if (*(uint *)((longlong)local_1b0 + 0xc) < uVar18) {
                              FUN_147935bd4(local_1b0,local_1d8);
                            }
                            lVar15 = *local_1b0;
                            *(undefined8 *)(lVar15 + local_1d8 * 0x14) = local_168;
                            *(undefined8 *)(lVar15 + 8 + local_1d8 * 0x14) = local_170;
                            *(undefined4 *)(lVar15 + 0x10 + local_1d8 * 0x14) =
                                 (undefined4)local_1a0;
                            if ((local_1a8 == 0) || ((int)local_1c8 < 0)) {
LAB_140507b4f:
                              uVar20 = 0;
                            }
                            else {
                              uVar20 = 0;
                              if ((int)local_1c8 < DAT_14c9647dc) {
                                puVar17 = (undefined8 *)
                                          ((ulonglong)(uint)((int)local_190 * 0x18) +
                                          *(longlong *)(DAT_14c9647c8 + local_188 * 8));
                                if (((puVar17 == (undefined8 *)0x0) ||
                                    (*(int *)(puVar17 + 2) != (int)local_1a8)) ||
                                   ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)) goto LAB_140507b4f;
                                uVar20 = *puVar17;
                              }
                            }
                            FUN_1474d8648(&local_d0,uVar20);
                            local_1d8 = (longlong)(int)local_1b8[1];
                            uVar18 = (int)local_1b8[1] + 1;
                            *(uint *)(local_1b8 + 1) = uVar18;
                            if (*(uint *)((longlong)local_1b8 + 0xc) < uVar18) {
                              FUN_1474d877e(local_1b8,local_1d8);
                            }
                            local_1a0 = *local_1b8;
                            local_1d8 = local_1d8 * 0x10;
                            *(undefined8 *)(local_1a0 + local_1d8) = 0;
                            *(int **)(local_1a0 + local_1d8) = local_d0;
                            *(undefined4 *)(local_1a0 + 8 + local_1d8) = (undefined4)local_c8;
                            *(undefined4 *)(local_1a0 + 0xc + local_1d8) = local_c8._4_4_;
                            local_c8 = (uint *)0x0;
                            local_d0 = (int *)0x0;
                            if ((local_1a8 == 0) || ((int)local_1c8 < 0)) {
LAB_140507b56:
                              uVar20 = 0;
                            }
                            else {
                              uVar20 = 0;
                              if ((int)local_1c8 < DAT_14c9647dc) {
                                puVar17 = (undefined8 *)
                                          ((ulonglong)(uint)((int)local_190 * 0x18) +
                                          *(longlong *)(DAT_14c9647c8 + local_188 * 8));
                                if (((puVar17 == (undefined8 *)0x0) ||
                                    (*(int *)(puVar17 + 2) != (int)local_1a8)) ||
                                   ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)) goto LAB_140507b56;
                                uVar20 = *puVar17;
                              }
                            }
                            FUN_1449b16b6(uVar20,*(undefined8 *)(local_1a0 + local_1d8),*local_1e0,1
                                         );
                            local_d0 = (int *)CONCAT44(local_d0._4_4_,*local_180);
                            FUN_144aa221c(local_198,&local_d0);
                          }
                          break;
                        }
                        iVar26 = *(int *)(lVar15 + 8);
                      } while (iVar26 != -1);
                    }
                  }
                  uVar24 = uVar24 + 1;
                } while (uVar24 != local_1f0);
              }
              local_70 = 0;
              if (local_78 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
              FUN_147a14cb2(&local_b8);
              local_1c0 = local_1c0 + 1;
              plVar27 = local_178;
            } while (local_1c0 != lVar25);
          }
        }
        FUN_1407ecbee(plVar27,plVar21,param_1 + 0xd60,local_160);
        if (local_128 != (void *)0x0) {
          FUN_1400020a8();
        }
        FUN_144723c10(local_138,uStack_130 & 0xffffffff);
        if (local_138 != 0) {
          FUN_1400020a8();
        }
        FUN_144716758(local_148,uStack_140 & 0xffffffff);
        if (local_148 != 0) {
          FUN_1400020a8();
        }
        FUN_144716727(local_158,uStack_150 & 0xffffffff);
        if (local_158 != 0) {
          FUN_1400020a8();
        }
        if (local_e8 == '\0') {
          local_e8 = '\x01';
          *(int *)(local_100 + 4) = *(int *)(local_100 + 4) + -1;
          if (local_f0 != local_100[2]) {
            FUN_14004673c();
          }
          *local_100 = local_f8;
          local_100[3] = local_e0;
        }
      }
    }
  }
  lVar16 = DAT_14cad2880;
  iVar26 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (((iVar26 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar26 == 2)) {
    uVar24 = 0;
  }
  else if (iVar26 == 1) {
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    uVar24 = (ulonglong)(DVar13 != DVar14);
  }
  else {
    uVar24 = 1;
  }
  plVar27 = (longlong *)(param_1 + 0xf70);
  if (*(int *)(lVar16 + uVar24 * 4) != 0) {
    if (*(char *)(param_1 + 0xfe3) == '\x01') {
      iVar26 = *(int *)(param_1 + 0xff0);
      pvVar6 = *(void **)(param_1 + 0xfe8);
      *(int *)(param_1 + 0x1010) = iVar26;
      if (iVar26 == 0 && *(int *)(param_1 + 0x1014) == 0) {
        *(undefined4 *)(param_1 + 0x1014) = 0;
      }
      else {
        FUN_1447563a6((undefined8 *)(param_1 + 0x1008),iVar26);
        if (iVar26 != 0) {
          memcpy(*(void **)(param_1 + 0x1008),pvVar6,(longlong)iVar26 << 4);
        }
      }
      *(undefined1 *)(param_1 + 0x1018) = *(undefined1 *)(param_1 + 0xff8);
    }
    if (*(char *)(param_1 + 0xfe4) == '\x01') {
      FUN_14571e99c(param_1 + 0x1068,param_1 + 0x1028);
    }
    if (*(char *)(param_1 + 0xfe2) == '\x01') {
      *(undefined4 *)(param_1 + 0xfb0) = 0;
      if (*(int *)(param_1 + 0xfb4) < 0) {
        FUN_1401a2688(param_1 + 0xfa8,0);
      }
      FUN_1406f47cc(param_1 + 0xfa8,param_1 + 0xf88);
      *(undefined4 *)(param_1 + 0xfc0) = 0;
      if (*(int *)(param_1 + 0xfc4) < 0) {
        FUN_1401a2688(param_1 + 0xfb8,0);
      }
      FUN_1406f47cc(param_1 + 0xfb8,param_1 + 0xf98);
    }
    if (*(char *)(param_1 + 0xfe0) == '\x01') {
      if (((*(byte *)(param_1 + 0x8a0) & 8) == 0) || (*(longlong *)(param_1 + 0x9c0) == 0)) {
        uVar24 = (ulonglong)*(uint *)(param_1 + 0x860);
      }
      else {
        if (*(longlong **)(param_1 + 0xae8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x2f0))();
          (**(code **)(**(longlong **)(param_1 + 0xae8) + 0x2f8))
                    (*(longlong **)(param_1 + 0xae8),plVar27);
        }
        iVar26 = *(int *)(param_1 + 0xb80);
        if ((longlong)iVar26 != 0) {
          lVar16 = *(longlong *)(param_1 + 0xb78);
          lVar25 = 0;
          do {
            plVar21 = *(longlong **)(lVar16 + lVar25);
            (**(code **)(*plVar21 + 0x2f0))(plVar21);
            (**(code **)(*plVar21 + 0x2f8))(plVar21,plVar27);
            lVar25 = lVar25 + 8;
          } while ((longlong)iVar26 * 8 != lVar25);
        }
        if (*(longlong **)(param_1 + 0xaf8) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(param_1 + 0xaf8) + 0x2f0))();
          (**(code **)(**(longlong **)(param_1 + 0xaf8) + 0x2f8))
                    (*(longlong **)(param_1 + 0xaf8),plVar27);
        }
        uVar24 = FUN_14571e93a(*(undefined8 *)(param_1 + 0x9c0));
      }
      FUN_140507b88(param_1 + 0xf98,param_1 + 0xfb8,uVar24,param_1 + 0xd50);
      FUN_1407ecbee(*(undefined8 *)(param_1 + 0xf80),param_1 + 0xf98,param_1 + 0xd60,param_1 + 0xf88
                   );
      FUN_140507e50(param_1 + 0xfe8,param_1 + 0x1008,uVar24);
      FUN_140508b0e(param_1 + 0x1028,param_1 + 0x1068,uVar24);
    }
  }
  if (((*(char *)(param_1 + 0xfe1) != '\0') || (*(char *)(param_1 + 0xfe0) == '\x01')) &&
     ((*plVar27 != 0 || (*(longlong *)(param_1 + 0xf78) != 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_228);
  }
  if ((local_60 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140507b88 FUN_140507b88 body=134 status=ok
// SIG undefined FUN_140507b88(void)

void FUN_140507b88(undefined8 *param_1,undefined8 *param_2,float param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
  undefined8 in_R8;
  
  if (0.99999 <= param_3) {
    if (param_1 != param_2) {
      iVar1 = *(int *)(param_2 + 1);
      _Src = (void *)*param_2;
      *(int *)(param_1 + 1) = iVar1;
      if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_144756262(param_1,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x60);
          return;
        }
      }
    }
  }
  else if (1e-05 < param_3) {
    FUN_142256010(*param_1,*param_2,in_R8,*param_4,*(undefined4 *)(param_4 + 1));
  }
  return;
}



// FUNCTION 140507c0e FUN_140507c0e body=147 status=ok
// SIG undefined FUN_140507c0e(void)

void FUN_140507c0e(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = (**(code **)(*param_1 + 0x3f0))();
  if ((param_2 != 0) && (lVar2 != 0)) {
    cVar1 = FUN_1417b4632(param_2,param_1);
    if (cVar1 != '\0') {
      local_38 = param_5;
      local_30 = param_6;
      local_40 = param_4;
      FUN_1433d60fe(param_2,param_3,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140507e50 FUN_140507e50 body=202 status=ok
// SIG undefined FUN_140507e50(void)

void FUN_140507e50(undefined8 *param_1,undefined8 *param_2,float param_3)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_58 [44];
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_3;
  if (1e-05 < ABS(param_3)) {
    if (ABS(param_3 + -1.0) <= 1e-05) {
      if (param_1 != param_2) {
        iVar1 = *(int *)(param_2 + 1);
        _Src = (void *)*param_2;
        *(int *)(param_1 + 1) = iVar1;
        if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
          *(undefined4 *)((longlong)param_1 + 0xc) = 0;
        }
        else {
          FUN_1447563a6(param_1,iVar1);
          if (iVar1 != 0) {
            memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
          }
        }
      }
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
    }
    else {
      FUN_1449d3d40(param_1,param_2,&local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140507f1c FUN_140507f1c body=66 status=ok
// SIG undefined FUN_140507f1c(void)

longlong FUN_140507f1c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14571eb8e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_14470c6f4(lVar2,1);
  return lVar2;
}



// FUNCTION 140507f5e FUN_140507f5e body=102 status=ok
// SIG undefined FUN_140507f5e(void)

longlong FUN_140507f5e(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xc) == iVar1) {
    FUN_14571eb8e(param_1,iVar1);
  }
  lVar3 = (longlong)param_2 * 0x10;
  memmove((void *)(*param_1 + lVar3 + 0x10),(void *)(*param_1 + lVar3),
          (ulonglong)(uint)(iVar1 - param_2) << 4);
  lVar2 = *param_1;
  FUN_14470c6f4(lVar3 + lVar2,1);
  return lVar3 + lVar2;
}



// FUNCTION 140507fc4 FUN_140507fc4 body=226 status=ok
// SIG undefined FUN_140507fc4(void)

void FUN_140507fc4(longlong param_1,int param_2)

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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
      }
    }
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



// FUNCTION 1405080a6 FUN_1405080a6 body=430 status=ok
// SIG undefined FUN_1405080a6(void)

undefined8 FUN_1405080a6(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
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
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_1 + 0x854);
  if (*(int *)(param_1 + 0xca4) == -1 || iVar1 <= *(int *)(param_1 + 0xca4)) {
    lVar3 = *(longlong *)(param_1 + 0x658);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x660);
      if ((DAT_14c950c29 & lVar3 != 0) != 0) goto LAB_14050822f;
      if (lVar3 != 0) goto LAB_1405080fa;
    }
    else {
      if (DAT_14c950c29 == 1) {
LAB_14050822f:
        FUN_1456cec3c(lVar3);
      }
LAB_1405080fa:
      if (DAT_14cb06da8 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1464003b0;
        local_48 = &LAB_147d17bdf;
        local_50 = &LAB_1417edf22;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10000000;
        local_70 = 8;
        local_78 = 0x588;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
      }
      if (((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) &&
         (*(int *)(lVar3 + 0x488) != -1 && *(int *)(lVar3 + 0x488) < iVar1)) goto LAB_14050814a;
    }
    lVar3 = *(longlong *)(param_1 + 0xaf8);
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x31) & 4) != 0)) {
      uVar2 = CONCAT71((int7)((ulonglong)lVar3 >> 8),(*(byte *)(param_1 + 0xc61) & 1) == 0);
      goto LAB_14050814c;
    }
  }
LAB_14050814a:
  uVar2 = 0;
LAB_14050814c:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 140508256 FUN_140508256 body=623 status=ok
// SIG undefined FUN_140508256(void)

void FUN_140508256(longlong param_1)

{
  DWORD DVar1;
  DWORD dwTlsIndex;
  DWORD DVar2;
  LPVOID lpTlsValue;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_cf8 [32];
  longlong local_cd8;
  undefined1 *local_cd0;
  undefined1 local_cc8;
  undefined8 local_cc4;
  undefined1 *local_cb8;
  undefined4 local_cb0;
  undefined8 *local_ca8;
  undefined8 local_ca0;
  longlong local_c98;
  char local_c90;
  undefined8 local_c88;
  undefined1 local_c80 [256];
  undefined8 local_b80;
  undefined8 local_b78;
  undefined8 local_b68;
  undefined8 local_b60;
  undefined8 uStack_b58;
  undefined8 local_b48;
  undefined4 local_b40;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_cf8;
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar2 = 0xffffffff;
    LOCK();
    bVar5 = DAT_14c7585d0 != 0xffffffff;
    DVar1 = dwTlsIndex;
    if (bVar5) {
      DVar2 = DAT_14c7585d0;
      DVar1 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar1;
    UNLOCK();
    if (bVar5) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar2;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(local_c80);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_ca8 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_ca0 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_c98 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_c90 = '\0';
  local_c88 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_ca8;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_cd0 = local_c80;
  local_b80 = 0;
  local_b78 = 0x400000000;
  local_b68 = 0;
  local_b60 = 0x2000000000;
  uStack_b58 = 0xffffffff;
  local_b48 = 0;
  local_b40 = 0;
  local_238 = 0;
  local_230 = 0x800000000;
  local_220 = 0;
  local_218 = 0x2000000000;
  uStack_210 = 0xffffffff;
  local_1f8 = 0;
  local_1f0 = 0;
  local_68 = 0;
  local_60 = 0x400000000;
  local_50 = 0;
  local_48 = 0x2000000000;
  uStack_40 = 0xffffffff;
  local_30 = 0;
  local_28 = 0;
  local_cb0 = *(undefined4 *)(param_1 + 0x158);
  local_cc8 = 1;
  local_cc4 = 0xffffffffffffffff;
  local_cb8 = &DAT_3f8000003f800000;
  local_cd8 = param_1;
  if ((*(longlong **)(param_1 + 0x138) != (longlong *)0x0) &&
     (lVar3 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x80))(), 0 < *(int *)(lVar3 + 8))) {
    plVar4 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x80))();
    local_cc4 = CONCAT44(0xffffffff,*(undefined4 *)(*plVar4 + 0x10));
  }
  FUN_1433d8096(param_1,&local_cd8,*(undefined8 *)(param_1 + 0x170),DAT_14cacc360);
  FUN_1433e88be(param_1 + 0x1d0,param_1,*(undefined4 *)(param_1 + 0x158));
  FUN_144adfe88(local_c80);
  if (local_c90 == '\0') {
    local_c90 = '\x01';
    *(int *)(local_ca8 + 4) = *(int *)(local_ca8 + 4) + -1;
    if (local_c98 != local_ca8[2]) {
      FUN_14004673c();
    }
    *local_ca8 = local_ca0;
    local_ca8[3] = local_c88;
  }
  if ((local_20 ^ (ulonglong)auStack_cf8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140508b0e FUN_140508b0e body=4188 status=ok
// SIG undefined FUN_140508b0e(void)

void FUN_140508b0e(longlong param_1,longlong param_2,float param_3)

{
  longlong lVar1;
  char cVar2;
  uint *puVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  undefined8 uVar23;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  longlong local_1b8;
  longlong local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  longlong *local_198;
  ulonglong local_190;
  uint local_184;
  ulonglong local_180;
  longlong local_178 [2];
  longlong local_168 [2];
  uint local_158 [4];
  uint *local_148;
  uint local_140;
  undefined8 local_13c;
  undefined4 local_134;
  longlong local_128;
  undefined4 local_120;
  longlong local_118 [2];
  uint local_108 [4];
  uint *local_f8;
  uint local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  longlong local_c8 [2];
  uint local_b8 [4];
  uint *local_a8;
  uint local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_a8 = (uint *)0x0;
  local_a0 = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  local_f8 = (uint *)0x0;
  local_f0 = 0;
  local_118[0] = 0;
  local_118[1] = 0;
  local_ec = 0xffffffff00000080;
  local_e4 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_148 = (uint *)0x0;
  local_140 = 0;
  local_168[0] = 0;
  local_168[1] = 0;
  local_13c = 0xffffffff00000080;
  local_134 = 0;
  local_128 = 0;
  local_120 = 0;
  local_1b8 = param_1;
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar12 = *(longlong *)(param_1 + 0x30);
    lVar20 = lVar12 + (longlong)*(int *)(param_1 + 0x38) * 8;
    do {
      plVar19 = local_c8;
      if ((longlong)*(int *)(param_2 + 0x38) != 0) {
        lVar22 = *(longlong *)(param_2 + 0x30);
        lVar17 = (longlong)*(int *)(param_2 + 0x38) << 3;
        do {
          cVar2 = FUN_147935a92(lVar22,lVar12);
          plVar19 = local_168;
          if (cVar2 != '\0') break;
          lVar22 = lVar22 + 8;
          lVar17 = lVar17 + -8;
          plVar19 = local_c8;
        } while (lVar17 != 0);
      }
      FUN_14794477e(plVar19,local_178,lVar12);
      lVar12 = lVar12 + 8;
    } while (lVar12 != lVar20);
  }
  lVar20 = local_1b8;
  if ((longlong)*(int *)(param_2 + 0x38) != 0) {
    lVar22 = *(longlong *)(param_2 + 0x30);
    lVar12 = lVar22 + (longlong)*(int *)(param_2 + 0x38) * 8;
    do {
      if ((longlong)*(int *)(lVar20 + 0x38) != 0) {
        lVar17 = *(longlong *)(lVar20 + 0x30);
        lVar18 = (longlong)*(int *)(lVar20 + 0x38) << 3;
        do {
          cVar2 = FUN_147935a92(lVar17,lVar22);
          if (cVar2 != '\0') goto LAB_140508cc8;
          lVar17 = lVar17 + 8;
          lVar18 = lVar18 + -8;
        } while (lVar18 != 0);
      }
      FUN_14794477e(local_118,local_178,lVar22);
LAB_140508cc8:
      lVar22 = lVar22 + 8;
    } while (lVar22 != lVar12);
  }
  local_1b0 = param_2;
  if (local_a0 == 0) {
    uVar13 = 1;
    iVar14 = 0;
    uVar10 = 0;
    uVar7 = 0;
  }
  else {
    puVar3 = local_a8;
    if (local_a8 == (uint *)0x0) {
      puVar3 = local_b8;
    }
    uVar7 = *puVar3;
    if (uVar7 == 0) {
      iVar14 = local_a0 + 0x1e;
      if (-1 < (int)(local_a0 - 1)) {
        iVar14 = local_a0 - 1;
      }
      uVar10 = 0;
      uVar15 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar15 = uVar10;
      }
      iVar14 = 0;
      do {
        if (uVar15 == uVar10) goto LAB_140508d65;
        iVar14 = iVar14 + 0x20;
        uVar7 = puVar3[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar7 == 0);
    }
    else {
      iVar14 = 0;
      uVar10 = 0;
    }
    uVar13 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar7 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if ((int)local_a0 <= (int)uVar7) {
      uVar7 = local_a0;
    }
  }
  if (uVar7 != local_a0) {
    uVar21 = 0xffffffff;
    local_1a8 = (ulonglong)local_a0;
    do {
      puVar3 = (uint *)(local_c8[0] + (longlong)(int)uVar7 * 0x10);
      iVar16 = *(int *)(local_c8[0] + 4 + (longlong)(int)uVar7 * 0x10);
      local_1a0 = CONCAT44(local_1a0._4_4_,uVar21);
      if ((iVar16 == 0) || (uVar7 = *puVar3, (int)uVar7 < 0)) {
LAB_140509229:
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
        if ((int)uVar7 < DAT_14c9647dc) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
          if (((puVar8 == (undefined8 *)0x0) || (*(int *)(puVar8 + 2) != iVar16)) ||
             ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_140509229;
          uVar23 = *puVar8;
        }
      }
      local_198 = (longlong *)CONCAT44(local_198._4_4_,iVar14);
      iVar14 = -1;
      local_190 = uVar10;
      if ((longlong)*(int *)(lVar20 + 0x38) != 0) {
        lVar12 = *(longlong *)(lVar20 + 0x30);
        lVar22 = (longlong)*(int *)(lVar20 + 0x38) << 3;
        iVar16 = 0;
        do {
          cVar2 = FUN_1400063ec(lVar12,uVar23);
          lVar20 = local_1b8;
          iVar14 = iVar16;
          if (cVar2 != '\0') break;
          lVar12 = lVar12 + 8;
          iVar16 = iVar16 + 1;
          lVar22 = lVar22 + -8;
          iVar14 = -1;
        } while (lVar22 != 0);
      }
      plVar19 = (longlong *)(*(longlong *)(lVar20 + 0x10) + (longlong)iVar14 * 0x10);
      lVar20 = *(longlong *)(lVar20 + 0x20);
      if ((puVar3[1] == 0) || (uVar7 = *puVar3, (int)uVar7 < 0)) {
LAB_140509231:
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
        if ((int)uVar7 < DAT_14c9647dc) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
          if (((puVar8 == (undefined8 *)0x0) || (*(uint *)(puVar8 + 2) != puVar3[1])) ||
             ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_140509231;
          uVar23 = *puVar8;
        }
      }
      FUN_1474d8648(local_178,uVar23);
      plVar4 = (longlong *)FUN_1478b0794(*(undefined8 *)puVar3);
      if (0 < (int)plVar19[1]) {
        lVar12 = 0;
        lVar22 = 0;
        lVar17 = 0;
        do {
          if ((puVar3[1] == 0) || (uVar7 = *puVar3, (int)uVar7 < 0)) {
LAB_140509144:
            uVar23 = 0;
          }
          else {
            uVar23 = 0;
            if ((int)uVar7 < DAT_14c9647dc) {
              puVar8 = (undefined8 *)
                       ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
              if (((puVar8 == (undefined8 *)0x0) || (*(uint *)(puVar8 + 2) != puVar3[1])) ||
                 ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_140509144;
              uVar23 = *puVar8;
            }
          }
          local_1c8 = FUN_147937e1a(local_1b8,uVar23,*plVar19 + lVar12);
          (**(code **)(*plVar4 + 0x30))
                    (plVar4,*(undefined8 *)
                             (*(longlong *)((longlong)iVar14 * 0x10 + lVar20) + lVar22),local_178[0]
                     ,1.0 - param_3);
          lVar17 = lVar17 + 1;
          lVar22 = lVar22 + 0x10;
          lVar12 = lVar12 + 0x14;
        } while (lVar17 < (int)plVar19[1]);
      }
      if (local_178[0] != 0) {
        FUN_1400020a8();
      }
      uVar21 = (uint)local_1a0 & ~(uint)uVar13;
      puVar3 = local_a8;
      if (local_a8 == (uint *)0x0) {
        puVar3 = local_b8;
      }
      iVar16 = (int)local_190;
      lVar20 = (longlong)iVar16;
      uVar7 = puVar3[lVar20] & uVar21;
      uVar10 = local_190;
      iVar14 = (int)local_198;
      if (uVar7 == 0) {
        iVar6 = local_a0 + 0x1e;
        if (-1 < (int)(local_a0 - 1)) {
          iVar6 = local_a0 - 1;
        }
        iVar6 = iVar6 >> 5;
        iVar14 = (int)local_198 + 0x20;
        iVar5 = iVar6;
        if (iVar6 < iVar16) {
          iVar5 = iVar16;
        }
        if (iVar16 < iVar6) {
          lVar12 = 0;
          do {
            uVar7 = puVar3[lVar20 + lVar12 + 1];
            if (uVar7 != 0) {
              uVar10 = (ulonglong)(iVar16 + (int)lVar12 + 1);
              uVar21 = 0xffffffff;
              goto LAB_1405091f8;
            }
            iVar14 = iVar14 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar5 - lVar20 != lVar12);
          uVar21 = 0xffffffff;
          iVar16 = iVar5;
        }
        uVar10 = (ulonglong)(iVar16 + 1);
        uVar7 = local_a0;
      }
      else {
LAB_1405091f8:
        uVar13 = (ulonglong)(-uVar7 & uVar7);
        uVar15 = uVar13 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar7 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if ((int)local_a0 <= (int)uVar7) {
          uVar7 = local_a0;
        }
      }
      lVar20 = local_1b8;
    } while (uVar7 != (uint)local_1a8);
  }
LAB_140508d65:
  if (local_f0 == 0) {
    uVar15 = 1;
    plVar19 = (longlong *)0x0;
    iVar14 = 0;
    uVar7 = 0;
  }
  else {
    puVar3 = local_f8;
    if (local_f8 == (uint *)0x0) {
      puVar3 = local_108;
    }
    uVar7 = *puVar3;
    if (uVar7 == 0) {
      iVar14 = local_f0 + 0x1e;
      if (-1 < (int)(local_f0 - 1)) {
        iVar14 = local_f0 - 1;
      }
      plVar19 = (longlong *)0x0;
      plVar4 = (longlong *)(ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        plVar4 = plVar19;
      }
      iVar14 = 0;
      do {
        if (plVar4 == plVar19) goto LAB_140508df8;
        iVar14 = iVar14 + 0x20;
        uVar7 = puVar3[(longlong)plVar19 + 1];
        plVar19 = (longlong *)((longlong)plVar19 + 1);
      } while (uVar7 == 0);
    }
    else {
      plVar19 = (longlong *)0x0;
      iVar14 = 0;
    }
    uVar15 = (ulonglong)(-uVar7 & uVar7);
    uVar10 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar7 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if ((int)local_f0 <= (int)uVar7) {
      uVar7 = local_f0;
    }
  }
  if (uVar7 != local_f0) {
    uVar21 = 0xffffffff;
    local_1a8 = (ulonglong)local_f0;
    do {
      lVar20 = local_1b0;
      puVar3 = (uint *)(local_118[0] + (longlong)(int)uVar7 * 0x10);
      iVar16 = *(int *)(local_118[0] + 4 + (longlong)(int)uVar7 * 0x10);
      if ((iVar16 == 0) || (uVar7 = *puVar3, (int)uVar7 < 0)) {
LAB_140509532:
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
        if ((int)uVar7 < DAT_14c9647dc) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
          if (((puVar8 == (undefined8 *)0x0) || (*(int *)(puVar8 + 2) != iVar16)) ||
             ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_140509532;
          uVar23 = *puVar8;
        }
      }
      local_190 = CONCAT44(local_190._4_4_,uVar21);
      local_1a0 = CONCAT44(local_1a0._4_4_,iVar14);
      iVar14 = -1;
      local_198 = plVar19;
      if ((longlong)*(int *)(local_1b0 + 0x38) != 0) {
        lVar12 = *(longlong *)(local_1b0 + 0x30);
        lVar22 = (longlong)*(int *)(local_1b0 + 0x38) << 3;
        iVar16 = 0;
        do {
          cVar2 = FUN_1400063ec(lVar12,uVar23);
          iVar14 = iVar16;
          if (cVar2 != '\0') break;
          lVar12 = lVar12 + 8;
          iVar16 = iVar16 + 1;
          lVar22 = lVar22 + -8;
          iVar14 = -1;
        } while (lVar22 != 0);
      }
      lVar20 = *(longlong *)(lVar20 + 0x10);
      lVar12 = (longlong)iVar14 * 0x10;
      plVar19 = (longlong *)FUN_1478b0794(*(undefined8 *)puVar3);
      if (0 < *(int *)(lVar20 + 8 + lVar12)) {
        lVar22 = 0;
        lVar17 = 0;
        do {
          if ((puVar3[1] == 0) || (uVar7 = *puVar3, (int)uVar7 < 0)) {
LAB_140509438:
            uVar23 = 0;
          }
          else {
            uVar23 = 0;
            if ((int)uVar7 < DAT_14c9647dc) {
              puVar8 = (undefined8 *)
                       ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
              if (((puVar8 == (undefined8 *)0x0) || (*(uint *)(puVar8 + 2) != puVar3[1])) ||
                 ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_140509438;
              uVar23 = *puVar8;
            }
          }
          uVar23 = FUN_147937f22(local_1b0,uVar23,*(longlong *)(lVar20 + lVar12) + lVar22);
          if ((puVar3[1] == 0) || (uVar7 = *puVar3, (int)uVar7 < 0)) {
LAB_14050943f:
            uVar11 = 0;
          }
          else {
            uVar11 = 0;
            if ((int)uVar7 < DAT_14c9647dc) {
              puVar8 = (undefined8 *)
                       ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
              if (((puVar8 == (undefined8 *)0x0) || (*(uint *)(puVar8 + 2) != puVar3[1])) ||
                 ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_14050943f;
              uVar11 = *puVar8;
            }
          }
          local_1c8 = FUN_14793802a(local_1b8,uVar11,*(longlong *)(lVar20 + lVar12) + lVar22);
          (**(code **)(*plVar19 + 0x30))(plVar19,local_1c8,uVar23,param_3);
          lVar17 = lVar17 + 1;
          lVar22 = lVar22 + 0x14;
        } while (lVar17 < *(int *)(lVar20 + 8 + lVar12));
      }
      uVar21 = (uint)local_190 & ~(uint)uVar15;
      puVar3 = local_f8;
      if (local_f8 == (uint *)0x0) {
        puVar3 = local_108;
      }
      iVar16 = (int)local_198;
      lVar20 = (longlong)iVar16;
      uVar7 = puVar3[lVar20] & uVar21;
      plVar19 = local_198;
      iVar14 = (uint)local_1a0;
      if (uVar7 == 0) {
        iVar6 = local_f0 + 0x1e;
        if (-1 < (int)(local_f0 - 1)) {
          iVar6 = local_f0 - 1;
        }
        iVar6 = iVar6 >> 5;
        iVar14 = (uint)local_1a0 + 0x20;
        iVar5 = iVar6;
        if (iVar6 < iVar16) {
          iVar5 = iVar16;
        }
        if (iVar16 < iVar6) {
          lVar12 = 0;
          do {
            uVar7 = puVar3[lVar20 + lVar12 + 1];
            if (uVar7 != 0) {
              uVar21 = 0xffffffff;
              plVar19 = (longlong *)(ulonglong)(iVar16 + (int)lVar12 + 1);
              goto LAB_1405094ea;
            }
            iVar14 = iVar14 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar5 - lVar20 != lVar12);
          uVar21 = 0xffffffff;
          iVar16 = iVar5;
        }
        plVar19 = (longlong *)(ulonglong)(iVar16 + 1);
        uVar7 = local_f0;
      }
      else {
LAB_1405094ea:
        uVar15 = (ulonglong)(-uVar7 & uVar7);
        uVar10 = uVar15 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar7 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if ((int)local_f0 <= (int)uVar7) {
          uVar7 = local_f0;
        }
      }
      lVar20 = local_1b8;
    } while (uVar7 != (uint)local_1a8);
  }
LAB_140508df8:
  if (local_140 == 0) {
    uVar13 = 1;
    uVar10 = 0;
    iVar14 = 0;
    uVar7 = 0;
  }
  else {
    puVar3 = local_148;
    if (local_148 == (uint *)0x0) {
      puVar3 = local_158;
    }
    uVar7 = *puVar3;
    if (uVar7 == 0) {
      iVar14 = local_140 + 0x1e;
      if (-1 < (int)(local_140 - 1)) {
        iVar14 = local_140 - 1;
      }
      uVar10 = 0;
      uVar15 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar15 = uVar10;
      }
      iVar14 = 0;
      do {
        if (uVar15 == uVar10) goto LAB_140508e8b;
        iVar14 = iVar14 + 0x20;
        uVar7 = puVar3[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar10 = 0;
      iVar14 = 0;
    }
    uVar13 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar7 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if ((int)local_140 <= (int)uVar7) {
      uVar7 = local_140;
    }
  }
  if (uVar7 != local_140) {
    uVar21 = 0xffffffff;
    local_180 = (ulonglong)local_140;
    do {
      lVar12 = local_1b0;
      puVar3 = (uint *)(local_168[0] + (longlong)(int)uVar7 * 0x10);
      iVar16 = *(int *)(local_168[0] + 4 + (longlong)(int)uVar7 * 0x10);
      if ((iVar16 == 0) || (uVar7 = *puVar3, (int)uVar7 < 0)) {
LAB_140509b1a:
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
        if ((int)uVar7 < DAT_14c9647dc) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
          if (((puVar8 == (undefined8 *)0x0) || (*(int *)(puVar8 + 2) != iVar16)) ||
             ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_140509b1a;
          uVar23 = *puVar8;
        }
      }
      local_190 = CONCAT44(local_190._4_4_,iVar14);
      iVar14 = -1;
      local_1a8 = uVar13;
      local_1a0 = uVar10;
      local_184 = uVar21;
      if ((longlong)*(int *)(lVar20 + 0x38) != 0) {
        lVar22 = *(longlong *)(lVar20 + 0x30);
        lVar17 = (longlong)*(int *)(lVar20 + 0x38) << 3;
        iVar16 = 0;
        do {
          cVar2 = FUN_1400063ec(lVar22,uVar23);
          iVar14 = iVar16;
          if (cVar2 != '\0') break;
          lVar22 = lVar22 + 8;
          iVar16 = iVar16 + 1;
          lVar17 = lVar17 + -8;
          iVar14 = -1;
        } while (lVar17 != 0);
      }
      lVar20 = *(longlong *)(lVar20 + 0x10);
      if ((puVar3[1] == 0) || (uVar7 = *puVar3, (int)uVar7 < 0)) {
LAB_140509b22:
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
        if ((int)uVar7 < DAT_14c9647dc) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
          if (((puVar8 == (undefined8 *)0x0) || (*(uint *)(puVar8 + 2) != puVar3[1])) ||
             ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_140509b22;
          uVar23 = *puVar8;
        }
      }
      iVar16 = -1;
      if ((longlong)*(int *)(lVar12 + 0x38) != 0) {
        lVar22 = *(longlong *)(lVar12 + 0x30);
        lVar17 = (longlong)*(int *)(lVar12 + 0x38) << 3;
        iVar6 = 0;
        do {
          cVar2 = FUN_1400063ec(lVar22,uVar23);
          lVar12 = local_1b0;
          iVar16 = iVar6;
          if (cVar2 != '\0') break;
          lVar22 = lVar22 + 8;
          iVar6 = iVar6 + 1;
          lVar17 = lVar17 + -8;
          iVar16 = -1;
        } while (lVar17 != 0);
      }
      lVar12 = *(longlong *)(lVar12 + 0x10);
      local_198 = (longlong *)FUN_1478b0794(*(undefined8 *)puVar3);
      if ((puVar3[1] == 0) || (uVar7 = *puVar3, (int)uVar7 < 0)) {
LAB_140509b2a:
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
        if ((int)uVar7 < DAT_14c9647dc) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
          if (((puVar8 == (undefined8 *)0x0) || (*(uint *)(puVar8 + 2) != puVar3[1])) ||
             ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_140509b2a;
          uVar23 = *puVar8;
        }
      }
      lVar22 = (longlong)iVar14 * 0x10;
      lVar17 = (longlong)iVar16 * 0x10;
      FUN_1474d8648(local_178,uVar23);
      if (0 < *(int *)(lVar20 + 8 + lVar22)) {
        lVar18 = 0;
        do {
          plVar19 = (longlong *)(lVar18 * 0x14 + *(longlong *)(lVar20 + lVar22));
          lVar9 = (longlong)*(int *)(lVar12 + 8 + lVar17);
          iVar14 = -1;
          if (lVar9 != 0) {
            lVar1 = *(longlong *)(lVar12 + lVar17);
            uVar10 = 0;
            do {
              if (((*(int *)(lVar1 + 0x10 + uVar10) == (int)plVar19[2]) &&
                  (*(longlong *)(lVar1 + 8 + uVar10) == plVar19[1])) &&
                 (*(longlong *)(lVar1 + uVar10) == *plVar19)) {
                iVar14 = (int)(uVar10 >> 2) * -0x33333333;
                break;
              }
              uVar10 = uVar10 + 0x14;
            } while (lVar9 * 0x14 != uVar10);
          }
          if ((puVar3[1] == 0) || (uVar7 = *puVar3, (int)uVar7 < 0)) {
LAB_1405098a6:
            uVar23 = 0;
          }
          else {
            uVar23 = 0;
            if ((int)uVar7 < DAT_14c9647dc) {
              puVar8 = (undefined8 *)
                       ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
              if (((puVar8 == (undefined8 *)0x0) || (*(uint *)(puVar8 + 2) != puVar3[1])) ||
                 ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_1405098a6;
              uVar23 = *puVar8;
            }
          }
          uVar23 = FUN_147937e1a(local_1b8,uVar23);
          lVar9 = local_178[0];
          if (iVar14 != -1) {
            if ((puVar3[1] == 0) || (uVar7 = *puVar3, (int)uVar7 < 0)) {
LAB_1405098ad:
              uVar11 = 0;
            }
            else {
              uVar11 = 0;
              if ((int)uVar7 < DAT_14c9647dc) {
                puVar8 = (undefined8 *)
                         ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
                if (((puVar8 == (undefined8 *)0x0) || (*(uint *)(puVar8 + 2) != puVar3[1])) ||
                   ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_1405098ad;
                uVar11 = *puVar8;
              }
            }
            lVar9 = FUN_147937f22(local_1b0,uVar11,
                                  (longlong)iVar14 * 0x14 + *(longlong *)(lVar12 + lVar17));
          }
          local_1c8 = uVar23;
          (**(code **)(*local_198 + 0x30))(local_198,uVar23,lVar9,param_3);
          lVar18 = lVar18 + 1;
        } while (lVar18 < *(int *)(lVar20 + 8 + lVar22));
      }
      iVar14 = *(int *)(lVar12 + 8 + lVar17);
      if (0 < iVar14) {
        lVar18 = 0;
        do {
          plVar19 = (longlong *)(*(longlong *)(lVar12 + lVar17) + lVar18 * 0x14);
          lVar9 = (longlong)*(int *)(lVar20 + 8 + lVar22);
          if (lVar9 != 0) {
            lVar1 = *(longlong *)(lVar20 + lVar22);
            uVar10 = 0;
            do {
              if (((*(int *)(lVar1 + 0x10 + uVar10) == (int)plVar19[2]) &&
                  (*(longlong *)(lVar1 + 8 + uVar10) == plVar19[1])) &&
                 (*(longlong *)(lVar1 + uVar10) == *plVar19)) {
                if ((int)(uVar10 >> 2) * -0x33333333 != -1) goto LAB_140509a13;
                break;
              }
              uVar10 = uVar10 + 0x14;
            } while (lVar9 * 0x14 != uVar10);
          }
          if ((puVar3[1] == 0) || (uVar7 = *puVar3, (int)uVar7 < 0)) {
LAB_140509a24:
            uVar23 = 0;
          }
          else {
            uVar23 = 0;
            if ((int)uVar7 < DAT_14c9647dc) {
              puVar8 = (undefined8 *)
                       ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
              if (((puVar8 == (undefined8 *)0x0) || (*(uint *)(puVar8 + 2) != puVar3[1])) ||
                 ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_140509a24;
              uVar23 = *puVar8;
            }
          }
          uVar23 = FUN_147937f22(local_1b0,uVar23);
          if ((puVar3[1] == 0) || (uVar7 = *puVar3, (int)uVar7 < 0)) {
LAB_140509a2b:
            uVar11 = 0;
          }
          else {
            uVar11 = 0;
            if ((int)uVar7 < DAT_14c9647dc) {
              puVar8 = (undefined8 *)
                       ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
              if (((puVar8 == (undefined8 *)0x0) || (*(uint *)(puVar8 + 2) != puVar3[1])) ||
                 ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)) goto LAB_140509a2b;
              uVar11 = *puVar8;
            }
          }
          local_1c8 = FUN_14793802a(local_1b8,uVar11,lVar18 * 0x14 + *(longlong *)(lVar12 + lVar17))
          ;
          (**(code **)(*local_198 + 0x30))(local_198,local_178[0],uVar23,param_3);
          iVar14 = *(int *)(lVar12 + 8 + lVar17);
LAB_140509a13:
          lVar18 = lVar18 + 1;
        } while (lVar18 < iVar14);
      }
      if (local_178[0] != 0) {
        FUN_1400020a8();
      }
      uVar21 = local_184 & ~(uint)local_1a8;
      puVar3 = local_148;
      if (local_148 == (uint *)0x0) {
        puVar3 = local_158;
      }
      iVar16 = (int)local_1a0;
      lVar20 = (longlong)iVar16;
      uVar7 = puVar3[lVar20] & uVar21;
      uVar10 = local_1a0;
      iVar14 = (uint)local_190;
      if (uVar7 == 0) {
        iVar6 = local_140 + 0x1e;
        if (-1 < (int)(local_140 - 1)) {
          iVar6 = local_140 - 1;
        }
        iVar6 = iVar6 >> 5;
        iVar14 = (uint)local_190 + 0x20;
        iVar5 = iVar6;
        if (iVar6 < iVar16) {
          iVar5 = iVar16;
        }
        if (iVar16 < iVar6) {
          lVar12 = 0;
          do {
            uVar7 = puVar3[lVar20 + lVar12 + 1];
            if (uVar7 != 0) {
              uVar10 = (ulonglong)(iVar16 + (int)lVar12 + 1);
              uVar21 = 0xffffffff;
              goto LAB_140509ae6;
            }
            iVar14 = iVar14 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar5 - lVar20 != lVar12);
          uVar21 = 0xffffffff;
          iVar16 = iVar5;
        }
        uVar10 = (ulonglong)(iVar16 + 1);
        uVar13 = local_1a8;
        uVar7 = local_140;
      }
      else {
LAB_140509ae6:
        uVar13 = (ulonglong)(-uVar7 & uVar7);
        uVar15 = uVar13 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar7 = (iVar14 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if ((int)local_140 <= (int)uVar7) {
          uVar7 = local_140;
        }
      }
      lVar20 = local_1b8;
    } while (uVar7 != (uint)local_180);
  }
LAB_140508e8b:
  local_120 = 0;
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  FUN_1479446f0(local_168);
  local_d0 = 0;
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_1479446f0(local_118);
  local_80 = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_1479446f0(local_c8);
  if ((local_70 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140509b6c FUN_140509b6c body=133 status=ok
// SIG undefined FUN_140509b6c(void)

void FUN_140509b6c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x30;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x2c + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x30 + 0x28);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x28);
  if (*(longlong *)(*param_1 + 0x10 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_140509bf2(param_1,param_2);
  return;
}



// FUNCTION 140509bf2 FUN_140509bf2 body=122 status=ok
// SIG undefined FUN_140509bf2(void)

void FUN_140509bf2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 140509c6c FUN_140509c6c body=500 status=ok
// SIG undefined FUN_140509c6c(void)

void FUN_140509c6c(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_1;
  if ((*(longlong *)(param_1 + 8) != 0) && (iVar2 = *(int *)(param_1 + 0x348), (longlong)iVar2 != 0)
     ) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x9c8);
    lVar1 = lVar3 + 0x448;
    local_60 = *(longlong *)(param_1 + 0x340);
    lVar8 = 0;
    do {
      plVar4 = *(longlong **)(local_60 + lVar8);
      if (plVar4 != (longlong *)0x0) {
        plVar5 = *(longlong **)(*(longlong *)(*plVar4 + 0x5a8) + (longlong)(int)plVar4[1] * 0x10);
        if ((plVar5 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar5 + 0xc))) {
          if ((*(longlong *)(*(longlong *)(*plVar5 + 200) + (longlong)(int)plVar5[1] * 8) ==
               local_68) &&
             (*(char *)(*(longlong *)(*plVar5 + 0x2c0) + 0xd + (longlong)(int)plVar5[1] * 0x10) ==
              '\0')) {
            FUN_14016dd2a(lVar1,plVar5,1);
            lVar6 = *(longlong *)(*plVar5 + 0x5a8);
            lVar7 = (longlong)(int)plVar5[1] * 0x10;
            *(undefined8 *)(lVar6 + lVar7) = 0;
            *(undefined4 *)(lVar6 + 8 + lVar7) = 0;
            *(undefined4 *)(*(longlong *)(*plVar5 + 0x5d8) + (longlong)(int)plVar5[1] * 4) = 0;
          }
        }
        local_58 = (longlong *)0x0;
        local_50 = 1;
        FUN_140509e62(&local_58,1,0);
        *local_58 = (longlong)plVar4;
        FUN_140509fa0(lVar3 + 0x560,&local_58,1);
        if (local_58 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        FUN_14016dd2a(lVar1,plVar4,1);
        lVar6 = *(longlong *)(*plVar4 + 0x5a8);
        lVar7 = (longlong)(int)plVar4[1] * 0x10;
        *(undefined8 *)(lVar6 + lVar7) = 0;
        *(undefined4 *)(lVar6 + 8 + lVar7) = 0;
        *(undefined4 *)(*(longlong *)(*plVar4 + 0x5d8) + (longlong)(int)plVar4[1] * 4) = 0;
        local_58 = (longlong *)CONCAT71(local_58._1_7_,1);
        FUN_1447dc87e(lVar1,plVar4);
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140509e62 FUN_140509e62 body=317 status=ok
// SIG undefined FUN_140509e62(void)

void FUN_140509e62(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140509ed0;
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
LAB_140509ed0:
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



// FUNCTION 140509fa0 FUN_140509fa0 body=1209 status=ok
// SIG undefined FUN_140509fa0(void)

void FUN_140509fa0(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_d8 [36];
  undefined4 local_b4;
  longlong local_b0 [2];
  undefined1 local_a0 [4];
  uint local_9c;
  longlong local_98;
  ulonglong uStack_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  lVar13 = param_2[1];
  iVar9 = 0;
  if ((longlong)(int)lVar13 != 0) {
    lVar14 = *param_2;
    lVar12 = 0;
    local_b4 = param_3;
    do {
      local_b0[0] = *(longlong *)(lVar14 + lVar12);
      local_9c = FUN_140196188(param_1);
      if (local_9c != 0xffffffff) {
        uVar2 = FUN_146cea4a0(&local_98,local_9c,&local_9c);
        FUN_140503ab8(uVar2,local_a0,local_b0,0);
      }
      iVar11 = local_70;
      lVar12 = lVar12 + 8;
    } while ((longlong)(int)lVar13 * 8 != lVar12);
    if (local_70 == 0) {
      iVar9 = 0;
    }
    else {
      puVar3 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar3 = local_88;
      }
      uVar8 = *puVar3;
      iVar9 = local_70;
      if (uVar8 == 0) {
        iVar10 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar10 = local_70 + -1;
        }
        uVar15 = 0;
        uVar7 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar7 = uVar15;
        }
        iVar10 = 0;
        do {
          if (uVar7 == uVar15) goto LAB_14050a203;
          iVar10 = iVar10 + 0x20;
          uVar8 = puVar3[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar15 = 0;
        iVar10 = 0;
      }
      uVar16 = (ulonglong)(-uVar8 & uVar8);
      uVar7 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar4 < local_70) {
        uVar8 = 0xffffffff;
        do {
          puVar1 = (undefined4 *)(local_98 + (longlong)iVar4 * 0x60);
          FUN_146cb805e(puVar1 + 2,local_b0);
          FUN_14298b7a0(param_1,*puVar1,local_b0,local_b4);
          if (local_b0[0] != 0) {
            FUN_1400020a8();
          }
          uVar8 = uVar8 & ~(uint)uVar16;
          puVar3 = local_78;
          if (local_78 == (uint *)0x0) {
            puVar3 = local_88;
          }
          iVar9 = (int)uVar15;
          lVar13 = (longlong)iVar9;
          uVar5 = puVar3[lVar13] & uVar8;
          if (uVar5 == 0) {
            iVar4 = local_70 + 0x1e;
            if (-1 < local_70 + -1) {
              iVar4 = local_70 + -1;
            }
            iVar4 = iVar4 >> 5;
            iVar10 = iVar10 + 0x20;
            iVar6 = iVar4;
            if (iVar4 < iVar9) {
              iVar6 = iVar9;
            }
            if (iVar9 < iVar4) {
              lVar14 = 0;
              do {
                uVar5 = puVar3[lVar13 + lVar14 + 1];
                if (uVar5 != 0) {
                  uVar15 = (ulonglong)(iVar9 + (int)lVar14 + 1);
                  uVar8 = 0xffffffff;
                  goto LAB_14050a1c0;
                }
                iVar10 = iVar10 + 0x20;
                lVar14 = lVar14 + 1;
              } while (iVar6 - lVar13 != lVar14);
              uVar8 = 0xffffffff;
              lVar13 = (longlong)iVar6;
            }
            uVar15 = lVar13 + 1U & 0xffffffff;
            iVar4 = local_70;
          }
          else {
LAB_14050a1c0:
            uVar16 = (ulonglong)(-uVar5 & uVar5);
            uVar7 = uVar16 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar7 != 0) {
              for (; uVar7 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            iVar4 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if (local_70 <= iVar4) {
              iVar4 = local_70;
            }
          }
          iVar9 = local_70;
        } while (iVar4 != iVar11);
      }
    }
  }
LAB_14050a203:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
    iVar9 = local_70;
  }
  if (iVar9 == 0) {
    uVar15 = 0;
    uVar16 = 1;
    iVar11 = 0;
    iVar10 = 0;
  }
  else {
    puVar3 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar3 = local_88;
    }
    uVar8 = *puVar3;
    if (uVar8 == 0) {
      iVar11 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar11 = iVar9 + -1;
      }
      uVar15 = 0;
      uVar7 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar7 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar7 == uVar15) goto LAB_14050a245;
        iVar11 = iVar11 + 0x20;
        uVar8 = puVar3[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar15 = 0;
      iVar11 = 0;
    }
    uVar16 = (ulonglong)(-uVar8 & uVar8);
    uVar7 = uVar16 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar10 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar9 <= iVar10) {
      iVar10 = iVar9;
    }
  }
  if (iVar10 < iVar9) {
    uVar8 = 0xffffffff;
    do {
      lVar13 = local_98;
      lVar14 = (longlong)iVar10 * 0x60;
      *(undefined4 *)(local_98 + 0x50 + lVar14) = 0;
      if (*(longlong *)(local_98 + 0x48 + lVar14) != 0) {
        FUN_1400020a8();
      }
      FUN_140a356f6(lVar13 + lVar14 + 8);
      uVar8 = uVar8 & ~(uint)uVar16;
      puVar3 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar3 = local_88;
      }
      iVar9 = (int)uVar15;
      lVar13 = (longlong)iVar9;
      uVar5 = puVar3[lVar13] & uVar8;
      if (uVar5 == 0) {
        iVar10 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar10 = local_70 + -1;
        }
        iVar4 = iVar10 >> 5;
        if (iVar10 >> 5 < iVar9) {
          iVar4 = iVar9;
        }
        lVar14 = 0;
        do {
          if (iVar4 - lVar13 == lVar14) goto LAB_14050a245;
          iVar11 = iVar11 + 0x20;
          uVar5 = puVar3[lVar13 + lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar5 == 0);
        uVar15 = (ulonglong)(uint)(iVar9 + (int)lVar14);
        uVar8 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar5 & uVar5);
      uVar7 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar10 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar10 < local_70);
  }
LAB_14050a245:
  uVar15 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar15 != 0) {
    FUN_1448fc38a(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050a45a FUN_14050a45a body=389 status=ok
// SIG undefined FUN_14050a45a(void)

undefined4 FUN_14050a45a(longlong param_1,longlong param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_c8 [44];
  ushort local_9c [2];
  uint local_98 [20];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98[10] = 0;
  local_98[0xb] = 0;
  local_98[0xc] = 0;
  local_98[0xd] = 0;
  local_98[0xe] = 0;
  local_98[0xf] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0x10] = 0;
  local_98[0x11] = 0;
  local_98[8] = 0;
  local_98[9] = 0x100;
  local_98[0x12] = 0;
  local_98[0x13] = 0x100;
  local_48 = 0;
  uStack_40 = 0;
  local_9c[0] = *(ushort *)(*(longlong *)(param_1 + 0x1d8) + 0x62);
  local_9c[1] = *(undefined2 *)(*(longlong *)(param_1 + 0x1d8) + 0x13a);
  lVar8 = 0;
  do {
    uVar2 = local_98[8];
    uVar1 = *(ushort *)((longlong)local_9c + lVar8);
    uVar5 = uVar1 + 1;
    iVar7 = uVar5 - local_98[8];
    if (iVar7 != 0 && (int)local_98[8] <= (int)uVar5) {
      if (local_98[8] == 0) {
LAB_14050a508:
        if ((int)local_98[9] <= (int)(uint)uVar1) {
          local_98[9] = 0x100;
          FUN_14497ddce(local_98,local_98[8]);
          uVar5 = local_98[8] + iVar7;
        }
        iVar6 = uVar5 + 0x1f;
        if (-1 < (int)uVar5) {
          iVar6 = uVar5;
        }
        local_98[8] = uVar5;
        uVar5 = local_98[8];
        if ((int)uVar5 % 0x20 != 0) {
          bVar4 = -(char)((int)uVar5 % 0x20);
          local_98[iVar6 >> 5] = (local_98[iVar6 >> 5] << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
          uVar5 = local_98[8];
        }
      }
      else {
        iVar6 = local_98[8] + 0x1e;
        if (-1 < (int)(local_98[8] + -1)) {
          iVar6 = local_98[8] + -1;
        }
        if (iVar6 >> 5 != (uint)(uVar1 >> 5)) goto LAB_14050a508;
      }
      local_98[8] = uVar5;
      FUN_1447c45ca(local_98,uVar2,iVar7,0);
    }
    local_98[uVar1 >> 5] = local_98[uVar1 >> 5] | 1 << ((byte)uVar1 & 0x1f);
    lVar8 = lVar8 + 2;
    if (lVar8 == 4) {
      uVar3 = FUN_14050a5e0(param_2 + 0x28,local_98);
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return uVar3;
    }
  } while( true );
}



// FUNCTION 14050a5e0 FUN_14050a5e0 body=157 status=ok
// SIG undefined FUN_14050a5e0(void)

bool FUN_14050a5e0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x270) == '\0') {
    *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x264) + 1;
  }
  else {
    LOCK();
    *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x264) + 1;
    UNLOCK();
  }
  local_38 = param_2;
  local_30 = param_1;
  local_28 = FUN_1403b8464(&local_38,0);
  iVar1 = *(int *)(param_1 + 0x10);
  if (param_2 != 0) {
    if (*(char *)(local_30 + 0x270) == '\0') {
      *(int *)(local_30 + 0x264) = *(int *)(local_30 + 0x264) + -1;
    }
    else {
      LOCK();
      *(int *)(local_30 + 0x264) = *(int *)(local_30 + 0x264) + -1;
      UNLOCK();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28 != iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050a67e FUN_14050a67e body=867 status=ok
// SIG undefined FUN_14050a67e(void)

void FUN_14050a67e(longlong param_1,longlong *param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  longlong *plVar7;
  byte bVar8;
  longlong *plVar9;
  float fVar10;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (1 < *(int *)(param_1 + 0x120) - 1U) goto LAB_14050a815;
  uVar1 = *param_4;
  lVar3 = (**(code **)(*param_2 + 0x2b8))(param_2);
  if (lVar3 == 0) {
    bVar8 = (byte)((uVar1 & 4) >> 2);
    lVar3 = 0;
  }
  else {
    lVar4 = (**(code **)(*param_2 + 0x2b8))(param_2);
    uVar5 = FUN_1406d3bdc();
    cVar2 = FUN_1448093f4(lVar4,uVar5);
    lVar3 = 0;
    if (cVar2 != '\0') {
      lVar3 = lVar4;
    }
    if ((uVar1 & 4) == 0) {
      if (lVar3 == 0) {
        lVar3 = 0;
        bVar8 = 0;
      }
      else {
        bVar8 = *(byte *)(lVar3 + 0x1e0);
        lVar3 = lVar4;
      }
    }
    else {
      bVar8 = 1;
    }
  }
  if ((uVar1 & 0x10) == 0) {
    if (lVar3 == 0) {
      bVar6 = 0;
    }
    else {
      bVar6 = *(byte *)(lVar3 + 0x1e1);
    }
  }
  else {
    bVar6 = 1;
  }
  if (param_2 == (longlong *)0x0) {
LAB_14050a8d9:
    plVar9 = (longlong *)0x0;
  }
  else {
    lVar4 = FUN_14050b66e();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (plVar9 = param_2,
       *(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
       lVar4 + 0x30)) goto LAB_14050a8d9;
  }
  cVar2 = '\x01';
  if (((lVar3 != 0) && (plVar9 != (longlong *)0x0)) && (*(char *)(lVar3 + 0x249) != '\0')) {
    cVar2 = *(char *)((longlong)plVar9 + 0x119);
  }
  if (((((bVar8 | bVar6) & 1) != 0) && (cVar2 != '\0')) && ((char)param_2[0x10] == '\x01')) {
    if (bVar8 != 0) {
      *(byte *)(param_4 + 1) = (byte)param_4[1] | 2;
      *(byte *)param_4 = (byte)*param_4 | 4;
    }
    if (bVar6 != 0) {
      *(byte *)(param_4 + 1) = (byte)param_4[1] | 4;
      *(byte *)param_4 = (byte)*param_4 | 0x10;
    }
  }
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x248) == '\0')) {
    if ((param_4[1] & 4) != 0 || (*param_4 & 0x10) != 0) {
      param_4[1] = param_4[1] & 0xfffffffd;
      *param_4 = *param_4 & 0xfffffffb;
    }
  }
  if (param_2 == (longlong *)0x0) {
LAB_14050a7f6:
    plVar7 = (longlong *)0x0;
  }
  else {
    if (DAT_14cba14f0 == 0) {
      local_70 = &local_58;
      local_58 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_145885dac;
      local_78 = &LAB_148b9e16b;
      local_80 = FUN_140f505de;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000000;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/OakGame",L"GbxDiscoveryProviderObject_OakMissionWaypoint",
                    &DAT_14cba14f0,&DAT_148b9e16a);
    }
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14cba14f0 + 0x38)) ||
       (plVar7 = param_2,
       *(longlong *)
        (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cba14f0 + 0x38) * 8) !=
       DAT_14cba14f0 + 0x30)) goto LAB_14050a7f6;
  }
  if ((*param_4 & 8) == 0) {
LAB_14050a7fd:
    if (plVar7 != (longlong *)0x0) goto LAB_14050a869;
  }
  else {
    fVar10 = (float)(**(code **)(*param_2 + 0x2c0))(param_2);
    lVar3 = FUN_14050c909();
    if ((plVar7 == (longlong *)0x0) || (fVar10 < *(float *)(lVar3 + 0x4d4))) goto LAB_14050a7fd;
    *(byte *)param_4 = (byte)*param_4 & 0xf7;
LAB_14050a869:
    fVar10 = (float)(**(code **)(*plVar7 + 0x2c0))(plVar7);
    lVar3 = FUN_14050c909();
    if (*(float *)(lVar3 + 0x4d4) <= fVar10) {
      lVar3 = (**(code **)(*param_2 + 0x2b8))(param_2);
      if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x170) & 4) != 0)) {
        *param_4 = (*param_4 & 0xfffffffb) + (*(byte *)((longlong)plVar7 + 0xd9) ^ 1) * 4;
      }
    }
  }
  if ((plVar9 != (longlong *)0x0) && ((char)plVar9[0x33] == '\x01')) {
    *(byte *)param_4 = (byte)*param_4 & 0xe3;
  }
LAB_14050a815:
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050a9e2 FUN_14050a9e2 body=405 status=ok
// SIG undefined FUN_14050a9e2(void)

void FUN_14050a9e2(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar3 = (**(code **)(*param_1 + 0x2d8))();
  if ((lVar3 != 0) &&
     ((((lVar3 = FUN_1407c8d60(lVar3), lVar3 == 0 || (*(char *)(lVar3 + 0x34) != '\x01')) ||
       (*(char *)(lVar3 + 0x35) == '\x01')) && (lVar3 = FUN_14050ab78(param_1), lVar3 != 0)))) {
    uVar4 = FUN_1406d3bdc();
    cVar2 = FUN_1448093f4(lVar3,uVar4);
    if (cVar2 != '\0') {
      lVar5 = *(longlong *)(lVar3 + 600);
      if (lVar5 == 0) {
        uVar4 = FUN_14050c9fe();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(lVar3 + 600) = lVar5;
      }
      plVar6 = (longlong *)(lVar3 + 0x250);
      if (*(longlong *)(lVar3 + 0x260) != 0) {
LAB_14050aac9:
        if (lVar5 != 0) {
          return;
        }
        uVar4 = FUN_14050c9fe();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(lVar3 + 600) = lVar5;
        if (*(longlong *)(lVar3 + 0x260) != 0) {
          return;
        }
        if (lVar5 == 0) {
          return;
        }
        if (*plVar6 != 0) {
          plVar1 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar1 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
            uVar4 = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
            uVar4 = FUN_144aff482(uVar4,plVar6);
          }
          *(undefined8 *)(lVar3 + 0x260) = uVar4;
          return;
        }
        return;
      }
      if ((*plVar6 != 0) && (lVar5 != 0)) {
        plVar1 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          *(undefined8 *)(lVar3 + 0x260) = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar5 = FUN_144aff482(uVar4,plVar6);
          *(longlong *)(lVar3 + 0x260) = lVar5;
          if (lVar5 != 0) {
            lVar5 = *(longlong *)(lVar3 + 600);
            goto LAB_14050aac9;
          }
        }
      }
    }
  }
  FUN_14050ab78(param_1);
  return;
}



// FUNCTION 14050ab78 FUN_14050ab78 body=280 status=ok
// SIG undefined FUN_14050ab78(void)

longlong FUN_14050ab78(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (((((*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) && (*(int *)(param_1 + 0xd4) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0xd0), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 != 0)))) &&
     ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0xd4) &&
      ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x20))();
    lVar6 = FUN_14061177a(uVar4);
    return lVar6;
  }
  lVar6 = *(longlong *)(param_1 + 200);
  if (lVar6 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(lVar6 + 0x38);
  if (lVar5 == 0) {
    uVar4 = FUN_14050c9fe();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar6 + 0x38) = lVar5;
  }
  if (*(longlong *)(lVar6 + 0x40) == 0) {
    if (lVar5 == 0) {
      return 0;
    }
    if (*(longlong *)(lVar6 + 0x30) != 0) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar5 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar6 + 0x30));
      }
      *(longlong *)(lVar6 + 0x40) = lVar5;
      return lVar5;
    }
    return 0;
  }
  return *(longlong *)(lVar6 + 0x40);
}



// FUNCTION 14050ac90 FUN_14050ac90 body=284 status=ok
// SIG undefined FUN_14050ac90(void)

longlong FUN_14050ac90(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x128) == '\x01') {
    lVar4 = *(longlong *)(param_1 + 0x120);
  }
  else {
    lVar4 = FUN_14050adae(param_1);
    if (lVar4 == 0) {
      if ((*(longlong *)(param_1 + 200) != 0) && (lVar4 = FUN_14050b0aa(), 0 < *(int *)(lVar4 + 8)))
      {
        plVar5 = (longlong *)FUN_14050b0aa(*(undefined8 *)(param_1 + 200));
        lVar3 = plVar5[1];
        if ((longlong)(int)lVar3 != 0) {
          lVar1 = *plVar5;
          lVar6 = 0;
          do {
            lVar2 = *(longlong *)(lVar1 + lVar6);
            if (lVar2 != 0) {
              lVar4 = *(longlong *)(lVar2 + 0x240);
              if (lVar4 == 0) {
                local_48 = *(undefined8 *)(lVar2 + 0x230);
                lVar4 = FUN_14050aea0(&local_48);
                *(longlong *)(lVar2 + 0x240) = lVar4;
                if (lVar4 == 0) goto LAB_14050ad72;
              }
              *(longlong *)(param_1 + 0x120) = lVar4;
              *(undefined1 *)(param_1 + 0x128) = 1;
              break;
            }
LAB_14050ad72:
            lVar6 = lVar6 + 8;
            lVar4 = 0;
          } while ((longlong)(int)lVar3 * 8 != lVar6);
          goto LAB_14050ace4;
        }
      }
      lVar4 = 0;
    }
    else {
      *(longlong *)(param_1 + 0x120) = lVar4;
      *(undefined1 *)(param_1 + 0x128) = 1;
    }
  }
LAB_14050ace4:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 14050adae FUN_14050adae body=225 status=ok
// SIG undefined FUN_14050adae(void)

longlong FUN_14050adae(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0xd8) != 0) && (*(int *)(param_1 + 0xd4) != 0)) {
    uVar1 = *(uint *)(param_1 + 0xd0);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0xd4))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  lVar3 = *(longlong *)(param_1 + 200);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar3 + 0x240);
    if (lVar2 == 0) {
      local_20 = *(undefined8 *)(lVar3 + 0x230);
      lVar2 = FUN_14050aea0();
      *(longlong *)(lVar3 + 0x240) = lVar2;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050aea0 FUN_14050aea0 body=96 status=ok
// SIG undefined FUN_14050aea0(void)

undefined8 FUN_14050aea0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcdd4(local_40,param_1);
  uVar1 = FUN_14050af02(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050af02 FUN_14050af02 body=187 status=ok
// SIG undefined FUN_14050af02(void)

undefined8 FUN_14050af02(int *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_28;
  undefined1 local_24 [12];
  ulonglong local_18;
  
  lVar2 = DAT_14cb84f20;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb84f20 == 0) {
    uVar3 = 0;
    goto LAB_14050af83;
  }
  FUN_1400f0e12(param_1,local_24,1);
  if (((*param_1 == 0) || (iVar1 = param_1[1], iVar1 == 0)) || (*param_1 == DAT_14c948000)) {
LAB_14050afa1:
    local_28 = DAT_14c948620;
    local_30 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (param_1[9] < 1)) {
      param_1 = param_1 + 2;
    }
    else {
      param_1 = *(int **)(param_1 + 6);
    }
    if (iVar1 < 1) goto LAB_14050afa1;
    local_28 = param_1[2];
    local_30 = *(undefined8 *)param_1;
  }
  uVar3 = FUN_14050afbe(lVar2,&local_30,local_24);
LAB_14050af83:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050afbe FUN_14050afbe body=176 status=ok
// SIG undefined FUN_14050afbe(void)

longlong * FUN_14050afbe(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14050b070();
  local_30 = *param_3;
  local_28 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_2;
  local_38 = *(undefined4 *)(param_2 + 1);
  plVar2 = (longlong *)FUN_14050b224(param_1,&local_40,&local_30,uVar1);
  if (plVar2 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar5 = FUN_14050b070();
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) {
      plVar3 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        plVar3 = plVar2;
      }
      goto LAB_14050b017;
    }
  }
  plVar3 = (longlong *)0x0;
LAB_14050b017:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 14050b070 FUN_14050b070 body=57 status=ok
// SIG undefined FUN_14050b070(void)

void FUN_14050b070(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb602d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb602d0 = FUN_140002ddd(FUN_1418545ab,uVar1,L"GbxLevelStationDef");
  }
  return;
}



// FUNCTION 14050b0aa FUN_14050b0aa body=377 status=ok
// SIG undefined FUN_14050b0aa(void)

longlong * FUN_14050b0aa(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong lStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar6 = *(int *)(param_1 + 0x220);
  plVar1 = (longlong *)(param_1 + 0x270);
  if (iVar6 != *(int *)(param_1 + 0x278)) {
    *(undefined4 *)(param_1 + 0x278) = 0;
    if (*(int *)(param_1 + 0x27c) < 0) {
      FUN_14882c108(plVar1,0);
      iVar6 = *(int *)(param_1 + 0x220);
    }
    if (iVar6 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x218);
      lVar8 = 0;
      do {
        local_78 = *(longlong *)(lVar3 + lVar8);
        local_70 = 0;
        lStack_68 = 0;
        uVar7 = FUN_14073f72a();
        local_70 = FUN_14477b664(uVar7);
        lVar9 = lStack_68;
        if (lStack_68 == 0) {
          if (local_70 == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = 0;
            if (local_78 != 0) {
              plVar4 = *(longlong **)(local_70 + 0xb8);
              if ((plVar4 == (longlong *)0x0) ||
                 (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
                lVar9 = 0;
                lStack_68 = lVar9;
              }
              else {
                uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
                lVar9 = FUN_144aff482(uVar7,&local_78);
                lStack_68 = lVar9;
              }
            }
          }
        }
        iVar2 = *(int *)(param_1 + 0x278);
        *(uint *)(param_1 + 0x278) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x27c) < iVar2 + 1U) {
          FUN_14050b866(plVar1,iVar2);
        }
        *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar9;
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar6 * 8 != lVar8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 14050b224 FUN_14050b224 body=1096 status=ok
// SIG undefined FUN_14050b224(void)

undefined8 FUN_14050b224(longlong *param_1,ulonglong *param_2,uint *param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_1 + 0x300))();
  if (cVar2 == '\0') {
    local_38 = (uint)param_2[1];
    local_40 = *param_2;
    uVar5 = local_40;
    if (local_38 != 0) {
      uVar3 = local_38 >> 0xd ^ (int)local_40 - local_38;
      uVar7 = uVar3 << 8 ^ (-0x61c88647 - local_38) - uVar3;
      uVar8 = uVar7 >> 0xd ^ (local_38 - uVar3) - uVar7;
      uVar3 = uVar8 >> 0xc ^ (uVar3 - uVar7) - uVar8;
      uVar7 = uVar3 << 0x10 ^ (uVar7 - uVar8) - uVar3;
      uVar11 = uVar7 >> 5 ^ (uVar8 - uVar3) - uVar7;
      uVar8 = uVar11 >> 3 ^ (uVar3 - uVar7) - uVar11;
      uVar3 = uVar8 << 10 ^ (uVar7 - uVar11) - uVar8;
      uVar5 = (ulonglong)(uVar3 >> 0xf ^ uVar11 - (uVar8 + uVar3));
    }
    iVar4 = FUN_1447fa34e(param_1 + 0x5d,uVar5,&local_40);
    if (((iVar4 != -1) && (lVar9 = (longlong)iVar4 * 0x20 + param_1[0x5d], lVar9 != 0)) &&
       (lVar9 = *(longlong *)(lVar9 + 0x10), lVar9 != 0)) {
      uVar3 = *param_3;
      uVar7 = param_3[2];
      uVar8 = uVar3;
      if (uVar7 != 0) {
        uVar8 = uVar7 >> 0xd ^ uVar3 - uVar7;
        uVar11 = uVar8 << 8 ^ (-0x61c88647 - uVar7) - uVar8;
        uVar13 = uVar11 >> 0xd ^ (uVar7 - uVar8) - uVar11;
        uVar14 = uVar13 >> 0xc ^ (uVar8 - uVar11) - uVar13;
        uVar8 = uVar14 << 0x10 ^ (uVar11 - uVar13) - uVar14;
        uVar11 = uVar8 >> 5 ^ (uVar13 - uVar14) - uVar8;
        uVar13 = uVar11 >> 3 ^ (uVar14 - uVar8) - uVar11;
        uVar8 = uVar13 << 10 ^ (uVar8 - uVar11) - uVar13;
        uVar8 = uVar8 >> 0xf ^ uVar11 - (uVar13 + uVar8);
      }
      if (*(int *)(lVar9 + 0x78) != *(int *)(lVar9 + 0xa4)) {
        lVar12 = lVar9 + 0xa8;
        if (*(longlong *)(lVar9 + 0xb0) != 0) {
          lVar12 = *(longlong *)(lVar9 + 0xb0);
        }
        iVar4 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar9 + 0xb8) - 1U & uVar8) * 4);
        if (iVar4 != -1) {
          lVar9 = *(longlong *)(lVar9 + 0x70);
          uVar6 = 0;
          do {
            lVar12 = (longlong)iVar4 * 0x20;
            if ((*(uint *)(lVar9 + lVar12) == uVar3) &&
               (lVar1 = lVar9 + lVar12, *(uint *)(lVar1 + 8) == uVar7)) {
              if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) goto LAB_14050b648;
              uVar6 = FUN_14059517c(param_1,*(longlong *)(lVar1 + 0x10),param_4);
              break;
            }
            iVar4 = *(int *)(lVar9 + 0x18 + lVar12);
          } while (iVar4 != -1);
          goto LAB_14050b64a;
        }
      }
    }
  }
  else {
    uVar3 = (uint)*param_2;
    uVar7 = (uint)param_2[1];
    if (uVar7 != 0) {
      uVar3 = uVar7 >> 0xd ^ uVar3 - uVar7;
      uVar8 = uVar3 << 8 ^ (-0x61c88647 - uVar7) - uVar3;
      uVar11 = uVar8 >> 0xd ^ (uVar7 - uVar3) - uVar8;
      uVar7 = uVar11 >> 0xc ^ (uVar3 - uVar8) - uVar11;
      uVar3 = uVar7 << 0x10 ^ (uVar8 - uVar11) - uVar7;
      uVar8 = uVar3 >> 5 ^ (uVar11 - uVar7) - uVar3;
      uVar7 = uVar8 >> 3 ^ (uVar7 - uVar3) - uVar8;
      uVar3 = uVar7 << 10 ^ (uVar3 - uVar8) - uVar7;
      uVar3 = uVar3 >> 0xf ^ uVar8 - (uVar7 + uVar3);
    }
    iVar4 = FUN_1448467de(param_1 + 0x3f,uVar3,param_2);
    if (iVar4 != -1) {
      lVar9 = param_1[0x3f];
      uVar5 = (longlong)iVar4 * 0x70;
      if ((lVar9 + uVar5 + 0x10 & 0xffffffffffffffef) != 0) {
        lVar9 = lVar9 + uVar5;
        uVar3 = param_3[2];
        if (uVar3 != 0) {
          uVar7 = uVar3 >> 0xd ^ *param_3 - uVar3;
          uVar8 = uVar7 << 8 ^ (-0x61c88647 - uVar3) - uVar7;
          uVar11 = uVar8 >> 0xd ^ (uVar3 - uVar7) - uVar8;
          uVar7 = uVar11 >> 0xc ^ (uVar7 - uVar8) - uVar11;
          uVar13 = uVar7 << 0x10 ^ (uVar8 - uVar11) - uVar7;
          uVar8 = uVar13 >> 5 ^ (uVar11 - uVar7) - uVar13;
          uVar11 = uVar8 >> 3 ^ (uVar7 - uVar13) - uVar8;
          uVar7 = uVar11 << 10 ^ (uVar13 - uVar8) - uVar11;
          uVar5 = (ulonglong)(uVar7 >> 0xf ^ uVar8 - (uVar11 + uVar7));
        }
        if (*(int *)(lVar9 + 0x20) != *(int *)(lVar9 + 0x4c)) {
          uVar7 = (uint)uVar5;
          if (uVar3 == 0) {
            uVar7 = *param_3;
          }
          lVar12 = lVar9 + 0x50;
          if (*(longlong *)(lVar9 + 0x58) != 0) {
            lVar12 = *(longlong *)(lVar9 + 0x58);
          }
          iVar4 = *(int *)(lVar12 + (ulonglong)(*(int *)(lVar9 + 0x60) - 1U & uVar7) * 4);
          if (iVar4 != -1) {
            lVar9 = *(longlong *)(lVar9 + 0x18);
            uVar6 = 0;
            do {
              lVar12 = (longlong)iVar4 * 0x20;
              if ((*(uint *)(lVar9 + lVar12) == *param_3) &&
                 (lVar1 = lVar9 + lVar12, *(uint *)(lVar1 + 8) == uVar3)) {
                puVar10 = (undefined8 *)(lVar1 + 0x10);
                if ((puVar10 == (undefined8 *)0x0 || lVar1 == 0) ||
                   (cVar2 = FUN_1448093f4(*puVar10,param_4), cVar2 == '\0')) goto LAB_14050b648;
                uVar6 = *puVar10;
                break;
              }
              iVar4 = *(int *)(lVar9 + 0x18 + lVar12);
            } while (iVar4 != -1);
            goto LAB_14050b64a;
          }
        }
      }
    }
  }
LAB_14050b648:
  uVar6 = 0;
LAB_14050b64a:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14050b66e FUN_14050b66e body=228 status=ok
// SIG undefined FUN_14050b66e(void)

longlong FUN_14050b66e(void)

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
  if (DAT_14cba14a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459cc12c;
    local_38 = &LAB_148b9e15f;
    local_40 = FUN_140bb5777;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1a0;
    FUN_14081cfa3(L"/Script/OakGame",L"GbxDiscoveryProviderObject_OakDiscoveryLocation",
                  &DAT_14cba14a8,&DAT_148b9e15e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba14a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050b754 FUN_14050b754 body=113 status=ok
// SIG undefined FUN_14050b754(void)

undefined8 FUN_14050b754(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  
  plVar3 = *(longlong **)(param_1 + 0xd0);
  uVar7 = 0;
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
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
    if (*(longlong **)(param_1 + 200) == (longlong *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)(**(longlong **)(param_1 + 200) + 0x18))();
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
  return uVar7;
}



// FUNCTION 14050b7c6 FUN_14050b7c6 body=159 status=ok
// SIG undefined FUN_14050b7c6(void)

void FUN_14050b7c6(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = FUN_14050c909();
  lVar5 = *(longlong *)(lVar3 + 0x268);
  if (lVar5 == 0) {
    uVar4 = FUN_14050c9fe();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar3 + 0x268) = lVar5;
  }
  if (*(longlong *)(lVar3 + 0x270) != 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  if (*(longlong *)(lVar3 + 0x260) != 0) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar4 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x260));
    }
    *(undefined8 *)(lVar3 + 0x270) = uVar4;
    return;
  }
  return;
}



// FUNCTION 14050b866 FUN_14050b866 body=353 status=ok
// SIG undefined FUN_14050b866(void)

void FUN_14050b866(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14050b8eb;
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
LAB_14050b8eb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14050b9c8 FUN_14050b9c8 body=3904 status=ok
// SIG undefined FUN_14050b9c8(void)

uint * FUN_14050b9c8(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint *puVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  uint *unaff_R14;
  bool bVar20;
  bool bVar21;
  undefined1 auStack_128 [44];
  int local_fc;
  longlong local_f8;
  undefined8 *local_f0;
  int local_e8;
  uint local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  undefined4 uStack_cc;
  uint uStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int iStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50;
  undefined2 local_4f;
  undefined1 local_4d;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar2 = (longlong *)param_1[0x1a];
  if (plVar2 == (longlong *)0x0) {
    puVar16 = (uint *)0x0;
  }
  else {
    iVar8 = (int)plVar2[1];
    puVar16 = (uint *)0x0;
    do {
      if (iVar8 == 0) goto LAB_14050bb5e;
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar20 = iVar8 == iVar5;
      if (bVar20) {
        *(int *)(plVar2 + 1) = iVar8 + 1;
        iVar5 = iVar8;
      }
      iVar8 = iVar5;
      UNLOCK();
    } while (!bVar20);
    plVar12 = (longlong *)param_1[0x19];
    if (plVar12 == (longlong *)0x0) {
LAB_14050c813:
      bVar20 = true;
      puVar16 = (uint *)0x0;
    }
    else {
      cVar6 = (**(code **)(*plVar12 + 8))(plVar12);
      (**(code **)(*plVar12 + 0x10))(plVar12,&local_f8);
      lVar9 = FUN_14050cc5a(param_1);
      if (lVar9 != 0) {
        local_f8 = DAT_14cbc8a88;
      }
      plVar10 = (longlong *)(**(code **)(*plVar12 + 0x30))(plVar12);
      if (plVar10 != (longlong *)0x0) {
        unaff_R14 = (uint *)(**(code **)(*plVar10 + 8))(plVar10);
        lVar9 = FUN_14060edb4();
        if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= (int)unaff_R14[0xe])) &&
           (*(longlong *)(*(longlong *)(unaff_R14 + 0xc) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          if ((int)plVar10[6] != 0) {
            unaff_R14 = &local_e0;
            FUN_140b47d3e(unaff_R14,plVar10 + 6);
            local_f8 = CONCAT44(uStack_dc,local_e0);
            cVar6 = '\x01';
          }
          if (plVar10[3] != 0) {
            lVar9 = plVar10[4];
            if (lVar9 == 0) {
              uVar15 = FUN_14050c9fe();
              lVar9 = FUN_14477b664(uVar15);
              plVar10[4] = lVar9;
            }
            puVar16 = (uint *)plVar10[5];
            if ((uint *)plVar10[5] == (uint *)0x0) {
              unaff_R14 = (uint *)0x0;
              bVar20 = false;
              puVar16 = (uint *)0x0;
              if (lVar9 != 0) {
                puVar16 = (uint *)0x0;
                if (plVar10[3] == 0) goto LAB_14050bb4f;
                plVar12 = *(longlong **)(lVar9 + 0xb8);
                if ((plVar12 == (longlong *)0x0) ||
                   (cVar6 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar6 == '\0')) {
                  puVar16 = (uint *)0x0;
                }
                else {
                  uVar15 = (**(code **)(*plVar12 + 0x110))(plVar12);
                  puVar16 = (uint *)FUN_144aff482(uVar15,plVar10 + 3);
                }
                plVar10[5] = (longlong)puVar16;
              }
            }
            unaff_R14 = puVar16;
            bVar20 = false;
            puVar16 = (uint *)0x0;
            goto LAB_14050bb4f;
          }
        }
      }
      uVar11 = (**(code **)(*plVar12 + 0x20))(plVar12);
      bVar20 = true;
      if ((uVar11 & 2) != 0) goto LAB_14050c813;
      uVar7 = (**(code **)(*plVar12 + 0x20))(plVar12);
      if ((uVar7 >> 8 & 1) == 0) {
        iVar8 = (**(code **)(*plVar12 + 0x20))(plVar12);
        uVar7 = iVar8 * 2 & 2;
      }
      else {
        uVar7 = 1;
      }
      if (cVar6 != '\x01') {
        lVar9 = FUN_14050c909();
        uVar18 = (uint)local_f8;
        iVar8 = (int)((ulonglong)local_f8 >> 0x20);
        uVar19 = (uint)((ulonglong)local_f8 >> 0x10);
        if (uVar7 == 0) {
          if (*(int *)(lVar9 + 0x298) != *(int *)(lVar9 + 0x2c4)) {
            lVar13 = lVar9 + 0x2c8;
            if (*(longlong *)(lVar9 + 0x2d0) != 0) {
              lVar13 = *(longlong *)(lVar9 + 0x2d0);
            }
            iVar8 = *(int *)(lVar13 + (ulonglong)
                                      (*(int *)(lVar9 + 0x2d8) - 1U &
                                      iVar8 + (uVar18 << 0x10 | uVar18 & 0xffff) +
                                      (uVar19 << 0x13 | uVar19 & 0xffff) + ((uVar18 & 0xffff) >> 4))
                                      * 4);
            if (iVar8 != -1) {
              do {
                plVar12 = (longlong *)(*(longlong *)(lVar9 + 0x290) + (longlong)iVar8 * 0x28);
                if (*plVar12 == local_f8) {
                  unaff_R14 = (uint *)(plVar12 + 1);
                  if (unaff_R14 != (uint *)0x0 && plVar12 != (longlong *)0x0) goto LAB_14050c07b;
                  break;
                }
                iVar8 = (int)plVar12[4];
              } while (iVar8 != -1);
            }
          }
          unaff_R14 = (uint *)FUN_14050c909();
          lVar9 = *(longlong *)(unaff_R14 + 0xa0);
          if (lVar9 == 0) {
            uVar15 = FUN_14050c9fe();
            lVar9 = FUN_14477b664(uVar15);
            *(longlong *)(unaff_R14 + 0xa0) = lVar9;
          }
          puVar16 = *(uint **)(unaff_R14 + 0xa2);
          if (((puVar16 == (uint *)0x0) && (puVar16 = (uint *)0x0, lVar9 != 0)) &&
             (*(longlong *)(unaff_R14 + 0x9e) != 0)) {
            plVar12 = *(longlong **)(lVar9 + 0xb8);
            if ((plVar12 == (longlong *)0x0) ||
               (cVar6 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar6 == '\0')) {
              puVar16 = (uint *)0x0;
            }
            else {
              uVar15 = (**(code **)(*plVar12 + 0x110))(plVar12);
              puVar16 = (uint *)FUN_144aff482(uVar15,unaff_R14 + 0x9e);
            }
            *(uint **)(unaff_R14 + 0xa2) = puVar16;
          }
        }
        else if (uVar7 == 2) {
          if (*(int *)(lVar9 + 0x368) != *(int *)(lVar9 + 0x394)) {
            lVar13 = lVar9 + 0x398;
            if (*(longlong *)(lVar9 + 0x3a0) != 0) {
              lVar13 = *(longlong *)(lVar9 + 0x3a0);
            }
            iVar8 = *(int *)(lVar13 + (ulonglong)
                                      (*(int *)(lVar9 + 0x3a8) - 1U &
                                      iVar8 + (uVar18 << 0x10 | uVar18 & 0xffff) +
                                      (uVar19 << 0x13 | uVar19 & 0xffff) + ((uVar18 & 0xffff) >> 4))
                                      * 4);
            if (iVar8 != -1) {
              do {
                plVar12 = (longlong *)(*(longlong *)(lVar9 + 0x360) + (longlong)iVar8 * 0x28);
                if (*plVar12 == local_f8) {
                  unaff_R14 = (uint *)(plVar12 + 1);
                  if (unaff_R14 != (uint *)0x0 && plVar12 != (longlong *)0x0) goto LAB_14050c07b;
                  break;
                }
                iVar8 = (int)plVar12[4];
              } while (iVar8 != -1);
            }
          }
          unaff_R14 = (uint *)FUN_14050c909();
          lVar9 = *(longlong *)(unaff_R14 + 0xd4);
          if (lVar9 == 0) {
            uVar15 = FUN_14050c9fe();
            lVar9 = FUN_14477b664(uVar15);
            *(longlong *)(unaff_R14 + 0xd4) = lVar9;
          }
          puVar16 = *(uint **)(unaff_R14 + 0xd6);
          if (((puVar16 == (uint *)0x0) && (puVar16 = (uint *)0x0, lVar9 != 0)) &&
             (*(longlong *)(unaff_R14 + 0xd2) != 0)) {
            plVar12 = *(longlong **)(lVar9 + 0xb8);
            if ((plVar12 == (longlong *)0x0) ||
               (cVar6 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar6 == '\0')) {
              puVar16 = (uint *)0x0;
            }
            else {
              uVar15 = (**(code **)(*plVar12 + 0x110))(plVar12);
              puVar16 = (uint *)FUN_144aff482(uVar15,unaff_R14 + 0xd2);
            }
            *(uint **)(unaff_R14 + 0xd6) = puVar16;
          }
        }
        else {
          if (*(int *)(lVar9 + 0x300) != *(int *)(lVar9 + 0x32c)) {
            lVar13 = lVar9 + 0x330;
            if (*(longlong *)(lVar9 + 0x338) != 0) {
              lVar13 = *(longlong *)(lVar9 + 0x338);
            }
            iVar8 = *(int *)(lVar13 + (ulonglong)
                                      (*(int *)(lVar9 + 0x340) - 1U &
                                      iVar8 + (uVar18 << 0x10 | uVar18 & 0xffff) +
                                      (uVar19 << 0x13 | uVar19 & 0xffff) + ((uVar18 & 0xffff) >> 4))
                                      * 4);
            if (iVar8 != -1) {
              do {
                plVar12 = (longlong *)(*(longlong *)(lVar9 + 0x2f8) + (longlong)iVar8 * 0x28);
                if (*plVar12 == local_f8) {
                  unaff_R14 = (uint *)(plVar12 + 1);
                  if (unaff_R14 != (uint *)0x0 && plVar12 != (longlong *)0x0) goto LAB_14050c07b;
                  break;
                }
                iVar8 = (int)plVar12[4];
              } while (iVar8 != -1);
            }
          }
          unaff_R14 = (uint *)FUN_14050c909();
          lVar9 = *(longlong *)(unaff_R14 + 0xba);
          if (lVar9 == 0) {
            uVar15 = FUN_14050c9fe();
            lVar9 = FUN_14477b664(uVar15);
            *(longlong *)(unaff_R14 + 0xba) = lVar9;
          }
          puVar16 = *(uint **)(unaff_R14 + 0xbc);
          if (((puVar16 == (uint *)0x0) && (puVar16 = (uint *)0x0, lVar9 != 0)) &&
             (*(longlong *)(unaff_R14 + 0xb8) != 0)) {
            plVar12 = *(longlong **)(lVar9 + 0xb8);
            if ((plVar12 == (longlong *)0x0) ||
               (cVar6 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar6 == '\0')) {
              puVar16 = (uint *)0x0;
            }
            else {
              uVar15 = (**(code **)(*plVar12 + 0x110))(plVar12);
              puVar16 = (uint *)FUN_144aff482(uVar15,unaff_R14 + 0xb8);
            }
            *(uint **)(unaff_R14 + 0xbc) = puVar16;
          }
        }
        goto LAB_14050bb4f;
      }
      lVar9 = FUN_14050ca38(param_1);
      if ((lVar9 == 0) || (plVar12 = (longlong *)FUN_14050cbd4(lVar9), plVar12 == (longlong *)0x0))
      {
LAB_14050bb00:
        lVar9 = FUN_14050c909();
        if (*(int *)(lVar9 + 0x3d0) != *(int *)(lVar9 + 0x3fc)) {
          uVar7 = (uint)((ulonglong)local_f8 >> 0x10);
          uVar19 = (uint)local_f8 & 0xffff;
          lVar13 = lVar9 + 0x400;
          if (*(longlong *)(lVar9 + 0x408) != 0) {
            lVar13 = *(longlong *)(lVar9 + 0x408);
          }
          iVar8 = *(int *)(lVar13 + (ulonglong)
                                    (*(int *)(lVar9 + 0x410) - 1U &
                                    (int)((ulonglong)local_f8 >> 0x20) +
                                    ((uint)local_f8 << 0x10 | uVar19) +
                                    (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar19 >> 4)) * 4);
          if (iVar8 != -1) {
            do {
              plVar12 = (longlong *)(*(longlong *)(lVar9 + 0x3c8) + (longlong)iVar8 * 0x28);
              if (*plVar12 == local_f8) {
                unaff_R14 = (uint *)(plVar12 + 1);
                if (unaff_R14 != (uint *)0x0 && plVar12 != (longlong *)0x0) goto LAB_14050c07b;
                break;
              }
              iVar8 = (int)plVar12[4];
            } while (iVar8 != -1);
          }
        }
        unaff_R14 = (uint *)FUN_14050c909();
        lVar9 = *(longlong *)(unaff_R14 + 0xee);
        if (lVar9 == 0) {
          uVar15 = FUN_14050c9fe();
          lVar9 = FUN_14477b664(uVar15);
          *(longlong *)(unaff_R14 + 0xee) = lVar9;
        }
        puVar16 = *(uint **)(unaff_R14 + 0xf0);
        if (((puVar16 == (uint *)0x0) && (puVar16 = (uint *)0x0, lVar9 != 0)) &&
           (*(longlong *)(unaff_R14 + 0xec) != 0)) {
          plVar12 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar12 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar6 == '\0')) {
            puVar16 = (uint *)0x0;
          }
          else {
            uVar15 = (**(code **)(*plVar12 + 0x110))(plVar12);
            puVar16 = (uint *)FUN_144aff482(uVar15,unaff_R14 + 0xec);
          }
          *(uint **)(unaff_R14 + 0xf0) = puVar16;
        }
      }
      else {
        lVar13 = (**(code **)(*plVar12 + 8))(plVar12);
        lVar14 = FUN_14050caa6();
        if ((lVar14 == 0) ||
           (((*(int *)(lVar13 + 0x38) < *(int *)(lVar14 + 0x38) ||
             (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
              lVar14 + 0x30)) || ((char)plVar12[0x1a] != '\x01')))) goto LAB_14050bb00;
        plVar12 = plVar12 + 0x1b;
        lVar13 = FUN_141563480(plVar12);
        if (lVar13 == 0) goto LAB_14050bb00;
        if (param_1[0x1d] == 0) {
          uVar15 = (**(code **)(*param_1 + 0x180))(param_1);
          lVar13 = FUN_140149a73(uVar15,0);
          if (param_1 != (longlong *)0x0) {
            uVar7 = *(uint *)((longlong)param_1 + 0xc);
            if ((int)uVar7 < DAT_14c9647dc) {
              lVar14 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
            }
            else {
              lVar14 = 0;
            }
            if (*(int *)(lVar14 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              local_fc = DAT_14c964868 + 1;
              bVar21 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar21) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,local_fc);
              }
              LOCK();
              if (*(int *)(lVar14 + 0x10) == 0) {
                *(int *)(lVar14 + 0x10) = local_fc;
              }
              UNLOCK();
            }
          }
          plVar10 = *(longlong **)(lVar13 + 0x160);
          local_e0 = local_e0 & 0xffffff00;
          uStack_dc = 0;
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_d0 = uStack_d0 & 0xffffff00;
          uStack_cc = 0;
          uStack_c8 = 0;
          iStack_c4 = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          iStack_b8 = 0;
          local_b0 = 0xc69c4000;
          local_60 = 0;
          local_58 = 0;
          local_50 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          local_4f = 1;
          local_4d = 0;
          local_4c = 0;
          local_f0 = (undefined8 *)0x0;
          local_e8 = 0;
          FUN_1446efa72(&local_f0,0,3,0x10);
          puVar3 = local_f0;
          local_e8 = 3;
          *local_f0 = &PTR_LAB_14b3e6310;
          LOCK();
          UNLOCK();
          lVar14 = DAT_14c758608 + 1;
          lVar13 = DAT_14c758608 + 1;
          if (lVar14 == 0) {
            LOCK();
            UNLOCK();
            lVar14 = DAT_14c758608 + 2;
            lVar13 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar13;
          local_f0[2] = lVar14;
          *local_f0 = &PTR_FUN_14b967b10;
          local_f0[3] = 0;
          if (param_1 == (longlong *)0x0) {
            iVar8 = 0;
          }
          else {
            uVar7 = *(uint *)((longlong)param_1 + 0xc);
            *(uint *)(local_f0 + 3) = uVar7;
            if ((int)uVar7 < DAT_14c9647dc) {
              lVar13 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
            }
            else {
              lVar13 = 0;
            }
            iVar8 = *(int *)(lVar13 + 0x10);
            if (*(int *)(lVar13 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              local_fc = DAT_14c964868 + 1;
              bVar21 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar21) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,local_fc);
              }
              LOCK();
              iVar8 = *(int *)(lVar13 + 0x10);
              bVar21 = iVar8 == 0;
              if (bVar21) {
                *(int *)(lVar13 + 0x10) = local_fc;
                iVar8 = 0;
              }
              UNLOCK();
              if (bVar21) {
                iVar8 = local_fc;
              }
            }
          }
          iVar5 = local_e8;
          puVar4 = local_f0;
          *(int *)((longlong)puVar3 + 0x1c) = iVar8;
          puVar3[4] = param_1;
          local_f0 = (undefined8 *)0x0;
          local_e8 = 0;
          if (iStack_b8 == 0) {
LAB_14050c43f:
            if (CONCAT44(uStack_bc,uStack_c0) != 0) {
              FUN_1400020a8();
            }
          }
          else {
            puVar3 = (undefined8 *)CONCAT44(uStack_bc,uStack_c0);
            if (puVar3 != (undefined8 *)0x0) {
              (**(code **)*puVar3)(puVar3,0);
              FUN_1446efa72(&uStack_c0,0,0,0x10);
              iStack_b8 = 0;
              goto LAB_14050c43f;
            }
          }
          uStack_c0 = SUB84(puVar4,0);
          uStack_bc = (undefined4)((ulonglong)puVar4 >> 0x20);
          iStack_b8 = iVar5;
          if (local_e8 == 0) {
LAB_14050c467:
            if (local_f0 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_f0 != (undefined8 *)0x0) {
            (**(code **)*local_f0)(local_f0,0);
            FUN_1446efa72(&local_f0,0,0,0x10);
            local_e8 = 0;
            goto LAB_14050c467;
          }
          lVar13 = FUN_141563480(plVar12);
          (**(code **)(*plVar10 + 0x28))(plVar10,&local_f0,lVar13 + 0x90,&local_e0);
          param_1[0x1d] = (longlong)local_f0;
          FUN_1409838b8(&local_e0);
        }
        uVar15 = FUN_141563480(plVar12);
        uVar17 = (**(code **)(*param_1 + 0x180))(param_1);
        cVar6 = FUN_1411d9864(uVar17,uVar15);
        unaff_R14 = (uint *)FUN_14050c909();
        if (cVar6 != '\0') {
          local_e0 = 0x4a171d50;
          uStack_dc = 1;
          uStack_d8 = 0;
          uStack_d4 = 0;
          uStack_d0 = 0;
          uStack_cc = 0;
          uStack_c8 = 0;
          iStack_c4 = 0;
          FUN_1401004a0(&local_e0,lVar9 + 0x4f0);
          if (*(longlong *)(unaff_R14 + 0x108) == CONCAT44(uStack_d4,uStack_d8)) {
            uVar7 = unaff_R14[0x10c];
            uVar19 = uStack_c8;
            if ((int)uVar7 < (int)uStack_c8) {
              uVar19 = uVar7;
            }
            if (0 < (int)uVar19) {
              uVar11 = 0;
              do {
                if ((*(ulonglong *)(CONCAT44(uStack_cc,uStack_d0) + uVar11 * 8) &
                    ~*(ulonglong *)(*(longlong *)(unaff_R14 + 0x10a) + uVar11 * 8)) != 0)
                goto LAB_14050c640;
                uVar11 = uVar11 + 1;
              } while (uVar19 != uVar11);
            }
            bVar21 = true;
            if ((int)uVar7 < (int)uStack_c8) {
              lVar9 = 0;
              do {
                bVar21 = *(longlong *)
                          ((longlong)(int)uVar7 * 8 + CONCAT44(uStack_cc,uStack_d0) + lVar9 * 8) ==
                         0;
                if (!bVar21) break;
                iVar8 = (int)lVar9;
                lVar9 = lVar9 + 1;
              } while (~uVar7 + uStack_c8 != iVar8);
            }
          }
          else {
LAB_14050c640:
            bVar21 = false;
          }
          local_e0 = 0x4a171d50;
          uStack_dc = 1;
          uStack_c8 = 0;
          if (iStack_c4 != 0) {
            FUN_140115c12(&uStack_d0,0);
          }
          uStack_d8 = 0;
          uStack_d4 = 0;
          if (CONCAT44(uStack_cc,uStack_d0) != 0) {
            FUN_1400020a8();
          }
          if (!bVar21) {
            unaff_R14 = (uint *)FUN_14050c909();
            lVar9 = *(longlong *)(unaff_R14 + 0x110);
            if (lVar9 == 0) {
              uVar15 = FUN_14050c9fe();
              lVar9 = FUN_14477b664(uVar15);
              *(longlong *)(unaff_R14 + 0x110) = lVar9;
            }
            puVar16 = *(uint **)(unaff_R14 + 0x112);
            if (puVar16 != (uint *)0x0) goto LAB_14050bb4f;
            if ((lVar9 != 0) && (*(longlong *)(unaff_R14 + 0x10e) != 0)) {
              plVar12 = *(longlong **)(lVar9 + 0xb8);
              if ((plVar12 == (longlong *)0x0) ||
                 (cVar6 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar6 == '\0')) {
                puVar16 = (uint *)0x0;
              }
              else {
                uVar15 = (**(code **)(*plVar12 + 0x110))(plVar12);
                puVar16 = (uint *)FUN_144aff482(uVar15,unaff_R14 + 0x10e);
              }
              *(uint **)(unaff_R14 + 0x112) = puVar16;
              goto LAB_14050c632;
            }
          }
          goto LAB_14050bb00;
        }
        lVar9 = *(longlong *)(unaff_R14 + 0x116);
        if (lVar9 == 0) {
          uVar15 = FUN_14050c9fe();
          lVar9 = FUN_14477b664(uVar15);
          *(longlong *)(unaff_R14 + 0x116) = lVar9;
        }
        puVar16 = *(uint **)(unaff_R14 + 0x118);
        if (puVar16 == (uint *)0x0) {
          if ((lVar9 != 0) && (*(longlong *)(unaff_R14 + 0x114) != 0)) {
            plVar12 = *(longlong **)(lVar9 + 0xb8);
            if ((plVar12 == (longlong *)0x0) ||
               (cVar6 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar6 == '\0')) {
              puVar16 = (uint *)0x0;
            }
            else {
              uVar15 = (**(code **)(*plVar12 + 0x110))(plVar12);
              puVar16 = (uint *)FUN_144aff482(uVar15,unaff_R14 + 0x114);
            }
            *(uint **)(unaff_R14 + 0x118) = puVar16;
LAB_14050c632:
            if (puVar16 != (uint *)0x0) goto LAB_14050bb4f;
          }
          goto LAB_14050bb00;
        }
      }
    }
LAB_14050bb4f:
    LOCK();
    plVar12 = plVar2 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    if (!bVar20) goto LAB_14050bb68;
  }
LAB_14050bb5e:
  param_1[0x1c] = (longlong)puVar16;
  unaff_R14 = puVar16;
LAB_14050bb68:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_R14;
LAB_14050c07b:
  lVar9 = plVar12[2];
  if (lVar9 == 0) {
    uVar15 = FUN_14050c9fe();
    lVar9 = FUN_14477b664(uVar15);
    plVar12[2] = lVar9;
  }
  puVar16 = (uint *)plVar12[3];
  if (((puVar16 == (uint *)0x0) && (puVar16 = (uint *)0x0, lVar9 != 0)) &&
     (*(longlong *)unaff_R14 != 0)) {
    plVar10 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar6 == '\0')) {
      puVar16 = (uint *)0x0;
    }
    else {
      uVar15 = (**(code **)(*plVar10 + 0x110))(plVar10);
      puVar16 = (uint *)FUN_144aff482(uVar15,unaff_R14);
    }
    plVar12[3] = (longlong)puVar16;
  }
  goto LAB_14050bb4f;
}



// FUNCTION 14050c909 FUN_14050c909 body=244 status=ok
// SIG undefined FUN_14050c909(void)

longlong * FUN_14050c909(void)

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
  if (DAT_14cbc83a0 == (longlong *)0x0) {
    memset(&DAT_14cbc83a8,0,0x648);
    FUN_145dcc6b8(&DAT_14cbc83a8);
    DAT_14cbc83a0 = (longlong *)&DAT_14cbc83a8;
  }
  plVar1 = DAT_14cbc83a0;
  plVar3 = DAT_14cbc83a0 + 1;
  if ((char)DAT_14cbc83a0[2] == '\0') {
LAB_14050c936:
    if (*plVar3 == 0) goto LAB_14050c9a3;
    cVar2 = FUN_1449e3c20(DAT_14cbc83a0);
    if (cVar2 == '\0') goto LAB_14050c94c;
  }
  else {
    if ((char)DAT_14cbc83a0[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_14050c936;
    }
LAB_14050c9a3:
    lVar4 = FUN_140162146();
    if (lVar4 == 0) goto LAB_14050c94c;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_gbx_discovery",0);
    FUN_140024ada(&local_48,plVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_14050c94c:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050c9fe FUN_14050c9fe body=57 status=ok
// SIG undefined FUN_14050c9fe(void)

void FUN_14050c9fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d0f8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d0f8 = FUN_140002ddd(FUN_1418512d9,uVar1,L"GbxDiscoveryLocationTypeDef");
  }
  return;
}



// FUNCTION 14050ca38 FUN_14050ca38 body=109 status=ok
// SIG undefined FUN_14050ca38(void)

undefined8 FUN_14050ca38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [44];
  undefined1 local_4c [12];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14050cae0(param_1,local_4c);
  FUN_1448075d0(local_40,local_4c);
  uVar1 = FUN_14060eaf6(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050caa6 FUN_14050caa6 body=57 status=ok
// SIG undefined FUN_14050caa6(void)

void FUN_14050caa6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbace68 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbace68 = FUN_140002ddd(FUN_1465e4928,uVar1,L"OakMissionSetDef");
  }
  return;
}



// FUNCTION 14050cae0 FUN_14050cae0 body=243 status=ok
// SIG undefined FUN_14050cae0(void)

longlong * FUN_14050cae0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  plVar2 = *(longlong **)(param_1 + 0xd0);
  if (plVar2 == (longlong *)0x0) goto LAB_14050cb9e;
  iVar5 = (int)plVar2[1];
  do {
    if (iVar5 == 0) goto LAB_14050cb9e;
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
  plVar3 = *(longlong **)(param_1 + 200);
  if (plVar3 != (longlong *)0x0) {
    plVar6 = (longlong *)(**(code **)(*plVar3 + 0x30))(plVar3);
    if (plVar6 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
      lVar8 = FUN_14060edb4();
      if ((((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
          (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
           lVar8 + 0x30)) && ((int)plVar6[6] != 0)) {
        *(int *)(param_2 + 1) = (int)plVar6[7];
        *param_2 = plVar6[6];
        goto LAB_14050cb39;
      }
    }
    (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
  }
LAB_14050cb39:
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
  if (plVar3 != (longlong *)0x0) {
    return param_2;
  }
LAB_14050cb9e:
  *(undefined4 *)(param_2 + 1) = DAT_14c948620;
  *param_2 = DAT_14c948618;
  return param_2;
}



// FUNCTION 14050cbd4 FUN_14050cbd4 body=133 status=ok
// SIG undefined FUN_14050cbd4(void)

longlong FUN_14050cbd4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *(undefined8 *)(param_1 + 0x4d8);
  FUN_1446dcdd4(local_38);
  if (DAT_14cb86df8 != 0) {
    lVar1 = FUN_144837462(DAT_14cb86df8,local_38);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x58) != '\0')) goto LAB_14050cc25;
  }
  lVar1 = 0;
LAB_14050cc25:
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050cc5a FUN_14050cc5a body=492 status=ok
// SIG undefined FUN_14050cc5a(void)

undefined8 FUN_14050cc5a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  longlong *local_50;
  longlong *local_48;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = *(longlong **)(param_1 + 0xd0);
  if (plVar3 == (longlong *)0x0) {
    uVar8 = 0;
    goto LAB_14050cd73;
  }
  iVar5 = (int)plVar3[1];
  uVar8 = 0;
  do {
    if (iVar5 == 0) goto LAB_14050cd73;
    LOCK();
    iVar4 = (int)plVar3[1];
    bVar11 = iVar5 == iVar4;
    if (bVar11) {
      *(int *)(plVar3 + 1) = iVar5 + 1;
      iVar4 = iVar5;
    }
    iVar5 = iVar4;
    UNLOCK();
  } while (!bVar11);
  plVar9 = *(longlong **)(param_1 + 200);
  if ((plVar9 == (longlong *)0x0) ||
     ((**(code **)(*plVar9 + 0x40))(plVar9,&local_50), local_48 == (longlong *)0x0)) {
LAB_14050cd6b:
    uVar8 = 0;
  }
  else {
    iVar5 = (int)local_48[1];
    do {
      if (iVar5 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_48[1];
      bVar11 = iVar5 == iVar4;
      if (bVar11) {
        *(int *)(local_48 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar9 = local_48;
    } while (!bVar11);
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    plVar2 = local_50;
    local_48 = (longlong *)0x0;
    if (plVar9 == (longlong *)0x0) goto LAB_14050cd6b;
    local_50 = (longlong *)0x0;
    if (plVar2 == (longlong *)0x0) {
LAB_14050cd97:
      plVar10 = (longlong *)0x0;
    }
    else {
      lVar6 = (**(code **)(*plVar2 + 8))(plVar2);
      lVar7 = FUN_14050ce48();
      if ((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_14050cd97;
      plVar10 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30) {
        plVar10 = plVar2;
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
    if (local_48 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
    }
    if ((plVar10 == (longlong *)0x0) || ((int)plVar10[0x25] == 0)) goto LAB_14050cd6b;
    local_60 = *(undefined8 *)plVar10[0x24];
    local_58 = *(undefined4 *)((undefined8 *)plVar10[0x24] + 1);
    FUN_1448075d0(&local_50);
    uVar8 = FUN_14662d28e(&local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  LOCK();
  plVar9 = plVar3 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_14050cd73:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14050ce48 FUN_14050ce48 body=57 status=ok
// SIG undefined FUN_14050ce48(void)

void FUN_14050ce48(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacdd8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacdd8 = FUN_140002ddd(FUN_1465e4611,uVar1,L"OakMissionGiverRecord");
  }
  return;
}



// FUNCTION 14050ce82 FUN_14050ce82 body=192 status=ok
// SIG undefined FUN_14050ce82(void)

longlong * FUN_14050ce82(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14050cf44(param_1 + 0x178,&local_28);
  *param_2 = local_28;
  param_2[1] = (longlong)local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_20 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  }
  if (*param_2 == 0) {
    plVar3 = (longlong *)param_2[1];
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
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050cf44 FUN_14050cf44 body=2266 status=ok
// SIG undefined FUN_14050cf44(void)

/* WARNING: Removing unreachable block (ram,0x00014050d5dd) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff90 : 0x00014050d0b7 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

longlong * FUN_14050cf44(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  int *piVar10;
  byte bVar11;
  longlong **pplVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_148 [32];
  int local_128 [2];
  longlong *local_120;
  longlong *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  longlong local_100;
  undefined4 local_f8;
  int iStack_f4;
  char local_f0 [8];
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  longlong local_a0;
  int iStack_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  byte local_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar4 = (longlong *)FUN_14050d820(param_3);
  lVar5 = FUN_140698182(param_3);
  if (plVar4 == (longlong *)0x0) {
    bVar11 = 0;
  }
  else {
    bVar11 = (*(byte *)(plVar4 + 0xc) & 2) >> 1;
  }
  if (lVar5 == 0) {
    bVar14 = false;
  }
  else {
    bVar14 = *(char *)(lVar5 + 0x152) == '\x02';
  }
  if (plVar4 == (longlong *)0x0) {
LAB_14050d065:
    lVar5 = 0;
  }
  else {
    uVar6 = FUN_1401fa540();
    plVar7 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar6);
    if (plVar7 == (longlong *)0x0) goto LAB_14050d065;
    uVar6 = FUN_1401fa540();
    plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
    lVar5 = 0;
    if ((plVar7 != plVar8) && (plVar8 != (longlong *)0x0)) {
      lVar5 = (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  cVar2 = FUN_1402611f4(param_1);
  if ((cVar2 == '\0') &&
     (((((bVar11 | bVar14) != 1 || (lVar5 == 0)) || ((longlong *)*param_3 == (longlong *)0x0)) ||
      ((lVar9 = (**(code **)(*(longlong *)*param_3 + 0x128))(), lVar9 == 0 ||
       (cVar2 = FUN_1402611f4(lVar9), cVar2 == '\0')))))) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_148);
  }
  plVar7 = plVar4;
  if (plVar4 == (longlong *)0x0) {
    plVar7 = (longlong *)FUN_14050d8a4(param_3,0);
  }
  local_78 = (longlong *)((ulonglong)local_78 & 0xffffffffffffff00);
  local_50[0] = 0;
  FUN_1456bb102(&local_78,plVar7);
  local_f0[0] = (char)local_78;
  if ((char)local_78 == '\x01') {
    local_f0[0] = '\x02';
    if (uStack_70 == (longlong *)0x0) {
      local_e8._0_4_ = 0;
      iVar3 = 0;
      uVar1 = (uint)local_e8;
    }
    else {
      uVar1 = *(uint *)((longlong)uStack_70 + 0xc);
      local_e8 = (ulonglong)uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar3 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar15 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar15) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar13);
        }
        LOCK();
        iVar3 = *(int *)(lVar9 + 0x10);
        bVar15 = iVar3 == 0;
        if (bVar15) {
          *(int *)(lVar9 + 0x10) = iVar13;
          iVar3 = 0;
        }
        UNLOCK();
        uVar1 = (uint)local_e8;
        if (bVar15) {
          iVar3 = iVar13;
        }
      }
    }
    local_e8._0_4_ = uVar1;
    local_e8 = CONCAT44(iVar3,(uint)local_e8);
  }
  else if ((char)local_78 == '\x02') {
    local_e8 = (ulonglong)uStack_70;
  }
  else if ((char)local_78 == '\x03') {
    local_e8 = (ulonglong)uStack_70;
    local_e0 = local_68;
    if (local_68 == (longlong *)0x0) {
      local_d8 = local_60;
      local_d0 = local_58;
    }
    else {
      LOCK();
      *(int *)((longlong)local_68 + 0xc) = *(int *)((longlong)local_68 + 0xc) + 1;
      UNLOCK();
      local_d8 = local_60;
      local_d0 = local_58;
    }
  }
  local_c8[0] = 0;
  if (local_50[0] != 0) {
    uVar6 = FUN_1448174c4(local_c8);
    FUN_1400e08b0(uVar6,DAT_14c9a3da0 + (longlong)local_50[0] * 0x10 + -0x10);
  }
  local_80 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  local_b0 = 0;
  uStack_ac = 0;
  local_a8 = 0;
  local_a0 = 0;
  iStack_98 = 0;
  iStack_94 = 0;
  local_90 = 0;
  uStack_8c = 0;
  local_88 = 0;
  FUN_1448173f8(local_50);
  if (((char)local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
    LOCK();
    piVar10 = (int *)((longlong)local_68 + 0xc);
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (*piVar10 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  local_88 = *(undefined4 *)(param_1 + 1);
  local_90 = (undefined4)*param_1;
  uStack_8c = (undefined4)((ulonglong)*param_1 >> 0x20);
  local_a8 = *(undefined4 *)(param_1 + 3);
  local_b0 = (undefined4)param_1[2];
  uStack_ac = (undefined4)((ulonglong)param_1[2] >> 0x20);
  if ((plVar4 == (longlong *)0x0) || ((char)plVar4[0x2f] == '\x03')) {
LAB_14050d1ae:
    if ((~bVar14 & lVar5 != 0) == 0) {
      local_118 = (longlong *)0x0;
      iStack_110 = 0;
      plVar7 = (longlong *)FUN_14050d8a4(param_3);
      iVar3 = 0;
      if (plVar7 != (longlong *)0x0) {
        uVar6 = FUN_14050da20();
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar6);
        iVar3 = 0;
        if (plVar7 != (longlong *)0x0) {
          uVar6 = FUN_14050da20();
          plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
          if (plVar8 != (longlong *)0x0 && plVar7 != plVar8) {
            (**(code **)(*plVar8 + 0x10))(plVar8,&local_118);
            iVar3 = iStack_110;
          }
        }
      }
      plVar7 = (longlong *)FUN_14050d8ee(param_3);
      if (plVar7 != (longlong *)0x0 && iVar3 == 0) {
        uVar6 = FUN_14050da20();
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar6);
        iVar3 = 0;
        if (plVar7 != (longlong *)0x0) {
          uVar6 = FUN_14050da20();
          plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
          if (plVar8 != (longlong *)0x0 && plVar7 != plVar8) {
            (**(code **)(*plVar8 + 0x10))(plVar8,&local_78);
            local_118 = local_78;
            iStack_110 = (int)uStack_70;
            uStack_10c = uStack_70._4_4_;
            iVar3 = (int)uStack_70;
          }
        }
      }
      piVar10 = &iStack_110;
      plVar7 = (longlong *)FUN_14050d938(param_3);
      pplVar12 = &local_118;
      if (plVar7 != (longlong *)0x0 && iVar3 == 0) {
        uVar6 = FUN_14050da20();
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar6);
        if (plVar7 != (longlong *)0x0) {
          uVar6 = FUN_14050da20();
          plVar8 = (longlong *)FUN_144718840(plVar7,uVar6);
          if (plVar8 != (longlong *)0x0 && plVar7 != plVar8) {
            (**(code **)(*plVar8 + 0x10))(plVar8,&local_78);
            local_118 = local_78;
            iStack_110 = (int)uStack_70;
            uStack_10c = uStack_70._4_4_;
          }
        }
      }
    }
    else {
      local_120 = *(longlong **)(lVar5 + 0xc0);
      pplVar12 = &local_120;
      local_128[0] = *(int *)(lVar5 + 200);
      piVar10 = local_128;
    }
    FUN_14050d869(local_a0,iStack_98);
    iVar3 = *piVar10;
    plVar7 = *pplVar12;
    iStack_98 = iVar3;
    if (iVar3 == 0 && iStack_94 == 0) {
      iStack_94 = 0;
    }
    else {
      FUN_14050dc9a(&local_a0,iVar3);
      FUN_14050dbeb(local_a0,plVar7,iVar3);
    }
  }
  else {
    lVar9 = FUN_1457b68d8(plVar4);
    if (lVar9 != 0) {
      local_a8 = *(undefined4 *)(lVar9 + 0xa8);
      local_b0 = (undefined4)*(undefined8 *)(lVar9 + 0xa0);
      uStack_ac = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0xa0) >> 0x20);
    }
    lVar9 = FUN_144a7cbb2();
    if (((*(int *)(plVar4[2] + 0x38) < *(int *)(lVar9 + 0x38)) ||
        (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
         lVar9 + 0x30)) || (cVar2 = (**(code **)(*plVar4 + 0x700))(plVar4), cVar2 == '\0')) {
      local_80 = local_80 | 8;
    }
    if ((char)plVar4[0x2f] == '\x03') goto LAB_14050d1ae;
  }
  if (*(char *)((longlong)param_3 + 0x2c) == '\x01') {
    local_80 = local_80 | 8;
  }
  if ((plVar4 != (longlong *)0x0) ||
     (plVar4 = (longlong *)FUN_14050d8a4(param_3), plVar4 != (longlong *)0x0)) {
    uVar6 = FUN_14050db06();
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar6);
    if (plVar4 != (longlong *)0x0) {
      uVar6 = FUN_14050db06();
      plVar7 = (longlong *)FUN_144718840(plVar4,uVar6);
      if ((plVar4 != plVar7) && (plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x10))(plVar7,&local_100,*param_3);
        if (iStack_f4 != -1) {
          FUN_1411739ca(local_f0,&local_100);
        }
        goto LAB_14050d42c;
      }
    }
  }
  local_100 = 0;
  _local_f8 = 0xffffffff00000000;
LAB_14050d42c:
  uVar6 = FUN_14050d8a4(param_3);
  plVar7 = (longlong *)FUN_14001cc68(200,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b3e7450;
  plVar4 = plVar7 + 2;
  local_78 = (longlong *)((ulonglong)local_78 & 0xffffffffffffff00);
  local_50[0] = 0;
  FUN_1456bb102(&local_78,uVar6);
  FUN_14050dde2(plVar4,&local_78,local_f0);
  FUN_1448173f8(local_50);
  if (((char)local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
    LOCK();
    piVar10 = (int *)((longlong)local_68 + 0xc);
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (*piVar10 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  local_78 = plVar4;
  uStack_70 = plVar7;
  FUN_14050d982(&local_78,plVar4);
  plVar8 = uStack_70;
  *param_2 = (longlong)plVar4;
  param_2[1] = (longlong)plVar7;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    if (uStack_70 != (longlong *)0x0) {
      LOCK();
      plVar4 = uStack_70 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*uStack_70)(uStack_70);
        LOCK();
        piVar10 = (int *)((longlong)plVar8 + 0xc);
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (*piVar10 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if (iStack_f4 != -1) {
    if (local_100 != 0) {
      FUN_1400020a8();
    }
    _local_f8 = CONCAT44(0xffffffff,local_f8);
  }
  FUN_14050d869(local_a0,iStack_98);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)CONCAT44(uStack_b4,uStack_b8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar10 = (int *)((longlong)plVar4 + 0xc);
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (*piVar10 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar10 = (int *)((longlong)local_e0 + 0xc);
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (*piVar10 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14050d820 FUN_14050d820 body=73 status=ok
// SIG undefined FUN_14050d820(void)

undefined8 FUN_14050d820(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0xc)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 14050d869 FUN_14050d869 body=58 status=ok
// SIG undefined FUN_14050d869(void)

void FUN_14050d869(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      FUN_14028f43e(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14050d8a4 FUN_14050d8a4 body=73 status=ok
// SIG undefined FUN_14050d8a4(void)

undefined8 FUN_14050d8a4(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x14)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 14050d8ee FUN_14050d8ee body=73 status=ok
// SIG undefined FUN_14050d8ee(void)

undefined8 FUN_14050d8ee(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x24)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 14050d938 FUN_14050d938 body=73 status=ok
// SIG undefined FUN_14050d938(void)

undefined8 FUN_14050d938(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x1c)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 14050d982 FUN_14050d982 body=157 status=ok
// SIG undefined FUN_14050d982(void)

void FUN_14050d982(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14050d9bc;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14050d9bc;
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
LAB_14050d9bc:
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
                    /* WARNING: Could not recover jumptable at 0x00014050da1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14050da20 FUN_14050da20 body=228 status=ok
// SIG undefined FUN_14050da20(void)

longlong FUN_14050da20(void)

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
  if (DAT_14cb58a28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148655a8f;
    local_40 = FUN_1464c3258;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxActorPartSelectionProvider",&DAT_14cb58a28,&DAT_148655a8e)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb58a28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050db06 FUN_14050db06 body=228 status=ok
// SIG undefined FUN_14050db06(void)

longlong FUN_14050db06(void)

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
  if (DAT_14cb58a58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148655a93;
    local_40 = FUN_1464c334a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxActorPartSerialNumberProvider",&DAT_14cb58a58,
                  &DAT_148655a92);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb58a58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050dbeb FUN_14050dbeb body=174 status=ok
// SIG undefined FUN_14050dbeb(void)

void FUN_14050dbeb(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      puVar3[-3] = *param_2;
      uVar2 = FUN_14477b664(param_2[1]);
      uVar2 = FUN_14477b664(uVar2);
      puVar3[-2] = uVar2;
      puVar3[-1] = param_2[2];
      *puVar3 = 0;
      iVar1 = *(int *)(param_2 + 4);
      uVar2 = param_2[3];
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_14099a5ec(puVar3,iVar1,0);
        FUN_14099a56b(*puVar3,uVar2);
      }
      param_2 = param_2 + 5;
      puVar3 = puVar3 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14050dc9a FUN_14050dc9a body=327 status=ok
// SIG undefined FUN_14050dc9a(void)

void FUN_14050dc9a(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x28;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14050dd08;
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
LAB_14050dd08:
    iVar5 = (int)(uVar4 / 0x28);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x28,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14050dde2 FUN_14050dde2 body=4291 status=ok
// SIG undefined FUN_14050dde2(void)

undefined8 * FUN_14050dde2(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int *piVar11;
  longlong lVar12;
  uint *puVar13;
  undefined8 *puVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  undefined4 *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  int iVar29;
  undefined4 *puVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  int iVar33;
  longlong lVar34;
  bool bVar35;
  undefined1 auStack_1e8 [32];
  longlong *local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined8 *local_1b0;
  uint *local_1a8;
  int *local_1a0;
  undefined8 *local_198;
  int *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  longlong local_170;
  longlong *local_168;
  longlong local_160;
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148;
  longlong *local_140;
  undefined1 local_138 [64];
  undefined1 local_f8 [80];
  byte local_a8;
  undefined1 local_a0 [64];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b08d700;
  local_198 = param_1 + 3;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(byte *)(param_3 + 0x70) = *(byte *)(param_3 + 0x70) | 6;
  plVar7 = (longlong *)FUN_1447262c2(param_2);
  if (plVar7 != (longlong *)0x0) {
    uVar8 = FUN_1401fa540();
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar8);
    if (plVar7 != (longlong *)0x0) {
      uVar8 = FUN_1401fa540();
      plVar9 = (longlong *)FUN_144718840(plVar7,uVar8);
      if (((plVar7 != plVar9) && (plVar9 != (longlong *)0x0)) &&
         (cVar4 = (**(code **)(*plVar9 + 0x18))(plVar9), cVar4 != '\0')) {
        *(byte *)(param_3 + 0x70) = *(byte *)(param_3 + 0x70) | 8;
      }
    }
  }
  FUN_14050efc4(param_3,local_138);
  FUN_14571ec98(local_138,param_1 + 9);
  FUN_14099a466(param_1 + 7,local_a0);
  FUN_1403de7ba(local_198,local_f8);
  plVar7 = param_1 + 0xd;
  local_1c8 = plVar7;
  if (*(int *)(param_1 + 0xe) != *(int *)((longlong)param_1 + 0x9c)) {
    puVar10 = param_1 + 0x14;
    if ((undefined8 *)param_1[0x15] != (undefined8 *)0x0) {
      puVar10 = (undefined8 *)param_1[0x15];
    }
    iVar17 = *(int *)(param_1 + 0x16);
    iVar33 = iVar17 + 3;
    if (-1 < iVar17) {
      iVar33 = iVar17;
    }
    if (*(int *)(param_1 + 0xe) - *(int *)((longlong)param_1 + 0x9c) < iVar33 >> 2) {
      iVar17 = *(int *)(param_1 + 0x12);
      if (iVar17 == 0) {
        uVar20 = 1;
        iVar29 = 0;
        iVar33 = 0;
        uVar32 = 0;
      }
      else {
        puVar13 = (uint *)param_1[0x11];
        if ((uint *)param_1[0x11] == (uint *)0x0) {
          puVar13 = (uint *)(param_1 + 0xf);
        }
        uVar26 = *puVar13;
        if (uVar26 == 0) {
          iVar33 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar33 = iVar17 + -1;
          }
          uVar32 = 0;
          uVar20 = (ulonglong)(uint)(iVar33 >> 5);
          if (iVar33 >> 5 < 1) {
            uVar20 = uVar32;
          }
          iVar29 = 0;
          do {
            if (uVar20 == uVar32) goto LAB_14050e0e3;
            iVar29 = iVar29 + 0x20;
            uVar26 = puVar13[uVar32 + 1];
            uVar32 = uVar32 + 1;
          } while (uVar26 == 0);
        }
        else {
          iVar29 = 0;
          uVar32 = 0;
        }
        uVar20 = (ulonglong)(-uVar26 & uVar26);
        uVar22 = uVar20 * 2 + 1;
        lVar34 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar34 == 0; lVar34 = lVar34 + -1) {
          }
        }
        iVar33 = (iVar29 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
        if (iVar17 <= iVar33) {
          iVar33 = iVar17;
        }
      }
      if (iVar33 != iVar17) {
        uVar26 = 0xffffffff;
        do {
          *(undefined4 *)
           ((longlong)puVar10 +
           (longlong)*(int *)(param_1[0xd] + 0x1c + (longlong)iVar33 * 0x20) * 4) = 0xffffffff;
          uVar26 = ~(uint)uVar20 & uVar26;
          puVar13 = (uint *)param_1[0x11];
          if ((uint *)param_1[0x11] == (uint *)0x0) {
            puVar13 = (uint *)(param_1 + 0xf);
          }
          iVar16 = *(int *)(param_1 + 0x12);
          iVar33 = (int)uVar32;
          lVar34 = (longlong)iVar33;
          uVar24 = puVar13[lVar34] & uVar26;
          if (uVar24 == 0) {
            iVar21 = iVar16 + 0x1e;
            if (-1 < iVar16 + -1) {
              iVar21 = iVar16 + -1;
            }
            iVar21 = iVar21 >> 5;
            iVar29 = iVar29 + 0x20;
            iVar6 = iVar21;
            if (iVar21 < iVar33) {
              iVar6 = iVar33;
            }
            if (iVar33 < iVar21) {
              lVar12 = 0;
              do {
                uVar24 = puVar13[lVar34 + lVar12 + 1];
                if (uVar24 != 0) {
                  uVar32 = (ulonglong)(iVar33 + (int)lVar12 + 1);
                  uVar26 = 0xffffffff;
                  goto LAB_14050e090;
                }
                iVar29 = iVar29 + 0x20;
                lVar12 = lVar12 + 1;
              } while (iVar6 - lVar34 != lVar12);
              uVar26 = 0xffffffff;
              lVar34 = (longlong)iVar6;
            }
            uVar32 = lVar34 + 1U & 0xffffffff;
            iVar33 = iVar16;
          }
          else {
LAB_14050e090:
            uVar20 = (ulonglong)(-uVar24 & uVar24);
            uVar22 = uVar20 * 2 + 1;
            lVar34 = 0x3f;
            if (uVar22 != 0) {
              for (; uVar22 >> lVar34 == 0; lVar34 = lVar34 + -1) {
              }
            }
            iVar33 = (iVar29 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
            if (iVar16 <= iVar33) {
              iVar33 = iVar16;
            }
          }
        } while (iVar33 != iVar17);
      }
    }
    else if (0 < iVar17) {
      lVar34 = 0;
      do {
        *(undefined4 *)((longlong)puVar10 + lVar34 * 4) = 0xffffffff;
        lVar34 = lVar34 + 1;
      } while (lVar34 < *(int *)(param_1 + 0x16));
    }
LAB_14050e0e3:
    iVar17 = *(int *)(param_1 + 0x12);
    if (iVar17 == 0) {
      uVar32 = 0;
      uVar20 = 1;
      iVar33 = 0;
      iVar29 = 0;
    }
    else {
      puVar13 = (uint *)param_1[0x11];
      if ((uint *)param_1[0x11] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 0xf);
      }
      uVar26 = *puVar13;
      if (uVar26 == 0) {
        iVar33 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar33 = iVar17 + -1;
        }
        uVar32 = 0;
        uVar20 = (ulonglong)(uint)(iVar33 >> 5);
        if (iVar33 >> 5 < 1) {
          uVar20 = uVar32;
        }
        iVar29 = 0;
        do {
          if (uVar20 == uVar32) goto LAB_14050e21f;
          iVar29 = iVar29 + 0x20;
          uVar26 = puVar13[uVar32 + 1];
          uVar32 = uVar32 + 1;
        } while (uVar26 == 0);
      }
      else {
        uVar32 = 0;
        iVar29 = 0;
      }
      uVar20 = (ulonglong)(-uVar26 & uVar26);
      uVar22 = uVar20 * 2 + 1;
      lVar34 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      iVar33 = (iVar29 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
      if (iVar17 <= iVar33) {
        iVar33 = iVar17;
      }
    }
    if (iVar33 < iVar17) {
      uVar26 = 0xffffffff;
      do {
        if (*(longlong *)(*plVar7 + 8 + (longlong)iVar33 * 0x20) != 0) {
          FUN_1400020a8();
          iVar17 = *(int *)(param_1 + 0x12);
        }
        uVar26 = uVar26 & ~(uint)uVar20;
        puVar13 = (uint *)param_1[0x11];
        if ((uint *)param_1[0x11] == (uint *)0x0) {
          puVar13 = (uint *)(param_1 + 0xf);
        }
        iVar33 = (int)uVar32;
        lVar34 = (longlong)iVar33;
        uVar24 = puVar13[lVar34] & uVar26;
        if (uVar24 == 0) {
          iVar16 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar16 = iVar17 + -1;
          }
          iVar16 = iVar16 >> 5;
          iVar21 = iVar16;
          if (iVar16 < iVar33) {
            iVar21 = iVar33;
          }
          if (iVar16 <= iVar33) break;
          lVar12 = 0;
          while( true ) {
            iVar29 = iVar29 + 0x20;
            uVar24 = puVar13[lVar34 + lVar12 + 1];
            if (uVar24 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar21 - lVar34 == lVar12) goto LAB_14050e21f;
          }
          uVar32 = (ulonglong)(iVar33 + (int)lVar12 + 1);
          uVar26 = 0xffffffff;
        }
        uVar20 = (ulonglong)(-uVar24 & uVar24);
        uVar22 = uVar20 * 2 + 1;
        lVar34 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar34 == 0; lVar34 = lVar34 + -1) {
          }
        }
        iVar33 = (iVar29 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
      } while (iVar33 < iVar17);
    }
LAB_14050e21f:
    *(undefined4 *)(param_1 + 0xe) = 0;
    if (*(int *)((longlong)param_1 + 0x74) < 0) {
      FUN_1446f4a44(plVar7,0);
    }
    param_1[0x13] = 0xffffffff;
    *(undefined4 *)(param_1 + 0x12) = 0;
  }
  local_190 = (int *)FUN_14094f534();
  if ((longlong)*(int *)(param_1 + 10) != 0) {
    local_1c0 = param_1 + 0x15;
    plVar9 = (longlong *)param_1[9];
    local_180 = plVar9 + *(int *)(param_1 + 10);
    puVar10 = param_1 + 0x14;
    puVar13 = (uint *)(param_1 + 0xf);
    local_1b0 = puVar10;
    local_1a8 = puVar13;
    do {
      local_188 = (longlong *)*plVar9;
      local_178 = plVar9;
      if ((local_188 != (longlong *)0x0) &&
         (piVar11 = (int *)(**(code **)(*local_188 + 8))(),
         piVar11 != local_190 && piVar11 != (int *)0x0)) {
        do {
          uVar26 = piVar11[3];
          if ((int)uVar26 < DAT_14c9647dc) {
            lVar34 = (ulonglong)((uVar26 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8);
          }
          else {
            lVar34 = 0;
          }
          uVar24 = *(uint *)(lVar34 + 0x10);
          local_1a0 = piVar11;
          if (*(uint *)(lVar34 + 0x10) == 0) {
            LOCK();
            iVar17 = DAT_14c964868 + 1;
            UNLOCK();
            uVar25 = DAT_14c964868 + 1;
            bVar35 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar17;
            if (bVar35) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar25);
            }
            LOCK();
            uVar24 = *(uint *)(lVar34 + 0x10);
            bVar35 = uVar24 == 0;
            if (bVar35) {
              *(uint *)(lVar34 + 0x10) = uVar25;
              uVar24 = 0;
            }
            UNLOCK();
            if (bVar35) {
              uVar24 = uVar25;
            }
          }
          lVar34 = CONCAT44(uVar24,uVar26);
          uVar26 = uVar26 ^ uVar24;
          iVar17 = *(int *)(param_1 + 0xe);
          if (iVar17 != *(int *)((longlong)param_1 + 0x9c)) {
            puVar14 = (undefined8 *)param_1[0x15];
            if ((undefined8 *)param_1[0x15] == (undefined8 *)0x0) {
              puVar14 = puVar10;
            }
            iVar17 = *(int *)((longlong)puVar14 +
                             (ulonglong)(*(int *)(param_1 + 0x16) - 1U & uVar26) * 4);
            if (iVar17 != -1) {
              lVar12 = *plVar7;
              do {
                lVar27 = (longlong)iVar17 * 0x20;
                local_160 = *(longlong *)(lVar12 + lVar27);
                local_148 = lVar34;
                cVar4 = FUN_14050eea6(&local_160,&local_148);
                lVar12 = *plVar7;
                if (cVar4 != '\0') {
                  if (lVar12 + lVar27 != 0) {
                    lVar27 = lVar27 + lVar12;
                    goto LAB_14050e84e;
                  }
                  break;
                }
                iVar17 = *(int *)(lVar12 + 0x18 + lVar27);
              } while (iVar17 != -1);
            }
            iVar17 = *(int *)((longlong)param_1 + 0x9c);
          }
          if (iVar17 == 0) {
            iVar33 = *(int *)(param_1 + 0xe);
            *(int *)(param_1 + 0xe) = iVar33 + 1;
            if (*(int *)((longlong)param_1 + 0x74) == iVar33) {
              FUN_1447711aa(plVar7,iVar33);
            }
            iVar17 = *(int *)(param_1 + 0x12);
            if (iVar17 == 0) {
              iVar29 = -1;
            }
            else {
              iVar29 = iVar17 + 0x1e;
              if (-1 < iVar17 + -1) {
                iVar29 = iVar17 + -1;
              }
              iVar29 = iVar29 >> 5;
            }
            iVar16 = iVar17 + 1;
            iVar21 = iVar17 + 0x1f;
            if (-1 < iVar17) {
              iVar21 = iVar17;
            }
            if (iVar21 >> 5 == iVar29) {
              *(int *)(param_1 + 0x12) = iVar16;
            }
            else {
              if (*(int *)((longlong)param_1 + 0x94) <= iVar17) {
                iVar29 = iVar17;
                if (iVar17 + 0x20U < 0xa0) {
                  iVar16 = 0x80;
                }
                else {
                  uVar24 = iVar17 + 0x20U >> 5;
                  if (*(int *)((longlong)param_1 + 0x94) + 0x1fU < 0xa0) {
                    uVar25 = 4;
                    if (4 < uVar24) {
                      uVar25 = uVar24;
                    }
                  }
                  else {
                    uVar25 = uVar24 + (uVar24 * 3 >> 3) + 0x10;
                  }
                  uVar32 = (ulonglong)(uVar25 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar5 = (uint)(uVar32 + 0xf);
                      if (uVar25 < 0x1ffd) {
                        uVar32 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar32 + 0xf >> 4]];
                      }
                      else {
                        uVar20 = (ulonglong)(uVar5 & 0xfffffff0);
                        if (uVar20 < 0x7ff1) {
                          bVar15 = (&DAT_14c841e00)[uVar5 >> 4];
                          uVar22 = 0x32;
                          if (0x32 < bVar15) {
                            uVar22 = (ulonglong)bVar15;
                          }
                          uVar31 = 0x32 - (ulonglong)bVar15;
                          do {
                            uVar32 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar31 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar31 & 0xffffffff] & 0xf) == 0)
                            goto LAB_14050ece2;
                            lVar12 = uVar22 + 1 + uVar31;
                            uVar31 = uVar31 - 1;
                          } while (lVar12 != 0x33);
                        }
                        uVar32 = 0x10;
                        if (0x10 < DAT_14c841df8) {
                          uVar32 = (ulonglong)DAT_14c841df8;
                        }
                        uVar32 = -uVar32 & (uVar20 + uVar32) - 1;
                      }
                    }
                    else {
                      uVar32 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar32,0);
                      iVar29 = *(int *)(param_1 + 0x12);
                    }
                  }
LAB_14050ece2:
                  iVar6 = (int)(uVar32 >> 2);
                  iVar16 = iVar6 << 5;
                  if (iVar6 < (int)uVar24) {
                    iVar16 = -0x20;
                  }
                }
                *(int *)((longlong)param_1 + 0x94) = iVar16;
                FUN_1446efbd8(puVar13,iVar29);
                iVar16 = *(int *)(param_1 + 0x12) + 1;
              }
              iVar29 = iVar16 + 0x1f;
              if (-1 < iVar16) {
                iVar29 = iVar16;
              }
              *(int *)(param_1 + 0x12) = iVar16;
              if (iVar16 % 0x20 != 0) {
                puVar18 = (uint *)param_1[0x11];
                if ((uint *)param_1[0x11] == (uint *)0x0) {
                  puVar18 = puVar13;
                }
                bVar15 = -(char)(iVar16 % 0x20);
                puVar18[iVar29 >> 5] = (puVar18[iVar29 >> 5] << (bVar15 & 0x1f)) >> (bVar15 & 0x1f);
              }
            }
            lVar12 = (longlong)iVar33;
            puVar18 = (uint *)param_1[0x11];
            if ((uint *)param_1[0x11] == (uint *)0x0) {
              puVar18 = puVar13;
            }
            bVar15 = (byte)iVar17 & 0x1f;
            puVar18[iVar21 >> 5] =
                 puVar18[iVar21 >> 5] & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
          }
          else {
            iVar33 = *(int *)(param_1 + 0x13);
            lVar12 = (longlong)iVar33;
            iVar29 = *(int *)(param_1[0xd] + 4 + lVar12 * 0x20);
            *(int *)(param_1 + 0x13) = iVar29;
            *(int *)((longlong)param_1 + 0x9c) = iVar17 + -1;
            if (iVar17 + -1 != 0) {
              *(undefined4 *)(param_1[0xd] + (longlong)iVar29 * 0x20) = 0xffffffff;
            }
          }
          plVar7 = local_1c8;
          uVar24 = 1 << ((byte)iVar33 & 0x1f);
          puVar18 = (uint *)param_1[0x11];
          if ((uint *)param_1[0x11] == (uint *)0x0) {
            puVar18 = puVar13;
          }
          iVar17 = iVar33 + 0x1f;
          if (-1 < iVar33) {
            iVar17 = iVar33;
          }
          puVar18[iVar17 >> 5] = puVar18[iVar17 >> 5] | uVar24;
          uVar25 = 1;
          lVar27 = param_1[0xd];
          lVar12 = lVar12 * 0x20;
          puVar30 = (undefined4 *)(lVar27 + lVar12);
          *(longlong *)(lVar27 + lVar12) = lVar34;
          puVar10 = (undefined8 *)(lVar27 + 8 + lVar12);
          *puVar10 = 0;
          puVar10[1] = 0;
          *(undefined4 *)(lVar27 + 0x18 + lVar12) = 0xffffffff;
          local_1b8 = (longlong)iVar33;
          if (*(int *)(param_1 + 0xe) - *(int *)((longlong)param_1 + 0x9c) == 1) {
            uVar24 = 1;
LAB_14050e3e0:
            puVar10 = local_1b0;
            plVar7 = local_1c8;
            if (((int)uVar24 < 1) || ((int)uVar25 <= *(int *)(param_1 + 0x16))) {
              uVar26 = *(int *)(param_1 + 0x16) - 1U & uVar26;
              puVar30[7] = uVar26;
              puVar14 = (undefined8 *)param_1[0x15];
              if ((undefined8 *)param_1[0x15] == (undefined8 *)0x0) {
                puVar14 = local_1b0;
              }
              puVar30[6] = *(undefined4 *)
                            ((longlong)puVar14 +
                            ((longlong)*(int *)(param_1 + 0x16) - 1U & (longlong)(int)uVar26) * 4);
              puVar14 = (undefined8 *)param_1[0x15];
              if ((undefined8 *)param_1[0x15] == (undefined8 *)0x0) {
                puVar14 = local_1b0;
              }
              *(int *)((longlong)puVar14 +
                      ((longlong)*(int *)(param_1 + 0x16) - 1U & (longlong)(int)uVar26) * 4) =
                   iVar33;
              puVar13 = local_1a8;
            }
            else {
              *(uint *)(param_1 + 0x16) = uVar25;
              if (param_1[0x15] != 0) {
                FUN_1446efa72(local_1c0,0,0,4);
                uVar25 = *(uint *)(param_1 + 0x16);
              }
              puVar13 = local_1a8;
              if (uVar25 != 0) {
                if (uVar25 == 1) {
                  if (*local_1c0 != 0) {
                    FUN_1446efa72(local_1c0,0,0,4);
                  }
LAB_14050e44b:
                  uVar26 = 0;
                  do {
                    puVar14 = (undefined8 *)param_1[0x15];
                    if ((undefined8 *)param_1[0x15] == (undefined8 *)0x0) {
                      puVar14 = puVar10;
                    }
                    *(undefined4 *)
                     ((longlong)puVar14 +
                     (ulonglong)(*(int *)(param_1 + 0x16) + 0x7fffffffU & uVar26) * 4) = 0xffffffff;
                    uVar26 = uVar26 + 1;
                  } while (uVar25 != uVar26);
                }
                else {
                  FUN_1446efa72(local_1c0,0,uVar25,4);
                  if (0 < (int)uVar25) goto LAB_14050e44b;
                }
                iVar17 = *(int *)(param_1 + 0x12);
                if (iVar17 == 0) {
                  uVar32 = 0;
                  uVar20 = 1;
                  iVar33 = 0;
                  iVar29 = 0;
                }
                else {
                  puVar18 = (uint *)param_1[0x11];
                  if ((uint *)param_1[0x11] == (uint *)0x0) {
                    puVar18 = puVar13;
                  }
                  uVar26 = *puVar18;
                  if (uVar26 == 0) {
                    iVar33 = iVar17 + 0x1e;
                    if (-1 < iVar17 + -1) {
                      iVar33 = iVar17 + -1;
                    }
                    uVar32 = 0;
                    uVar20 = (ulonglong)(uint)(iVar33 >> 5);
                    if (iVar33 >> 5 < 1) {
                      uVar20 = uVar32;
                    }
                    iVar29 = 0;
                    do {
                      if (uVar20 == uVar32) goto LAB_14050e831;
                      iVar29 = iVar29 + 0x20;
                      uVar26 = puVar18[uVar32 + 1];
                      uVar32 = uVar32 + 1;
                    } while (uVar26 == 0);
                  }
                  else {
                    uVar32 = 0;
                    iVar29 = 0;
                  }
                  uVar20 = (ulonglong)(-uVar26 & uVar26);
                  uVar22 = uVar20 * 2 + 1;
                  lVar34 = 0x3f;
                  if (uVar22 != 0) {
                    for (; uVar22 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                    }
                  }
                  iVar33 = (iVar29 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
                  if (iVar17 <= iVar33) {
                    iVar33 = iVar17;
                  }
                }
                if (iVar33 < iVar17) {
                  uVar26 = 0xffffffff;
                  do {
                    lVar34 = param_1[0xd];
                    lVar12 = (longlong)iVar33 * 0x20;
                    uVar22 = (longlong)
                             (int)((uint)((ulonglong)*(undefined8 *)(lVar34 + lVar12) >> 0x20) ^
                                  (uint)*(undefined8 *)(lVar34 + lVar12)) &
                             (longlong)*(int *)(param_1 + 0x16) - 1U;
                    iVar17 = (int)uVar22;
                    *(int *)(lVar34 + 0x1c + lVar12) = iVar17;
                    puVar14 = (undefined8 *)param_1[0x15];
                    if ((undefined8 *)param_1[0x15] == (undefined8 *)0x0) {
                      puVar14 = puVar10;
                    }
                    *(undefined4 *)(lVar34 + 0x18 + lVar12) =
                         *(undefined4 *)
                          ((longlong)puVar14 +
                          ((longlong)*(int *)(param_1 + 0x16) - 1U & uVar22) * 4);
                    puVar14 = (undefined8 *)param_1[0x15];
                    if ((undefined8 *)param_1[0x15] == (undefined8 *)0x0) {
                      puVar14 = puVar10;
                    }
                    *(int *)((longlong)puVar14 +
                            ((longlong)iVar17 & (longlong)*(int *)(param_1 + 0x16) - 1U) * 4) =
                         iVar33;
                    uVar26 = ~(uint)uVar20 & uVar26;
                    puVar18 = (uint *)param_1[0x11];
                    if ((uint *)param_1[0x11] == (uint *)0x0) {
                      puVar18 = puVar13;
                    }
                    iVar17 = *(int *)(param_1 + 0x12);
                    iVar33 = (int)uVar32;
                    lVar34 = (longlong)iVar33;
                    uVar24 = puVar18[lVar34] & uVar26;
                    if (uVar24 == 0) {
                      iVar16 = iVar17 + 0x1e;
                      if (-1 < iVar17 + -1) {
                        iVar16 = iVar17 + -1;
                      }
                      iVar16 = iVar16 >> 5;
                      iVar21 = iVar16;
                      if (iVar16 < iVar33) {
                        iVar21 = iVar33;
                      }
                      if (iVar16 <= iVar33) break;
                      lVar12 = 0;
                      while( true ) {
                        iVar29 = iVar29 + 0x20;
                        uVar24 = puVar18[lVar34 + lVar12 + 1];
                        if (uVar24 != 0) break;
                        lVar12 = lVar12 + 1;
                        if (iVar21 - lVar34 == lVar12) goto LAB_14050e831;
                      }
                      uVar32 = (ulonglong)(iVar33 + (int)lVar12 + 1);
                      uVar26 = 0xffffffff;
                    }
                    uVar20 = (ulonglong)(-uVar24 & uVar24);
                    uVar22 = uVar20 * 2 + 1;
                    lVar34 = 0x3f;
                    if (uVar22 != 0) {
                      for (; uVar22 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                      }
                    }
                    iVar33 = (iVar29 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
                  } while (iVar33 < iVar17);
                }
              }
            }
          }
          else {
            local_160 = lVar34;
            iVar29 = FUN_14050ef0e(local_1c8,uVar26,&local_160);
            if (iVar29 == -1) {
              uVar24 = *(int *)(param_1 + 0xe) - *(int *)((longlong)param_1 + 0x9c);
              if (3 < uVar24) {
                uVar32 = (ulonglong)(uVar24 & 0xfffffffe) + 0xf;
                lVar34 = 0x3f;
                if (uVar32 != 0) {
                  for (; uVar32 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                  }
                }
                uVar25 = 1 << ((byte)lVar34 & 0x1f);
              }
              goto LAB_14050e3e0;
            }
            lVar34 = *plVar7;
            if (*(longlong *)(lVar34 + 8 + (longlong)iVar29 * 0x20) != 0) {
              FUN_1400020a8();
            }
            puVar23 = (undefined4 *)(lVar34 + (longlong)iVar29 * 0x20);
            uVar19 = *puVar30;
            uVar1 = puVar30[1];
            uVar2 = puVar30[2];
            uVar3 = puVar30[3];
            *(undefined8 *)(puVar23 + 4) = *(undefined8 *)(puVar30 + 4);
            *puVar23 = uVar19;
            puVar23[1] = uVar1;
            puVar23[2] = uVar2;
            puVar23[3] = uVar3;
            lVar34 = param_1[0xd];
            if (*(int *)((longlong)param_1 + 0x9c) != 0) {
              *(int *)(lVar34 + (longlong)*(int *)(param_1 + 0x13) * 0x20) = iVar33;
            }
            *(undefined4 *)(lVar34 + local_1b8 * 0x20) = 0xffffffff;
            if (*(int *)((longlong)param_1 + 0x9c) < 1) {
              uVar19 = 0xffffffff;
            }
            else {
              uVar19 = *(undefined4 *)(param_1 + 0x13);
            }
            *(undefined4 *)(lVar34 + local_1b8 * 0x20 + 4) = uVar19;
            *(int *)(param_1 + 0x13) = iVar33;
            *(int *)((longlong)param_1 + 0x9c) = *(int *)((longlong)param_1 + 0x9c) + 1;
            puVar13 = (uint *)param_1[0x11];
            if ((uint *)param_1[0x11] == (uint *)0x0) {
              puVar13 = local_1a8;
            }
            puVar13[iVar17 >> 5] = puVar13[iVar17 >> 5] & ~uVar24;
            plVar7 = local_1c8;
            puVar10 = local_1b0;
            puVar13 = local_1a8;
          }
LAB_14050e831:
          lVar27 = *plVar7 + local_1b8 * 0x20;
LAB_14050e84e:
          iVar17 = *(int *)(lVar27 + 0x10);
          *(uint *)(lVar27 + 0x10) = iVar17 + 1U;
          if (*(uint *)(lVar27 + 0x14) < iVar17 + 1U) {
            FUN_14571ec12((longlong *)(lVar27 + 8),iVar17);
          }
          *(longlong **)(*(longlong *)(lVar27 + 8) + (longlong)iVar17 * 8) = local_188;
          piVar11 = *(int **)(local_1a0 + 0x10);
        } while ((piVar11 != (int *)0x0) && (piVar11 != local_190));
      }
      plVar9 = local_178 + 1;
    } while (plVar9 != local_180);
  }
  lVar34 = DAT_14cb71140;
  if ((local_a8 & 0x20) != 0) goto LAB_14050ebb1;
  if ((DAT_14cb71140 == 0) || (*(int *)(param_1 + 10) == 0)) {
    param_1[0xb] = 0;
    plVar7 = (longlong *)param_1[0xc];
    if (plVar7 == (longlong *)0x0) goto LAB_14050ebb1;
    plVar9 = (longlong *)0x0;
LAB_14050eba4:
    param_1[0xc] = plVar9;
    if (plVar7 == (longlong *)0x0) goto LAB_14050ebb1;
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_14050ebb1;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar11 = (int *)((longlong)plVar7 + 0xc);
    *piVar11 = *piVar11 + -1;
    iVar17 = *piVar11;
    UNLOCK();
    plVar9 = plVar7;
  }
  else {
    lVar12 = FUN_14050fd64();
    DAT_14cb71110 = DAT_14cb71110 + 1;
    local_158 = CONCAT44(DAT_14cb71110,DAT_14cb71118);
    local_160 = DAT_14cb71120;
    local_150 = 0;
    FUN_14050f74e(lVar12,&local_148,&local_160,0);
    if (local_148 == 0) {
      if (local_140 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_140 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_140)(local_140);
          LOCK();
          piVar11 = (int *)((longlong)local_140 + 0xc);
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (*piVar11 == 0) {
            (**(code **)(*local_140 + 0x10))(local_140);
          }
        }
      }
      lVar34 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      FUN_14050f264(local_148,*(undefined8 *)(lVar34 + 0x148));
      if (local_148 == 0) {
        local_170 = 0;
      }
      else {
        piVar11 = (int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                         0x1004);
        iVar17 = *piVar11;
        *piVar11 = iVar17 + 1;
        iVar33 = *(int *)(param_1 + 10);
        if ((longlong)iVar33 != 0) {
          lVar27 = param_1[9];
          lVar28 = 0;
          local_1b8 = lVar12;
          local_1a0 = piVar11;
          do {
            plVar7 = *(longlong **)(lVar27 + lVar28);
            if ((plVar7 != (longlong *)0x0) &&
               (cVar4 = (**(code **)(*plVar7 + 0x88))(plVar7,&local_148,local_198), cVar4 == '\0'))
            {
              puVar30 = (undefined4 *)plVar7[1];
              if (puVar30 == (undefined4 *)0x0) {
                puVar30 = &DAT_14c9485f0;
              }
              FUN_140067796(lVar34,local_148,puVar30);
            }
            lVar28 = lVar28 + 8;
          } while ((longlong)iVar33 * 8 != lVar28);
          iVar17 = *local_1a0 + -1;
          lVar12 = local_1b8;
          piVar11 = local_1a0;
        }
        *piVar11 = iVar17;
        local_170 = local_148;
      }
      local_168 = local_140;
      if (local_140 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_140 + 1) = (int)local_140[1] + 1;
        UNLOCK();
      }
      FUN_1407c8466(lVar12,&local_170);
      lVar34 = local_148;
      plVar9 = local_140;
    }
    param_1[0xb] = lVar34;
    plVar7 = (longlong *)param_1[0xc];
    if (plVar9 != plVar7) goto LAB_14050eba4;
    if (plVar9 == (longlong *)0x0) goto LAB_14050ebb1;
    LOCK();
    plVar7 = plVar9 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_14050ebb1;
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar11 = (int *)((longlong)plVar9 + 0xc);
    *piVar11 = *piVar11 + -1;
    iVar17 = *piVar11;
    UNLOCK();
  }
  if (iVar17 == 0) {
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
LAB_14050ebb1:
  FUN_14050f14e(local_138);
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14050eea6 FUN_14050eea6 body=104 status=ok
// SIG undefined FUN_14050eea6(void)

ulonglong FUN_14050eea6(uint *param_1,uint *param_2)

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



// FUNCTION 14050ef0e FUN_14050ef0e body=180 status=ok
// SIG undefined FUN_14050ef0e(void)

int FUN_14050ef0e(longlong *param_1,uint param_2,undefined8 *param_3)

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
        cVar1 = FUN_140109b12(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_14050ef9c;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14050ef9c:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050efc4 FUN_14050efc4 body=199 status=ok
// SIG undefined FUN_14050efc4(void)

undefined8 FUN_14050efc4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x30);
  if (lVar1 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0x50);
    local_78 = &local_48;
    local_40 = *(undefined4 *)(param_1 + 0x58);
    local_58 = *(undefined4 *)(param_1 + 0x40);
    uStack_54 = *(undefined4 *)(param_1 + 0x44);
    uStack_50 = *(undefined4 *)(param_1 + 0x48);
    uStack_4c = *(undefined4 *)(param_1 + 0x4c);
  }
  else {
    local_78 = &local_28;
    local_28 = 0;
    local_20 = 0;
    local_38 = *(undefined8 *)(lVar1 + 0x28);
    local_30 = *(undefined4 *)(lVar1 + 0x30);
  }
  FUN_14050f2f6(param_2,param_1,*(undefined1 *)(param_1 + 0x70));
  local_68 = *(undefined4 *)(param_1 + 0x60);
  uStack_64 = *(undefined4 *)(param_1 + 100);
  uStack_60 = *(undefined4 *)(param_1 + 0x68);
  uStack_5c = *(undefined4 *)(param_1 + 0x6c);
  FUN_14050f08c(param_2);
  FUN_14050f50c(param_2);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050f08c FUN_14050f08c body=193 status=ok
// SIG undefined FUN_14050f08c(void)

void FUN_14050f08c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    plVar6 = (longlong *)*param_2;
    lVar7 = (longlong)*(int *)(param_2 + 1) * 0x18;
    do {
      lVar4 = plVar6[1];
      if (lVar4 == 0) {
        uVar3 = FUN_140c1c194();
        lVar4 = FUN_14477b664(uVar3);
        plVar6[1] = lVar4;
      }
      lVar5 = plVar6[2];
      if (lVar5 == 0) {
        if (lVar4 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = 0;
          if (*plVar6 != 0) {
            plVar1 = *(longlong **)(lVar4 + 0xb8);
            if ((plVar1 == (longlong *)0x0) ||
               (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
              lVar5 = 0;
            }
            else {
              uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar5 = FUN_144aff482(uVar3,plVar6);
            }
            plVar6[2] = lVar5;
          }
        }
      }
      FUN_14094eece(param_1,lVar5);
      plVar6 = plVar6 + 3;
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 14050f14e FUN_14050f14e body=278 status=ok
// SIG undefined FUN_14050f14e(void)

void FUN_14050f14e(char *param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  
  FUN_143c99261(*(undefined8 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0));
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  FUN_14050d869(*(undefined8 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0));
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_14028f404(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xa0));
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_141865954(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_1448173f8(param_1 + 0x28);
  cVar2 = *param_1;
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
    }
    else if ((cVar2 == '\x03') &&
            (plVar3 = *(longlong **)(param_1 + 0x10), plVar3 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *param_1 = '\0';
  }
  return;
}



// FUNCTION 14050f264 FUN_14050f264 body=145 status=ok
// SIG undefined FUN_14050f264(void)

void FUN_14050f264(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0xb8) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
    *(int *)(param_1 + 0xbc) = iVar2;
  }
  return;
}



// FUNCTION 14050f2f6 FUN_14050f2f6 body=533 status=ok
// SIG undefined FUN_14050f2f6(void)

char * FUN_14050f2f6(char *param_1,char *param_2,char param_3,undefined4 *param_4,
                    undefined8 *param_5)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  
  *param_1 = '\0';
  cVar1 = *param_2;
  *param_1 = cVar1;
  pcVar3 = param_2;
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      goto LAB_14050f3bc;
    }
    if (cVar1 != '\x03') goto LAB_14050f3bc;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    lVar10 = *(longlong *)(param_2 + 0x10);
    *(longlong *)(param_1 + 0x10) = lVar10;
    if (lVar10 == 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      param_1[0x20] = param_2[0x20];
      goto LAB_14050f3bc;
    }
    LOCK();
    *(int *)(lVar10 + 0xc) = *(int *)(lVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    param_1[0x20] = param_2[0x20];
    pcVar3 = param_1;
    if (*param_1 != '\x01') goto LAB_14050f3bc;
  }
  lVar10 = *(longlong *)(pcVar3 + 8);
  *param_1 = '\x02';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  if (lVar10 == 0) {
    iVar7 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar10 + 0xc);
    *(uint *)(param_1 + 8) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar7 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar7 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar7 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar9;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar7 = iVar9;
      }
    }
  }
  *(int *)(param_1 + 0xc) = iVar7;
LAB_14050f3bc:
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar8 = FUN_1448174c4(param_1 + 0x28);
    FUN_1400e08b0(uVar8,DAT_14c9a3da0 + (longlong)*(int *)(param_2 + 0x28) * 0x10 + -0x10);
  }
  param_1[0x80] = '\0';
  param_1[0x81] = '\0';
  param_1[0x82] = '\0';
  param_1[0x83] = '\0';
  param_1[0x84] = '\0';
  param_1[0x85] = '\0';
  param_1[0x86] = '\0';
  param_1[0x87] = '\0';
  param_1[0x88] = '\0';
  param_1[0x89] = '\0';
  param_1[0x8a] = '\0';
  param_1[0x8b] = '\0';
  param_1[0x8c] = '\0';
  param_1[0x8d] = '\0';
  param_1[0x8e] = '\0';
  param_1[0x8f] = '\0';
  param_1[0x70] = '\0';
  param_1[0x71] = '\0';
  param_1[0x72] = '\0';
  param_1[0x73] = '\0';
  param_1[0x74] = '\0';
  param_1[0x75] = '\0';
  param_1[0x76] = '\0';
  param_1[0x77] = '\0';
  param_1[0x78] = '\0';
  param_1[0x79] = '\0';
  param_1[0x7a] = '\0';
  param_1[0x7b] = '\0';
  param_1[0x7c] = '\0';
  param_1[0x7d] = '\0';
  param_1[0x7e] = '\0';
  param_1[0x7f] = '\0';
  param_1[0x60] = '\0';
  param_1[0x61] = '\0';
  param_1[0x62] = '\0';
  param_1[99] = '\0';
  param_1[100] = '\0';
  param_1[0x65] = '\0';
  param_1[0x66] = '\0';
  param_1[0x67] = '\0';
  param_1[0x68] = '\0';
  param_1[0x69] = '\0';
  param_1[0x6a] = '\0';
  param_1[0x6b] = '\0';
  param_1[0x6c] = '\0';
  param_1[0x6d] = '\0';
  param_1[0x6e] = '\0';
  param_1[0x6f] = '\0';
  param_1[0x50] = '\0';
  param_1[0x51] = '\0';
  param_1[0x52] = '\0';
  param_1[0x53] = '\0';
  param_1[0x54] = '\0';
  param_1[0x55] = '\0';
  param_1[0x56] = '\0';
  param_1[0x57] = '\0';
  param_1[0x58] = '\0';
  param_1[0x59] = '\0';
  param_1[0x5a] = '\0';
  param_1[0x5b] = '\0';
  param_1[0x5c] = '\0';
  param_1[0x5d] = '\0';
  param_1[0x5e] = '\0';
  param_1[0x5f] = '\0';
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  param_1[0x44] = '\0';
  param_1[0x45] = '\0';
  param_1[0x46] = '\0';
  param_1[0x47] = '\0';
  param_1[0x48] = '\0';
  param_1[0x49] = '\0';
  param_1[0x4a] = '\0';
  param_1[0x4b] = '\0';
  param_1[0x4c] = '\0';
  param_1[0x4d] = '\0';
  param_1[0x4e] = '\0';
  param_1[0x4f] = '\0';
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  param_1[0x34] = '\0';
  param_1[0x35] = '\0';
  param_1[0x36] = '\0';
  param_1[0x37] = '\0';
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x90] = param_3;
  param_1[0x98] = '\0';
  param_1[0x99] = '\0';
  param_1[0x9a] = '\0';
  param_1[0x9b] = '\0';
  param_1[0x9c] = '\0';
  param_1[0x9d] = '\0';
  param_1[0x9e] = '\0';
  param_1[0x9f] = '\0';
  param_1[0xa0] = '\0';
  param_1[0xa1] = '\0';
  param_1[0xa2] = '\0';
  param_1[0xa3] = '\0';
  param_1[0xa4] = '\0';
  param_1[0xa5] = '\0';
  param_1[0xa6] = '\0';
  param_1[0xa7] = '\0';
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  *(undefined4 *)(param_1 + 0xa8) = *param_4;
  *(undefined4 *)(param_1 + 0xac) = uVar4;
  *(undefined4 *)(param_1 + 0xb0) = uVar5;
  *(undefined4 *)(param_1 + 0xb4) = uVar6;
  param_1[0xb8] = '\0';
  param_1[0xb9] = '\0';
  param_1[0xba] = '\0';
  param_1[0xbb] = '\0';
  param_1[0xbc] = '\0';
  param_1[0xbd] = '\0';
  param_1[0xbe] = '\0';
  param_1[0xbf] = '\0';
  iVar7 = *(int *)(param_5 + 1);
  uVar8 = *param_5;
  *(int *)(param_1 + 0xc0) = iVar7;
  if (iVar7 == 0) {
    param_1[0xc4] = '\0';
    param_1[0xc5] = '\0';
    param_1[0xc6] = '\0';
    param_1[199] = '\0';
  }
  else {
    FUN_14050dc9a(param_1 + 0xb8,iVar7,0);
    FUN_14050dbeb(*(undefined8 *)(param_1 + 0xb8),uVar8,iVar7);
  }
  param_1[200] = '\0';
  param_1[0xc9] = '\0';
  param_1[0xca] = '\0';
  param_1[0xcb] = '\0';
  param_1[0xcc] = '\0';
  param_1[0xcd] = '\0';
  param_1[0xce] = '\0';
  param_1[0xcf] = '\0';
  param_1[0xd0] = '\0';
  param_1[0xd1] = '\0';
  param_1[0xd2] = '\0';
  param_1[0xd3] = '\0';
  param_1[0xd4] = '\0';
  param_1[0xd5] = '\0';
  param_1[0xd6] = '\0';
  param_1[0xd7] = '\0';
  return param_1;
}



// FUNCTION 14050f50c FUN_14050f50c body=577 status=ok
// SIG undefined FUN_14050f50c(void)

void FUN_14050f50c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x68) == 0) {
LAB_14050f536:
    if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x60);
  uVar8 = 0;
LAB_14050f56f:
  if ((int)uVar8 != 5) {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    if ((longlong)*(int *)(param_1 + 0x38) != 0) {
      plVar10 = *(longlong **)(param_1 + 0x30);
      plVar6 = plVar10 + (longlong)*(int *)(param_1 + 0x38) * 10;
      local_90 = uVar8;
LAB_14050f59f:
      if (((longlong *)*plVar10 != (longlong *)0x0) && ((char)plVar10[1] == '\x01')) {
        if ((longlong)*(int *)(param_1 + 0x68) != 0) {
          plVar5 = (longlong *)*plVar1;
          plVar2 = plVar5 + *(int *)(param_1 + 0x68);
          iVar7 = (int)plVar10[3];
          plVar9 = plVar5;
          do {
            if (iVar7 != 0) {
              lVar11 = 0;
              do {
                if (*(longlong *)(plVar10[2] + lVar11) == *plVar9) goto LAB_14050f675;
                lVar11 = lVar11 + 8;
              } while ((longlong)iVar7 * 8 - lVar11 != 0);
            }
            if ((longlong)(int)plVar10[5] != 0) {
              lVar11 = 0;
              do {
                if (*(longlong *)(plVar10[4] + lVar11) == *plVar9) goto LAB_14050f675;
                lVar11 = lVar11 + 8;
              } while ((longlong)(int)plVar10[5] * 8 != lVar11);
            }
            plVar9 = plVar9 + 1;
          } while (plVar9 != plVar2);
        }
        lVar11 = (**(code **)(*(longlong *)*plVar10 + 8))();
        lVar4 = FUN_14094f534();
        if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar11 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          FUN_14094f414(&local_88,plVar10 + 6);
        }
      }
      goto LAB_14050f666;
    }
    if (*(int *)(param_1 + 0x68) == 0) goto LAB_14050f704;
    goto LAB_14050f734;
  }
  goto LAB_14050f536;
  while (plVar5 = plVar5 + 1, plVar5 != plVar2) {
LAB_14050f675:
    if (iVar7 != 0) {
      lVar11 = 0;
      do {
        if (*(longlong *)(plVar10[2] + lVar11) == *plVar5) goto LAB_14050f666;
        lVar11 = lVar11 + 8;
      } while ((longlong)iVar7 * 8 - lVar11 != 0);
    }
    if ((longlong)(int)plVar10[5] != 0) {
      lVar11 = 0;
      do {
        if (*(longlong *)(plVar10[4] + lVar11) == *plVar5) goto LAB_14050f666;
        lVar11 = lVar11 + 8;
      } while ((longlong)(int)plVar10[5] * 8 != lVar11);
    }
  }
LAB_14050f666:
  plVar10 = plVar10 + 10;
  if (plVar10 == plVar6) goto LAB_14050f6c1;
  goto LAB_14050f59f;
LAB_14050f6c1:
  uVar8 = local_90;
  if ((int)uStack_80 == *(int *)(param_1 + 0x68)) {
    if ((int)uStack_80 != 0) {
      plVar6 = (longlong *)*plVar1;
      plVar10 = plVar6 + (int)uStack_80;
      do {
        lVar11 = 0;
        while (*(longlong *)(local_88 + lVar11) != *plVar6) {
          lVar11 = lVar11 + 8;
          if ((longlong)(int)uStack_80 * 8 == lVar11) goto LAB_14050f734;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar10);
    }
LAB_14050f704:
    iVar7 = (int)uVar8;
    bVar3 = false;
  }
  else {
LAB_14050f734:
    iVar7 = (int)uVar8;
    FUN_1403de7ba(plVar1,&local_88);
    bVar3 = true;
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  uVar8 = (ulonglong)(iVar7 + 1);
  if (!bVar3) goto LAB_14050f536;
  goto LAB_14050f56f;
}



// FUNCTION 14050f74e FUN_14050f74e body=657 status=ok
// SIG undefined FUN_14050f74e(void)

longlong *
FUN_14050f74e(longlong param_1,longlong *param_2,longlong *****param_3,undefined4 param_4)

{
  longlong *****ppppplVar1;
  int *piVar2;
  int iVar3;
  longlong ****pppplVar4;
  longlong ****pppplVar5;
  int iVar6;
  longlong *****ppppplVar7;
  longlong *****ppppplVar8;
  bool bVar9;
  undefined1 auStack_98 [40];
  longlong ****local_70;
  longlong ****local_68;
  longlong ****local_60;
  longlong ****local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140520a5e(param_1,&local_60);
  local_70 = (longlong ****)0x0;
  local_68 = local_58;
  if ((longlong *****)local_58 == (longlong *****)0x0) {
    ppppplVar8 = (longlong *****)0x0;
  }
  else {
    iVar6 = *(int *)(local_58 + 1);
    do {
      if (iVar6 == 0) {
        local_68 = (longlong ****)0x0;
        break;
      }
      LOCK();
      iVar3 = *(int *)(local_58 + 1);
      bVar9 = iVar6 == iVar3;
      if (bVar9) {
        *(int *)(local_58 + 1) = iVar6 + 1;
        iVar3 = iVar6;
      }
      iVar6 = iVar3;
      UNLOCK();
    } while (!bVar9);
    LOCK();
    piVar2 = (int *)((longlong)local_58 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (*(code *)(*local_58)[2])();
    }
    if ((longlong *****)local_68 != (longlong *****)0x0) {
      local_70 = local_60;
    }
    ppppplVar8 = (longlong *****)local_68;
    if ((longlong *****)local_70 != (longlong *****)0x0) goto LAB_14050f88c;
  }
  ppppplVar7 = (longlong *****)FUN_14001cc68(0x188,0x10);
  ppppplVar7[1] = (longlong ****)&DAT_100000001;
  *ppppplVar7 = (longlong ****)&PTR_FUN_14a1c73b0;
  ppppplVar1 = ppppplVar7 + 2;
  FUN_14050fa82(ppppplVar1,param_3,param_4);
  local_60 = (longlong ****)ppppplVar1;
  local_58 = (longlong ****)ppppplVar7;
  FUN_14050f9e0(&local_60,ppppplVar1);
  pppplVar5 = local_58;
  pppplVar4 = local_68;
  local_70 = local_60;
  if ((longlong *****)local_58 == (longlong *****)0x0) {
    if (ppppplVar8 != (longlong *****)0x0) {
      local_68 = (longlong ****)0x0;
LAB_14050f90d:
      LOCK();
      ppppplVar1 = ppppplVar8 + 1;
      *(int *)ppppplVar1 = *(int *)ppppplVar1 + -1;
      UNLOCK();
      if (*(int *)ppppplVar1 == 0) {
        (*(code *)**ppppplVar8)(ppppplVar8);
        LOCK();
        piVar2 = (int *)((longlong)ppppplVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar6 = *piVar2;
        UNLOCK();
joined_r0x00014050f948:
        if (iVar6 == 0) {
          (*(code *)(*ppppplVar8)[2])(ppppplVar8);
        }
      }
      goto LAB_14050f82f;
    }
  }
  else {
    LOCK();
    *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
    UNLOCK();
    if (local_58 == local_68) {
      LOCK();
      ppppplVar8 = (longlong *****)(local_58 + 1);
      *(int *)ppppplVar8 = *(int *)ppppplVar8 + -1;
      UNLOCK();
      if (*(int *)ppppplVar8 == 0) {
        (*(code *)**local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)pppplVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar6 = *piVar2;
        UNLOCK();
        ppppplVar8 = (longlong *****)pppplVar5;
        goto joined_r0x00014050f948;
      }
    }
    else {
      local_68 = local_58;
      ppppplVar8 = (longlong *****)pppplVar4;
      if ((longlong *****)pppplVar4 != (longlong *****)0x0) goto LAB_14050f90d;
    }
LAB_14050f82f:
    pppplVar4 = local_58;
    if ((longlong *****)local_58 != (longlong *****)0x0) {
      LOCK();
      ppppplVar8 = (longlong *****)(local_58 + 1);
      *(int *)ppppplVar8 = *(int *)ppppplVar8 + -1;
      UNLOCK();
      if (*(int *)ppppplVar8 == 0) {
        (*(code *)**local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)pppplVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppplVar4)[2])(pppplVar4);
        }
      }
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x4e0));
  local_58 = (longlong ****)&local_70;
  local_60 = (longlong ****)param_3;
  FUN_14050fda8(param_1 + 0x4e8,local_4c,&local_60,0);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x4e0));
LAB_14050f88c:
  pppplVar4 = local_68;
  *param_2 = (longlong)local_70;
  param_2[1] = (longlong)local_68;
  if ((longlong *****)local_68 != (longlong *****)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
    UNLOCK();
    if ((longlong *****)local_68 != (longlong *****)0x0) {
      LOCK();
      ppppplVar8 = (longlong *****)(local_68 + 1);
      *(int *)ppppplVar8 = *(int *)ppppplVar8 + -1;
      UNLOCK();
      if (*(int *)ppppplVar8 == 0) {
        (*(code *)**local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)pppplVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppplVar4)[2])(pppplVar4);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14050f9e0 FUN_14050f9e0 body=162 status=ok
// SIG undefined FUN_14050f9e0(void)

void FUN_14050f9e0(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14050fa1f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14050fa1f;
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
LAB_14050fa1f:
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
                    /* WARNING: Could not recover jumptable at 0x00014050fa7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14050fa82 FUN_14050fa82 body=182 status=ok
// SIG undefined FUN_14050fa82(void)

undefined8 * FUN_14050fa82(undefined8 *param_1)

{
  FUN_14050fb38();
  *param_1 = &PTR_FUN_14a1780a0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x174) = 1;
  return param_1;
}



// FUNCTION 14050fb38 FUN_14050fb38 body=554 status=ok
// SIG undefined FUN_14050fb38(void)

undefined8 * FUN_14050fb38(undefined8 *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_888 [40];
  undefined8 local_860;
  wchar_t *local_858;
  wchar_t *local_850;
  undefined1 *local_848;
  char local_840;
  wchar_t local_838 [1035];
  undefined1 local_22 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_888;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14a178070;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(param_1 + 3) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  param_1[5] = *(undefined8 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 2;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x16] = 2;
  local_858 = local_838;
  local_840 = '\0';
  local_848 = local_22;
  builtin_wcsncpy(local_838,L"GbxStreamingObject_",0x13);
  local_850 = local_838 + 0x13;
  FUN_14005eb5c(param_2,&local_858);
  if (*(longlong *)(param_2 + 4) != 0) {
    FUN_14005eb5c(param_2 + 4,&local_858);
  }
  uVar2 = *(undefined8 *)(param_2 + 2);
  *local_850 = L'\0';
  FUN_1446f470e(&local_860,local_858,1);
  param_1[9] = local_860;
  param_1[10] = uVar2;
  lVar7 = FUN_14050fd64();
  if (lVar7 == 0) {
    *(undefined4 *)(param_1 + 0xe) = 0;
    iVar6 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar7 + 0xc);
    *(uint *)(param_1 + 0xe) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar6 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar6 = *(int *)(lVar7 + 0x10);
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(lVar7 + 0x10) = iVar8;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar6 = iVar8;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x74) = iVar6;
  iVar6 = *(int *)(param_1 + 8);
  *(uint *)(param_1 + 8) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0x44) < iVar6 + 1U) {
    FUN_1446f84a2(param_1 + 7,iVar6);
  }
  *(undefined8 *)(param_1[7] + (longlong)iVar6 * 8) = DAT_14caddf80;
  if (local_840 == '\x01') {
    FUN_1400020a8(local_858);
  }
  if ((local_20 ^ (ulonglong)auStack_888) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14050fd64 FUN_14050fd64 body=68 status=ok
// SIG undefined FUN_14050fd64(void)

void FUN_14050fd64(void)

{
  if (*(longlong *)(DAT_14cb0d2b0 + 0x360) != 0) {
    return;
  }
  FUN_140033559(".\\Runtime/Engine/Private/AssetManager.cpp",0x1e5,
                L"Cannot use AssetManager if no AssetManagerClassName is defined!");
  FUN_14795019f(DAT_14c951640);
  return;
}



// FUNCTION 14050fda8 FUN_14050fda8 body=1016 status=ok
// SIG undefined FUN_14050fda8(void)

undefined4 *
FUN_14050fda8(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58 [2];
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140510246(param_1,local_58);
  puVar1 = (uint *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *(undefined8 *)(local_50 + 4) = *(undefined8 *)(puVar1 + 4);
  uVar5 = puVar1[1];
  uVar13 = puVar1[2];
  uVar9 = puVar1[3];
  *local_50 = *puVar1;
  local_50[1] = uVar5;
  local_50[2] = uVar13;
  local_50[3] = uVar9;
  *(undefined8 *)(local_50 + 6) = *puVar2;
  lVar7 = puVar2[1];
  *(longlong *)(local_50 + 8) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 0xc) = *(int *)(lVar7 + 0xc) + 1;
    UNLOCK();
  }
  local_50[10] = 0xffffffff;
  local_5c = local_58[0];
  uVar5 = *local_50;
  uVar13 = local_50[2];
  uVar9 = local_50[3];
  uVar11 = local_50[4];
  uVar8 = local_50[5];
  uVar11 = uVar8 >> 0xd ^
           ((uVar11 << 0x10 | uVar11 & 0xffff) - uVar8) +
           ((uVar11 >> 0x10) << 0x13 | uVar11 >> 0x10) + ((uVar11 & 0xffff) >> 4);
  uVar10 = uVar11 << 8 ^ (-0x61c88647 - uVar8) - uVar11;
  uVar8 = uVar10 >> 0xd ^ (uVar8 - uVar11) - uVar10;
  uVar11 = uVar8 >> 0xc ^ (uVar11 - uVar10) - uVar8;
  uVar12 = uVar11 << 0x10 ^ (uVar10 - uVar8) - uVar11;
  uVar10 = uVar12 >> 5 ^ (uVar8 - uVar11) - uVar12;
  uVar8 = uVar10 >> 3 ^ (uVar11 - uVar12) - uVar10;
  uVar11 = uVar8 << 10 ^ (uVar12 - uVar10) - uVar8;
  uVar11 = uVar11 >> 0xf ^ uVar10 - (uVar8 + uVar11);
  uVar13 = uVar9 >> 0xd ^
           ((uVar13 << 0x10 | uVar13 & 0xffff) - uVar9) +
           ((uVar13 >> 0x10) << 0x13 | uVar13 >> 0x10) + ((uVar13 & 0xffff) >> 4);
  uVar8 = uVar13 << 8 ^ (-0x61c88647 - uVar9) - uVar13;
  uVar9 = uVar8 >> 0xd ^ (uVar9 - uVar13) - uVar8;
  uVar13 = uVar9 >> 0xc ^ (uVar13 - uVar8) - uVar9;
  uVar10 = uVar13 << 0x10 ^ (uVar8 - uVar9) - uVar13;
  uVar9 = uVar10 >> 5 ^ (uVar9 - uVar13) - uVar10;
  uVar8 = uVar9 >> 3 ^ (uVar13 - uVar10) - uVar9;
  uVar13 = uVar8 << 10 ^ (uVar10 - uVar9) - uVar8;
  uVar9 = uVar13 >> 0xf ^ uVar9 - (uVar8 + uVar13);
  uVar13 = uVar9 >> 0xd ^
           ((uVar5 << 0x10 | uVar5 & 0xffff) + ((uVar5 & 0xffff) >> 4) +
           ((uVar5 >> 0x10) << 0x13 | uVar5 >> 0x10)) - uVar9;
  uVar5 = uVar13 << 8 ^ (-0x61c88647 - uVar9) - uVar13;
  uVar8 = uVar5 >> 0xd ^ (uVar9 - uVar13) - uVar5;
  uVar9 = uVar8 >> 0xc ^ (uVar13 - uVar5) - uVar8;
  uVar13 = uVar9 << 0x10 ^ (uVar5 - uVar8) - uVar9;
  uVar5 = uVar13 >> 5 ^ (uVar8 - uVar9) - uVar13;
  uVar9 = uVar5 >> 3 ^ (uVar9 - uVar13) - uVar5;
  uVar13 = uVar9 << 10 ^ (uVar13 - uVar5) - uVar9;
  uVar13 = uVar11 >> 0xd ^ (uVar13 >> 0xf ^ uVar5 - (uVar9 + uVar13)) - uVar11;
  uVar9 = uVar13 << 8 ^ (-0x61c88647 - uVar11) - uVar13;
  uVar5 = uVar9 >> 0xd ^ (uVar11 - uVar13) - uVar9;
  uVar13 = uVar5 >> 0xc ^ (uVar13 - uVar9) - uVar5;
  uVar9 = uVar13 << 0x10 ^ (uVar9 - uVar5) - uVar13;
  uVar11 = uVar9 >> 5 ^ (uVar5 - uVar13) - uVar9;
  uVar5 = uVar11 >> 3 ^ (uVar13 - uVar9) - uVar11;
  uVar13 = uVar5 << 10 ^ (uVar9 - uVar11) - uVar5;
  uVar5 = uVar13 >> 0xf ^ uVar11 - (uVar5 + uVar13);
  local_68 = param_4;
  cVar3 = FUN_1405101a2(param_1,uVar5,local_50);
  if (cVar3 == '\0') {
    uVar13 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar13 < 4) {
      iVar6 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar13 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_50[0xb] = uVar5;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_50[10] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_5c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140510424(param_1);
    }
  }
  *param_2 = local_5c;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405101a2 FUN_1405101a2 body=163 status=ok
// SIG undefined FUN_1405101a2(void)

void FUN_1405101a2(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 uVar12;
  int iVar13;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar13 = FUN_140520da6();
    if (iVar13 != -1) {
      puVar2 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x30);
      plVar3 = *(longlong **)(*param_1 + 0x20 + (longlong)iVar13 * 0x30);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      uVar4 = *param_3;
      uVar5 = param_3[1];
      uVar6 = param_3[2];
      uVar7 = param_3[3];
      uVar8 = param_3[4];
      uVar9 = param_3[5];
      uVar10 = param_3[6];
      uVar11 = param_3[7];
      *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(param_3 + 8);
      puVar2[4] = uVar8;
      puVar2[5] = uVar9;
      puVar2[6] = uVar10;
      puVar2[7] = uVar11;
      *puVar2 = uVar4;
      puVar2[1] = uVar5;
      puVar2[2] = uVar6;
      puVar2[3] = uVar7;
      FUN_1401a5e02(param_1,*param_4,1);
      *param_4 = iVar13;
      uVar12 = 1;
      goto LAB_1405101d6;
    }
  }
  uVar12 = 0;
LAB_1405101d6:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar12;
  }
  return;
}



// FUNCTION 140510246 FUN_140510246 body=478 status=ok
// SIG undefined FUN_140510246(void)

int * FUN_140510246(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
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
      FUN_140044672(param_1,iVar11);
    }
    iVar5 = (int)param_1[5];
    if (iVar5 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar8 = iVar5 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar7 = iVar5 + 1;
    iVar12 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar12 = iVar5;
    }
    if (iVar12 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar5) {
        if (iVar5 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar8 = iVar5;
        }
        else {
          uVar13 = iVar5 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar13) {
              uVar6 = uVar13;
            }
          }
          else {
            uVar6 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar6 << 2,0);
          iVar8 = (int)(uVar3 >> 2);
          iVar7 = -0x20;
          if ((int)uVar13 <= iVar8) {
            iVar7 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar9,iVar8);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar8 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar5 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x30);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x30) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar5 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar5 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 140510424 FUN_140510424 body=1290 status=ok
// SIG undefined FUN_140510424(void)

void FUN_140510424(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [36];
  int local_74;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar9,4);
    if (0 < (int)uVar9) {
      uVar3 = 0;
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar9 != uVar3);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar12 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_70 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      local_70 = local_68 & 0xffffffff;
      uVar12 = local_68 >> 0x20;
    }
    uVar9 = (uint)local_58;
    iVar16 = local_58._4_4_;
    iVar8 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_74 = iVar8;
        lVar7 = *param_1;
        lVar6 = (longlong)iVar16 * 0x30;
        uVar3 = *(uint *)(lVar7 + 8 + lVar6);
        uVar4 = *(uint *)(lVar7 + 0x10 + lVar6);
        uVar14 = *(uint *)(lVar7 + 0x14 + lVar6);
        uVar4 = uVar14 >> 0xd ^
                ((uVar4 << 0x10 | uVar4 & 0xffff) - uVar14) +
                ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4);
        uVar13 = uVar4 << 8 ^ (-0x61c88647 - uVar14) - uVar4;
        uVar14 = uVar13 >> 0xd ^ (uVar14 - uVar4) - uVar13;
        uVar15 = uVar14 >> 0xc ^ (uVar4 - uVar13) - uVar14;
        uVar4 = uVar15 << 0x10 ^ (uVar13 - uVar14) - uVar15;
        uVar14 = uVar4 >> 5 ^ (uVar14 - uVar15) - uVar4;
        uVar13 = uVar14 >> 3 ^ (uVar15 - uVar4) - uVar14;
        uVar15 = uVar13 << 10 ^ (uVar4 - uVar14) - uVar13;
        uVar4 = *(uint *)(lVar7 + 0xc + lVar6);
        uVar13 = uVar15 >> 0xf ^ uVar14 - (uVar13 + uVar15);
        uVar3 = uVar4 >> 0xd ^
                ((uVar3 << 0x10 | uVar3 & 0xffff) - uVar4) +
                ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4);
        uVar14 = uVar3 << 8 ^ (-0x61c88647 - uVar4) - uVar3;
        uVar15 = uVar14 >> 0xd ^ (uVar4 - uVar3) - uVar14;
        uVar4 = uVar15 >> 0xc ^ (uVar3 - uVar14) - uVar15;
        uVar3 = uVar4 << 0x10 ^ (uVar14 - uVar15) - uVar4;
        uVar14 = uVar3 >> 5 ^ (uVar15 - uVar4) - uVar3;
        uVar4 = uVar14 >> 3 ^ (uVar4 - uVar3) - uVar14;
        uVar15 = uVar4 << 10 ^ (uVar3 - uVar14) - uVar4;
        uVar3 = *(uint *)(lVar7 + lVar6);
        uVar4 = uVar15 >> 0xf ^ uVar14 - (uVar4 + uVar15);
        uVar3 = uVar4 >> 0xd ^
                ((uVar3 << 0x10 | uVar3 & 0xffff) + ((uVar3 & 0xffff) >> 4) +
                ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10)) - uVar4;
        uVar14 = uVar3 << 8 ^ (-0x61c88647 - uVar4) - uVar3;
        uVar4 = uVar14 >> 0xd ^ (uVar4 - uVar3) - uVar14;
        uVar15 = uVar4 >> 0xc ^ (uVar3 - uVar14) - uVar4;
        uVar3 = uVar15 << 0x10 ^ (uVar14 - uVar4) - uVar15;
        uVar14 = uVar3 >> 5 ^ (uVar4 - uVar15) - uVar3;
        uVar4 = uVar14 >> 3 ^ (uVar15 - uVar3) - uVar14;
        uVar3 = uVar4 << 10 ^ (uVar3 - uVar14) - uVar4;
        uVar3 = uVar13 >> 0xd ^ (uVar3 >> 0xf ^ uVar14 - (uVar4 + uVar3)) - uVar13;
        uVar4 = uVar3 << 8 ^ (-0x61c88647 - uVar13) - uVar3;
        uVar13 = uVar4 >> 0xd ^ (uVar13 - uVar3) - uVar4;
        uVar14 = uVar13 >> 0xc ^ (uVar3 - uVar4) - uVar13;
        uVar3 = uVar14 << 0x10 ^ (uVar4 - uVar13) - uVar14;
        uVar4 = uVar3 >> 5 ^ (uVar13 - uVar14) - uVar3;
        uVar14 = uVar4 >> 3 ^ (uVar14 - uVar3) - uVar4;
        uVar3 = uVar14 << 10 ^ (uVar3 - uVar4) - uVar14;
        uVar17 = (longlong)(int)(uVar3 >> 0xf ^ uVar4 - (uVar14 + uVar3)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar17;
        *(int *)(lVar7 + 0x2c + lVar6) = iVar8;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar7 + 0x28 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar17) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16
        ;
        uVar9 = ~(uint)uVar12 & uVar9;
        plVar5 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar5 = local_60;
        }
        iVar2 = (int)local_60[3];
        iVar16 = (int)local_70;
        lVar7 = (longlong)iVar16;
        uVar3 = *(uint *)((longlong)plVar5 + lVar7 * 4) & uVar9;
        iVar8 = local_74;
        if (uVar3 == 0) {
          iVar10 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar10 = iVar2 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar11 = iVar10;
          if (iVar10 < iVar16) {
            iVar11 = iVar16;
          }
          if (iVar10 <= iVar16) break;
          lVar6 = 0;
          while( true ) {
            iVar8 = iVar8 + 0x20;
            uVar3 = *(uint *)((longlong)plVar5 + lVar6 * 4 + lVar7 * 4 + 4);
            if (uVar3 != 0) break;
            lVar6 = lVar6 + 1;
            if (iVar11 - lVar7 == lVar6) goto LAB_1405108ea;
          }
          local_70 = (ulonglong)(iVar16 + (int)lVar6 + 1);
          uVar9 = 0xffffffff;
        }
        uVar12 = (ulonglong)(-uVar3 & uVar3);
        uVar17 = uVar12 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar16 = (iVar8 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
      } while (iVar16 < iVar2);
    }
  }
LAB_1405108ea:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140510930 FUN_140510930 body=69 status=ok
// SIG undefined FUN_140510930(void)

void FUN_140510930(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140510976(param_1 + 0x1f0);
  if (cVar1 != '\0') {
    FUN_140510dba(param_1);
    return;
  }
  cVar1 = FUN_140510ae0(param_1);
  if (cVar1 == '\0') {
    FUN_140510e1a(param_1);
    return;
  }
  return;
}



// FUNCTION 140510976 FUN_140510976 body=361 status=ok
// SIG undefined FUN_140510976(void)

ulonglong FUN_140510976(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x20) < 0) {
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 == 0) {
    uVar5 = FUN_140927942();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x38) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    if (lVar4 == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x30) == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      return 0;
    }
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar4 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x30));
    *(longlong *)(param_1 + 0x40) = lVar4;
    if (lVar4 == 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x28);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x2c))) &&
       ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
      if (*(int *)(param_1 + 0x4c) == 0) {
        return CONCAT71((uint7)(uint3)(*(uint *)(lVar4 + 8) >> 8),1);
      }
      uVar1 = *(uint *)(param_1 + 0x48);
      if ((int)uVar1 < 0) {
        return 0;
      }
      if (DAT_14c9647dc <= (int)uVar1) {
        return 0;
      }
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x4c))) {
        return (ulonglong)
               CONCAT31((int3)(*(uint *)(lVar4 + 8) >> 8),(*(uint *)(lVar4 + 8) & 0x10200000) == 0);
      }
    }
  }
  return 0;
}



// FUNCTION 140510ae0 FUN_140510ae0 body=729 status=ok
// SIG undefined FUN_140510ae0(void)

undefined8 FUN_140510ae0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  undefined1 auStack_1a8 [36];
  int local_184;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  int local_158;
  longlong local_150;
  longlong local_148;
  longlong local_138;
  longlong *local_128;
  longlong local_118 [4];
  char local_f6;
  longlong *local_68;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar11 = 0;
  uVar9 = 0;
  if (0 < *(int *)(param_1 + 0x630)) {
    plVar2 = (longlong *)(param_1 + 0x628);
    uVar9 = 0;
    do {
      iVar10 = (int)uVar11;
      lVar4 = *(longlong *)(*plVar2 + uVar11 * 0x10);
      plVar5 = *(longlong **)(*plVar2 + 8 + uVar11 * 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      if (lVar4 == 0) {
        FUN_14051381e(plVar2,uVar11);
        FUN_140513896(plVar2);
        iVar10 = iVar10 + -1;
        iVar12 = 4;
      }
      else {
        cVar7 = FUN_1405136b0(lVar4);
        if (cVar7 != '\0') {
          lVar6 = *(longlong *)(lVar4 + 0xb0);
          iVar12 = 4;
          if (((*(char *)(lVar6 + 0x68) != '\x01') || (*(char *)(lVar6 + 0x69) != '\x01')) ||
             (*(char *)(lVar6 + 0x6a) != '\x01')) goto LAB_140510cb2;
        }
        FUN_1405150b4(lVar4,&local_168);
        lVar6 = local_168;
        local_170 = local_160;
        local_184 = local_158;
        local_178 = local_150;
        local_180 = local_148;
        FUN_14051381e(plVar2,uVar11);
        FUN_140513896(plVar2);
        if (((lVar6 == 0) || (local_170 == 0)) || (local_184 < 0)) {
          iVar12 = 4;
        }
        else {
          iVar12 = 4;
          if ((local_178 != 0) && (local_180 != 0)) {
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
            }
            plVar8 = *(longlong **)(param_1 + 0x620);
            *(longlong *)(param_1 + 0x618) = lVar4;
            *(longlong **)(param_1 + 0x620) = plVar5;
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar8 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
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
            FUN_140513540(param_1,&local_168);
            iVar12 = 2;
            uVar9 = 1;
          }
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_50 + 0x10))();
          }
        }
        plVar8 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_68 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_68)(local_68);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        if (local_f6 == '\x01') {
          local_f6 = '\0';
        }
        if (local_138 != 0) {
          plVar8 = local_128;
          if (local_128 == (longlong *)0x0) {
            plVar8 = local_118;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        iVar10 = iVar10 + -1;
      }
LAB_140510cb2:
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar5 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
    } while ((iVar12 == 4) &&
            (uVar11 = (ulonglong)(iVar10 + 1U), (int)(iVar10 + 1U) < *(int *)(param_1 + 0x630)));
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 140510dba FUN_140510dba body=96 status=ok
// SIG undefined FUN_140510dba(void)

undefined8 FUN_140510dba(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  piVar1 = (int *)(param_1 + 0x1f0);
  plVar3 = (longlong *)FUN_1437ed2fa(piVar1);
  lVar2 = *(longlong *)(param_1 + 0x308);
  if (((lVar2 == 0) ||
      (((*(char *)(lVar2 + 0x68) == '\x01' && (*(char *)(lVar2 + 0x69) == '\x01')) &&
       (*(char *)(lVar2 + 0x6a) == '\x01')))) &&
     ((**(code **)(*plVar3 + 0x30))(plVar3,piVar1), *piVar1 == 0x7fffffff)) {
    FUN_1411cd528(param_1);
    return 1;
  }
  return 0;
}



// FUNCTION 140510e1a FUN_140510e1a body=5569 status=ok
// SIG undefined FUN_140510e1a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_140510e1a(longlong param_1)

{
  int *piVar1;
  float *pfVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  char cVar13;
  int iVar14;
  longlong *plVar15;
  uint *puVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  undefined8 uVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  undefined8 *puVar25;
  uint uVar26;
  longlong *plVar27;
  ulonglong *puVar28;
  longlong *plVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong **pplVar32;
  undefined8 *puVar33;
  uint uVar34;
  int iVar35;
  longlong *plVar36;
  int iVar37;
  longlong lVar38;
  bool bVar39;
  float fVar40;
  float fVar41;
  undefined1 auStack_1378 [40];
  longlong *local_1350;
  longlong local_1348;
  longlong local_1340;
  undefined8 local_1338;
  ulonglong local_1330;
  ulonglong local_1328;
  ulonglong local_1320;
  ulonglong local_1318;
  uint *local_1310;
  longlong *local_1308;
  longlong local_1300;
  undefined8 local_12f8;
  undefined8 uStack_12f0;
  undefined4 local_12e8;
  undefined1 local_12e4;
  undefined8 uStack_12e0;
  undefined8 uStack_12d8;
  ulonglong uStack_12d0;
  longlong lStack_12c8;
  undefined8 uStack_12c0;
  longlong *local_12b8;
  undefined8 uStack_12b0;
  longlong local_12a8;
  undefined8 uStack_12a0;
  undefined8 local_1298;
  undefined8 uStack_1290;
  undefined1 local_1288;
  char local_1286;
  longlong *local_1278 [12];
  longlong *local_1218;
  undefined8 uStack_1210;
  undefined8 local_1208;
  undefined8 uStack_1200;
  longlong *local_11f8;
  undefined8 uStack_11f0;
  undefined8 local_11e8;
  longlong *plStack_11e0;
  longlong local_11d8 [496];
  longlong *local_258;
  undefined8 local_250;
  longlong *local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined1 local_234;
  undefined5 uStack_230;
  undefined2 uStack_22b;
  undefined1 uStack_229;
  undefined8 uStack_228;
  undefined8 uStack_220;
  longlong lStack_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  longlong *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  uint local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d8;
  char local_1d6;
  undefined8 local_1c8 [12];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined8 local_120 [11];
  longlong local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  undefined8 uStack_48;
  
  uStack_48 = 0x140510e30;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1378;
  plVar36 = *(longlong **)(param_1 + 0x50);
  if (plVar36 == (longlong *)0x0) {
    local_1328 = 0;
  }
  else {
    local_1328 = 0;
    do {
      lVar5 = plVar36[2];
      FUN_140512c90(lVar5);
      FUN_14051243c(lVar5,local_11d8,0);
      if ((local_11d8[0] == 0) && (*(char *)(lVar5 + 0x1f1) == '\0')) {
        if (DAT_14c761ff0 == '\x01') {
          bVar12 = *(byte *)(lVar5 + 0x164);
          if (bVar12 == 0) {
            plVar15 = (longlong *)FUN_1400d690e(lVar5 + 0x1f8);
            if (plVar15 == (longlong *)0x0) {
              bVar12 = *(byte *)(lVar5 + 0x164);
              goto LAB_140510ef6;
            }
            fVar40 = (float)(**(code **)(*plVar15 + 0xb8))(plVar15);
            *(float *)(lVar5 + 0x160) = fVar40;
            *(undefined1 *)(lVar5 + 0x164) = 1;
          }
          else {
LAB_140510ef6:
            if ((bVar12 & 1) == 0) goto LAB_140510efe;
            fVar40 = *(float *)(lVar5 + 0x160);
          }
          if (((*(float *)(param_1 + 0x660) < fVar40 + *(float *)(param_1 + 0x664)) &&
              (*(char *)(lVar5 + 0x194) == '\0')) &&
             ((plVar15 = (longlong *)FUN_14479d2ce(lVar5 + 0x10c), plVar15 == (longlong *)0x0 ||
              (cVar13 = (**(code **)(*plVar15 + 0xad8))(plVar15), cVar13 == '\0'))))
          goto LAB_140511188;
        }
LAB_140510efe:
        plVar15 = &uStack_12e0;
        local_12f8 = 0;
        uStack_12f0 = 0;
        local_12e8 = 0xffffffff;
        bVar39 = false;
        local_12e4 = 0;
        local_12b8 = (longlong *)0x0;
        local_1288 = 0;
        local_1286 = '\0';
        uStack_12d0 = 0;
        lStack_12c8 = 0;
        uStack_12e0._0_5_ = 0;
        uStack_12e0._5_2_ = 0;
        uStack_12e0._7_1_ = 0;
        uStack_12d8 = 0;
        puVar25 = &DAT_14c846480;
        pplVar32 = local_1278;
        for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
          *pplVar32 = (longlong *)*puVar25;
          puVar25 = puVar25 + 1;
          pplVar32 = pplVar32 + 1;
        }
        local_11e8 = 0;
        plStack_11e0 = (longlong *)0x0;
        local_11f8 = (longlong *)0x0;
        uStack_11f0 = 0;
        local_1208 = 0;
        uStack_1200 = 0;
        local_1218 = (longlong *)0x0;
        uStack_1210 = 0;
        if (*(int *)(lVar5 + 0x110) != 0) {
          uVar34 = *(uint *)(lVar5 + 0x10c);
          bVar39 = false;
          if ((-1 < (int)uVar34) && ((int)uVar34 < DAT_14c9647dc)) {
            plVar27 = (longlong *)
                      ((ulonglong)((uVar34 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8));
            if ((plVar27 != (longlong *)0x0) &&
               (((((int)plVar27[2] == *(int *)(lVar5 + 0x110) &&
                  ((*(uint *)(plVar27 + 1) & 0x10200000) == 0)) && (*plVar27 != 0)) &&
                (plVar27 = (longlong *)FUN_140512af8(lVar5), plVar27 != (longlong *)0x0)))) {
              cVar13 = (**(code **)(*plVar27 + 0xa28))(plVar27);
              if (cVar13 == '\0') {
                bVar39 = false;
              }
              else {
                local_258 = (longlong *)0x0;
                local_250 = 0x1000000000;
                bVar39 = false;
                FUN_1405123ea(local_11d8,0);
                local_1350 = plVar27;
                if (*(int *)(lVar5 + 0x110) != 0) {
                  uVar34 = *(uint *)(lVar5 + 0x10c);
                  bVar39 = false;
                  if ((-1 < (int)uVar34) && ((int)uVar34 < DAT_14c9647dc)) {
                    plVar27 = (longlong *)
                              ((ulonglong)((uVar34 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8));
                    if ((((plVar27 != (longlong *)0x0) &&
                         (((int)plVar27[2] == *(int *)(lVar5 + 0x110) &&
                          ((*(uint *)(plVar27 + 1) & 0x10200000) == 0)))) &&
                        (plVar27 = (longlong *)*plVar27, plVar27 != (longlong *)0x0)) &&
                       ((*(longlong *)(lVar5 + 0x150) != 0 &&
                        (lVar24 = FUN_140512af8(lVar5), lVar24 != 0)))) {
                      if ((*(longlong *)(lVar5 + 0x1b8) == 0) ||
                         (0xfffffffd < *(int *)(lVar5 + 0x1c0) - 1U)) {
                        if (*(int *)(lVar5 + 0x1a8) == 0) {
LAB_1405110c6:
                          lVar20 = lVar5 + 0x1f8;
                          goto LAB_1405110cd;
                        }
                        lVar20 = (longlong)*(int *)(lVar5 + 0x1b0);
                        plVar17 = *(longlong **)(lVar5 + 0x1a0);
                        if ((lVar20 < 0) || (*(int *)(lVar5 + 0x1a8) <= *(int *)(lVar5 + 0x1b0))) {
                          lVar18 = *plVar17;
                          plVar17 = (longlong *)plVar17[1];
                        }
                        else {
                          lVar18 = plVar17[lVar20 * 2];
                          plVar17 = (longlong *)plVar17[lVar20 * 2 + 1];
                        }
                        if (plVar17 == (longlong *)0x0) {
                          plVar17 = (longlong *)0x0;
                        }
                        else {
                          LOCK();
                          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                          UNLOCK();
                        }
                        if (lVar18 == 0) {
                          bVar39 = true;
                        }
                        else {
                          plVar15 = (longlong *)FUN_14571ef7c();
                          bVar39 = plVar15 == (longlong *)0x0;
                        }
                        if (plVar17 != (longlong *)0x0) {
                          LOCK();
                          plVar29 = plVar17 + 1;
                          *(int *)plVar29 = (int)*plVar29 + -1;
                          UNLOCK();
                          if ((int)*plVar29 == 0) {
                            (**(code **)*plVar17)(plVar17);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar17 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (*piVar1 == 0) {
                              (**(code **)(*plVar17 + 0x10))(plVar17);
                            }
                          }
                        }
                        if (bVar39) goto LAB_1405110c6;
                      }
                      else {
                        lVar20 = lVar5 + 0x1b8;
LAB_1405110cd:
                        plVar15 = (longlong *)FUN_1400d690e(lVar20);
                      }
                      if (plVar15 != (longlong *)0x0) {
                        bVar39 = false;
                        cVar13 = (**(code **)(**(longlong **)(lVar5 + 0x150) + 0x88))
                                           (*(longlong **)(lVar5 + 0x150),lVar24);
                        if (cVar13 != '\0') {
                          bVar39 = false;
                          (**(code **)(*plVar15 + 0x50))(plVar15,lVar24,local_11d8,0);
                          if ((int)local_250 != 0) {
                            if ((int)local_250 < 2) {
                              plVar17 = local_258;
                              if (local_258 == (longlong *)0x0) {
                                plVar17 = local_11d8;
                              }
                              plVar17 = (longlong *)FUN_1400d690e(plVar17);
                              (**(code **)(*plVar27 + 0xae0))(plVar27,local_11d8);
                              (**(code **)(**(longlong **)(lVar5 + 0x150) + 0x70))
                                        (*(longlong **)(lVar5 + 0x150),local_11d8);
                              if (plVar17 != plVar15) goto LAB_1405114d2;
                            }
                            else {
                              (**(code **)(*plVar27 + 0xae0))(plVar27,local_11d8);
                              (**(code **)(**(longlong **)(lVar5 + 0x150) + 0x70))
                                        (*(longlong **)(lVar5 + 0x150),local_11d8);
LAB_1405114d2:
                              lVar20 = (longlong)*(int *)(*(longlong *)(lVar5 + 0x10) + 0x198);
                              if (lVar20 != 0) {
                                lVar18 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + 400);
                                lVar38 = 0;
                                do {
                                  plVar15 = *(longlong **)(lVar18 + lVar38);
                                  if (plVar15 != (longlong *)0x0) {
                                    (**(code **)(*plVar15 + 0x20))(plVar15,local_11d8);
                                  }
                                  lVar38 = lVar38 + 0x18;
                                } while (lVar20 * 0x18 != lVar38);
                              }
                            }
                            if ((int)local_250 != 0) {
                              if (0 < (int)local_250) {
                                uVar30 = 0;
                                bVar39 = false;
                                do {
                                  while( true ) {
                                    plVar15 = local_258;
                                    if (local_258 == (longlong *)0x0) {
                                      plVar15 = local_11d8;
                                    }
                                    lVar20 = FUN_1400d690e(plVar15 + uVar30 * 0x1f);
                                    if ((lVar20 != 0) &&
                                       (cVar13 = FUN_14034cd3e(plVar15 + uVar30 * 0x1f,lVar24),
                                       cVar13 == '\0')) break;
                                    FUN_140513388(local_11d8,uVar30 & 0xffffffff);
                                    bVar39 = true;
                                    if ((longlong)(int)local_250 <= (longlong)uVar30)
                                    goto LAB_1405116a7;
                                  }
                                  uVar30 = uVar30 + 1;
                                } while ((longlong)uVar30 < (longlong)(int)local_250);
                                if (bVar39) {
LAB_1405116a7:
                                  FUN_14051358a(local_11d8);
                                }
                                if ((int)local_250 == 0) goto LAB_1405110de;
                              }
                              plVar15 = *(longlong **)(lVar5 + 0x120);
                              if (plVar15 != (longlong *)0x0) {
                                iVar37 = (int)plVar15[1];
                                do {
                                  if (iVar37 == 0) goto LAB_1405116d2;
                                  LOCK();
                                  iVar14 = (int)plVar15[1];
                                  bVar39 = iVar37 == iVar14;
                                  if (bVar39) {
                                    *(int *)(plVar15 + 1) = iVar37 + 1;
                                    iVar14 = iVar37;
                                  }
                                  iVar37 = iVar14;
                                  UNLOCK();
                                } while (!bVar39);
                                lVar24 = *(longlong *)(lVar5 + 0x118);
                                if (lVar24 == 0) {
                                  bVar39 = true;
                                }
                                else {
                                  LOCK();
                                  *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                                  UNLOCK();
                                  local_1348 = param_1;
                                  local_1340 = lVar24;
                                  local_1308 = plVar15;
                                  if (0 < (int)local_250) {
                                    local_1300 = lVar24 + 0x28;
                                    local_1310 = (uint *)(lVar24 + 0x438);
                                    uVar30 = 0;
                                    local_1320 = 0;
                                    uVar31 = uVar30;
                                    do {
                                      while( true ) {
                                        local_1318 = uVar31;
                                        plVar15 = local_258;
                                        if (local_258 == (longlong *)0x0) {
                                          plVar15 = local_11d8;
                                        }
                                        local_1338 = FUN_1400d690e(plVar15 + uVar30 * 0x1f);
                                        if (local_1338 != 0) break;
LAB_1405113f9:
                                        uVar30 = local_1318;
                                        plVar15 = local_11d8;
                                        FUN_140513388(plVar15,local_1318 & 0xffffffff);
                                        local_1320 = CONCAT71((int7)((ulonglong)plVar15 >> 8),1);
                                        uVar31 = local_1318;
                                        if ((longlong)(int)local_250 <= (longlong)uVar30)
                                        goto LAB_14051161c;
                                      }
                                      iVar37 = *(int *)(local_1340 + 0x448);
                                      if (iVar37 == 0) {
                                        uVar31 = 1;
                                        uVar30 = 0;
                                        iVar14 = 0;
                                        iVar35 = 0;
                                      }
                                      else {
                                        puVar16 = *(uint **)(local_1340 + 0x440);
                                        if (*(uint **)(local_1340 + 0x440) == (uint *)0x0) {
                                          puVar16 = local_1310;
                                        }
                                        uVar34 = *puVar16;
                                        if (uVar34 == 0) {
                                          iVar14 = iVar37 + 0x1e;
                                          if (-1 < iVar37 + -1) {
                                            iVar14 = iVar37 + -1;
                                          }
                                          uVar30 = 0;
                                          uVar31 = (ulonglong)(uint)(iVar14 >> 5);
                                          if (iVar14 >> 5 < 1) {
                                            uVar31 = uVar30;
                                          }
                                          iVar35 = 0;
                                          do {
                                            if (uVar31 == uVar30) goto LAB_14051142d;
                                            iVar35 = iVar35 + 0x20;
                                            uVar34 = puVar16[uVar30 + 1];
                                            uVar30 = uVar30 + 1;
                                          } while (uVar34 == 0);
                                        }
                                        else {
                                          uVar30 = 0;
                                          iVar35 = 0;
                                        }
                                        uVar31 = (ulonglong)(-uVar34 & uVar34);
                                        uVar3 = uVar31 * 2 + 1;
                                        lVar24 = 0x3f;
                                        if (uVar3 != 0) {
                                          for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                                          }
                                        }
                                        iVar14 = (iVar35 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                                        if (iVar37 <= iVar14) {
                                          iVar14 = iVar37;
                                        }
                                      }
                                      if (iVar14 != iVar37) {
                                        uVar34 = 0xffffffff;
                                        do {
                                          lVar24 = *(longlong *)(local_1340 + 0x428);
                                          if (*(longlong *)(local_1340 + 0x428) == 0) {
                                            lVar24 = local_1300;
                                          }
                                          plVar15 = *(longlong **)(lVar24 + (longlong)iVar14 * 0x20)
                                          ;
                                          local_1330 = uVar30;
                                          if (((plVar15 != (longlong *)0x0) &&
                                              (cVar13 = (**(code **)(*plVar15 + 0x60))
                                                                  (plVar15,local_1338),
                                              cVar13 != '\0')) &&
                                             (lVar24 = lVar24 + (longlong)iVar14 * 0x20,
                                             *(int *)(lVar24 + 0xc) <= *(int *)(lVar24 + 8)))
                                          goto LAB_1405113f9;
                                          uVar34 = uVar34 & ~(uint)uVar31;
                                          puVar16 = *(uint **)(local_1340 + 0x440);
                                          if (*(uint **)(local_1340 + 0x440) == (uint *)0x0) {
                                            puVar16 = local_1310;
                                          }
                                          iVar4 = *(int *)(local_1340 + 0x448);
                                          iVar14 = (int)local_1330;
                                          lVar24 = (longlong)iVar14;
                                          uVar26 = puVar16[lVar24] & uVar34;
                                          uVar30 = local_1330;
                                          if (uVar26 == 0) {
                                            iVar22 = iVar4 + 0x1e;
                                            if (-1 < iVar4 + -1) {
                                              iVar22 = iVar4 + -1;
                                            }
                                            iVar22 = iVar22 >> 5;
                                            iVar35 = iVar35 + 0x20;
                                            iVar23 = iVar22;
                                            if (iVar22 < iVar14) {
                                              iVar23 = iVar14;
                                            }
                                            iVar7 = iVar14;
                                            if (iVar14 < iVar22) {
                                              lVar20 = 0;
                                              do {
                                                uVar26 = puVar16[lVar24 + lVar20 + 1];
                                                if (uVar26 != 0) {
                                                  uVar30 = (ulonglong)(iVar14 + (int)lVar20 + 1);
                                                  uVar34 = 0xffffffff;
                                                  goto LAB_1405113c2;
                                                }
                                                iVar35 = iVar35 + 0x20;
                                                lVar20 = lVar20 + 1;
                                                uVar34 = 0xffffffff;
                                                iVar7 = iVar23;
                                              } while (iVar23 - lVar24 != lVar20);
                                            }
                                            uVar30 = (ulonglong)(iVar7 + 1);
                                            iVar14 = iVar4;
                                          }
                                          else {
LAB_1405113c2:
                                            uVar31 = (ulonglong)(-uVar26 & uVar26);
                                            uVar3 = uVar31 * 2 + 1;
                                            lVar24 = 0x3f;
                                            if (uVar3 != 0) {
                                              for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                                              }
                                            }
                                            iVar14 = (iVar35 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                                            if (iVar4 <= iVar14) {
                                              iVar14 = iVar4;
                                            }
                                          }
                                        } while (iVar14 != iVar37);
                                      }
LAB_14051142d:
                                      uVar30 = local_1318 + 1;
                                      uVar31 = uVar30;
                                    } while ((longlong)uVar30 < (longlong)(int)local_250);
                                    if ((local_1320 & 1) != 0) {
LAB_14051161c:
                                      FUN_14051358a(local_11d8);
                                    }
                                  }
                                  plVar15 = local_1308;
                                  LOCK();
                                  plVar27 = local_1308 + 1;
                                  *(int *)plVar27 = (int)*plVar27 + -1;
                                  UNLOCK();
                                  if ((int)*plVar27 == 0) {
                                    (**(code **)*local_1308)(local_1308);
                                    LOCK();
                                    piVar1 = (int *)((longlong)plVar15 + 0xc);
                                    *piVar1 = *piVar1 + -1;
                                    UNLOCK();
                                    if (*piVar1 == 0) {
                                      (**(code **)(*plVar15 + 0x10))(plVar15);
                                    }
                                  }
                                  bVar39 = (int)local_250 != 0;
                                  param_1 = local_1348;
                                }
                                LOCK();
                                plVar27 = plVar15 + 1;
                                *(int *)plVar27 = (int)*plVar27 + -1;
                                UNLOCK();
                                if ((int)*plVar27 == 0) {
                                  (**(code **)*plVar15)(plVar15);
                                  LOCK();
                                  piVar1 = (int *)((longlong)plVar15 + 0xc);
                                  *piVar1 = *piVar1 + -1;
                                  UNLOCK();
                                  if (*piVar1 == 0) {
                                    (**(code **)(*plVar15 + 0x10))(plVar15);
                                  }
                                }
                                if (!bVar39) goto LAB_1405110de;
                              }
LAB_1405116d2:
                              if (((int)local_250 != 0) && (*(char *)(lVar5 + 0x194) == '\0')) {
                                if (((*(int *)(lVar5 + 0x110) != 0) &&
                                    ((uVar34 = *(uint *)(lVar5 + 0x10c), -1 < (int)uVar34 &&
                                     ((int)uVar34 < DAT_14c9647dc)))) &&
                                   ((plVar15 = (longlong *)
                                               ((ulonglong)((uVar34 & 0xffff) * 0x18) +
                                               *(longlong *)
                                                (DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8)),
                                    plVar15 != (longlong *)0x0 &&
                                    ((((int)plVar15[2] == *(int *)(lVar5 + 0x110) &&
                                      ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)) &&
                                     ((longlong *)*plVar15 != (longlong *)0x0)))))) {
                                  cVar13 = (**(code **)(*(longlong *)*plVar15 + 0xad8))();
                                  if (cVar13 != '\0') goto LAB_1405116ea;
                                }
                                iVar37 = (int)local_250;
                                if (0 < (int)local_250) {
                                  uVar30 = 0;
                                  bVar39 = false;
                                  do {
                                    while( true ) {
                                      plVar15 = local_258;
                                      if (local_258 == (longlong *)0x0) {
                                        plVar15 = local_11d8;
                                      }
                                      lVar24 = FUN_1400d690e(plVar15 + uVar30 * 0x1f);
                                      if ((lVar24 != 0) &&
                                         (*(float *)(lVar24 + 0x48) +
                                          *(float *)(*(longlong *)(lVar5 + 0x10) + 0x664) <=
                                          *(float *)(*(longlong *)(lVar5 + 0x10) + 0x660))) break;
                                      FUN_140513388(local_11d8,uVar30 & 0xffffffff);
                                      bVar39 = true;
                                      if ((longlong)(int)local_250 <= (longlong)uVar30)
                                      goto LAB_140511c72;
                                    }
                                    uVar30 = uVar30 + 1;
                                  } while ((longlong)uVar30 < (longlong)(int)local_250);
                                  iVar37 = (int)local_250;
                                  if (bVar39) {
LAB_140511c72:
                                    FUN_14051358a(local_11d8);
                                    iVar37 = (int)local_250;
                                  }
                                }
                                if (iVar37 == 0) {
                                  if (*(longlong *)(lVar5 + 0xf0) == 0) {
                                    lVar24 = lVar5 + 0xd8;
                                    lVar20 = *(longlong *)(lVar5 + 0x10);
                                    *(undefined8 *)(lVar5 + 0xd8) = 0;
                                    *(undefined8 *)(lVar5 + 0xe0) = *(undefined8 *)(lVar20 + 0x88);
                                    *(longlong *)(lVar5 + 0xe8) = lVar5;
                                    *(longlong **)(lVar5 + 0xf0) = (longlong *)(lVar20 + 0x80);
                                    if (*(longlong *)(lVar20 + 0x80) == 0) {
                                      *(longlong *)(lVar20 + 0x80) = lVar24;
                                    }
                                    if (*(longlong **)(lVar20 + 0x88) != (longlong *)0x0) {
                                      **(longlong **)(lVar20 + 0x88) = lVar24;
                                    }
                                    *(longlong *)(lVar20 + 0x88) = lVar24;
                                    *(int *)(lVar20 + 0x90) = *(int *)(lVar20 + 0x90) + 1;
                                  }
                                  *(undefined4 *)(lVar5 + 0x168) =
                                       *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + 0x1d0);
                                  goto LAB_1405110de;
                                }
                              }
LAB_1405116ea:
                              if (*(longlong *)(lVar5 + 0xf0) != 0) {
                                *(undefined4 *)(lVar5 + 0x168) = 0;
                              }
                              pfVar2 = (float *)(*(longlong *)(lVar5 + 0x10) + 0x1d0);
                              if (*(float *)(lVar5 + 0x228) < *pfVar2 ||
                                  *(float *)(lVar5 + 0x228) == *pfVar2) {
                                if (*(int *)(lVar5 + 0x110) == 0) goto LAB_1405110de;
                                uVar34 = *(uint *)(lVar5 + 0x10c);
                                if (((-1 < (int)uVar34) && ((int)uVar34 < DAT_14c9647dc)) &&
                                   ((plVar15 = (longlong *)
                                               ((ulonglong)((uVar34 & 0xffff) * 0x18) +
                                               *(longlong *)
                                                (DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8)),
                                    plVar15 != (longlong *)0x0 &&
                                    (((((int)plVar15[2] == *(int *)(lVar5 + 0x110) &&
                                       ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)) &&
                                      (lVar24 = *plVar15, lVar24 != 0)) &&
                                     ((plVar15 = (longlong *)FUN_140512af8(lVar5),
                                      plVar15 != (longlong *)0x0 &&
                                      (cVar13 = (**(code **)(*plVar15 + 0xa48))(plVar15),
                                      cVar13 != '\0')))))))) {
                                  fVar40 = *(float *)(*(longlong *)(lVar5 + 0x10) + 0x1d0);
                                  fVar41 = (float)FUN_14085b07e(lVar24 + 3000);
                                  *(float *)(lVar5 + 0x228) = fVar41 + fVar40;
                                }
                              }
                              if (*(int *)(lVar5 + 0x110) != 0) {
                                uVar34 = *(uint *)(lVar5 + 0x10c);
                                bVar39 = false;
                                if (((int)uVar34 < 0) || (DAT_14c9647dc <= (int)uVar34))
                                goto LAB_1405110e0;
                                puVar28 = (ulonglong *)
                                          ((ulonglong)((uVar34 & 0xffff) * 0x18) +
                                          *(longlong *)
                                           (DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8));
                                if (((puVar28 != (ulonglong *)0x0) &&
                                    ((((int)puVar28[2] == *(int *)(lVar5 + 0x110) &&
                                      ((puVar28[1] & 0x10200000) == 0)) &&
                                     (uVar30 = *puVar28, uVar30 != 0)))) &&
                                   ((plVar15 = (longlong *)FUN_140512af8(lVar5),
                                    plVar15 != (longlong *)0x0 &&
                                    (lVar24 = param_1, 0 < (int)local_250)))) {
LAB_140511816:
                                  local_1330 = uVar30;
                                  local_1348 = lVar24;
                                  uVar34 = FUN_140fb0704(local_11d8,0,0xbf800000);
                                  plVar27 = local_258;
                                  if (local_258 == (longlong *)0x0) {
                                    plVar27 = local_11d8;
                                  }
                                  lVar18 = (longlong)(int)uVar34;
                                  plVar27 = plVar27 + lVar18 * 0x1f;
                                  uVar19 = FUN_1400d690e(plVar27);
                                  (**(code **)(*plVar15 + 0xa00))(plVar15);
                                  uVar11 = uStack_1290;
                                  uVar10 = local_1298;
                                  uVar9 = uStack_12a0;
                                  lVar20 = local_12a8;
                                  uVar8 = uStack_12b0;
                                  plVar17 = local_12b8;
                                  uVar21 = uStack_12c0;
                                  lVar24 = lStack_12c8;
                                  param_1 = local_1348;
                                  if ((char)local_1e8 == '\0') goto LAB_140511875;
                                  uVar26 = local_1e8 & 0xff;
                                  if (uVar26 < 3) {
                                    plVar27 = local_248;
                                    if (uVar26 == 2) {
                                      local_1338 = CONCAT44(local_1338._4_4_,1);
                                    }
                                    else {
                                      if (uVar26 != 1) {
LAB_14051229b:
                                        FUN_140033559("Runtime\\Core\\Public\\Containers/Union.h");
                                        goto LAB_140511875;
                                      }
                                      puVar25 = &uStack_240;
                                      puVar33 = local_120;
                                      for (lVar18 = 0xb; lVar18 != 0; lVar18 = lVar18 + -1) {
                                        *puVar33 = *puVar25;
                                        puVar25 = puVar25 + 1;
                                        puVar33 = puVar33 + 1;
                                      }
                                      local_1338 = (ulonglong)local_1338._4_4_ << 0x20;
                                    }
                                  }
                                  else {
                                    if (2 < (local_1e8 & 0xff) - 3) {
                                      if (uVar26 != 0xff) goto LAB_14051229b;
                                      goto LAB_140511875;
                                    }
                                    local_1338 = (ulonglong)local_1338._4_4_ << 0x20;
                                  }
                                  local_248 = (longlong *)0x0;
                                  uStack_240 = 0;
                                  local_238 = 0xffffffff;
                                  local_234 = 0;
                                  local_1d8 = 0;
                                  local_1d6 = '\0';
                                  uStack_230 = 0;
                                  uStack_22b = 0;
                                  uStack_229 = 0;
                                  uStack_228 = 0;
                                  uStack_220 = 0;
                                  puVar25 = &DAT_14c846480;
                                  puVar33 = local_1c8;
                                  for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
                                    *puVar33 = *puVar25;
                                    puVar25 = puVar25 + 1;
                                    puVar33 = puVar33 + 1;
                                  }
                                  local_138 = 0;
                                  plStack_130 = (longlong *)0x0;
                                  local_148 = (longlong *)0x0;
                                  uStack_140 = 0;
                                  local_158 = 0;
                                  uStack_150 = 0;
                                  local_168 = 0;
                                  uStack_160 = 0;
                                  local_12f8 = 0;
                                  uStack_12f0 = 0;
                                  local_12e8 = 0xffffffff;
                                  local_12e4 = 0;
                                  uStack_12e0._0_5_ = 0;
                                  uStack_12e0._5_2_ = 0;
                                  uStack_12e0._7_1_ = 0;
                                  uStack_12d8 = 0;
                                  uStack_12d0 = 0;
                                  local_98 = local_1298;
                                  uStack_90 = uStack_1290;
                                  local_a8 = local_12a8;
                                  uStack_a0 = uStack_12a0;
                                  local_b8 = local_12b8;
                                  uStack_b0 = uStack_12b0;
                                  local_c8 = lStack_12c8;
                                  uStack_c0 = uStack_12c0;
                                  local_1298 = CONCAT44(uStack_1e4,local_1e8);
                                  uStack_1290 = CONCAT44(uStack_1dc,uStack_1e0);
                                  local_12a8 = CONCAT44(uStack_1f4,local_1f8);
                                  uStack_12a0 = CONCAT44(uStack_1ec,uStack_1f0);
                                  local_12b8 = (longlong *)0x0;
                                  uStack_12b0 = CONCAT44(uStack_1fc,uStack_200);
                                  lStack_12c8 = 0;
                                  uStack_12c0 = CONCAT44(uStack_20c,uStack_210);
                                  uStack_c0._0_4_ = (undefined4)uVar21;
                                  uStack_c0._4_4_ = (undefined4)((ulonglong)uVar21 >> 0x20);
                                  uStack_b0._0_4_ = (undefined4)uVar8;
                                  uStack_b0._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
                                  local_a8._0_4_ = (undefined4)lVar20;
                                  local_a8._4_4_ = (undefined4)((ulonglong)lVar20 >> 0x20);
                                  uStack_a0._0_4_ = (undefined4)uVar9;
                                  uStack_a0._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
                                  local_98._0_4_ = (uint)uVar10;
                                  local_98._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
                                  uStack_90._0_4_ = (undefined4)uVar11;
                                  uStack_90._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
                                  local_1e8 = (uint)local_98;
                                  uStack_1e4 = local_98._4_4_;
                                  uStack_1e0 = (undefined4)uStack_90;
                                  uStack_1dc = uStack_90._4_4_;
                                  local_1f8 = (undefined4)local_a8;
                                  uStack_1f4 = local_a8._4_4_;
                                  uStack_1f0 = (undefined4)uStack_a0;
                                  uStack_1ec = uStack_a0._4_4_;
                                  local_208 = plVar17;
                                  uStack_200 = (undefined4)uStack_b0;
                                  uStack_1fc = uStack_b0._4_4_;
                                  lStack_218 = lVar24;
                                  uStack_210 = (undefined4)uStack_c0;
                                  uStack_20c = uStack_c0._4_4_;
                                  local_1288 = 0;
                                  if (local_1286 == '\x01') {
                                    local_1286 = '\0';
                                  }
                                  puVar25 = local_1c8;
                                  pplVar32 = local_1278;
                                  for (lVar24 = 0xf; plVar15 = local_11f8, lVar24 != 0;
                                      lVar24 = lVar24 + -1) {
                                    *pplVar32 = (longlong *)*puVar25;
                                    puVar25 = puVar25 + 1;
                                    pplVar32 = pplVar32 + 1;
                                  }
                                  uStack_1200 = 0;
                                  uStack_150 = 0;
                                  uStack_c0 = uVar21;
                                  uStack_b0 = uVar8;
                                  local_a8 = lVar20;
                                  uStack_a0 = uVar9;
                                  local_98 = uVar10;
                                  uStack_90 = uVar11;
                                  if (local_11f8 != (longlong *)0x0) {
                                    local_148 = (longlong *)0x0;
                                    local_11f8 = (longlong *)0x0;
                                    LOCK();
                                    plVar17 = plVar15 + 1;
                                    *(int *)plVar17 = (int)*plVar17 + -1;
                                    UNLOCK();
                                    if ((int)*plVar17 == 0) {
                                      (**(code **)*plVar15)(plVar15);
                                      LOCK();
                                      piVar1 = (int *)((longlong)plVar15 + 0xc);
                                      *piVar1 = *piVar1 + -1;
                                      UNLOCK();
                                      if (*piVar1 == 0) {
                                        (**(code **)(*plVar15 + 0x10))(plVar15);
                                      }
                                    }
                                  }
                                  plVar17 = plStack_130;
                                  plVar15 = plStack_11e0;
                                  uStack_11f0 = uStack_140;
                                  local_11e8 = local_138;
                                  local_138 = 0;
                                  plStack_130 = (longlong *)0x0;
                                  plStack_11e0 = plVar17;
                                  if (plVar15 != (longlong *)0x0) {
                                    LOCK();
                                    piVar1 = (int *)((longlong)plVar15 + 0xc);
                                    *piVar1 = *piVar1 + -1;
                                    UNLOCK();
                                    if (*piVar1 == 0) {
                                      (**(code **)(*plVar15 + 0x10))();
                                    }
                                    param_1 = local_1348;
                                    if (plStack_130 != (longlong *)0x0) {
                                      LOCK();
                                      piVar1 = (int *)((longlong)plStack_130 + 0xc);
                                      *piVar1 = *piVar1 + -1;
                                      UNLOCK();
                                      if (*piVar1 == 0) {
                                        (**(code **)(*plStack_130 + 0x10))();
                                      }
                                    }
                                  }
                                  plVar15 = local_148;
                                  if (local_148 != (longlong *)0x0) {
                                    LOCK();
                                    plVar17 = local_148 + 1;
                                    *(int *)plVar17 = (int)*plVar17 + -1;
                                    UNLOCK();
                                    if ((int)*plVar17 == 0) {
                                      (**(code **)*local_148)(local_148);
                                      LOCK();
                                      piVar1 = (int *)((longlong)plVar15 + 0xc);
                                      *piVar1 = *piVar1 + -1;
                                      UNLOCK();
                                      if (*piVar1 == 0) {
                                        (**(code **)(*plVar15 + 0x10))(plVar15);
                                      }
                                    }
                                  }
                                  if (local_1d6 == '\x01') {
                                    local_1d6 = '\0';
                                  }
                                  if (lStack_218 != 0) {
                                    plVar15 = local_208;
                                    if (local_208 == (longlong *)0x0) {
                                      plVar15 = (longlong *)&local_1f8;
                                    }
                                    (**(code **)(*plVar15 + 0x10))();
                                  }
                                  if ((char)local_1338 == '\0') {
                                    pplVar32 = local_1278;
                                    local_1278[0] = plVar27;
                                    puVar25 = local_120;
                                    for (lVar24 = 0xb; pplVar32 = pplVar32 + 1, lVar24 != 0;
                                        lVar24 = lVar24 + -1) {
                                      *pplVar32 = (longlong *)*puVar25;
                                      puVar25 = puVar25 + 1;
                                    }
                                  }
                                  else {
                                    local_1218 = plVar27;
                                    if (plVar27 != (longlong *)0x0) {
                                      plVar15 = plVar27 + 0x48;
                                      pplVar32 = local_1278;
                                      for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
                                        *pplVar32 = (longlong *)*plVar15;
                                        plVar15 = plVar15 + 1;
                                        pplVar32 = pplVar32 + 1;
                                      }
                                    }
                                  }
                                  uStack_12d0 = local_1330;
                                  local_12e8 = *(undefined4 *)(lVar5 + 0x178);
                                  local_12f8 = *(undefined8 *)(lVar5 + 0x18);
                                  uStack_12f0 = *(undefined8 *)(lVar5 + 0x20);
                                  local_12e4 = 0;
                                  iVar37 = *(int *)(*(longlong *)(lVar5 + 0x10) + 0xc);
                                  if (iVar37 == 0) {
LAB_140511fda:
                                    uVar21 = 0;
                                  }
                                  else {
                                    uVar34 = *(uint *)(*(longlong *)(lVar5 + 0x10) + 8);
                                    uVar21 = 0;
                                    if ((-1 < (int)uVar34) && ((int)uVar34 < DAT_14c9647dc)) {
                                      puVar25 = (undefined8 *)
                                                ((ulonglong)((uVar34 & 0xffff) * 0x18) +
                                                *(longlong *)
                                                 (DAT_14c9647c8 + (ulonglong)(uVar34 >> 0x10) * 8));
                                      if ((puVar25 == (undefined8 *)0x0) ||
                                         ((*(int *)(puVar25 + 2) != iVar37 ||
                                          ((*(uint *)(puVar25 + 1) & 0x10200000) != 0))))
                                      goto LAB_140511fda;
                                      uVar21 = *puVar25;
                                    }
                                  }
                                  uStack_12e0._0_5_ = (undefined5)uVar21;
                                  uStack_12e0._5_2_ = (undefined2)((ulonglong)uVar21 >> 0x28);
                                  uStack_12e0._7_1_ = (undefined1)((ulonglong)uVar21 >> 0x38);
                                  local_1288 = 0;
                                  uStack_12d8 = uVar19;
                                  if (*(int *)(lVar5 + 0x1a8) == 0) {
                                    local_11e8 = 0;
                                    if (plStack_11e0 != (longlong *)0x0) {
                                      plVar15 = (longlong *)0x0;
LAB_140511e03:
                                      LOCK();
                                      piVar1 = (int *)((longlong)plStack_11e0 + 0xc);
                                      *piVar1 = *piVar1 + -1;
                                      UNLOCK();
                                      plVar27 = plVar15;
                                      if (*piVar1 == 0) {
                                        (**(code **)(*plStack_11e0 + 0x10))();
                                      }
                                      goto LAB_140511e17;
                                    }
                                    bVar39 = true;
                                  }
                                  else {
                                    uVar34 = *(uint *)(lVar5 + 0x1b0);
                                    puVar25 = *(undefined8 **)(lVar5 + 0x1a0);
                                    if ((int)uVar34 < *(int *)(lVar5 + 0x1a8) && -1 < (int)uVar34) {
                                      local_11e8 = puVar25[(ulonglong)uVar34 * 2];
                                      plVar15 = (longlong *)puVar25[(ulonglong)uVar34 * 2 + 1];
                                    }
                                    else {
                                      local_11e8 = *puVar25;
                                      plVar15 = (longlong *)puVar25[1];
                                    }
                                    if (plVar15 == (longlong *)0x0) {
                                      plVar15 = (longlong *)0x0;
                                    }
                                    else {
                                      LOCK();
                                      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                                      UNLOCK();
                                    }
                                    plVar27 = plStack_11e0;
                                    if (plStack_11e0 != plVar15) {
                                      if (plVar15 != (longlong *)0x0) {
                                        LOCK();
                                        *(int *)((longlong)plVar15 + 0xc) =
                                             *(int *)((longlong)plVar15 + 0xc) + 1;
                                        UNLOCK();
                                      }
                                      plVar27 = plVar15;
                                      if (plStack_11e0 != (longlong *)0x0) goto LAB_140511e03;
                                    }
LAB_140511e17:
                                    plStack_11e0 = plVar27;
                                    bVar39 = true;
                                    if (plVar15 != (longlong *)0x0) {
                                      LOCK();
                                      plVar27 = plVar15 + 1;
                                      *(int *)plVar27 = (int)*plVar27 + -1;
                                      UNLOCK();
                                      if ((int)*plVar27 == 0) {
                                        (**(code **)*plVar15)(plVar15);
                                        LOCK();
                                        piVar1 = (int *)((longlong)plVar15 + 0xc);
                                        *piVar1 = *piVar1 + -1;
                                        UNLOCK();
                                        if (*piVar1 == 0) {
                                          (**(code **)(*plVar15 + 0x10))(plVar15);
                                        }
                                      }
                                    }
                                  }
                                  goto LAB_1405110e0;
                                }
                              }
                              goto LAB_1405110de;
                            }
                            bVar39 = false;
                          }
                        }
                        goto LAB_1405110e0;
                      }
                    }
LAB_1405110de:
                    bVar39 = false;
                  }
                }
LAB_1405110e0:
                FUN_14034c5a2(local_11d8);
                plVar27 = local_1350;
              }
              (**(code **)(*plVar27 + 0xa50))(plVar27,&local_12f8);
              FUN_140512f86(lVar5 + 0x210);
              *(undefined4 *)(lVar5 + 0x1b0) = 0;
              if (*(int *)(lVar5 + 0x1a8) != 0) {
                local_1350 = (longlong *)(lVar5 + 0x1a0);
                lVar24 = FUN_140512bb0(lVar5 + 0x210);
                if (lVar24 == 0) {
                  if (0 < *(int *)(lVar5 + 0x1a8)) {
                    iVar37 = 0;
                    do {
                      cVar13 = (**(code **)(**(longlong **)(*local_1350 + (longlong)iVar37 * 0x10) +
                                           0x10))();
                      if (cVar13 == '\0') {
                        FUN_147e2872a(local_1350,iVar37);
                      }
                      else {
                        iVar37 = iVar37 + 1;
                      }
                    } while (iVar37 < *(int *)(lVar5 + 0x1a8));
                  }
                }
                else if (0 < *(int *)(lVar5 + 0x1a8)) {
                  iVar37 = 0;
                  do {
                    lVar20 = *local_1350;
                    cVar13 = (**(code **)(**(longlong **)(lVar20 + (longlong)iVar37 * 0x10) + 0x10))
                                       ();
                    if (cVar13 == '\0') {
                      iVar14 = iVar37 + -1;
                      FUN_147e2872a(local_1350,iVar37);
                    }
                    else {
                      lVar20 = FUN_14571ed94(*(longlong *)(lVar20 + (longlong)iVar37 * 0x10) + 0x20)
                      ;
                      iVar14 = iVar37;
                      if (lVar20 == lVar24) {
                        *(int *)(lVar5 + 0x1b0) = iVar37;
                        break;
                      }
                    }
                    iVar37 = iVar14 + 1;
                  } while (iVar37 < *(int *)(lVar5 + 0x1a8));
                }
              }
              if (bVar39) {
                uVar21 = FUN_140513540(param_1,&local_12f8);
                bVar39 = true;
                local_1328 = CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
                goto LAB_140511139;
              }
            }
            bVar39 = false;
          }
        }
LAB_140511139:
        if (plStack_11e0 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plStack_11e0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plStack_11e0 + 0x10))();
          }
        }
        plVar15 = local_11f8;
        if (local_11f8 != (longlong *)0x0) {
          LOCK();
          plVar27 = local_11f8 + 1;
          *(int *)plVar27 = (int)*plVar27 + -1;
          UNLOCK();
          if ((int)*plVar27 == 0) {
            (**(code **)*local_11f8)(local_11f8);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        if (local_1286 == '\x01') {
          local_1286 = '\0';
        }
        if (lStack_12c8 != 0) {
          plVar15 = local_12b8;
          if (local_12b8 == (longlong *)0x0) {
            plVar15 = &local_12a8;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        if (bVar39) break;
      }
LAB_140511188:
      plVar36 = (longlong *)*plVar36;
    } while (plVar36 != (longlong *)0x0);
  }
  if ((local_80 ^ (ulonglong)auStack_1378) == DAT_14c707940) {
    return local_1328 & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140511875:
  param_1 = local_1348;
  plVar27 = local_258;
  if (local_258 == (longlong *)0x0) {
    plVar27 = local_11d8;
  }
  plVar17 = plVar27 + lVar18 * 0x1f;
  plVar29 = plVar27 + lVar18 * 0x1f + 0x18;
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(plVar27 + lVar18 * 0x1f + 0x1c) * 0x120));
  if (pcVar6 != (code *)0x0) {
    plVar27 = plVar29;
    if (0x18 < *(ushort *)(plVar17 + 0x1b)) {
      plVar27 = (longlong *)*plVar29;
    }
    (*pcVar6)(plVar27);
  }
  if (0x18 < *(ushort *)(plVar17 + 0x1b)) {
    FUN_1400020a8(*plVar29);
  }
  if (~uVar34 + (int)local_250 != 0) {
    memmove(plVar17,plVar17 + 0x1f,(longlong)(int)(~uVar34 + (int)local_250) * 0xf8);
  }
  local_250 = CONCAT44(local_250._4_4_,(int)local_250 + -1);
  FUN_14051358a(local_11d8);
  lVar24 = local_1348;
  uVar30 = local_1330;
  if ((int)local_250 < 1) goto LAB_1405110de;
  goto LAB_140511816;
}



// FUNCTION 1405123ea FUN_1405123ea body=81 status=ok
// SIG undefined FUN_1405123ea(void)

void FUN_1405123ea(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0xf8c)) {
    lVar1 = *(longlong *)(param_1 + 0xf80);
    if (*(longlong *)(param_1 + 0xf80) == 0) {
      lVar1 = param_1;
    }
    FUN_14034c5df(lVar1,*(undefined4 *)(param_1 + 0xf88));
    *(undefined4 *)(param_1 + 0xf88) = 0;
    return;
  }
  FUN_147e287b2(param_1);
  return;
}



// FUNCTION 14051243c FUN_14051243c body=404 status=ok
// SIG undefined FUN_14051243c(void)

longlong * FUN_14051243c(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = DAT_14cb1b030;
  if ((((((*(longlong *)(param_1 + 0x150) != 0) &&
         (lVar4 = DAT_14cb1b018, *(int *)(param_1 + 500) < 4)) &&
        (lVar4 = DAT_14cb1b040, *(int *)(param_1 + 0x110) != 0)) &&
       (((uVar1 = *(uint *)(param_1 + 0x10c), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
        ((plVar5 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar5 != (longlong *)0x0 &&
         (((int)plVar5[2] == *(int *)(param_1 + 0x110) &&
          ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))))))) &&
      (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)) &&
     ((cVar2 = FUN_1405125e4(param_1), lVar4 = DAT_14cb1b048, cVar2 != '\0' &&
      ((**(code **)(*plVar5 + 0xab8))(plVar5,&local_38), lVar4 = local_38, local_38 == 0)))) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 1;
    }
    lVar4 = DAT_14cb1b020;
    if ((((*(int *)(param_1 + 500) != 2) && (lVar4 = DAT_14cb1b058, *(int *)(param_1 + 500) != 0))
        && ((**(code **)(**(longlong **)(param_1 + 0x150) + 0x28))
                      (*(longlong **)(param_1 + 0x150),&local_40), lVar4 = local_40, local_40 == 0))
       && (iVar3 = (**(code **)(**(longlong **)(param_1 + 0x150) + 0x38))(), lVar4 = DAT_14cb1b050,
          0 < iVar3)) {
      lVar4 = 0;
    }
  }
  *param_2 = lVar4;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1405125e4 FUN_1405125e4 body=192 status=ok
// SIG undefined FUN_1405125e4(void)

undefined8 FUN_1405125e4(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < *(int *)(param_1 + 400)) {
    uVar3 = CONCAT71((int7)(local_18 >> 8),1);
    goto LAB_14051267f;
  }
  if (*(int *)(param_1 + 0x110) != 0) {
    uVar1 = *(uint *)(param_1 + 0x10c);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14051267f;
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar2 != (longlong *)0x0) &&
       ((((int)plVar2[2] == *(int *)(param_1 + 0x110) && ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)
         ) && (*plVar2 != 0)))) {
      uVar3 = FUN_1405126a6(*plVar2,local_30);
      uVar3 = FUN_140512764(uVar3,local_30,*(longlong *)(param_1 + 0x10) + 0x1b0);
      goto LAB_14051267f;
    }
  }
  uVar3 = 0;
LAB_14051267f:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405126a6 FUN_1405126a6 body=189 status=ok
// SIG undefined FUN_1405126a6(void)

longlong FUN_1405126a6(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x938);
  if ((ulonglong)uVar2 != 0) {
    if (0 < (int)uVar2) {
      lVar4 = param_1 + 0x890;
      if (*(longlong *)(param_1 + 0x930) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x930);
      }
      return lVar4 + (ulonglong)uVar2 * 0x28 + -0x28;
    }
    return param_1 + 0x870;
  }
  if (((*(char *)(param_1 + 0x940) == '\x01') &&
      (lVar4 = *(longlong *)(param_1 + 0xbc8), lVar4 != 0)) && (*(char *)(lVar4 + 0x408) == '\x01'))
  {
    lVar4 = *(longlong *)(lVar4 + 0x1c8);
    if (lVar4 == 0) {
      puVar5 = &DAT_14c8464e0;
      uVar6 = (undefined4)DAT_14c8464f0;
      uVar7 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar6 = (undefined4)*(undefined8 *)(lVar4 + 0x270);
      uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x270) >> 0x20);
      puVar5 = (undefined8 *)(lVar4 + 0x260);
    }
    uVar1 = puVar5[1];
    *param_2 = *puVar5;
    param_2[1] = uVar1;
    param_2[2] = CONCAT44(uVar7,uVar6);
    return *(longlong *)(param_1 + 0xbc8) + 0x410;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x268);
  uVar1 = *(undefined8 *)(param_1 + 0x270);
  *param_2 = *(undefined8 *)(param_1 + 0x260);
  param_2[1] = uVar3;
  param_2[2] = uVar1;
  return param_1 + 0x850;
}



// FUNCTION 140512764 FUN_140512764 body=651 status=ok
// SIG undefined FUN_140512764(void)

ulonglong FUN_140512764(byte *param_1,double *param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  char cVar8;
  undefined8 unaff_RSI;
  ulonglong uVar9;
  longlong lVar10;
  double *pdVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_128 [40];
  longlong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  float local_bc;
  undefined1 local_b8 [24];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*param_1 != 2) {
    if ((longlong)*(int *)(param_3 + 1) != 0) {
      dVar2 = *param_2;
      dVar3 = param_2[1];
      dVar4 = param_2[2];
      pdVar11 = (double *)*param_3;
      pdVar1 = pdVar11 + (longlong)*(int *)(param_3 + 1) * 3;
      do {
        bVar5 = *param_1;
        if ((bVar5 == 0) || (bVar5 == 3)) {
          if (param_1[8] == 1) {
            dVar13 = *pdVar11 - dVar2;
            dVar14 = pdVar11[1] - dVar3;
            if ((dVar14 * dVar14 + dVar13 * dVar13 <=
                 (double)(*(float *)(param_1 + 4) * *(float *)(param_1 + 4))) &&
               (ABS(dVar4 - pdVar11[2]) <= (double)*(float *)(param_1 + 0xc))) goto LAB_140512935;
          }
          else {
            dVar13 = dVar4 - pdVar11[2];
            dVar14 = dVar3 - pdVar11[1];
            dVar15 = dVar2 - *pdVar11;
            if ((float)(dVar13 * dVar13 + dVar15 * dVar15 + dVar14 * dVar14) <=
                *(float *)(param_1 + 4) * *(float *)(param_1 + 4)) goto LAB_140512935;
          }
          if ((bVar5 | 2) == 3) goto LAB_140512887;
        }
        else if (bVar5 == 1) {
LAB_140512887:
          local_e8 = pdVar11[2];
          local_f8 = *(undefined4 *)pdVar11;
          uStack_f4 = *(undefined4 *)((longlong)pdVar11 + 4);
          uStack_f0 = *(undefined4 *)(pdVar11 + 1);
          uStack_ec = *(undefined4 *)((longlong)pdVar11 + 0xc);
          iVar6 = *(int *)(param_1 + 0x18);
          if ((longlong)iVar6 != 0) {
            lVar10 = *(longlong *)(param_1 + 0x10);
            lVar12 = 0;
            do {
              if (*(longlong *)(lVar10 + lVar12) != 0) {
                local_c8 = local_e8;
                local_d8 = local_f8;
                uStack_d4 = uStack_f4;
                uStack_d0 = uStack_f0;
                uStack_cc = uStack_ec;
                plVar7 = *(longlong **)(*(longlong *)(lVar10 + lVar12) + 0x3a8);
                if ((((plVar7 != (longlong *)0x0) &&
                     (local_100 = lVar10,
                     cVar8 = (**(code **)(*plVar7 + 0x7c0))(plVar7,&local_d8,&local_bc,local_b8),
                     lVar10 = local_100, cVar8 != '\0')) && (0.0 <= local_bc)) && (local_bc <= 0.0))
                goto LAB_140512935;
              }
              lVar12 = lVar12 + 8;
            } while ((longlong)iVar6 * 8 != lVar12);
          }
        }
        pdVar11 = pdVar11 + 3;
      } while (pdVar11 != pdVar1);
    }
    uVar9 = 0;
  }
LAB_140512935:
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1405129f0 FUN_1405129f0 body=243 status=ok
// SIG undefined FUN_1405129f0(void)

undefined8 * FUN_1405129f0(longlong *param_1,undefined8 *param_2)

{
  float fVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = DAT_14cb1b1a8;
  if (((param_1[5] != 0) && (param_1[6] != 0)) && (0 < *(int *)(param_1[6] + 8))) {
    fVar1 = *(float *)(*(longlong *)(param_1[1] + 0x10) + 0x1d0);
    if ((((*(float *)(param_1 + 0xe) <= 0.0) || (*(float *)((longlong)param_1 + 0x74) <= 0.0)) ||
        (uVar3 = DAT_14cb1b1b0,
        *(float *)(param_1 + 0xe) <= fVar1 - *(float *)((longlong)param_1 + 0x74))) &&
       ((((int)param_1[0xf] < 1 || (*(float *)((longlong)param_1 + 0x84) <= 0.0)) ||
        ((*(float *)(param_1 + 0xc) <= 0.0 ||
         (uVar3 = DAT_14cb1b1b8,
         *(float *)(param_1 + 0xc) <= fVar1 - *(float *)((longlong)param_1 + 0x84))))))) {
      iVar4 = *(int *)((longlong)param_1 + 0x6c) - *(int *)((longlong)param_1 + 0x7c);
      iVar5 = 0;
      if (0 < iVar4) {
        iVar5 = iVar4;
      }
      uVar3 = DAT_14cb1b1c8;
      if (((iVar5 < (int)param_1[0x10]) &&
          (uVar3 = DAT_14cb1b1c0, (int)param_1[0xd] < (int)param_1[0x10])) &&
         (cVar2 = (**(code **)(*param_1 + 0x30))(), uVar3 = DAT_14cb1b1d0, cVar2 == '\0')) {
        uVar3 = 0;
      }
    }
  }
  *param_2 = uVar3;
  return param_2;
}



// FUNCTION 140512af8 FUN_140512af8 body=184 status=ok
// SIG undefined FUN_140512af8(void)

longlong FUN_140512af8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RBX;
  longlong *plVar5;
  bool bVar6;
  
  if (*(int *)(param_1 + 0x1a8) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x1b0);
    plVar5 = *(longlong **)(param_1 + 0x1a0);
    if ((lVar3 < 0) || (*(int *)(param_1 + 0x1a8) <= *(int *)(param_1 + 0x1b0))) {
      lVar4 = *plVar5;
      plVar5 = (longlong *)plVar5[1];
    }
    else {
      lVar4 = plVar5[lVar3 * 2];
      plVar5 = (longlong *)plVar5[lVar3 * 2 + 1];
    }
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (lVar4 == 0) {
      bVar6 = true;
    }
    else {
      unaff_RBX = FUN_14571ed94(lVar4 + 0x20);
      bVar6 = unaff_RBX == 0;
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
    if (!bVar6) {
      return unaff_RBX;
    }
  }
  lVar3 = FUN_140512bb0(param_1 + 0x210);
  return lVar3;
}



// FUNCTION 140512bb0 FUN_140512bb0 body=98 status=ok
// SIG undefined FUN_140512bb0(void)

undefined8 FUN_140512bb0(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  for (; (char)param_1[4] != '\0';
      param_1 = (uint *)(*(longlong *)(*(int **)param_1 + 2) + (longlong)**(int **)param_1 * 0x18))
  {
  }
  if (param_1[1] == 0) {
    return 0;
  }
  uVar1 = *param_1;
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(uint *)(puVar3 + 2) != param_1[1]) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 140512c12 FUN_140512c12 body=115 status=ok
// SIG undefined FUN_140512c12(void)

undefined8 * FUN_140512c12(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((((*(float *)(param_1 + 9) <= 0.0) || (*(float *)((longlong)param_1 + 0x4c) <= 0.0)) ||
      (uVar2 = DAT_14cb1b190,
      *(float *)(param_1 + 9) <=
      *(float *)(*(longlong *)(param_1[1] + 0x10) + 0x1d0) - *(float *)((longlong)param_1 + 0x4c)))
     && ((uVar2 = DAT_14cb1b198, *(int *)((longlong)param_1 + 0x3c) < (int)param_1[8] &&
         (cVar1 = (**(code **)(*param_1 + 0x30))(), uVar2 = DAT_14cb1b1a0, cVar1 == '\0')))) {
    uVar2 = 0;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 140512c90 FUN_140512c90 body=756 status=ok
// SIG undefined FUN_140512c90(void)

void FUN_140512c90(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_68 [32];
  longlong *local_48;
  longlong **local_40;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(int *)(param_1 + 0x110) == 0) || (uVar4 = *(uint *)(param_1 + 0x10c), (int)uVar4 < 0)) ||
      (DAT_14c9647dc <= (int)uVar4)) ||
     (((plVar10 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(param_1 + 0x110))) ||
      (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 ||
       (plVar10 = (longlong *)*plVar10, plVar10 == (longlong *)0x0)))))) goto LAB_140512d12;
  iVar8 = *(int *)(param_1 + 500);
  if (iVar8 == 0) {
    local_34 = 0;
    cVar7 = FUN_140513926(param_1 + 0x210,plVar10);
    if (cVar7 == '\0') {
      iVar8 = *(int *)(param_1 + 500);
      goto LAB_140512d04;
    }
    *(undefined4 *)(param_1 + 500) = 1;
LAB_140512d64:
    cVar7 = FUN_1405125e4(param_1);
    if ((cVar7 == '\0') ||
       ((**(code **)(*plVar10 + 0xab8))(plVar10,&local_40), local_40 != (longlong **)0x0))
    goto LAB_140512d12;
    FUN_140515662(param_1);
    *(undefined4 *)(param_1 + 500) = 2;
  }
  else {
LAB_140512d04:
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_140512d12;
      goto LAB_140512d64;
    }
  }
  if ((char)plVar10[0x106] == '\0') {
    plVar11 = (longlong *)(param_1 + 0x1d0);
    if (*(longlong **)(param_1 + 0x1e0) != (longlong *)0x0) {
      plVar11 = *(longlong **)(param_1 + 0x1e0);
    }
    if ((longlong)*(int *)(param_1 + 0x1e8) != 0) {
      plVar12 = plVar11 + (longlong)*(int *)(param_1 + 0x1e8) * 2;
      do {
        plVar5 = (longlong *)plVar11[1];
        if (plVar5 != (longlong *)0x0) {
          iVar8 = (int)plVar5[1];
          do {
            if (iVar8 == 0) goto LAB_140512e39;
            LOCK();
            iVar6 = (int)plVar5[1];
            bVar13 = iVar8 == iVar6;
            if (bVar13) {
              *(int *)(plVar5 + 1) = iVar8 + 1;
              iVar6 = iVar8;
            }
            iVar8 = iVar6;
            UNLOCK();
          } while (!bVar13);
          lVar9 = *plVar11;
          if ((lVar9 != 0) &&
             (((*(char *)(lVar9 + 0x30) != '\0' || (*(char *)(lVar9 + 0x31) != '\0')) ||
              (*(int *)(lVar9 + 0x6c) != 2)))) {
            LOCK();
            plVar10 = plVar5 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
            goto LAB_140512d12;
          }
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
LAB_140512e39:
        plVar11 = plVar11 + 2;
      } while (plVar11 != plVar12);
    }
  }
  lVar9 = plVar10[0x179];
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x458) != 0)) {
    local_48 = plVar10;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(plVar10);
    }
    local_40 = &local_48;
    FUN_140515ca2(lVar9 + 0x450);
  }
  (**(code **)(*plVar10 + 0xaa0))(plVar10);
  puVar3 = (undefined1 *)(param_1 + 0x194);
  if (*(char *)(param_1 + 0x195) == '\0') {
    *puVar3 = 0;
  }
  if (*(char *)(param_1 + 0x197) == '\0') {
    *(undefined1 *)(param_1 + 0x196) = 0;
  }
  if (*(char *)(param_1 + 0x19c) == '\0') {
    *(undefined4 *)(param_1 + 0x198) = 0x44610000;
  }
  lVar9 = FUN_1400d690e(param_1 + 0x1f8);
  if (lVar9 != 0) {
    FUN_14051439a(puVar3,lVar9 + 0x18);
  }
  if (((*(int *)(param_1 + 0x110) != 0) && (uVar4 = *(uint *)(param_1 + 0x10c), -1 < (int)uVar4)) &&
     (((int)uVar4 < DAT_14c9647dc &&
      ((((plVar10 = (longlong *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
         plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(param_1 + 0x110))) &&
        ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) && (*plVar10 != 0)))))) {
    FUN_14051439a(puVar3,*plVar10 + 0x944);
  }
  *(undefined4 *)(param_1 + 500) = 3;
LAB_140512d12:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140512f86 FUN_140512f86 body=455 status=ok
// SIG undefined FUN_140512f86(void)

ulonglong FUN_140512f86(undefined8 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined ***pppuVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_b8 [47];
  char local_89;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  char *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(char *)(param_1 + 2) != '\0') {
    cVar1 = FUN_140512f86((longlong)*(int *)*param_1 * 0x18 + *(longlong *)((int *)*param_1 + 2));
    if (cVar1 != '\0') {
      *(int *)*param_1 = *(int *)*param_1 + 1;
      piVar2 = (int *)*param_1;
      if ((*piVar2 < 0) || (piVar2[4] <= *piVar2)) {
        if ((*(char *)((longlong)piVar2 + 5) == '\x01') && (0 < piVar2[4])) {
          iVar7 = 0;
          do {
            local_89 = '\0';
            lVar6 = (longlong)iVar7;
            local_78 = (undefined ***)0x0;
            local_68 = &PTR_LAB_14ab67220;
            local_60 = &local_89;
            local_88[0] = &LAB_1437ee48a;
            cVar1 = FUN_14571ee5e(lVar6 * 0x18 + *(longlong *)(piVar2 + 2),local_88);
            if (local_88[0] != (undefined1 *)0x0) {
              pppuVar4 = local_78;
              if (local_78 == (undefined ***)0x0) {
                pppuVar4 = &local_68;
              }
              (*(code *)(*pppuVar4)[2])();
            }
            piVar2 = (int *)*param_1;
            if (cVar1 == '\0') {
              iVar3 = piVar2[4];
            }
            else {
              *piVar2 = iVar7;
              if ((0 < iVar7) || (local_89 != '\0')) goto LAB_140513009;
              lVar8 = lVar6 * 0x18;
              while( true ) {
                lVar8 = lVar8 + 0x18;
                lVar6 = lVar6 + 1;
                piVar2 = (int *)*param_1;
                iVar3 = piVar2[4];
                if (iVar3 <= lVar6) break;
                local_78 = (undefined ***)0x0;
                local_68 = &PTR_LAB_14ab67240;
                local_88[0] = &LAB_1437ee4e8;
                cVar1 = FUN_14571ee5e(*(longlong *)(piVar2 + 2) + lVar8,local_88);
                if (local_88[0] != (undefined1 *)0x0) {
                  pppuVar4 = local_78;
                  if (local_78 == (undefined ***)0x0) {
                    pppuVar4 = &local_68;
                  }
                  (*(code *)(*pppuVar4)[2])();
                }
                if (cVar1 != '\0') goto LAB_140513009;
              }
              iVar7 = (int)lVar6;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar3);
        }
        FUN_14051314e(param_1);
        goto LAB_140512fae;
      }
    }
LAB_140513009:
    uVar5 = 0;
  }
LAB_140512fae:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14051314e FUN_14051314e body=328 status=ok
// SIG undefined FUN_14051314e(void)

void FUN_14051314e(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [47];
  undefined1 local_79;
  undefined1 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((char)param_1[2] != '\0') && ((undefined4 *)*param_1 != (undefined4 *)0x0)) {
    *(undefined4 *)*param_1 = 0;
    lVar6 = *param_1;
    uVar1 = *(uint *)(lVar6 + 0x10);
    uVar3 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      if (*(char *)(lVar6 + 4) != '\0') {
        lVar5 = *(longlong *)(lVar6 + 8);
        local_78 = &local_79;
        local_68 = 0xffffffff;
        local_70 = 0x20;
        if (uVar1 != 1) {
          lVar4 = uVar3 * 0x18 + -0x18;
          lVar7 = 1;
          lVar6 = lVar5;
          do {
            lVar6 = lVar6 + 0x18;
            lVar2 = FUN_14051345a(&local_78,lVar7 + 1);
            if (lVar7 != lVar2) {
              lVar2 = lVar2 * 0x18 + lVar5;
              local_50 = 0xff;
              FUN_140513298(local_60,lVar6);
              FUN_140513298(lVar6,lVar2);
              FUN_140513298(lVar2,local_60);
              FUN_140513334(local_60);
            }
            lVar4 = lVar4 + -0x18;
            lVar7 = lVar7 + 1;
          } while (lVar4 != 0);
          lVar6 = *param_1;
        }
        uVar3 = (ulonglong)*(int *)(lVar6 + 0x10);
        if (uVar3 == 0) goto LAB_140513173;
      }
      lVar5 = *(longlong *)(lVar6 + 8);
      lVar6 = lVar5 + uVar3 * 0x18;
      do {
        FUN_14051314e(lVar5);
        lVar5 = lVar5 + 0x18;
      } while (lVar5 != lVar6);
    }
  }
LAB_140513173:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140513298 FUN_140513298 body=156 status=ok
// SIG undefined FUN_140513298(void)

undefined8 * FUN_140513298(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  cVar1 = *(char *)(param_2 + 2);
  if (cVar1 == '\0') {
    uVar2 = *param_2;
    FUN_140513334(param_1);
    *param_1 = uVar2;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    switch(cVar1) {
    case '\x01':
      FUN_140513334(param_1);
      *param_1 = *param_2;
      lVar3 = param_2[1];
      param_1[1] = lVar3;
      if (lVar3 != 0) {
        LOCK();
        *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
        UNLOCK();
      }
      *(undefined1 *)(param_1 + 2) = 1;
      break;
    case '\x02':
    case '\x03':
    case '\x04':
    case '\x05':
      FUN_140513334(param_1);
      *(undefined1 *)(param_1 + 2) = 2;
      break;
    default:
      if (cVar1 != -1) {
        FUN_140033559("Runtime\\Core\\Public\\Containers/Union.h",0x18e,
                      L"Unrecognized TUnion subtype");
      }
    }
  }
  return param_1;
}



// FUNCTION 140513334 FUN_140513334 body=83 status=ok
// SIG undefined FUN_140513334(void)

void FUN_140513334(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  
  cVar3 = *(char *)(param_1 + 0x10);
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      *(undefined1 *)(param_1 + 0x10) = 0xff;
      plVar4 = *(longlong **)(param_1 + 8);
      if (plVar4 == (longlong *)0x0) {
        return;
      }
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 != 0) {
        return;
      }
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000140513383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
    if (cVar3 != '\x02') {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x10) = 0xff;
  return;
}



// FUNCTION 140513388 FUN_140513388 body=210 status=ok
// SIG undefined FUN_140513388(void)

void FUN_140513388(longlong param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  lVar7 = *(longlong *)(param_1 + 0xf80);
  if (*(longlong *)(param_1 + 0xf80) == 0) {
    lVar7 = param_1;
  }
  _Dst = (void *)(lVar7 + (longlong)(int)param_2 * 0xf8);
  lVar1 = lVar7 + (longlong)(int)param_2 * 0xf8;
  puVar8 = (undefined8 *)(lVar1 + 0xc0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(lVar1 + 0xe0) * 0x120))
  ;
  if (pcVar2 != (code *)0x0) {
    puVar5 = puVar8;
    if (0x18 < *(ushort *)((longlong)_Dst + 0xd8)) {
      puVar5 = (undefined8 *)*puVar8;
    }
    (*pcVar2)(puVar5);
  }
  if (0x18 < *(ushort *)((longlong)_Dst + 0xd8)) {
    FUN_1400020a8(*puVar8);
  }
  iVar3 = *(int *)(param_1 + 0xf88);
  iVar6 = ~param_2 + iVar3;
  if (iVar6 != 0) {
    iVar4 = 1;
    if (iVar6 < 1) {
      iVar4 = iVar6;
    }
    memmove(_Dst,(void *)(lVar7 + (longlong)(iVar3 - iVar4) * 0xf8),(longlong)iVar4 * 0xf8);
    iVar3 = *(int *)(param_1 + 0xf88);
  }
  *(int *)(param_1 + 0xf88) = iVar3 + -1;
  return;
}



// FUNCTION 14051345a FUN_14051345a body=146 status=ok
// SIG undefined FUN_14051345a(void)

ulonglong FUN_14051345a(longlong param_1,ulonglong param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  do {
    if (param_2 == 1) {
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 8);
      uVar3 = 0;
      uVar4 = 0;
      do {
        cVar1 = (char)uVar5;
        do {
          uVar2 = std::_Random_device();
        } while (*(ulonglong *)(param_1 + 0x10) < (ulonglong)uVar2);
        uVar5 = *(undefined8 *)(param_1 + 8);
        uVar4 = (uVar4 << (cVar1 - 1U & 0x3f)) * 2 | (ulonglong)uVar2;
        uVar3 = (uVar3 << ((char)uVar5 - 1U & 0x3f)) * 2 | *(ulonglong *)(param_1 + 0x10);
      } while (uVar3 < param_2 - 1);
    }
  } while ((uVar3 / param_2 <= uVar4 / param_2) && (uVar3 % param_2 != param_2 - 1));
  return uVar4 % param_2;
}



// FUNCTION 1405134ec FUN_1405134ec body=45 status=ok
// SIG undefined FUN_1405134ec(void)

void FUN_1405134ec(longlong param_1)

{
  FUN_140513519(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140513519 FUN_140513519 body=38 status=ok
// SIG undefined FUN_140513519(void)

void FUN_140513519(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140513334(param_1);
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 140513540 FUN_140513540 body=73 status=ok
// SIG undefined FUN_140513540(void)

void FUN_140513540(longlong param_1,longlong *param_2)

{
  if ((((*param_2 != 0) && (param_2[1] != 0)) && (-1 < (int)param_2[2])) &&
     ((param_2[3] != 0 && (param_2[4] != 0)))) {
    FUN_1405143f4(param_1 + 0x1f0);
    FUN_140510dba(param_1);
    return;
  }
  return;
}



// FUNCTION 14051358a FUN_14051358a body=185 status=ok
// SIG undefined FUN_14051358a(void)

void FUN_14051358a(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0xf88);
  uVar4 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xf8c);
  if (uVar4 < 0x11) {
    uVar4 = 0x10;
  }
  else {
    iVar3 = iVar2 - uVar1;
    if ((ulonglong)((longlong)iVar3 * 0xf8) < 0x4000) {
      if (iVar3 < 0x41 || iVar2 * 2 <= (int)(uVar1 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar1) {
      uVar4 = FUN_144a3809e(uVar4 * 0xf8,0);
      uVar4 = uVar4 / 0xf8;
      iVar2 = *(int *)(param_1 + 0xf8c);
    }
  }
  if ((int)uVar4 == iVar2) {
    return;
  }
  *(int *)(param_1 + 0xf8c) = (int)uVar4;
  FUN_14034d10a(param_1,*(undefined4 *)(param_1 + 0xf88),uVar4,0xf8);
  return;
}



// FUNCTION 140513644 FUN_140513644 body=108 status=ok
// SIG undefined FUN_140513644(void)

float FUN_140513644(longlong param_1)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  
  if ((longlong)*(int *)(param_1 + 0x98) == 0) {
    fVar1 = 0.0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x90);
    lVar4 = (longlong)*(int *)(param_1 + 0x98) * 0xf8;
    fVar1 = 0.0;
    do {
      plVar2 = (longlong *)FUN_1400d690e(lVar3);
      fVar5 = fVar1;
      if (plVar2 != (longlong *)0x0) {
        fVar5 = (float)(**(code **)(*plVar2 + 0xb8))(plVar2);
        if (fVar1 <= fVar5) {
          fVar5 = fVar1;
        }
      }
      fVar1 = fVar5;
      lVar3 = lVar3 + 0xf8;
      lVar4 = lVar4 + -0xf8;
    } while (lVar4 != 0);
  }
  return fVar1;
}



// FUNCTION 1405136b0 FUN_1405136b0 body=365 status=ok
// SIG undefined FUN_1405136b0(void)

ulonglong FUN_1405136b0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x84) != 0) {
    uVar1 = *(uint *)(param_1 + 0x80);
    lVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140513727;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       ((((int)plVar3[2] == *(int *)(param_1 + 0x84) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0))
        && ((longlong *)*plVar3 != (longlong *)0x0)))) {
      lVar2 = (**(code **)(*(longlong *)*plVar3 + 0x180))();
      goto LAB_140513727;
    }
  }
  lVar2 = 0;
LAB_140513727:
  if (*(longlong *)(param_1 + 0x98) != 0) {
    if (lVar2 == 0) {
      return 0;
    }
    if (0xfffffffd < *(int *)(param_1 + 0xa0) - 1U) {
      return 0;
    }
    if ((((*(byte *)(lVar2 + 0x155) & 0x20) == 0) && (*(longlong *)(param_1 + 0xb0) != 0)) &&
       (*(int *)(param_1 + 0xc4) != 0)) {
      uVar1 = *(uint *)(param_1 + 0xc0);
      if ((int)uVar1 < 0) {
        return 0;
      }
      if (DAT_14c9647dc <= (int)uVar1) {
        return 0;
      }
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0xc4))) &&
         ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
        if (*(char *)(param_1 + 0xc) != '\0') {
          return CONCAT71((uint7)(uint3)(*(uint *)(lVar2 + 8) >> 8),1);
        }
        if (*(int *)(param_1 + 0xcc) != 0) {
          uVar1 = *(uint *)(param_1 + 200);
          if ((int)uVar1 < 0) {
            return 0;
          }
          if (DAT_14c9647dc <= (int)uVar1) {
            return 0;
          }
          lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          if ((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0xcc))) {
            return (ulonglong)
                   CONCAT31((int3)(*(uint *)(lVar2 + 8) >> 8),
                            (*(uint *)(lVar2 + 8) & 0x10200000) == 0);
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14051381e FUN_14051381e body=120 status=ok
// SIG undefined FUN_14051381e(void)

void FUN_14051381e(longlong *param_1,uint param_2)

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



// FUNCTION 140513896 FUN_140513896 body=143 status=ok
// SIG undefined FUN_140513896(void)

void FUN_140513896(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 140513926 FUN_140513926 body=2675 status=ok
// SIG undefined FUN_140513926(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_140513926(undefined8 param_1,longlong *******param_2,longlong *******param_3)

{
  int *piVar1;
  longlong ******pppppplVar2;
  longlong *****ppppplVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *******ppppppplVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong *******ppppppplVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  longlong *******ppppppplVar18;
  uint uVar19;
  undefined8 unaff_RBP;
  longlong *******ppppppplVar20;
  longlong ******pppppplVar21;
  longlong *******ppppppplVar22;
  ulonglong uVar23;
  longlong *******ppppppplVar24;
  longlong *******ppppppplVar25;
  longlong *******ppppppplVar26;
  int iVar27;
  longlong lVar28;
  longlong *******ppppppplVar29;
  longlong *******ppppppplVar30;
  bool bVar31;
  float fVar32;
  undefined1 auStack_3d8 [40];
  longlong *******local_3b0;
  longlong *******local_3a8;
  longlong *******local_3a0;
  undefined8 local_398;
  int local_38c;
  longlong *******local_388;
  longlong *******local_380;
  longlong *******local_378;
  longlong *******ppppppplStack_370;
  longlong local_368;
  char local_360;
  undefined1 local_358 [4];
  undefined1 local_354;
  undefined1 local_350 [4];
  undefined1 local_34c;
  longlong *******local_348;
  longlong *******local_340;
  int local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  local_348 = param_2;
  FUN_1407c0a58(&local_368,&DAT_14cb1b328);
  ppppppplVar20 = (longlong *******)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (local_360 != '\0') goto LAB_140513c6e;
  local_338[0]._0_1_ = 0xff;
  FUN_140513334(&local_348);
  local_348 = (longlong *******)0x0;
  local_338[0] = (uint)local_338[0]._1_3_ << 8;
  FUN_140513298(param_1,&local_348);
  FUN_140513334(&local_348);
  pppppplVar2 = param_2[0x15];
  if ((pppppplVar2 == (longlong ******)0x0) ||
     ((*(byte *)((longlong)pppppplVar2 + 0x65) & 0x18) != 0x10)) {
    ppppppplVar20 = (longlong *******)0x0;
    goto LAB_140513c6e;
  }
  ppppppplVar9 = param_2 + 0xd2;
  if (*(char *)((longlong)param_3 + 4) != '\0') {
    ppppppplVar9 = param_3;
  }
  iVar5 = *(int *)ppppppplVar9;
  local_398 = param_1;
  if (iVar5 == 0) {
    if (param_2 == (longlong *******)0x0) {
      uVar15 = 0;
      uVar13 = 0;
    }
    else {
      uVar15 = *(uint *)((longlong)param_2 + 0xc);
      if ((int)uVar15 < DAT_14c9647dc) {
        lVar17 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
      }
      else {
        lVar17 = 0;
      }
      uVar19 = *(uint *)(lVar17 + 0x10);
      if (*(uint *)(lVar17 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        uVar16 = DAT_14c964868 + 1;
        bVar31 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar31) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar16);
        }
        LOCK();
        uVar19 = *(uint *)(lVar17 + 0x10);
        bVar31 = uVar19 == 0;
        if (bVar31) {
          *(uint *)(lVar17 + 0x10) = uVar16;
          uVar19 = 0;
        }
        UNLOCK();
        if (bVar31) {
          uVar19 = uVar16;
        }
      }
      uVar13 = (ulonglong)uVar19;
    }
    local_338[0]._0_1_ = 0xff;
    FUN_140513334(&local_348);
    local_338[0] = (uint)local_338[0]._1_3_ << 8;
    local_348 = (longlong *******)((ulonglong)uVar15 | uVar13 << 0x20);
    FUN_140513298(local_398,&local_348);
    FUN_140513334(&local_348);
    goto LAB_140513c6e;
  }
  local_3a0 = param_3;
  ppppppplVar9 = (longlong *******)FUN_14001cc68(0x30,0x10);
  ppppppplVar9[1] = (longlong ******)&DAT_100000001;
  *ppppppplVar9 = (longlong ******)&PTR_FUN_14ab67200;
  ppppppplVar9[2] = (longlong ******)0x0;
  ppppppplVar9[3] = (longlong ******)0x0;
  ppppppplVar9[4] = (longlong ******)0x0;
  ppppppplVar9[5] = (longlong ******)0x0;
  if (ppppppplVar9 != (longlong *******)0x0) {
    LOCK();
    *(int *)(ppppppplVar9 + 1) = *(int *)(ppppppplVar9 + 1) + 1;
    UNLOCK();
    LOCK();
    ppppppplVar29 = ppppppplVar9 + 1;
    *(int *)ppppppplVar29 = *(int *)ppppppplVar29 + -1;
    UNLOCK();
    if (*(int *)ppppppplVar29 == 0) {
      (*(code *)**ppppppplVar9)(ppppppplVar9);
      LOCK();
      piVar1 = (int *)((longlong)ppppppplVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*ppppppplVar9)[2])(ppppppplVar9);
      }
    }
  }
  local_388 = ppppppplVar9;
  if (param_2 == (longlong *******)0x0) {
    *(undefined4 *)(ppppppplVar9 + 5) = 0;
    uVar15 = 0;
  }
  else {
    uVar15 = *(uint *)((longlong)param_2 + 0xc);
    *(uint *)(ppppppplVar9 + 5) = uVar15;
    if ((int)uVar15 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    uVar15 = *(uint *)(lVar17 + 0x10);
    if (*(uint *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      uVar19 = DAT_14c964868 + 1;
      ppppppplVar20 = (longlong *******)(ulonglong)uVar19;
      bVar31 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar31) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      ppppppplVar20);
      }
      LOCK();
      uVar15 = *(uint *)(lVar17 + 0x10);
      bVar31 = uVar15 == 0;
      if (bVar31) {
        *(uint *)(lVar17 + 0x10) = uVar19;
        uVar15 = 0;
      }
      UNLOCK();
      if (bVar31) {
        uVar15 = uVar19;
      }
    }
  }
  ppppppplVar29 = local_388;
  *(uint *)((longlong)local_388 + 0x2c) = uVar15;
  *(undefined1 *)((longlong)local_388 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x694);
  *(undefined1 *)((longlong)local_388 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x695);
  local_338[0]._0_1_ = 0xff;
  local_3b0 = param_2;
  FUN_140513334(&local_348);
  if (ppppppplVar29 != (longlong *******)0x0) {
    LOCK();
    *(int *)(ppppppplVar29 + 1) = *(int *)(ppppppplVar29 + 1) + 1;
    UNLOCK();
  }
  local_380 = ppppppplVar29 + 3;
  ppppppplVar18 = (longlong *******)&local_348;
  local_338[0] = CONCAT31(local_338[0]._1_3_,1);
  local_348 = ppppppplVar9 + 2;
  local_340 = ppppppplVar29;
  FUN_140513298(local_398,ppppppplVar18);
  FUN_140513334(ppppppplVar18);
  ppppppplVar9 = local_3b0;
  if (iVar5 == 2) {
    local_378 = (longlong *******)0x0;
    ppppppplStack_370 = (longlong *******)0x0;
    uVar10 = FUN_1407be81e();
    plVar11 = (longlong *)FUN_144718840(pppppplVar2,uVar10);
    ppppppplVar9 = local_3b0;
    if (plVar11 == (longlong *)0x0) {
      ppppppplVar20 = (longlong *******)&local_378;
      FUN_1407be904(pppppplVar2,ppppppplVar20,0);
      uVar15 = (uint)ppppppplStack_370;
    }
    else {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      if (local_378 != (longlong *******)0x0) {
        FUN_1400020a8();
      }
      local_378 = local_348;
      ppppppplStack_370 = local_340;
      uVar15 = (uint)local_340;
    }
    ppppppplVar29 = local_378;
    if (1 < (int)uVar15) {
      memset(local_338,0,0x2f0);
      local_340 = ppppppplVar29 + ((ulonglong)uVar15 - 1);
      local_348 = ppppppplVar29;
      fVar32 = logf((float)(int)uVar15);
      local_338[0] = (int)(longlong)(fVar32 + fVar32);
      ppppppplVar9 = (longlong *******)local_338;
      do {
        ppppppplVar20 = (longlong *******)*ppppppplVar18;
        ppppppplVar24 = (longlong *******)ppppppplVar18[1];
        iVar5 = *(int *)(ppppppplVar18 + 2);
        iVar6 = (int)((ulonglong)((longlong)ppppppplVar24 - (longlong)ppppppplVar20) >> 3);
        uVar15 = iVar6 + 1;
        ppppppplVar22 = ppppppplVar20;
        ppppppplVar26 = ppppppplVar20;
        ppppppplVar29 = ppppppplVar24;
        local_3a8 = ppppppplVar18;
        if (iVar5 != 0) {
LAB_140513e43:
          if (8 < (int)uVar15) {
            pppppplVar2 = ppppppplVar22[uVar15 >> 1];
            ppppppplVar22[uVar15 >> 1] = *ppppppplVar22;
            *ppppppplVar22 = pppppplVar2;
            ppppppplVar18 = ppppppplVar29 + 1;
            ppppppplVar20 = ppppppplVar22;
            local_38c = iVar5;
            do {
              ppppppplVar9 = ppppppplVar20 + 1;
              ppppppplVar30 = ppppppplVar20 + 1;
              do {
                ppppppplVar20 = ppppppplVar30;
                ppppppplVar25 = ppppppplVar9;
                if (ppppppplVar29 < ppppppplVar20) break;
                ppppplVar3 = (*ppppppplVar22)[3];
                if ((int)ppppplVar3 == (int)(*ppppppplVar20)[3]) {
                  iVar5 = (int)((ulonglong)ppppplVar3 >> 0x20) -
                          (int)((ulonglong)(*ppppppplVar20)[3] >> 0x20);
                }
                else {
                  iVar5 = FUN_14002c2bd((ulonglong)ppppplVar3 & 0xffffffff);
                }
                ppppppplVar9 = ppppppplVar25 + 1;
                ppppppplVar30 = ppppppplVar20 + 1;
              } while (-1 < iVar5);
              ppppppplVar9 = ppppppplVar18 + -2;
              do {
                ppppppplVar30 = ppppppplVar18;
                ppppppplVar14 = ppppppplVar9;
                ppppppplVar18 = ppppppplVar30 + -1;
                if (ppppppplVar18 <= ppppppplVar22) break;
                ppppplVar3 = (*ppppppplVar18)[3];
                if ((int)ppppplVar3 == (int)(*ppppppplVar22)[3]) {
                  iVar5 = (int)((ulonglong)ppppplVar3 >> 0x20) -
                          (int)((ulonglong)(*ppppppplVar22)[3] >> 0x20);
                }
                else {
                  iVar5 = FUN_14002c2bd((ulonglong)ppppplVar3 & 0xffffffff);
                }
                ppppppplVar9 = ppppppplVar14 + -1;
              } while (-1 < iVar5);
              if (ppppppplVar18 < ppppppplVar20) goto LAB_140513f12;
              pppppplVar2 = *ppppppplVar20;
              *ppppppplVar20 = *ppppppplVar18;
              *ppppppplVar18 = pppppplVar2;
            } while( true );
          }
          for (; ppppppplVar20 = ppppppplVar9, ppppppplVar24 = ppppppplVar22,
              ppppppplVar18 = ppppppplVar22, ppppppplVar22 < ppppppplVar29;
              ppppppplVar29 = ppppppplVar29 + -1) {
            while (ppppppplVar20 = ppppppplVar24, ppppppplVar18 = ppppppplVar18 + 1,
                  ppppppplVar18 <= ppppppplVar29) {
              ppppplVar3 = (*ppppppplVar20)[3];
              if ((int)ppppplVar3 == (int)(*ppppppplVar18)[3]) {
                iVar5 = (int)((ulonglong)ppppplVar3 >> 0x20) -
                        (int)((ulonglong)(*ppppppplVar18)[3] >> 0x20);
              }
              else {
                iVar5 = FUN_14002c2bd((ulonglong)ppppplVar3 & 0xffffffff);
              }
              ppppppplVar24 = ppppppplVar18;
              if (-1 < iVar5) {
                ppppppplVar24 = ppppppplVar20;
              }
            }
            pppppplVar2 = *ppppppplVar20;
            *ppppppplVar20 = *ppppppplVar29;
            *ppppppplVar29 = pppppplVar2;
          }
          goto LAB_1405141f6;
        }
LAB_140513fb8:
        if (uVar15 != 0) {
          iVar5 = (iVar6 - (iVar6 + -1 >> 0x1f)) + -1 >> 1;
          iVar6 = iVar5;
joined_r0x000140513fd7:
          do {
            iVar8 = iVar5 * 2 + 1;
            if (iVar8 < (int)uVar15) {
              iVar27 = iVar5 * 2 + 2;
              if (iVar27 < (int)uVar15) {
                ppppplVar3 = ppppppplVar20[iVar27][3];
                if ((int)ppppplVar3 == (int)ppppppplVar20[iVar8][3]) {
                  iVar7 = (int)((ulonglong)ppppplVar3 >> 0x20) -
                          (int)((ulonglong)ppppppplVar20[iVar8][3] >> 0x20);
                }
                else {
                  iVar7 = FUN_14002c2bd((ulonglong)ppppplVar3 & 0xffffffff);
                }
                if (-1 < iVar7) {
                  iVar8 = iVar27;
                }
              }
              ppppplVar3 = ppppppplVar20[iVar5][3];
              if ((int)ppppplVar3 == (int)ppppppplVar20[iVar8][3]) {
                iVar27 = (int)((ulonglong)ppppplVar3 >> 0x20) -
                         (int)((ulonglong)ppppppplVar20[iVar8][3] >> 0x20);
              }
              else {
                iVar27 = FUN_14002c2bd((ulonglong)ppppplVar3 & 0xffffffff);
              }
              if (iVar27 < 0) {
                pppppplVar2 = ppppppplVar20[iVar5];
                ppppppplVar20[iVar5] = ppppppplVar20[iVar8];
                ppppppplVar20[iVar8] = pppppplVar2;
                iVar5 = iVar8;
                goto joined_r0x000140513fd7;
              }
            }
            bVar31 = iVar6 != 0;
            iVar5 = iVar6 + -1;
            iVar6 = iVar5;
          } while (bVar31);
          if (1 < (int)uVar15) {
            uVar13 = (ulonglong)uVar15;
            pppppplVar2 = *ppppppplVar20;
            *ppppppplVar20 = ppppppplVar20[uVar13 - 1];
            ppppppplVar20[uVar13 - 1] = pppppplVar2;
            if (uVar15 != 2) {
              do {
                uVar23 = uVar13 - 1;
                iVar5 = 0;
                iVar8 = 1;
                iVar6 = 0;
                do {
                  iVar5 = iVar5 + 2;
                  iVar27 = iVar8;
                  if ((longlong)iVar5 < (longlong)uVar23) {
                    ppppplVar3 = ppppppplVar20[iVar5][3];
                    if ((int)ppppplVar3 == (int)ppppppplVar20[iVar8][3]) {
                      iVar8 = (int)((ulonglong)ppppplVar3 >> 0x20) -
                              (int)((ulonglong)ppppppplVar20[iVar8][3] >> 0x20);
                    }
                    else {
                      iVar8 = FUN_14002c2bd((ulonglong)ppppplVar3 & 0xffffffff);
                    }
                    if (-1 < iVar8) {
                      iVar27 = iVar5;
                    }
                  }
                  ppppplVar3 = ppppppplVar20[iVar6][3];
                  if ((int)ppppplVar3 == (int)ppppppplVar20[iVar27][3]) {
                    iVar5 = (int)((ulonglong)ppppplVar3 >> 0x20) -
                            (int)((ulonglong)ppppppplVar20[iVar27][3] >> 0x20);
                  }
                  else {
                    iVar5 = FUN_14002c2bd((ulonglong)ppppplVar3 & 0xffffffff);
                  }
                  if (-1 < iVar5) break;
                  pppppplVar2 = ppppppplVar20[iVar6];
                  ppppppplVar20[iVar6] = ppppppplVar20[iVar27];
                  ppppppplVar20[iVar27] = pppppplVar2;
                  iVar5 = iVar27 * 2;
                  iVar8 = iVar27 * 2 + 1;
                  iVar6 = iVar27;
                } while ((longlong)iVar8 < (longlong)uVar23);
                pppppplVar2 = *ppppppplVar20;
                *ppppppplVar20 = ppppppplVar20[uVar13 - 2];
                ppppppplVar20[uVar13 - 2] = pppppplVar2;
                uVar13 = uVar23;
              } while (2 < uVar23);
            }
          }
        }
LAB_1405141f6:
        ppppppplVar18 = local_3a8 + -3;
        ppppppplVar9 = ppppppplVar20;
      } while (&local_348 <= ppppppplVar18);
      ppppppplVar9 = local_3b0;
      uVar15 = (uint)ppppppplStack_370;
    }
    ppppppplVar29 = local_378;
    if (uVar15 != 0) {
      lVar17 = 0;
      do {
        ppppppplVar20 = *(longlong ********)((longlong)ppppppplVar29 + lVar17);
        if (ppppppplVar20 != ppppppplVar9 && ppppppplVar20 != (longlong *******)0x0) {
          uVar10 = FUN_140c870ea(local_380);
          local_354 = 0;
          cVar4 = FUN_140513926(uVar10,ppppppplVar20,local_358);
          if (cVar4 == '\0') {
            if (local_378 != (longlong *******)0x0) {
              FUN_1400020a8();
            }
            goto LAB_1405142c2;
          }
        }
        lVar17 = lVar17 + 8;
      } while ((longlong)(int)uVar15 * 8 != lVar17);
    }
    if (local_378 != (longlong *******)0x0) {
      FUN_1400020a8(local_378);
    }
  }
  else if (iVar5 == 1) {
    if (local_3b0[0x16] == (longlong ******)0x0) {
      FUN_1448abda6(local_3b0);
    }
    if ((longlong)*(int *)(ppppppplVar9 + 0xd1) != 0) {
      pppppplVar21 = ppppppplVar9[0xd0];
      pppppplVar2 = pppppplVar21 + *(int *)(ppppppplVar9 + 0xd1);
      do {
        ppppplVar3 = *pppppplVar21;
        if (ppppplVar3 != (longlong *****)0x0) {
          if ((*(byte *)((longlong)ppppplVar3 + 0x65) & 0x18) != 0x10) goto LAB_1405142c2;
          uVar10 = FUN_1407be81e();
          plVar11 = (longlong *)(*(code *)(*ppppplVar3)[0x51])(ppppplVar3,uVar10);
          if (plVar11 != (longlong *)0x0) {
            uVar10 = FUN_1407be81e();
            plVar12 = (longlong *)FUN_144718840(plVar11,uVar10);
            if (plVar12 != (longlong *)0x0 && plVar11 != plVar12) {
              (**(code **)(*plVar12 + 0x10))(plVar12,&local_348);
              ppppppplVar20 = local_348;
              lVar17 = (longlong)(int)(uint)local_340;
              if (lVar17 == 0) {
                bVar31 = true;
              }
              else {
                lVar28 = 0;
                do {
                  ppppppplVar29 = *(longlong ********)((longlong)ppppppplVar20 + lVar28);
                  if (ppppppplVar29 != ppppppplVar9 && ppppppplVar29 != (longlong *******)0x0) {
                    uVar10 = FUN_140c870ea(local_380);
                    local_34c = 0;
                    cVar4 = FUN_140513926(uVar10,ppppppplVar29,local_350);
                    if (cVar4 == '\0') {
                      bVar31 = false;
                      goto LAB_140513c45;
                    }
                  }
                  lVar28 = lVar28 + 8;
                } while (lVar17 * 8 != lVar28);
                bVar31 = true;
              }
LAB_140513c45:
              ppppppplVar20 = local_348;
              if (local_348 != (longlong *******)0x0) {
                FUN_1400020a8(local_348);
              }
              if (!bVar31) goto LAB_1405142c2;
            }
          }
        }
        pppppplVar21 = pppppplVar21 + 1;
      } while (pppppplVar21 != pppppplVar2);
    }
  }
  uVar10 = local_398;
  cVar4 = FUN_140df06e2(local_398);
  param_3 = local_3a0;
  ppppppplVar20 = (longlong *******)CONCAT71((int7)((ulonglong)ppppppplVar20 >> 8),1);
  if (cVar4 != '\0') {
    FUN_14051314e(uVar10);
  }
  goto LAB_1405142c9;
LAB_140513f12:
  pppppplVar2 = *ppppppplVar22;
  *ppppppplVar22 = *ppppppplVar18;
  *ppppppplVar18 = pppppplVar2;
  iVar5 = local_38c + -1;
  ppppppplVar30 = ppppppplVar30 + -2;
  if ((longlong)ppppppplVar14 - (longlong)ppppppplVar26 <
      (longlong)ppppppplVar24 - (longlong)ppppppplVar25) {
    if (ppppppplVar20 < ppppppplVar29) {
      *local_3a8 = (longlong ******)ppppppplVar20;
      local_3a8[1] = (longlong ******)ppppppplVar29;
      *(int *)(local_3a8 + 2) = iVar5;
      local_3a8 = local_3a8 + 3;
    }
    ppppppplVar9 = ppppppplVar22;
    ppppppplVar25 = ppppppplVar22;
    ppppppplVar24 = ppppppplVar14;
    if (ppppppplVar18 <= ppppppplVar22 + 1) goto LAB_1405141f6;
  }
  else {
    if (ppppppplVar22 + 1 < ppppppplVar18) {
      *local_3a8 = (longlong ******)ppppppplVar22;
      local_3a8[1] = (longlong ******)ppppppplVar30;
      *(int *)(local_3a8 + 2) = iVar5;
      local_3a8 = local_3a8 + 3;
    }
    ppppppplVar9 = ppppppplVar20;
    ppppppplVar24 = ppppppplVar29;
    ppppppplVar30 = ppppppplVar29;
    if (ppppppplVar29 <= ppppppplVar20) goto LAB_1405141f6;
  }
  iVar6 = (int)((ulonglong)((longlong)ppppppplVar24 - (longlong)ppppppplVar25) >> 3);
  uVar15 = iVar6 + 1;
  ppppppplVar20 = ppppppplVar9;
  ppppppplVar22 = ppppppplVar9;
  ppppppplVar26 = ppppppplVar25;
  ppppppplVar29 = ppppppplVar30;
  if (iVar5 == 0) goto LAB_140513fb8;
  goto LAB_140513e43;
LAB_1405142c2:
  ppppppplVar20 = (longlong *******)0x0;
  param_3 = local_3a0;
LAB_1405142c9:
  ppppppplVar9 = local_388;
  if (local_388 != (longlong *******)0x0) {
    LOCK();
    ppppppplVar29 = local_388 + 1;
    *(int *)ppppppplVar29 = *(int *)ppppppplVar29 + -1;
    UNLOCK();
    if (*(int *)ppppppplVar29 == 0) {
      (*(code *)**local_388)(local_388);
      LOCK();
      piVar1 = (int *)((longlong)ppppppplVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*ppppppplVar9)[2])(ppppppplVar9);
      }
    }
  }
LAB_140513c6e:
  if (local_360 == '\0') {
    *(int *)(local_368 + 0x28) = *(int *)(local_368 + 0x28) + -1;
  }
  if (*(char *)((longlong)param_3 + 4) == '\x01') {
    *(undefined1 *)((longlong)param_3 + 4) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)ppppppplVar20 & 0xffffffff;
}



// FUNCTION 14051439a FUN_14051439a body=89 status=ok
// SIG undefined FUN_14051439a(void)

void FUN_14051439a(char *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  
  if (param_1[1] == '\0') {
    if (param_2[1] == '\x01') {
      cVar2 = *param_2;
    }
    else {
      cVar2 = '\x01';
      if (*param_1 == '\0') {
        cVar2 = (char)*(undefined4 *)param_2;
      }
    }
    *param_1 = cVar2;
  }
  if (param_1[3] == '\0') {
    bVar1 = param_2[2];
    bVar3 = bVar1;
    if ((param_2[3] == '\0') && (bVar3 = param_1[2], (byte)param_1[2] < bVar1)) {
      bVar3 = bVar1;
    }
    param_1[2] = bVar3;
  }
  if (param_1[8] == '\0') {
    param_1[8] = param_2[8];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return;
}



// FUNCTION 1405143f4 FUN_1405143f4 body=2048 status=ok
// SIG undefined FUN_1405143f4(void)

void FUN_1405143f4(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  undefined8 *puVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  longlong local_98 [5];
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 *local_68;
  int local_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140514d2a();
  *(undefined8 *)(param_1 + 0x20) = param_2[2];
  uVar6 = *(undefined4 *)((longlong)param_2 + 4);
  uVar7 = *(undefined4 *)(param_2 + 1);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 0x18) = uVar7;
  *(undefined4 *)(param_1 + 0x1c) = uVar8;
  if (param_2[3] == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    iVar10 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2[3] + 0xc);
    *(uint *)(param_1 + 0x28) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar10 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar10 = *(int *)(lVar15 + 0x10);
      bVar17 = iVar10 == 0;
      if (bVar17) {
        *(int *)(lVar15 + 0x10) = iVar14;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar10 = iVar14;
      }
    }
  }
  *(int *)(param_1 + 0x2c) = iVar10;
  uVar4 = param_2[4];
  if (*(longlong *)(param_1 + 0x38) == 0) {
    uVar11 = FUN_140927942();
    uVar11 = FUN_14477b664(uVar11);
    *(undefined8 *)(param_1 + 0x38) = uVar11;
  }
  lVar15 = FUN_140927942();
  uVar11 = FUN_140927942();
  FUN_1402d1bfa(local_98,uVar11,uVar4);
  if (*(longlong *)(param_1 + 0x30) != local_98[0]) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  *(longlong *)(param_1 + 0x30) = local_98[0];
  lVar12 = FUN_140927942();
  if (lVar15 == 0) {
LAB_1405144f2:
    lVar12 = lVar15;
  }
  else if (lVar12 == 0) {
    lVar12 = 0;
  }
  else if ((*(int *)(lVar12 + 0x38) <= *(int *)(lVar15 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
           lVar12 + 0x30)) goto LAB_1405144f2;
  if (*(longlong *)(param_1 + 0x38) != lVar12) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  uVar11 = FUN_14477b664(lVar12);
  lVar15 = FUN_14477b664(uVar11);
  *(longlong *)(param_1 + 0x38) = lVar15;
  if ((lVar15 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    *(undefined8 *)(param_1 + 0x40) = uVar4;
  }
  if (param_2[5] == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    iVar10 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2[5] + 0xc);
    *(uint *)(param_1 + 0x48) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar10 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar10 = *(int *)(lVar15 + 0x10);
      bVar17 = iVar10 == 0;
      if (bVar17) {
        *(int *)(lVar15 + 0x10) = iVar14;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar10 = iVar14;
      }
    }
  }
  *(int *)(param_1 + 0x4c) = iVar10;
  FUN_140cf06ca(param_1 + 0x50,param_2 + 6);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(param_2 + 0xe);
  if ((undefined1 *)((longlong)param_2 + 0x71) != (undefined1 *)(param_1 + 0x91)) {
    if (*(char *)((longlong)param_2 + 0x72) == '\x01') {
      *(undefined1 *)(param_1 + 0x91) = *(undefined1 *)((longlong)param_2 + 0x71);
      uVar9 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x92) != '\x01') goto LAB_1405145a7;
      uVar9 = 0;
    }
    *(undefined1 *)(param_1 + 0x92) = uVar9;
  }
LAB_1405145a7:
  puVar13 = param_2 + 0x10;
  puVar16 = (undefined8 *)(param_1 + 0xa0);
  for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
    *puVar16 = *puVar13;
    puVar13 = puVar13 + 1;
    puVar16 = puVar16 + 1;
  }
  if (param_2[0x1c] == 0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
    iVar10 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2[0x1c] + 0xc);
    *(uint *)(param_1 + 0x100) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar10 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar10 = *(int *)(lVar15 + 0x10);
      bVar17 = iVar10 == 0;
      if (bVar17) {
        *(int *)(lVar15 + 0x10) = iVar14;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar10 = iVar14;
      }
    }
  }
  *(int *)(param_1 + 0x104) = iVar10;
  if (param_2[0x1d] == 0) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    iVar10 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2[0x1d] + 0xc);
    *(uint *)(param_1 + 0x108) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar10 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar10 = *(int *)(lVar15 + 0x10);
      bVar17 = iVar10 == 0;
      if (bVar17) {
        *(int *)(lVar15 + 0x10) = iVar14;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar10 = iVar14;
      }
    }
  }
  *(int *)(param_1 + 0x10c) = iVar10;
  if (param_2[0x1e] == 0) {
    *(undefined4 *)(param_1 + 0x110) = 0;
    iVar10 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2[0x1e] + 0xc);
    *(uint *)(param_1 + 0x110) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar10 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar10 = *(int *)(lVar15 + 0x10);
      bVar17 = iVar10 == 0;
      if (bVar17) {
        *(int *)(lVar15 + 0x10) = iVar14;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar10 = iVar14;
      }
    }
  }
  *(int *)(param_1 + 0x114) = iVar10;
  uVar4 = param_2[0x1f];
  lVar15 = param_2[0x20];
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x118) = uVar4;
  *(longlong *)(param_1 + 0x120) = lVar15;
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
  *(undefined8 *)(param_1 + 0x128) = param_2[0x21];
  uVar4 = param_2[0x22];
  lVar15 = param_2[0x23];
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 0xc) = *(int *)(lVar15 + 0xc) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x138);
  *(undefined8 *)(param_1 + 0x130) = uVar4;
  *(longlong *)(param_1 + 0x138) = lVar15;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  iVar10 = *(int *)(param_1 + 0x308);
  *(uint *)(param_1 + 0x308) = iVar10 + 1U;
  if (*(uint *)(param_1 + 0x30c) < iVar10 + 1U) {
    FUN_147e2be5a(param_1 + 0x140,iVar10);
  }
  lVar15 = param_1 + 0x140;
  if (*(longlong *)(param_1 + 0x300) != 0) {
    lVar15 = *(longlong *)(param_1 + 0x300);
  }
  lVar12 = (longlong)iVar10 * 0x38;
  *(undefined8 *)(lVar15 + lVar12) = 0;
  *(undefined8 *)(lVar15 + 8 + lVar12) = param_2[4];
  *(undefined8 *)(lVar15 + 0x10 + lVar12) = *param_2;
  *(undefined8 *)(lVar15 + 0x18 + lVar12) = param_2[1];
  *(undefined4 *)(lVar15 + 0x20 + lVar12) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)(lVar15 + 0x24 + lVar12) = *(undefined1 *)((longlong)param_2 + 0x14);
  *(undefined8 *)(lVar15 + 0x28 + lVar12) = 0;
  *(undefined4 *)(lVar15 + 0x30 + lVar12) = 0;
  *(undefined4 *)(lVar15 + 0x2c + lVar12) = 0x44610000;
  if ((param_2[4] == 0) || (param_2[0x1f] != 0)) goto LAB_1405148a5;
  if (param_2[5] == 0) {
    puVar13 = (undefined8 *)(param_2[0x1c] + 0xa8);
    if (param_2[0x1c] == 0) {
      puVar13 = param_2 + 3;
    }
  }
  else {
    puVar13 = (undefined8 *)(param_2[5] + 0xa8);
  }
  local_98[1] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[4] = 0;
  local_70 = 0x10000;
  local_6c = 0;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_98[0] = param_2[4];
  FUN_140fb04f0(local_98,*puVar13);
  local_70._0_2_ = CONCAT11(1,(undefined1)local_70);
  FUN_140514bf6(local_98,param_2[5]);
  FUN_140514c90(local_98,param_2[0x1c]);
  FUN_140fb05f2(local_98,&local_40);
  plVar1 = local_38;
  *(undefined8 *)(param_1 + 0x118) = local_40;
  local_40 = 0;
  plVar5 = *(longlong **)(param_1 + 0x120);
  if (local_38 == plVar5) {
LAB_140514b18:
    plVar5 = local_38;
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
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
  else {
    local_38 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x120) = plVar1;
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
      goto LAB_140514b18;
    }
  }
  FUN_140861e20(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    if (local_68 == (undefined8 *)0x0) goto LAB_1405148a5;
    (**(code **)*local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    local_60 = 0;
  }
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1405148a5:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140514bf6 FUN_140514bf6 body=153 status=ok
// SIG undefined FUN_140514bf6(void)

longlong FUN_140514bf6(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x18) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0x1c) = iVar2;
  return param_1;
}



// FUNCTION 140514c90 FUN_140514c90 body=153 status=ok
// SIG undefined FUN_140514c90(void)

longlong FUN_140514c90(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x20) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0x24) = iVar2;
  return param_1;
}



// FUNCTION 140514d2a FUN_140514d2a body=905 status=ok
// SIG undefined FUN_140514d2a(void)

void FUN_140514d2a(undefined4 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  uint uStack_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  longlong lStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  char local_116;
  undefined8 local_108 [12];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0xffffffff;
  uStack_184 = uStack_184 & 0xffffff00;
  local_148 = (longlong *)0x0;
  local_118 = 0;
  local_116 = '\0';
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_160 = 0;
  lStack_158 = 0;
  puVar9 = &DAT_14c846480;
  puVar10 = local_108;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  local_88 = (longlong *)0x0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  *(ulonglong *)(param_1 + 8) = CONCAT44(uStack_184,0xffffffff);
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  if (*(longlong *)(param_1 + 0xc) != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  *(undefined8 *)(param_1 + 0xc) = 0;
  if (*(longlong *)(param_1 + 0xe) != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  uVar6 = FUN_14477b664(0);
  uVar6 = FUN_14477b664(uVar6);
  *(undefined8 *)(param_1 + 0xe) = uVar6;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  local_68 = *(longlong *)(param_1 + 0x14);
  uStack_60 = *(undefined8 *)(param_1 + 0x16);
  local_58 = *(longlong **)(param_1 + 0x18);
  uStack_50 = *(undefined8 *)(param_1 + 0x1a);
  local_48 = *(undefined8 *)(param_1 + 0x1c);
  uStack_40 = *(undefined8 *)(param_1 + 0x1e);
  local_38 = *(undefined8 *)(param_1 + 0x20);
  uStack_30 = *(undefined8 *)(param_1 + 0x22);
  uVar4 = local_48;
  uVar5 = uStack_40;
  uVar3 = uStack_50;
  uVar6 = uStack_60;
  *(undefined8 *)(param_1 + 0x20) = local_128;
  *(undefined8 *)(param_1 + 0x22) = uStack_120;
  *(ulonglong *)(param_1 + 0x1c) = CONCAT44(uStack_134,local_138);
  *(ulonglong *)(param_1 + 0x1e) = CONCAT44(uStack_12c,uStack_130);
  *(longlong **)(param_1 + 0x18) = local_148;
  *(ulonglong *)(param_1 + 0x1a) = CONCAT44(uStack_13c,uStack_140);
  *(longlong *)(param_1 + 0x14) = lStack_158;
  *(ulonglong *)(param_1 + 0x16) = CONCAT44(uStack_14c,uStack_150);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_128 = local_38;
  uStack_120 = uStack_30;
  local_138 = (undefined4)local_48;
  uStack_134 = local_48._4_4_;
  uStack_130 = (undefined4)uStack_40;
  uStack_12c = uStack_40._4_4_;
  uStack_140 = (undefined4)uStack_50;
  uStack_13c = uStack_50._4_4_;
  uStack_150 = (undefined4)uStack_60;
  uStack_14c = uStack_60._4_4_;
  *(undefined1 *)(param_1 + 0x24) = 0;
  lStack_158 = local_68;
  local_148 = local_58;
  uStack_60 = uVar6;
  uStack_50 = uVar3;
  local_48 = uVar4;
  uStack_40 = uVar5;
  if (&local_198 == (undefined8 *)(param_1 + 4)) {
    puVar9 = local_108;
    puVar10 = (undefined8 *)(param_1 + 0x28);
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined8 *)(param_1 + 0x4a) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x42) = 0;
    *(undefined8 *)(param_1 + 0x44) = 0;
  }
  else {
    if (*(char *)((longlong)param_1 + 0x92) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x92) = 0;
    }
    puVar9 = local_108;
    puVar10 = (undefined8 *)(param_1 + 0x28);
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined8 *)(param_1 + 0x44) = 0;
    *(undefined8 *)(param_1 + 0x46) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x42) = 0;
    uStack_90 = 0;
    plVar8 = *(longlong **)(param_1 + 0x48);
    if (plVar8 != (longlong *)0x0) {
      local_88 = (longlong *)0x0;
      *(undefined8 *)(param_1 + 0x48) = 0;
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
    *(undefined8 *)(param_1 + 0x4a) = uStack_80;
    *(undefined8 *)(param_1 + 0x4c) = local_78;
    local_78 = 0;
    plVar8 = *(longlong **)(param_1 + 0x4e);
    *(longlong **)(param_1 + 0x4e) = plStack_70;
    plStack_70 = (longlong *)0x0;
    if (plVar8 == (longlong *)0x0) goto LAB_140514f5b;
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plStack_70 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plStack_70 + 0x10))();
    }
  }
LAB_140514f5b:
  plVar8 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_116 == '\x01') {
    local_116 = '\0';
  }
  if (lStack_158 != 0) {
    plVar8 = local_148;
    if (local_148 == (longlong *)0x0) {
      plVar8 = (longlong *)&local_138;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((int)param_1[0xc3] < 0) {
    param_1[0xc2] = 0;
    FUN_147e2bee0(param_1 + 0x50);
  }
  else {
    param_1[0xc2] = 0;
  }
  *param_1 = 0;
  if ((local_28 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405150b4 FUN_1405150b4 body=1448 status=ok
// SIG undefined FUN_1405150b4(void)

undefined8 * FUN_1405150b4(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x84) == 0) {
LAB_14051545f:
    plVar16 = (longlong *)0x0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x80);
    plVar16 = (longlong *)0x0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar12 == (undefined8 *)0x0) ||
         ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x84) ||
          ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_14051545f;
      plVar16 = (longlong *)*puVar12;
    }
  }
  if (*(int *)(param_1 + 0xc4) == 0) {
LAB_140515467:
    lVar11 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0xc0);
    lVar11 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != *(int *)(param_1 + 0xc4) || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)
          ))) goto LAB_140515467;
      lVar11 = *plVar9;
    }
  }
  if (*(int *)(param_1 + 0xcc) == 0) {
LAB_14051546e:
    lVar13 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 200);
    lVar13 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != *(int *)(param_1 + 0xcc) || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)
          ))) goto LAB_14051546e;
      lVar13 = *plVar9;
    }
  }
  if (lVar11 == 0) {
    local_58 = 0;
    plStack_50 = (longlong *)0x0;
LAB_1405155cd:
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0xffffffff;
    *(undefined1 *)((longlong)param_2 + 0x72) = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
  }
  else {
    FUN_1448c1924(lVar11,&local_58);
    lVar11 = local_58;
    if (((((plVar16 == (longlong *)0x0) || (local_58 == 0)) ||
         ((lVar13 == 0 && (*(char *)(param_1 + 0xc) == '\0')))) ||
        ((*(int *)(param_1 + 0x8c) != 0 &&
         ((((uVar2 = *(uint *)(param_1 + 0x88), (int)uVar2 < 0 || (DAT_14c9647dc <= (int)uVar2)) ||
           (lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar7 == 0)) ||
          ((*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x8c) ||
           ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)))))))) ||
       ((*(int *)(param_1 + 0x94) != 0 &&
        (((uVar2 = *(uint *)(param_1 + 0x90), (int)uVar2 < 0 || (DAT_14c9647dc <= (int)uVar2)) ||
         ((lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar7 == 0 ||
          ((*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x94) ||
           ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)))))))))) goto LAB_1405155cd;
    lVar7 = FUN_1400d690e(param_1 + 0x98);
    if (lVar7 != 0) {
      param_2[8] = 0;
      uVar15 = 0;
      *(undefined1 *)(param_2 + 0xe) = 0;
      *(undefined1 *)((longlong)param_2 + 0x72) = 0;
      local_68 = param_2 + 0x10;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      puVar12 = &DAT_14c846480;
      puVar14 = local_68;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar14 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar14 = puVar14 + 1;
      }
      param_2[0x22] = 0;
      param_2[0x23] = 0;
      param_2[0x20] = 0;
      param_2[0x21] = 0;
      param_2[0x1e] = 0;
      param_2[0x1f] = 0;
      param_2[0x1c] = 0;
      param_2[0x1d] = 0;
      uVar3 = *(undefined4 *)(lVar11 + 0x17c);
      uVar4 = *(undefined4 *)(lVar11 + 0x1c);
      uVar5 = *(undefined4 *)(lVar11 + 0x20);
      uVar6 = *(undefined4 *)(lVar11 + 0x24);
      *(undefined4 *)param_2 = *(undefined4 *)(lVar11 + 0x18);
      *(undefined4 *)((longlong)param_2 + 4) = uVar4;
      *(undefined4 *)(param_2 + 1) = uVar5;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
      *(undefined4 *)(param_2 + 2) = uVar3;
      *(undefined1 *)((longlong)param_2 + 0x14) = 1;
      param_2[4] = lVar7;
      local_60 = lVar13;
      uVar8 = (**(code **)(*plVar16 + 0x180))(plVar16);
      param_2[3] = uVar8;
      *(undefined1 *)(param_2 + 0xe) = 1;
      FUN_140cf06ca(param_2 + 6,param_1 + 0xe0);
      if (*(int *)(param_1 + 0x8c) != 0) {
        uVar2 = *(uint *)(param_1 + 0x88);
        uVar15 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar12 = (undefined8 *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((puVar12 == (undefined8 *)0x0) ||
             ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x8c) ||
              ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) {
            uVar15 = 0;
          }
          else {
            uVar15 = *puVar12;
          }
        }
      }
      param_2[0x1d] = uVar15;
      if (*(int *)(param_1 + 0x94) == 0) {
LAB_140515475:
        uVar15 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x90);
        uVar15 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar12 = (undefined8 *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((puVar12 == (undefined8 *)0x0) ||
             ((*(int *)(puVar12 + 2) != *(int *)(param_1 + 0x94) ||
              ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)))) goto LAB_140515475;
          uVar15 = *puVar12;
        }
      }
      param_2[0x1e] = uVar15;
      uVar15 = *(undefined8 *)(param_1 + 0xb0);
      lVar11 = *(longlong *)(param_1 + 0xb8);
      if (lVar11 != 0) {
        LOCK();
        *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
        UNLOCK();
      }
      plVar16 = (longlong *)param_2[0x20];
      param_2[0x1f] = uVar15;
      param_2[0x20] = lVar11;
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar16 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      param_2[0x21] = *(undefined8 *)(param_1 + 0xd0);
      if (*(char *)(param_1 + 0xc) == '\x01') {
        puVar12 = (undefined8 *)(param_1 + 0x20);
        puVar14 = local_68;
        for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
      }
      else {
        puVar12 = (undefined8 *)(local_60 + 0x240);
        puVar14 = local_68;
        for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar14 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        }
        param_2[0x1c] = local_60;
      }
      goto LAB_140515420;
    }
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[0xe] = 0;
    param_2[0xf] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0xffffffff;
    param_2[8] = 0;
    *(undefined1 *)((longlong)param_2 + 0x72) = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
  }
  puVar12 = &DAT_14c846480;
  puVar14 = param_2 + 0x10;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar14 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar14 = puVar14 + 1;
  }
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
LAB_140515420:
  plVar16 = plStack_50;
  if (plStack_50 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_50 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_50)(plStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140515662 FUN_140515662 body=1470 status=ok
// SIG undefined FUN_140515662(void)

void FUN_140515662(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 uVar16;
  ulonglong unaff_R12;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 *puVar20;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined8 local_240;
  wchar_t *local_238;
  code *local_230;
  undefined1 *local_228;
  code **local_220;
  code *local_218;
  code *local_210;
  uint local_1fc;
  longlong local_1f8;
  longlong *local_1f0;
  code *local_1e8;
  longlong *local_1e0;
  undefined1 local_1d8 [384];
  undefined1 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong uVar10;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  plVar1 = (longlong *)(param_1 + 0x1d0);
  iVar3 = *(int *)(param_1 + 0x1e8);
  lVar19 = (longlong)iVar3;
  if (lVar19 != 0) {
    plVar15 = *(longlong **)(param_1 + 0x1e0);
    if (*(longlong **)(param_1 + 0x1e0) == (longlong *)0x0) {
      plVar15 = plVar1;
    }
    bVar5 = true;
    if ((*plVar15 != 0) && (plVar15[1] != 0)) {
      bVar5 = *(int *)(plVar15[1] + 8) < 1;
    }
    local_1f8 = -lVar19;
    local_1f0 = plVar15 + 3;
    iVar14 = 0;
    iVar7 = 0;
LAB_14051597e:
    do {
      if (iVar7 + 1 < iVar3) {
        lVar11 = (longlong)iVar7;
        lVar18 = lVar11 + 2;
        plVar8 = local_1f0 + lVar11 * 2;
        unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),1);
        lVar13 = -1;
        do {
          iVar12 = (int)lVar13;
          if ((plVar8[-1] == 0) || (*plVar8 == 0)) {
            if (!bVar5) {
              iVar17 = iVar7 - iVar12;
              iVar12 = -iVar12;
              goto LAB_140515bd3;
            }
          }
          else if ((bool)(*(int *)(*plVar8 + 8) < 1 ^ bVar5)) {
            iVar17 = iVar7 - iVar12;
            break;
          }
          unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),lVar18 < lVar19);
          lVar13 = lVar13 + -1;
          lVar18 = lVar18 + 1;
          plVar8 = plVar8 + 2;
          iVar17 = iVar3;
        } while (local_1f8 + lVar11 != lVar13);
      }
      else {
        unaff_R12 = 0;
        iVar17 = iVar7 + 1;
      }
      iVar12 = iVar17 - iVar7;
      if (bVar5) {
        FUN_14092a11b(plVar15 + (longlong)iVar7 * 2,iVar12);
        bVar5 = false;
        iVar7 = iVar17;
        if ((unaff_R12 & 1) == 0) break;
        goto LAB_14051597e;
      }
LAB_140515bd3:
      if (iVar14 != iVar7) {
        local_1fc = (uint)unaff_R12;
        memmove(plVar15 + (longlong)iVar14 * 2,plVar15 + (longlong)iVar7 * 2,(longlong)iVar12 << 4);
        unaff_R12 = (ulonglong)local_1fc;
      }
      iVar14 = iVar14 + iVar12;
      bVar5 = true;
      iVar7 = iVar17;
    } while ((unaff_R12 & 1) != 0);
    *(int *)(param_1 + 0x1e8) = iVar14;
    if (iVar14 != 0) goto LAB_140515908;
  }
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  uVar10 = 0;
  uVar9 = 0;
  if (((((*(int *)(param_1 + 0x110) != 0) && (uVar4 = *(uint *)(param_1 + 0x10c), -1 < (int)uVar4))
       && ((int)uVar4 < DAT_14c9647dc)) &&
      ((plVar15 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)), uVar10 = uVar9,
       plVar15 != (longlong *)0x0 && ((int)plVar15[2] == *(int *)(param_1 + 0x110))))) &&
     (((*(uint *)(plVar15 + 1) & 0x10200000) == 0 &&
      (plVar15 = (longlong *)*plVar15, plVar15 != (longlong *)0x0)))) {
    (**(code **)(*plVar15 + 0xae8))(plVar15,local_1d8);
    uVar10 = local_50 & 0xffffffff;
  }
  FUN_14092a0d6(plVar1,uVar10);
  if (*(int *)(param_1 + 0x100) == 0) {
LAB_1405159d5:
    lVar19 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0xfc);
    lVar19 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      plVar15 = (longlong *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar15 != (longlong *)0x0) &&
         ((((int)plVar15[2] == *(int *)(param_1 + 0x100) &&
           ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)) && (lVar19 = *plVar15, lVar19 != 0)))) {
        if (DAT_14cae8b20 == 0) {
          local_220 = &local_1e8;
          local_1e8 = (code *)&LAB_14355090c;
          local_210 = FUN_14081d0ea;
          local_218 = FUN_14081d0ea;
          local_228 = &LAB_147b8e16d;
          local_230 = (code *)&LAB_140810a38;
          local_238 = L"Engine";
          local_240 = 0x800000000;
          local_248 = 0x10000000;
          local_250 = 8;
          local_258 = 0x3f0;
          FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
        }
        lVar18 = DAT_14cae8b20;
        if (DAT_14c951858 == 0) {
          local_220 = &local_1e8;
          local_1e8 = FUN_1449e2820;
          local_210 = FUN_14081d0ea;
          local_218 = FUN_14081d0ea;
          local_228 = &LAB_1468c5283;
          local_230 = FUN_142809da0;
          local_238 = L"Engine";
          local_240 = 0x400000000;
          local_248 = 0x10000000;
          local_250 = 8;
          local_258 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar11 = *(longlong *)(lVar19 + 0x20);
        if (lVar11 != 0) {
          iVar3 = *(int *)(lVar18 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < iVar3) ||
               (lVar19 = lVar11,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar3 * 8) !=
               lVar18 + 0x30)) {
              lVar19 = 0;
            }
          } while ((lVar19 == 0) && (lVar11 = *(longlong *)(lVar11 + 0x20), lVar11 != 0));
          goto LAB_1405157f8;
        }
      }
      goto LAB_1405159d5;
    }
  }
LAB_1405157f8:
  puVar20 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar20 = local_1d8;
  }
  if ((longlong)(int)local_50 != 0) {
    lVar18 = (longlong)(int)local_50 * 0x18;
    do {
      plVar15 = (longlong *)FUN_1400d690e(puVar20);
      if (plVar15 == (longlong *)0x0) {
LAB_14051586a:
        uVar16 = 10;
      }
      else {
        cVar6 = (**(code **)(*plVar15 + 0x80))(plVar15);
        if (cVar6 == '\0') {
          cVar6 = (**(code **)(*plVar15 + 0x88))(plVar15);
          if (cVar6 == '\0') goto LAB_14051586a;
          uVar16 = 0x1e;
        }
        else {
          uVar16 = 0x8c;
        }
      }
      FUN_140699a3c(&local_1e8,puVar20,lVar19,uVar16);
      iVar3 = *(int *)(param_1 + 0x1e8);
      *(uint *)(param_1 + 0x1e8) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x1ec) < iVar3 + 1U) {
        FUN_147e28664(plVar1,iVar3);
      }
      plVar15 = local_1e0;
      plVar8 = *(longlong **)(param_1 + 0x1e0);
      if (*(longlong **)(param_1 + 0x1e0) == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      plVar8[(longlong)iVar3 * 2] = (longlong)local_1e8;
      plVar8[(longlong)iVar3 * 2 + 1] = (longlong)local_1e0;
      if (local_1e0 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)local_1e0 + 0xc) = *(int *)((longlong)local_1e0 + 0xc) + 1;
        UNLOCK();
        if (local_1e0 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_1e0 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*local_1e0)(local_1e0);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
      puVar20 = puVar20 + 0x18;
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != 0);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_140515908:
  if ((local_48 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140515c22 FUN_140515c22 body=128 status=ok
// SIG undefined FUN_140515c22(void)

void FUN_140515c22(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x9d8) != 0) && (*(int *)(param_1 + 0x9e0) - 1U < 0xfffffffe)) {
    iVar1 = *(int *)(param_2 + 0x188);
    lVar3 = (longlong)iVar1;
    *(uint *)(param_2 + 0x188) = iVar1 + 1U;
    if (*(uint *)(param_2 + 0x18c) < iVar1 + 1U) {
      FUN_147e27f58(param_2,iVar1);
    }
    lVar2 = *(longlong *)(param_2 + 0x180);
    if (*(longlong *)(param_2 + 0x180) == 0) {
      lVar2 = param_2;
    }
    *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x9d8);
    *(undefined4 *)(lVar2 + 8 + lVar3 * 0x18) = *(undefined4 *)(param_1 + 0x9e0);
    *(undefined8 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  }
  return;
}



// FUNCTION 140515ca2 FUN_140515ca2 body=372 status=ok
// SIG undefined FUN_140515ca2(void)

void FUN_140515ca2(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar11 = (longlong)iVar1;
  if (lVar11 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar5 = *(longlong *)*param_2;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    iVar9 = 0;
    bVar10 = *plVar2 == lVar5;
    iVar6 = 0;
    do {
      lVar12 = (longlong)iVar6;
      iVar7 = iVar6;
      lVar5 = lVar12;
      iVar4 = iVar6 + 1;
      if (iVar6 + 1 < iVar1) {
        iVar4 = iVar1;
      }
      do {
        lVar5 = lVar5 + 1;
        iVar8 = iVar4;
        if (lVar11 <= lVar5) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar7;
      } while (bVar10 == (plVar2[lVar5] == lVar3));
      if (bVar10 == false) {
        if (iVar9 != iVar6) {
          memmove(plVar2 + iVar9,plVar2 + lVar12,(longlong)(iVar8 - iVar6) << 3);
        }
        iVar9 = iVar9 + (iVar8 - iVar6);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar6 = iVar8;
    } while (lVar5 < lVar11);
    *(int *)(param_1 + 1) = iVar9;
  }
  return;
}



// FUNCTION 140515e16 FUN_140515e16 body=65 status=ok
// SIG undefined FUN_140515e16(void)

longlong * FUN_140515e16(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14001cc68(0xb0,0x10);
  FUN_140515e58(lVar1,param_1);
  *param_2 = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 140515e58 FUN_140515e58 body=358 status=ok
// SIG undefined FUN_140515e58(void)

undefined8 * FUN_140515e58(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x808;
  *param_1 = &PTR_FUN_149f51c30;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  pvVar2 = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_14051609c(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 0x18);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 0x38);
  pvVar2 = *(void **)(param_2 + 0x30);
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1405161ea(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 0xc);
  }
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)((longlong)param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  *(undefined4 *)((longlong)param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  *(undefined8 *)((longlong)param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
  uVar10 = *(undefined8 *)(param_2 + 0x80);
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  param_1[0x10] = uVar10;
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  uVar3 = *(undefined4 *)(param_2 + 0x94);
  uVar4 = *(undefined4 *)(param_2 + 0x98);
  uVar5 = *(undefined4 *)(param_2 + 0x9c);
  uVar6 = *(undefined4 *)(param_2 + 0xa0);
  uVar7 = *(undefined4 *)(param_2 + 0xa4);
  uVar8 = *(undefined4 *)(param_2 + 0xa8);
  uVar9 = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
  *(undefined4 *)(param_1 + 0x13) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar5;
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar7;
  *(undefined4 *)(param_1 + 0x15) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar9;
  FUN_140515fbe(param_1 + 0xb,param_2 + 0x58);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return param_1;
}



// FUNCTION 140515fbe FUN_140515fbe body=220 status=ok
// SIG undefined FUN_140515fbe(void)

void FUN_140515fbe(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [38];
  undefined1 local_22;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 != 0) {
    FUN_1401fa6bc(param_1,&local_22,&local_21);
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
  }
  cVar1 = *(char *)(param_2 + 1);
  if (cVar1 == '\x01') {
    lVar2 = FUN_14001cc68(0x50,0x10);
    FUN_140516338(lVar2,*param_2);
  }
  else if (cVar1 == '\x02') {
    lVar2 = FUN_14001cc68(0x50,0x10);
    FUN_140516878(lVar2,*param_2);
  }
  else {
    if (cVar1 != '\x03') goto LAB_14051600c;
    lVar2 = FUN_14001cc68(0x50,0x10);
    FUN_146d85536(lVar2,*param_2);
  }
  *param_1 = lVar2;
  cVar1 = *(char *)(param_2 + 1);
LAB_14051600c:
  *(char *)(param_1 + 1) = cVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14051609c FUN_14051609c body=334 status=ok
// SIG undefined FUN_14051609c(void)

void FUN_14051609c(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14051610e;
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
LAB_14051610e:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1405161ea FUN_1405161ea body=334 status=ok
// SIG undefined FUN_1405161ea(void)

void FUN_1405161ea(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14051625c;
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
LAB_14051625c:
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



// FUNCTION 140516338 FUN_140516338 body=379 status=ok
// SIG undefined FUN_140516338(void)

undefined8 * FUN_140516338(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1405164b4(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_14051672e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 3);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_14004b486(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_1405165f0(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 1405164b4 FUN_1405164b4 body=315 status=ok
// SIG undefined FUN_1405164b4(void)

void FUN_1405164b4(longlong param_1,int param_2,int param_3)

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
    uVar5 = (longlong)param_2 * 2;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140516521;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
      }
    }
LAB_140516521:
    iVar4 = (int)(uVar5 >> 1);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,2,1);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1405165f0 FUN_1405165f0 body=317 status=ok
// SIG undefined FUN_1405165f0(void)

void FUN_1405165f0(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14051665e;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
      }
    }
LAB_14051665e:
    iVar4 = (int)(uVar5 >> 2);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,4,1);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14051672e FUN_14051672e body=329 status=ok
// SIG undefined FUN_14051672e(void)

void FUN_14051672e(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 3;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14051679c;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,1);
      }
    }
LAB_14051679c:
    iVar5 = (int)(uVar4 / 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,3,1);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140516878 FUN_140516878 body=391 status=ok
// SIG undefined FUN_140516878(void)

undefined8 * FUN_140516878(undefined8 *param_1,undefined8 *param_2)

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
    FUN_140516b3c(param_1,iVar1,0);
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
    FUN_140516db8(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 6);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_140516a00(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_14004d600(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_140516c7a(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 140516a00 FUN_140516a00 body=315 status=ok
// SIG undefined FUN_140516a00(void)

void FUN_140516a00(longlong param_1,int param_2,int param_3)

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
    uVar5 = (longlong)param_2 * 2;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140516a6d;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
      }
    }
LAB_140516a6d:
    iVar4 = (int)(uVar5 >> 1);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,2,2);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140516b3c FUN_140516b3c body=317 status=ok
// SIG undefined FUN_140516b3c(void)

void FUN_140516b3c(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140516baa;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
      }
    }
LAB_140516baa:
    iVar4 = (int)(uVar5 >> 2);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,4,2);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140516c7a FUN_140516c7a body=317 status=ok
// SIG undefined FUN_140516c7a(void)

void FUN_140516c7a(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140516ce8;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
      }
    }
LAB_140516ce8:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,2);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140516db8 FUN_140516db8 body=333 status=ok
// SIG undefined FUN_140516db8(void)

void FUN_140516db8(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 6;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140516e29;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,2);
      }
    }
LAB_140516e29:
    iVar5 = (int)(uVar4 / 6);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,6,2);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140516f06 FUN_140516f06 body=35 status=ok
// SIG undefined FUN_140516f06(void)

undefined8 FUN_140516f06(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140516f2a();
  }
  return uVar1;
}



// FUNCTION 140516f2a FUN_140516f2a body=130 status=ok
// SIG undefined FUN_140516f2a(void)

undefined4
FUN_140516f2a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined1 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446dcdd4(local_58);
  local_68 = param_5;
  uVar1 = FUN_14014191c(param_1,local_58,param_3,param_4);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140516fae FUN_140516fae body=172 status=ok
// SIG undefined FUN_140516fae(void)

void FUN_140516fae(longlong param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x78,0,0);
  local_28 = -(ulonglong)((uint)*(ulonglong *)(param_1 + 0x10) & 1) & *(ulonglong *)(param_1 + 0x10)
             & 0xfffffffffffffffe;
  if ((DAT_14c950c29 == '\x01') && (local_28 != 0)) {
    FUN_1456cec3c();
  }
  else if (local_28 == 0) goto LAB_14051702b;
  (**(code **)(*param_2 + 0x88))(param_2,&local_28,0,0);
  if (local_28 == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
LAB_14051702b:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14051705c FUN_14051705c body=175 status=ok
// SIG undefined FUN_14051705c(void)

void FUN_14051705c(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar3 = *param_2;
  if ((lVar3 != 0) && (lVar3 != *(longlong *)(param_1 + 0x10))) {
    uVar1 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    if (((*(uint *)(lVar6 + 8) >> 0x19 & 1) == 0) && (DAT_14c9647bc < (int)uVar1)) {
      plVar4 = *(longlong **)(param_1 + 0x18);
      lVar6 = *plVar4;
      iVar2 = (int)plVar4[1];
      lVar5 = (longlong)iVar2;
      if (lVar5 != 0) {
        lVar7 = 0;
        do {
          if (*(longlong *)(lVar6 + lVar7) == lVar3) {
            return;
          }
          lVar7 = lVar7 + 8;
        } while (lVar5 * 8 - lVar7 != 0);
      }
      *(uint *)(plVar4 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
        FUN_1447f76d2(plVar4,iVar2);
        lVar6 = *plVar4;
      }
      *(longlong *)(lVar6 + lVar5 * 8) = *param_2;
    }
  }
  return;
}



// FUNCTION 14051710c FUN_14051710c body=433 status=ok
// SIG undefined FUN_14051710c(void)

void FUN_14051710c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1409e12a0;
      local_40 = 0;
      local_48 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1405172be(param_1,local_28);
  *param_3 = uVar4;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405172be FUN_1405172be body=74 status=ok
// SIG undefined FUN_1405172be(void)

bool FUN_1405172be(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x70);
    lVar2 = (longlong)*(int *)(param_1 + 0x78) * 0x28;
    do {
      if ((longlong *)*plVar1 == (longlong *)0x0) {
        lVar3 = 0;
      }
      else {
        lVar3 = *(longlong *)*plVar1;
      }
      if (lVar3 == param_2) {
        if (plVar1 != (longlong *)0x0) {
          return (bool)(char)plVar1[3];
        }
        break;
      }
      plVar1 = plVar1 + 5;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
  return DAT_14cb711b8 == param_2;
}



// FUNCTION 140517308 FUN_140517308 body=318 status=ok
// SIG undefined FUN_140517308(void)

void FUN_140517308(void)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  undefined8 uStack_40;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  lVar3 = DAT_14caec570;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  DAT_14caec578 = DAT_14caec578 + -1;
  if ((DAT_14caec578 != 0) || (DAT_14caec570 == 0)) goto LAB_1405173b3;
  if (DAT_14c87e718 == '\0') {
    iVar2 = *(int *)(DAT_14caec570 + 0x1c);
    if (2 < iVar2) {
      bVar4 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0);
      if (bVar4 < 3) {
        local_48.QuadPart = 0x20100000001;
        uStack_40 = 0x30100000101;
        local_38 = DAT_14c7585c8;
        local_34 = DAT_14c7585c8 | 0x200;
        local_30 = DAT_14c7585c8 | 0x100;
        local_2c = DAT_14c7585c8 | 0x300;
        local_28 = 0;
        uStack_24 = 0x200;
        uStack_20 = 0x100;
        uStack_1c = 0x300;
        if (*(byte *)((longlong)&local_48 + (ulonglong)(iVar2 - 3) * 4) == bVar4)
        goto LAB_14051744e;
      }
    }
    QueryPerformanceCounter(&local_48);
    uStack_40 = 0xffffffffffffffff;
    FUN_140056092(lVar3,&local_48);
  }
  else {
LAB_14051744e:
    FUN_140082318(lVar3);
  }
  lVar3 = DAT_14caec570;
  DAT_14caec570 = 0;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
    }
  }
LAB_1405173b3:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14051745c FUN_14051745c body=550 status=ok
// SIG undefined FUN_14051745c(void)

longlong * FUN_14051745c(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  longlong *lpTlsValue;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  *param_1 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
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
    lpTlsValue = TlsGetValue(DAT_14c896140);
    if (lpTlsValue == (longlong *)0x0) {
      lpTlsValue = (longlong *)FUN_14001cc68(0x18,0x10);
      *lpTlsValue = 0;
      lpTlsValue[1] = 0;
      *(undefined4 *)(lpTlsValue + 2) = 0;
      TlsSetValue(DAT_14c896140,lpTlsValue);
    }
    if ((int)lpTlsValue[2] < 0x100) {
      lVar5 = lpTlsValue[1];
    }
    else {
      lVar5 = *lpTlsValue;
      if (lVar5 != 0) {
        uVar2 = FUN_14493c560();
        if (uVar2 == 0) {
          uVar3 = 0;
          uVar7 = 0;
          lVar6 = 0;
        }
        else {
          uVar7 = (ulonglong)(uVar2 >> 0xe);
          uVar3 = uVar2 & 0x3fff;
          lVar6 = (ulonglong)(uVar3 * 0x18) + *(longlong *)(&DAT_14c833b00 + uVar7 * 8);
        }
        *(longlong *)(lVar6 + 8) = lVar5;
        do {
          uVar1 = DAT_14c896180;
          uVar4 = (DAT_14c896180 & 0xfffffffffc000000) + 0x4000000;
          if (uVar4 >> 0x1a < DAT_14c896180 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          if (uVar2 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = *(longlong *)(&DAT_14c833b00 + uVar7 * 8) + (ulonglong)(uVar3 * 0x18);
          }
          *(uint *)(lVar5 + 0x10) = (uint)uVar1 & 0x3ffffff;
          LOCK();
          bVar8 = uVar1 != DAT_14c896180;
          uVar1 = uVar4 | uVar2;
          if (bVar8) {
            uVar1 = DAT_14c896180;
          }
          DAT_14c896180 = uVar1;
          UNLOCK();
        } while (bVar8);
      }
      *lpTlsValue = lpTlsValue[1];
      *(undefined4 *)(lpTlsValue + 2) = 0;
      lVar5 = 0;
    }
    *param_1 = lVar5;
    lpTlsValue[1] = (longlong)param_1;
    *(int *)(lpTlsValue + 2) = (int)lpTlsValue[2] + 1;
  }
  return param_1;
}



// FUNCTION 140517682 FUN_140517682 body=1117 status=ok
// SIG undefined FUN_140517682(void)

void FUN_140517682(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
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
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  void *_Src;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  undefined1 auStack_138 [32];
  undefined **local_118;
  undefined1 local_110;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  longlong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_f8 = 0;
  uStack_f0 = 0;
  lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
  plVar18 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
  if (plVar18 == (longlong *)0x0) {
    iVar23 = *(int *)(lVar21 + 200);
  }
  else {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
    iVar23 = *(int *)(lVar21 + 200);
    LOCK();
    plVar19 = plVar18 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
  plVar18 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
  if (*(int *)(param_1 + 0x770) == iVar23) {
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
      UNLOCK();
      iVar23 = *(int *)(param_1 + 0x770);
    }
    local_110 = 0;
    local_118 = &PTR_LAB_149f6b350;
    local_108 = (void *)0x0;
    _Src = *(void **)(param_1 + 0x768);
    local_100 = iVar23;
    if (iVar23 == 0) {
      local_fc = 0;
    }
    else {
      FUN_144756262(&local_108,iVar23,0);
      memcpy(local_108,_Src,(longlong)iVar23 * 0x60);
    }
    local_118 = &PTR_LAB_149f6b2c0;
    FUN_146eb774f(&local_118,lVar21 + 0x110,&local_f8);
    local_118 = &PTR_LAB_149f6b350;
    if (local_108 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (plVar18 == (longlong *)0x0) goto LAB_1405177b6;
  }
  else {
    if (plVar18 == (longlong *)0x0) {
      FUN_140517ae0(lVar21 + 0xb0,lVar21 + 0x110,&local_f8);
      goto LAB_1405177b6;
    }
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
    lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x660) + 0x218);
    plVar19 = *(longlong **)(*(longlong *)(param_1 + 0x660) + 0x220);
    if (plVar19 == (longlong *)0x0) {
      FUN_140517ae0(lVar22 + 0xb0,lVar21 + 0x110,&local_f8);
    }
    else {
      LOCK();
      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
      UNLOCK();
      FUN_140517ae0(lVar22 + 0xb0,lVar21 + 0x110,&local_f8);
      LOCK();
      plVar1 = plVar19 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar19)(plVar19);
        LOCK();
        piVar2 = (int *)((longlong)plVar19 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
  }
  LOCK();
  plVar19 = plVar18 + 1;
  *(int *)plVar19 = (int)*plVar19 + -1;
  UNLOCK();
  if ((int)*plVar19 == 0) {
    (**(code **)*plVar18)(plVar18);
    LOCK();
    piVar2 = (int *)((longlong)plVar18 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar18 + 0x10))(plVar18);
    }
  }
LAB_1405177b6:
  FUN_140491ce0(param_2,uStack_f0 & 0xffffffff,1);
  if (0 < (int)uStack_f0) {
    lVar21 = 0x3c;
    lVar22 = 0;
    do {
      dVar3 = *(double *)(local_f8 + -0x70 + lVar21 * 2);
      dVar4 = *(double *)(local_f8 + -0x68 + lVar21 * 2);
      dVar5 = *(double *)(local_f8 + -0x60 + lVar21 * 2);
      dVar6 = *(double *)(local_f8 + -0x58 + lVar21 * 2);
      dVar7 = *(double *)(local_f8 + -0x50 + lVar21 * 2);
      dVar8 = *(double *)(local_f8 + -0x48 + lVar21 * 2);
      dVar9 = *(double *)(local_f8 + -0x40 + lVar21 * 2);
      dVar10 = *(double *)(local_f8 + -0x38 + lVar21 * 2);
      dVar11 = *(double *)(local_f8 + -0x30 + lVar21 * 2);
      dVar12 = *(double *)(local_f8 + -0x28 + lVar21 * 2);
      dVar13 = *(double *)(local_f8 + -0x20 + lVar21 * 2);
      dVar14 = *(double *)(local_f8 + -0x18 + lVar21 * 2);
      dVar15 = *(double *)(local_f8 + -0x10 + lVar21 * 2);
      dVar16 = *(double *)(local_f8 + -8 + lVar21 * 2);
      dVar17 = *(double *)(local_f8 + lVar21 * 2);
      lVar20 = *param_2;
      *(float *)(lVar20 + -0x3c + lVar21) = (float)*(double *)(local_f8 + -0x78 + lVar21 * 2);
      *(float *)(lVar20 + -0x38 + lVar21) = (float)dVar3;
      *(float *)(lVar20 + -0x34 + lVar21) = (float)dVar4;
      *(float *)(lVar20 + -0x30 + lVar21) = (float)dVar5;
      *(float *)(lVar20 + -0x2c + lVar21) = (float)dVar6;
      *(float *)(lVar20 + -0x28 + lVar21) = (float)dVar7;
      *(float *)(lVar20 + -0x24 + lVar21) = (float)dVar8;
      *(float *)(lVar20 + -0x20 + lVar21) = (float)dVar9;
      *(float *)(lVar20 + -0x1c + lVar21) = (float)dVar10;
      *(float *)(lVar20 + -0x18 + lVar21) = (float)dVar11;
      *(float *)(lVar20 + -0x14 + lVar21) = (float)dVar12;
      *(float *)(lVar20 + -0x10 + lVar21) = (float)dVar13;
      *(float *)(lVar20 + -0xc + lVar21) = (float)dVar14;
      *(float *)(lVar20 + -8 + lVar21) = (float)dVar15;
      *(float *)(lVar20 + -4 + lVar21) = (float)dVar16;
      *(float *)(lVar20 + lVar21) = (float)dVar17;
      lVar22 = lVar22 + 1;
      lVar21 = lVar21 + 0x40;
    } while (lVar22 < (int)uStack_f0);
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140517ae0 FUN_140517ae0 body=213 status=ok
// SIG undefined FUN_140517ae0(void)

void FUN_140517ae0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = (**(code **)(*param_1 + 0x60))();
  local_48 = (void *)0x0;
  uStack_40 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    FUN_1401c3474(&local_48);
  }
  uVar2 = 0;
  memset(local_48,0,(longlong)(int)uVar1);
  FUN_1405181c4(param_3,uVar1,0);
  if (0 < (int)uVar1) {
    do {
      local_58 = 0;
      local_50 = param_3;
      FUN_140517bb6(uVar2,param_2,param_1,&local_48);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140517bb6 FUN_140517bb6 body=1332 status=ok
// SIG undefined FUN_140517bb6(void)

void FUN_140517bb6(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5,longlong *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  undefined1 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  double *pdVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_2e8 [40];
  longlong local_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  undefined8 uStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  double local_238 [16];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined1 local_130 [64];
  undefined1 *local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (*(char *)(*param_4 + (longlong)(int)param_1) == '\0') {
    local_f0 = (undefined1 *)0x0;
    local_e8 = 0x1000000000;
    cVar8 = FUN_1405180eb(param_1,param_2,param_4,local_130);
    if ((cVar8 != '\0') && ((int)local_e8 != 0)) {
      do {
        puVar9 = local_f0;
        if (local_f0 == (undefined1 *)0x0) {
          puVar9 = local_130;
        }
        lVar12 = (longlong)*(int *)(puVar9 + (longlong)(int)local_e8 * 4 + -4);
        local_e8 = CONCAT44(local_e8._4_4_,(int)local_e8 + -1);
        lVar11 = *(longlong *)(param_3 + 0x10);
        local_2c0 = lVar12 * 3;
        lVar10 = lVar12 * 0x30;
        uVar2 = *(undefined8 *)(lVar11 + 0x20 + lVar10);
        dVar15 = (double)(float)uVar2;
        dVar18 = (double)(float)((ulonglong)uVar2 >> 0x20);
        dVar20 = (double)(float)*(undefined8 *)(lVar11 + 0x28 + lVar10);
        iVar4 = *(int *)(*(longlong *)(param_2 + 0x10) + lVar12 * 4);
        uVar2 = *(undefined8 *)(lVar11 + 0x10 + lVar10);
        dVar17 = (double)(float)*(undefined8 *)(lVar11 + lVar10);
        dVar19 = (double)(float)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20);
        uVar3 = *(undefined8 *)(lVar11 + 8 + lVar10);
        dVar7 = (double)(float)uVar3;
        dVar16 = (double)(float)((ulonglong)uVar3 >> 0x20);
        dVar21 = dVar19 + dVar19;
        dVar22 = dVar7 + dVar7;
        dVar5 = (dVar17 + dVar17) * dVar17;
        dVar23 = (dVar17 + dVar17) * dVar16;
        dVar6 = (dVar22 * dVar19 - dVar23) * dVar20;
        local_1b8 = (1.0 - (dVar22 * dVar7 + dVar21 * dVar19)) * dVar15;
        dStack_1b0 = (dVar21 * dVar17 + dVar22 * dVar16) * dVar15;
        local_1a8 = (dVar17 * dVar22 - dVar21 * dVar16) * dVar15;
        uStack_1a0 = 0;
        local_198 = (dVar21 * dVar17 - dVar22 * dVar16) * dVar18;
        dStack_190 = (1.0 - (dVar22 * dVar7 + dVar5)) * dVar18;
        local_188 = (dVar22 * dVar19 + dVar23) * dVar18;
        uStack_180 = 0;
        local_178._8_4_ = SUB84(dVar6,0);
        local_178._0_8_ = (dVar17 * dVar22 + dVar21 * dVar16) * dVar20;
        local_178._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        local_168 = (1.0 - (dVar5 + dVar21 * dVar19)) * dVar20;
        uStack_160 = 0;
        local_158 = (double)(float)uVar2;
        dStack_150 = (double)(float)((ulonglong)uVar2 >> 0x20);
        local_148 = (double)(float)*(undefined8 *)(lVar11 + 0x18 + lVar10);
        uStack_140 = 0x3ff0000000000000;
        if (iVar4 != DAT_14c75f3b2) {
          FUN_1447fea8d(&local_1b8,&local_1b8,(longlong)iVar4 * 0x80 + *param_6);
        }
        if (param_5 == 0) {
          lVar11 = 0x10;
          pdVar13 = &local_1b8;
          pdVar14 = (double *)(lVar12 * 0x80 + *param_6);
        }
        else {
          lVar11 = *(longlong *)(param_5 + 0x10);
          lVar10 = local_2c0 * 0x20;
          dVar6 = *(double *)(lVar11 + lVar10);
          dVar7 = ((double *)(lVar11 + lVar10))[1];
          dVar5 = *(double *)(lVar11 + 0x10 + lVar10);
          pdVar13 = (double *)(lVar11 + 0x40 + lVar10);
          local_2a8 = *pdVar13;
          local_298 = pdVar13[1];
          dStack_270 = *(double *)(lVar11 + 0x50 + lVar10);
          dVar15 = dVar7 + dVar7;
          dVar16 = dVar5 + dVar5;
          dVar21 = dVar6 * (dVar6 + dVar6);
          local_2b8 = (1.0 - (dVar5 * dVar16 + dVar7 * dVar15)) * local_2a8;
          dStack_290 = (1.0 - (dVar5 * dVar16 + dVar21)) * local_298;
          local_268 = (1.0 - (dVar21 + dVar7 * dVar15)) * dStack_270;
          dVar5 = *(double *)(lVar11 + lVar10) * dVar16;
          pdVar13 = (double *)(lVar11 + 0x18 + lVar10);
          dVar21 = *pdVar13;
          dVar17 = dVar16 * dVar21;
          dVar19 = (dVar6 + dVar6) * *pdVar13;
          dVar21 = dVar15 * dVar21;
          dStack_2b0 = (dVar15 * dVar6 + dVar17) * local_2a8;
          local_288 = (dVar16 * dVar7 + dVar19) * local_298;
          local_278 = (dVar21 + dVar5) * dStack_270;
          local_2a8 = (dVar5 - dVar21) * local_2a8;
          local_298 = (dVar15 * dVar6 - dVar17) * local_298;
          dStack_270 = (dVar16 * dVar7 - dVar19) * dStack_270;
          uStack_2a0 = 0;
          uStack_280 = 0;
          uStack_260 = 0;
          puVar1 = (undefined8 *)(lVar11 + 0x20 + lVar10);
          local_258 = *puVar1;
          uStack_250 = puVar1[1];
          local_248 = *(undefined8 *)(lVar11 + 0x30 + lVar10);
          uStack_240 = 0x3ff0000000000000;
          FUN_1447fea8d(local_238,&local_2b8,&local_1b8);
          pdVar14 = (double *)(lVar12 * 0x80 + *param_6);
          lVar11 = 0x10;
          pdVar13 = local_238;
        }
        for (; lVar11 != 0; lVar11 = lVar11 + -1) {
          *pdVar14 = *pdVar13;
          pdVar13 = pdVar13 + 1;
          pdVar14 = pdVar14 + 1;
        }
        *(undefined1 *)(*param_4 + lVar12) = 1;
      } while ((int)local_e8 != 0);
    }
    if (local_f0 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405180eb FUN_1405180eb body=216 status=ok
// SIG undefined FUN_1405180eb(void)

undefined8 FUN_1405180eb(undefined4 param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  iVar1 = *(int *)(param_4 + 0x48);
  *(uint *)(param_4 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_4 + 0x4c) < iVar1 + 1U) {
    FUN_1401fcbb6(param_4,iVar1);
  }
  lVar5 = *(longlong *)(param_4 + 0x40);
  if (*(longlong *)(param_4 + 0x40) == 0) {
    lVar5 = param_4;
  }
  *(undefined4 *)(lVar5 + (longlong)iVar1 * 4) = param_1;
  iVar4 = (**(code **)(*param_2 + 0x60))(param_2);
  iVar1 = *(int *)(param_4 + 0x48);
  while( true ) {
    if (iVar4 < iVar1) {
      return 0;
    }
    lVar5 = *(longlong *)(param_4 + 0x40);
    lVar6 = lVar5;
    if (lVar5 == 0) {
      lVar6 = param_4;
    }
    iVar2 = *(int *)(lVar6 + (longlong)(iVar1 + -1) * 4);
    iVar3 = *(int *)(param_2[2] + (longlong)iVar2 * 4);
    uVar7 = CONCAT71((int7)(int3)((uint)iVar2 >> 8),1);
    if ((longlong)iVar3 == -1) break;
    if (*(char *)(*param_3 + (longlong)iVar3) != '\0') {
      return uVar7;
    }
    *(uint *)(param_4 + 0x48) = iVar1 + 1U;
    if (*(uint *)(param_4 + 0x4c) < iVar1 + 1U) {
      FUN_1401fcbb6(param_4,iVar1);
      lVar5 = *(longlong *)(param_4 + 0x40);
    }
    if (lVar5 == 0) {
      lVar5 = param_4;
    }
    *(int *)(lVar5 + (longlong)iVar1 * 4) = iVar3;
    iVar1 = *(int *)(param_4 + 0x48);
  }
  return uVar7;
}



// FUNCTION 1405181c4 FUN_1405181c4 body=78 status=ok
// SIG undefined FUN_1405181c4(void)

void FUN_1405181c4(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140518214();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_141063fe8();
      return;
    }
  }
  return;
}



// FUNCTION 140518214 FUN_140518214 body=255 status=ok
// SIG undefined FUN_140518214(void)

void FUN_140518214(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x1ffffffffffffff) * 8]];
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 7)) {
      uVar3 = uVar4 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140518314 FUN_140518314 body=546 status=ok
// SIG undefined FUN_140518314(void)

ulonglong FUN_140518314(uint param_1,undefined8 param_2,undefined8 *param_3,ulonglong *param_4,
                       undefined8 *param_5,ulonglong param_6,int param_7,int param_8,
                       undefined8 *param_9)

{
  char cVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  ulonglong local_c0;
  int local_b8;
  int local_b0;
  undefined8 *local_a8;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_1 == 0) goto LAB_140518507;
  puVar3 = (undefined4 *)((longlong)(int)(~DAT_14c99ff5c & param_1) * 0xc + DAT_14c99ff38);
  puVar5 = (undefined8 *)((longlong)param_5 + param_6 + 1 >> 1);
  if ((longlong)param_3 << ((byte)param_7 & 0x3f) < 0) {
LAB_140518431:
    local_78 = *param_9;
    local_c8 = &local_78;
    local_70 = param_9[1];
    cVar1 = FUN_142b0f92a(puVar3[1],param_2,param_3,param_4);
    if (cVar1 != '\0') {
      uVar2 = *param_4;
      if (param_6 <= *param_4) {
        uVar2 = param_6;
      }
      if (-1 < (longlong)(uVar2 << ((byte)param_7 & 0x3f))) goto LAB_140518507;
      if (param_7 == param_8) {
        local_c8 = &local_88;
        local_80 = param_9[1];
        local_88 = *param_9;
        cVar1 = FUN_142b0f92a(puVar3[2],param_2,param_3,param_4);
      }
      else {
        local_a8 = &local_98;
        local_90 = param_9[1];
        local_b8 = param_7 + 1;
        if (param_3 < puVar5) {
          param_3 = puVar5;
        }
        local_b0 = param_8;
        local_c0 = param_6;
        local_c8 = puVar5;
        local_98 = *param_9;
        cVar1 = FUN_140518314(puVar3[2],param_2,param_3,param_4);
      }
      if (cVar1 != '\0') goto LAB_140518507;
    }
  }
  else {
    if (param_7 == param_8) {
      local_c8 = &local_58;
      local_50 = param_9[1];
      local_58 = *param_9;
      cVar1 = FUN_142b0f92a(*puVar3,param_2,param_3,param_4);
    }
    else {
      local_a8 = &local_68;
      local_60 = param_9[1];
      local_b8 = param_7 + 1;
      local_c0 = (longlong)puVar5 - 1;
      local_b0 = param_8;
      local_c8 = param_5;
      local_68 = *param_9;
      cVar1 = FUN_140518314(*puVar3,param_2,param_3,param_4);
    }
    if (cVar1 != '\0') goto LAB_140518431;
  }
  uVar4 = 0;
LAB_140518507:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140518537 FUN_140518537 body=412 status=ok
// SIG undefined FUN_140518537(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140518537(uint *param_1,longlong *param_2,uint param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  FUN_14125829a((param_5 - param_4) + 1);
  lVar1 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & param_3) * 0x30;
  uVar5 = *(ulonglong *)(*param_2 + lVar1) & 0xffffffffffff;
  lVar1 = *(longlong *)(*param_2 + 8 + lVar1);
  uVar8 = (ulonglong)param_4;
  while( true ) {
    uVar7 = DAT_14c99ff40;
    uVar3 = *param_1;
    if (uVar3 == 0) {
      if ((longlong)DAT_14c99ff50 == 0) {
        DAT_14c99ff40 = DAT_14c99ff40 + 1;
        if (DAT_14c99ff44 < DAT_14c99ff40) {
          FUN_14629f588(uVar7);
        }
      }
      else {
        uVar7 = *(uint *)(DAT_14c99ff48 + -4 + (longlong)DAT_14c99ff50 * 4);
        DAT_14c99ff50 = DAT_14c99ff50 + -1;
        FUN_14479f406(&DAT_14c99ff48);
      }
      lVar4 = DAT_14c99ff38;
      *(undefined8 *)(DAT_14c99ff38 + (longlong)(int)uVar7 * 0xc) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)(int)uVar7 * 0xc) = 0;
      uVar3 = uVar7 | _DAT_14c99ff58;
      *param_1 = uVar3;
    }
    uVar2 = uVar5 << ((byte)uVar8 & 0x3f) & 0x8000000000000000;
    uVar6 = lVar1 + uVar5 + -1 << ((byte)uVar8 & 0x3f) & 0x8000000000000000;
    lVar4 = (longlong)(int)(~DAT_14c99ff5c & uVar3) * 0xc + DAT_14c99ff38;
    if ((uVar2 != uVar6) || (param_5 <= uVar8)) break;
    uVar8 = uVar8 + 1;
    param_1 = (uint *)(lVar4 + (uVar2 >> 0x3c));
  }
  uVar5 = 4;
  if (uVar2 == uVar6) {
    uVar5 = uVar2 >> 0x3c;
  }
  *(undefined4 *)
   (*param_2 + 0x24 + (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & param_3) * 0x30) =
       *(undefined4 *)(lVar4 + uVar5);
  *(uint *)(lVar4 + uVar5) = param_3;
  return;
}



// FUNCTION 1405186d3 FUN_1405186d3 body=412 status=ok
// SIG undefined FUN_1405186d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405186d3(uint *param_1,longlong *param_2,uint param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  FUN_14125829a((param_5 - param_4) + 1);
  lVar1 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & param_3) * 0x30;
  uVar5 = *(ulonglong *)(*param_2 + lVar1) & 0xffffffffffff;
  lVar1 = *(longlong *)(*param_2 + 8 + lVar1);
  uVar8 = (ulonglong)param_4;
  while( true ) {
    uVar7 = DAT_14c99ff40;
    uVar3 = *param_1;
    if (uVar3 == 0) {
      if ((longlong)DAT_14c99ff50 == 0) {
        DAT_14c99ff40 = DAT_14c99ff40 + 1;
        if (DAT_14c99ff44 < DAT_14c99ff40) {
          FUN_14629f588(uVar7);
        }
      }
      else {
        uVar7 = *(uint *)(DAT_14c99ff48 + -4 + (longlong)DAT_14c99ff50 * 4);
        DAT_14c99ff50 = DAT_14c99ff50 + -1;
        FUN_14479f406(&DAT_14c99ff48);
      }
      lVar4 = DAT_14c99ff38;
      *(undefined8 *)(DAT_14c99ff38 + (longlong)(int)uVar7 * 0xc) = 0;
      *(undefined4 *)(lVar4 + 8 + (longlong)(int)uVar7 * 0xc) = 0;
      uVar3 = uVar7 | _DAT_14c99ff58;
      *param_1 = uVar3;
    }
    uVar2 = uVar5 << ((byte)uVar8 & 0x3f) & 0x8000000000000000;
    uVar6 = lVar1 + uVar5 + -1 << ((byte)uVar8 & 0x3f) & 0x8000000000000000;
    lVar4 = (longlong)(int)(~DAT_14c99ff5c & uVar3) * 0xc + DAT_14c99ff38;
    if ((uVar2 != uVar6) || (param_5 <= uVar8)) break;
    uVar8 = uVar8 + 1;
    param_1 = (uint *)(lVar4 + (uVar2 >> 0x3c));
  }
  uVar5 = 4;
  if (uVar2 == uVar6) {
    uVar5 = uVar2 >> 0x3c;
  }
  *(undefined4 *)
   (*param_2 + 0x20 + (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & param_3) * 0x30) =
       *(undefined4 *)(lVar4 + uVar5);
  *(uint *)(lVar4 + uVar5) = param_3;
  return;
}



// FUNCTION 14051886f FUN_14051886f body=828 status=ok
// SIG undefined FUN_14051886f(void)

undefined8
FUN_14051886f(uint param_1,longlong *param_2,ulonglong param_3,ulonglong param_4,ulonglong param_5,
             ulonglong param_6,int param_7,int param_8,undefined8 *param_9)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  ulonglong local_b0;
  int local_a8;
  int local_a0;
  code **local_98;
  uint *local_88;
  ulonglong local_80;
  longlong local_78;
  code *local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar5 = 1;
  if (param_1 == 0) goto LAB_140518b7e;
  local_78 = param_4 << ((byte)param_7 & 0x3f);
  local_88 = (uint *)((longlong)(int)(~DAT_14c99ff5c & param_1) * 0xc + DAT_14c99ff38);
  local_80 = param_5 + param_6 + 1 >> 1;
  if ((longlong)(param_3 << ((byte)param_7 & 0x3f)) < 0) {
LAB_1405189ff:
    uVar4 = local_88[1];
    if (uVar4 != 0) {
      pcVar1 = (code *)*param_9;
      uVar5 = param_9[1];
      do {
        lVar2 = *param_2;
        lVar7 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & uVar4) * 0x30;
        uVar6 = *(ulonglong *)(lVar2 + lVar7) & 0xffffffffffff;
        if (((uVar6 <= param_4) && (param_3 <= (uVar6 + *(longlong *)(lVar2 + 8 + lVar7)) - 1)) &&
           (local_4c = uVar4, cVar3 = (*pcVar1)(uVar5,&local_4c), cVar3 == '\0'))
        goto LAB_140518b7c;
        uVar4 = *(uint *)(lVar2 + lVar7 + 0x24);
      } while (uVar4 != 0);
    }
    if (local_78 < 0) {
      pcVar1 = (code *)*param_9;
      if (param_7 == param_8) {
        uVar4 = local_88[2];
        if (uVar4 != 0) {
          uVar5 = param_9[1];
          do {
            lVar2 = *param_2;
            lVar7 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & uVar4) * 0x30;
            uVar6 = *(ulonglong *)(lVar2 + lVar7) & 0xffffffffffff;
            if (((uVar6 <= param_4) && (param_3 <= (uVar6 + *(longlong *)(lVar2 + 8 + lVar7)) - 1))
               && (local_4c = uVar4, cVar3 = (*pcVar1)(uVar5,&local_4c), cVar3 == '\0'))
            goto LAB_140518b7c;
            uVar4 = *(uint *)(lVar2 + lVar7 + 0x24);
          } while (uVar4 != 0);
        }
      }
      else {
        local_98 = &local_70;
        local_68 = param_9[1];
        local_a8 = param_7 + 1;
        if (param_3 < local_80) {
          param_3 = local_80;
        }
        local_a0 = param_8;
        local_b0 = param_6;
        local_b8 = local_80;
        local_70 = pcVar1;
        cVar3 = FUN_14051886f(local_88[2],param_2,param_3,param_4);
        if (cVar3 == '\0') goto LAB_140518b7c;
      }
    }
    uVar5 = 1;
  }
  else {
    pcVar1 = (code *)*param_9;
    if (param_7 == param_8) {
      uVar4 = *local_88;
      if (uVar4 != 0) {
        uVar5 = param_9[1];
        do {
          lVar2 = *param_2;
          lVar7 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & uVar4) * 0x30;
          uVar6 = *(ulonglong *)(lVar2 + lVar7) & 0xffffffffffff;
          if (((uVar6 <= param_4) && (param_3 <= (uVar6 + *(longlong *)(lVar2 + 8 + lVar7)) - 1)) &&
             (local_4c = uVar4, cVar3 = (*pcVar1)(uVar5,&local_4c), cVar3 == '\0'))
          goto LAB_140518b7c;
          uVar4 = *(uint *)(lVar2 + lVar7 + 0x24);
        } while (uVar4 != 0);
      }
      goto LAB_1405189ff;
    }
    local_98 = &local_60;
    local_58 = param_9[1];
    local_a8 = param_7 + 1;
    local_b0 = local_80 - 1;
    uVar6 = local_b0;
    if (param_4 < local_b0) {
      uVar6 = param_4;
    }
    local_a0 = param_8;
    local_b8 = param_5;
    local_60 = pcVar1;
    cVar3 = FUN_14051886f(*local_88,param_2,param_3,uVar6);
    if (cVar3 != '\0') goto LAB_1405189ff;
LAB_140518b7c:
    uVar5 = 0;
  }
LAB_140518b7e:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140518bac FUN_140518bac body=1212 status=ok
// SIG undefined FUN_140518bac(void)

void FUN_140518bac(uint *param_1,longlong *param_2,ulonglong param_3,ulonglong param_4,
                  ulonglong param_5,ulonglong param_6,int param_7,int param_8,undefined8 *param_9)

{
  ulonglong *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  ulonglong local_c0;
  int local_b8;
  int local_b0;
  code **local_a8;
  uint *local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong local_80;
  uint *local_78;
  code *local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*param_1 == 0) goto LAB_140519032;
  local_80 = param_4 << ((byte)param_7 & 0x3f);
  local_98 = (uint *)((longlong)(int)(*param_1 & ~DAT_14c99ff5c) * 0xc + DAT_14c99ff38);
  local_88 = param_5 + param_6 + 1 >> 1;
  local_90 = param_3;
  local_78 = param_1;
  if (-1 < (longlong)(param_3 << ((byte)param_7 & 0x3f))) {
    pcVar3 = (code *)*param_9;
    if (param_7 == param_8) {
      uVar6 = *local_98;
      if (uVar6 != 0) {
        uVar4 = param_9[1];
        puVar8 = local_98;
        do {
          lVar7 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & uVar6) * 0x30;
          puVar1 = (ulonglong *)(*param_2 + lVar7);
          puVar11 = (uint *)((longlong)puVar1 + 0x24);
          uVar10 = *puVar1 & 0xffffffffffff;
          uVar2 = *puVar11;
          if ((uVar10 <= param_4) && (param_3 <= (*(longlong *)(*param_2 + 8 + lVar7) + uVar10) - 1)
             ) {
            local_4c = uVar6;
            cVar5 = (*pcVar3)(uVar4,&local_4c);
            param_3 = local_90;
            if (cVar5 == '\0') {
              uVar2 = *puVar11;
            }
            else {
              *puVar8 = uVar2;
              puVar11 = puVar8;
            }
          }
          uVar6 = uVar2;
          puVar8 = puVar11;
        } while (uVar6 != 0);
      }
    }
    else {
      local_a8 = &local_60;
      local_58 = param_9[1];
      local_b8 = param_7 + 1;
      local_c0 = local_88 - 1;
      uVar10 = local_c0;
      if (param_4 < local_c0) {
        uVar10 = param_4;
      }
      local_b0 = param_8;
      local_c8 = param_5;
      local_60 = pcVar3;
      FUN_140518bac(local_98,param_2,param_3,uVar10);
      param_3 = local_90;
    }
  }
  uVar6 = local_98[1];
  if (uVar6 != 0) {
    pcVar3 = (code *)*param_9;
    uVar4 = param_9[1];
    puVar8 = local_98 + 1;
    do {
      lVar7 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & uVar6) * 0x30;
      puVar1 = (ulonglong *)(*param_2 + lVar7);
      puVar11 = (uint *)((longlong)puVar1 + 0x24);
      uVar10 = *puVar1 & 0xffffffffffff;
      uVar2 = *puVar11;
      if ((uVar10 <= param_4) && (param_3 <= (*(longlong *)(*param_2 + 8 + lVar7) + uVar10) - 1)) {
        local_4c = uVar6;
        cVar5 = (*pcVar3)(uVar4,&local_4c);
        param_3 = local_90;
        if (cVar5 == '\0') {
          uVar2 = *puVar11;
        }
        else {
          *puVar8 = uVar2;
          puVar11 = puVar8;
        }
      }
      uVar6 = uVar2;
      puVar8 = puVar11;
    } while (uVar6 != 0);
  }
  if (local_80 < 0) {
    pcVar3 = (code *)*param_9;
    if (param_7 == param_8) {
      uVar6 = local_98[2];
      if (uVar6 != 0) {
        uVar4 = param_9[1];
        puVar8 = local_98 + 2;
        do {
          lVar7 = (longlong)(int)(~*(uint *)((longlong)param_2 + 0x24) & uVar6) * 0x30;
          puVar1 = (ulonglong *)(*param_2 + lVar7);
          puVar11 = (uint *)((longlong)puVar1 + 0x24);
          uVar10 = *puVar1 & 0xffffffffffff;
          uVar2 = *puVar11;
          if ((uVar10 <= param_4) && (param_3 <= (*(longlong *)(*param_2 + 8 + lVar7) + uVar10) - 1)
             ) {
            local_4c = uVar6;
            cVar5 = (*pcVar3)(uVar4,&local_4c);
            param_3 = local_90;
            if (cVar5 == '\0') {
              uVar2 = *puVar11;
            }
            else {
              *puVar8 = uVar2;
              puVar11 = puVar8;
            }
          }
          uVar6 = uVar2;
          puVar8 = puVar11;
        } while (uVar6 != 0);
      }
    }
    else {
      local_a8 = &local_70;
      local_68 = param_9[1];
      local_b8 = param_7 + 1;
      if (param_3 < local_88) {
        param_3 = local_88;
      }
      local_b0 = param_8;
      local_c0 = param_6;
      local_c8 = local_88;
      local_70 = pcVar3;
      FUN_140518bac(local_98 + 2,param_2,param_3,param_4);
    }
  }
  puVar8 = local_78;
  uVar6 = DAT_14c99ff50;
  if (((*local_98 != 0) || (local_98[1] != 0)) || (local_98[2] != 0)) goto LAB_140519032;
  uVar9 = ~DAT_14c99ff5c;
  uVar2 = *local_78;
  lVar7 = (longlong)(int)DAT_14c99ff50;
  DAT_14c99ff50 = DAT_14c99ff50 + 1;
  if (DAT_14c99ff54 < DAT_14c99ff50) {
    FUN_1446f48e2(&DAT_14c99ff48,uVar6);
  }
  *(uint *)(DAT_14c99ff48 + lVar7 * 4) = uVar9 & uVar2;
  if (DAT_14c99ff50 + 1 == DAT_14c99ff40) {
    DAT_14c99ff40 = 0;
    if (DAT_14c99ff44 != 0) {
      FUN_1412582dc(0);
    }
    DAT_14c99ff50 = 0;
    if (DAT_14c99ff54 == 0) {
LAB_140518ff7:
      uVar6 = DAT_14c99ff40;
      DAT_14c99ff40 = DAT_14c99ff40 + 1;
      if (DAT_14c99ff44 < DAT_14c99ff40) {
        FUN_14629f588(uVar6);
      }
    }
    else {
      FUN_14481578e(&DAT_14c99ff48,0);
      if ((longlong)(int)DAT_14c99ff50 == 0) goto LAB_140518ff7;
      uVar6 = *(uint *)(DAT_14c99ff48 + -4 + (longlong)(int)DAT_14c99ff50 * 4);
      DAT_14c99ff50 = DAT_14c99ff50 - 1;
      FUN_14479f406(&DAT_14c99ff48);
    }
    lVar7 = DAT_14c99ff38;
    *(undefined8 *)(DAT_14c99ff38 + (longlong)(int)uVar6 * 0xc) = 0;
    *(undefined4 *)(lVar7 + 8 + (longlong)(int)uVar6 * 0xc) = 0;
  }
  *puVar8 = 0;
LAB_140519032:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14051906a FUN_14051906a body=2206 status=ok
// SIG undefined FUN_14051906a(void)

void FUN_14051906a(longlong param_1,float *param_2,byte *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong *plVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_1f8 [32];
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  float *local_1c8;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198;
  float fStack_194;
  float local_190;
  float fStack_18c;
  float fStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  longlong local_140;
  longlong *local_138;
  undefined2 local_130;
  undefined1 uStack_12e;
  undefined1 uStack_12d;
  float fStack_12c;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 *local_110;
  undefined8 uStack_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  char local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar9 = *(longlong *)(param_1 + 0x208);
  if ((*(byte *)(lVar9 + 0x39) & *param_3) == 0) goto LAB_140519374;
  fVar14 = *(float *)(param_1 + 0x248);
  fVar12 = *(float *)(param_1 + 0x24c);
  local_1a8 = *(undefined8 *)(param_1 + 0x218);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x220);
  local_178._0_4_ = 1.0;
  fVar15 = *param_2;
  local_1d8 = &local_178;
  FUN_140519909(&local_1b0,param_2,param_1 + 0x1e0,&local_1a8);
  local_178._0_4_ = 1.0;
  fVar10 = param_2[1];
  local_1d8 = &local_178;
  FUN_1405199d3(&local_1b8);
  if ((((fVar12 != -1.0) || (NAN(fVar12))) || (fVar14 != -1.0)) || (NAN(fVar14))) {
    fStack_12c = local_1b4;
    local_130 = SUB42(local_1ac,0);
    uStack_12e = (undefined1)((uint)local_1ac >> 0x10);
    uStack_12d = (undefined1)((uint)local_1ac >> 0x18);
    local_168 = (float *)CONCAT44(local_168._4_4_,(float)local_168);
    uStack_160 = (undefined2 *)CONCAT44(uStack_160._4_4_,(float)uStack_160);
    if ((0.0 < local_1ac) &&
       (local_168 = (float *)CONCAT44(local_168._4_4_,(float)local_168),
       uStack_160 = (undefined2 *)CONCAT44(uStack_160._4_4_,(float)uStack_160), 0.0 < local_1b4)) {
      fVar12 = (float)(-(uint)(fVar12 != -1.0) & (uint)fVar12);
      if (((fVar12 == 0.0) && (!NAN(fVar12))) || (local_1ac / local_1b4 <= fVar12)) {
        fVar14 = (float)(-(uint)(fVar14 != -1.0) & (uint)fVar14);
        if (((fVar14 == 0.0) &&
            (local_168 = (float *)CONCAT44(local_168._4_4_,(float)local_168),
            uStack_160 = (undefined2 *)CONCAT44(uStack_160._4_4_,(float)uStack_160), !NAN(fVar14)))
           || (local_168 = (float *)CONCAT44(local_168._4_4_,(float)local_168),
              uStack_160 = (undefined2 *)CONCAT44(uStack_160._4_4_,(float)uStack_160),
              fVar14 <= local_1ac / local_1b4)) goto LAB_14051919d;
      }
      fVar14 = (float)local_1a8;
      fVar12 = local_1a8._4_4_;
      fVar16 = uStack_1a0._4_4_;
      fVar18 = local_1a8._4_4_ + uStack_1a0._4_4_;
      fStack_18c = fVar10 - fVar18;
      fVar10 = (float)uStack_1a0;
      fVar17 = (float)local_1a8 + (float)uStack_1a0;
      local_190 = fVar15 - fVar17;
      local_158 = &local_f8;
      local_f8 = CONCAT44(fStack_18c,local_190);
      local_178 = &local_180;
      local_180 = CONCAT71(local_180._1_7_,*(int *)(param_1 + 0x228) == 0);
      uStack_170 = &local_198;
      local_198 = (float)CONCAT31(local_198._1_3_,*(int *)(param_1 + 0x22c) == 0);
      local_168 = &local_190;
      uStack_160 = &local_130;
      FUN_1429022ec();
      if ((float)local_f8 < local_190) {
        fVar15 = (float)(-(uint)(local_190 != 0.0) & (uint)((float)local_f8 / local_190));
        local_190 = local_190 * fVar15;
        fStack_18c = fStack_18c * fVar15;
      }
      if (local_f8._4_4_ < fStack_18c) {
        fVar15 = (float)(-(uint)(fStack_18c != 0.0) & (uint)(local_f8._4_4_ / fStack_18c));
        local_190 = local_190 * fVar15;
        fStack_18c = fStack_18c * fVar15;
      }
      auVar13 = ZEXT416((uint)fStack_18c);
      auVar11 = ZEXT416((uint)local_190);
      fVar15 = *param_2;
      fVar17 = fVar15 - fVar17;
      if ((char)local_180 == '\0') {
        iVar4 = *(int *)(param_1 + 0x228);
        if (iVar4 == 0) {
LAB_140519897:
          local_1ac = fVar17;
          if (fVar17 <= 0.0) {
            local_1ac = 0.0;
          }
        }
        else {
          if (fVar17 <= local_190) {
            auVar11 = ZEXT416((uint)fVar17);
          }
          if (auVar11._0_4_ <= 0.0) {
            auVar7._12_4_ = 0;
            auVar7._0_12_ = auVar11._4_12_;
            auVar11 = auVar7 << 0x20;
          }
          local_1ac = auVar11._0_4_;
          if (iVar4 != 1) {
            if (iVar4 != 3) {
              if (iVar4 == 2) goto LAB_1405197fe;
              goto LAB_140519897;
            }
            fVar14 = (fVar15 - local_1ac) - fVar10;
          }
        }
      }
      else {
        if (fVar17 <= local_190) {
          auVar11 = ZEXT416((uint)fVar17);
        }
        if (auVar11._0_4_ <= 0.0) {
          auVar5._12_4_ = 0;
          auVar5._0_12_ = auVar11._4_12_;
          auVar11 = auVar5 << 0x20;
        }
LAB_1405197fe:
        fVar14 = (fVar14 + (fVar15 - auVar11._0_4_) * 0.5) - fVar10;
        local_1ac = auVar11._0_4_;
      }
      fVar15 = param_2[1];
      if (local_198._0_1_ == '\0') {
        iVar4 = *(int *)(param_1 + 0x22c);
        fVar18 = fVar15 - fVar18;
        if (iVar4 == 0) {
LAB_1405198d6:
          local_1b4 = fVar18;
          if (fVar18 <= 0.0) {
            local_1b4 = 0.0;
          }
        }
        else {
          if (fVar18 <= fStack_18c) {
            auVar13 = ZEXT416((uint)fVar18);
          }
          if (auVar13._0_4_ <= 0.0) {
            auVar11._12_4_ = 0;
            auVar11._0_12_ = auVar13._4_12_;
            auVar13 = auVar11 << 0x20;
          }
          local_1b4 = auVar13._0_4_;
          if (iVar4 != 1) {
            if (iVar4 != 3) {
              if (iVar4 == 2) goto LAB_140519840;
              goto LAB_1405198d6;
            }
            fVar12 = (fVar15 - local_1b4) - fVar16;
          }
        }
      }
      else {
        if (fVar15 - fVar18 <= fStack_18c) {
          auVar13 = ZEXT416((uint)(fVar15 - fVar18));
        }
        if (auVar13._0_4_ <= 0.0) {
          auVar6._12_4_ = 0;
          auVar6._0_12_ = auVar13._4_12_;
          auVar13 = auVar6 << 0x20;
        }
LAB_140519840:
        fVar12 = (fVar12 + (fVar15 - auVar13._0_4_) * 0.5) - fVar16;
        local_1b4 = auVar13._0_4_;
      }
      lVar9 = *(longlong *)(param_1 + 0x208);
      local_1b8 = fVar12;
      local_1b0 = fVar14;
    }
  }
LAB_14051919d:
  local_190 = 1.0;
  fStack_18c = local_1b0;
  fStack_188 = local_1b8;
  local_e0 = *(char *)(lVar9 + 0x198);
  local_198 = local_1ac;
  fStack_194 = local_1b4;
  if (DAT_14c96b1e0 == '\0') {
    if (local_e0 != '\0') {
      local_e8 = *(ulonglong *)(lVar9 + 400);
      local_f8 = *(undefined8 *)(lVar9 + 0x180);
      uStack_f0 = *(undefined8 *)(lVar9 + 0x188);
      goto LAB_14051957e;
    }
LAB_1405191ef:
    uVar3 = *(undefined1 *)(param_2 + 0xd);
    uStack_170._0_4_ = param_2[2];
    uStack_160._4_4_ = param_2[7];
    fVar14 = param_2[8];
    fVar12 = param_2[10];
    fVar15 = param_2[9];
    fVar10 = local_1b0 * fVar14 + fVar12 * local_1b8 + param_2[0xc];
    fVar16 = local_1b0 * uStack_160._4_4_ + fVar15 * local_1b8 + param_2[0xb];
    fVar17 = fVar14 * 0.0 + fVar12;
    fVar18 = uStack_160._4_4_ * 0.0 + fVar15;
    fVar14 = fVar12 * 0.0 + fVar14;
    uStack_160._4_4_ = fVar15 * 0.0 + uStack_160._4_4_;
    local_168._0_4_ = local_1b8 * (float)uStack_170 + param_2[4];
    uStack_170._4_4_ = local_1b0 * (float)uStack_170 + param_2[3];
    plVar8 = *(longlong **)(param_1 + 0x210);
    local_178._0_4_ = local_1ac;
    local_178._4_4_ = local_1b4;
    local_140 = lVar9;
    if (plVar8 == (longlong *)0x0) {
      local_168._4_4_ = local_1b0;
      uStack_160._0_4_ = local_1b8;
      local_158 = (undefined8 *)CONCAT44(fVar18,fVar14);
      uStack_150 = CONCAT44(fVar16,fVar17);
      local_148 = CONCAT35(local_148._5_3_,CONCAT14(uVar3,fVar10)) & 0xffffff01ffffffff;
      goto LAB_1405196ec;
    }
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_168._4_4_ = local_1b0;
    uStack_160._0_4_ = local_1b8;
    local_158 = (undefined8 *)CONCAT44(fVar18,fVar14);
    uStack_150 = CONCAT44(fVar16,fVar17);
    local_148 = CONCAT17(uStack_12e,CONCAT25(local_130,CONCAT14(uVar3,fVar10))) & 0xffffff01ffffffff
    ;
LAB_140519338:
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    local_138 = plVar8;
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
  else {
    if (local_e0 == '\0') goto LAB_1405191ef;
    local_f8 = *(undefined8 *)(lVar9 + 0x180);
    uStack_f0 = *(undefined8 *)(lVar9 + 0x188);
    local_e8 = *(ulonglong *)(lVar9 + 400) ^ 0x80000000;
LAB_14051957e:
    fVar14 = (float)*(double *)(lVar9 + 0x170);
    if (DAT_14c96b1e0 != '\0') {
      fVar14 = (0.5 - fVar14) + 0.5;
    }
    local_180 = CONCAT44((float)*(double *)(lVar9 + 0x178),fVar14);
    local_1d8 = &local_180;
    local_1c8 = param_2 + 7;
    local_178._0_4_ = param_2[2];
    local_178._4_4_ = (float)*(undefined8 *)(param_2 + 3);
    uStack_170._0_4_ = (float)((ulonglong)*(undefined8 *)(param_2 + 3) >> 0x20);
    local_1d0 = &local_178;
    FUN_146978c22(&local_130,&local_198,&local_190,&local_f8);
    local_140 = *(longlong *)(param_1 + 0x208);
    plVar8 = *(longlong **)(param_1 + 0x210);
    local_168._0_4_ = (float)local_120;
    local_168._4_4_ = (float)((ulonglong)local_120 >> 0x20);
    uStack_160._0_4_ = (float)uStack_118;
    uStack_160._4_4_ = (float)((ulonglong)uStack_118 >> 0x20);
    uStack_170._0_4_ = (float)uStack_128;
    uStack_170._4_4_ = (float)((ulonglong)uStack_128 >> 0x20);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      local_148 = local_100;
      local_178._0_4_ = (float)CONCAT13(uStack_12d,CONCAT12(uStack_12e,local_130));
      local_158 = local_110;
      uStack_150 = uStack_108;
      local_178._4_4_ = fStack_12c;
      goto LAB_140519338;
    }
    local_148 = local_100;
    local_178._0_4_ = (float)CONCAT13(uStack_12d,CONCAT12(uStack_12e,local_130));
    local_158 = local_110;
    uStack_150 = uStack_108;
    local_178._4_4_ = fStack_12c;
LAB_1405196ec:
    local_138 = (longlong *)0x0;
  }
  FUN_1402018be(param_3,&local_178);
  plVar8 = local_138;
  if (local_138 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_138 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_138)(local_138);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_140519374:
  if ((local_d0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140519909 FUN_140519909 body=202 status=ok
// SIG undefined FUN_140519909(void)

void FUN_140519909(float *param_1,float param_2,longlong param_3,float *param_4,float *param_5)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *param_4;
  fVar1 = param_4[2];
  iVar2 = *(int *)(param_3 + 0x48);
  if (iVar2 == 0) {
    fVar5 = (param_2 - (fVar4 + fVar1)) * *param_5;
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
  }
  else {
    pfVar3 = (float *)&DAT_14c84635c;
    if ((*(byte *)(*(longlong *)(param_3 + 0x28) + 0x31) & 0x20) != 0) {
      pfVar3 = (float *)(*(longlong *)(param_3 + 0x28) + 0x168);
    }
    fVar5 = *pfVar3 * *param_5;
    fVar6 = param_2 - (fVar4 + fVar1);
    if (fVar6 <= fVar5) {
      fVar5 = fVar6;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    if (iVar2 != 1) {
      if (iVar2 == 3) {
        fVar4 = (param_2 - fVar5) - fVar1;
      }
      else if (iVar2 == 2) {
        fVar4 = (fVar4 + (param_2 - fVar5) * 0.5) - fVar1;
      }
      else {
        fVar5 = fVar6 * *param_5;
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
      }
    }
  }
  *param_1 = fVar4;
  param_1[1] = fVar5;
  return;
}



// FUNCTION 1405199d3 FUN_1405199d3 body=204 status=ok
// SIG undefined FUN_1405199d3(void)

void FUN_1405199d3(float *param_1,float param_2,longlong param_3,longlong param_4,float *param_5)

{
  float fVar1;
  int iVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = *(float *)(param_4 + 4);
  fVar1 = *(float *)(param_4 + 0xc);
  iVar2 = *(int *)(param_3 + 0x4c);
  if (iVar2 == 0) {
    fVar5 = (param_2 - (fVar4 + fVar1)) * *param_5;
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
  }
  else {
    puVar3 = &DAT_14c84635c;
    if ((*(byte *)(*(longlong *)(param_3 + 0x28) + 0x31) & 0x20) != 0) {
      puVar3 = (undefined8 *)(*(longlong *)(param_3 + 0x28) + 0x168);
    }
    fVar5 = *(float *)((longlong)puVar3 + 4) * *param_5;
    fVar6 = param_2 - (fVar4 + fVar1);
    if (fVar6 <= fVar5) {
      fVar5 = fVar6;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    if (iVar2 != 1) {
      if (iVar2 == 3) {
        fVar4 = (param_2 - fVar5) - fVar1;
      }
      else if (iVar2 == 2) {
        fVar4 = (fVar4 + (param_2 - fVar5) * 0.5) - fVar1;
      }
      else {
        fVar5 = fVar6 * *param_5;
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
      }
    }
  }
  *param_1 = fVar4;
  param_1[1] = fVar5;
  return;
}



// FUNCTION 140519aa0 FUN_140519aa0 body=315 status=ok
// SIG undefined FUN_140519aa0(void)

ulonglong FUN_140519aa0(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong *plVar5;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),2);
  if ((((((*(int *)(param_1 + 0xec) != 0) && (uVar1 = *(uint *)(param_1 + 0xe8), -1 < (int)uVar1))
        && ((int)uVar1 < DAT_14c9647dc)) &&
       ((plVar5 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0xec))))) &&
      (((((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
         ((lVar3 = *plVar5, lVar3 != 0 && (*(longlong *)(lVar3 + 0x620) != 0)))) &&
        (*(char *)(lVar3 + 0x629) == '\x01')) &&
       ((((0 < *(int *)(lVar3 + 0x638) && (*(char *)(lVar3 + 0x628) == '\x01')) &&
         (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0)) &&
        (((*(int *)(param_1 + 0xdc) != 0 && (uVar1 = *(uint *)(param_1 + 0xd8), -1 < (int)uVar1)) &&
         (((int)uVar1 < DAT_14c9647dc &&
          ((lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0 &&
           (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0xdc))))))))))))) &&
     ((((*(uint *)(lVar3 + 8) & 0x10200000) == 0 &&
       ((lVar3 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))(), lVar3 != 0 &&
        (cVar2 = FUN_140519bdc(param_1), cVar2 == '\0')))) &&
      ((*(int *)(lVar3 + 0x24) <= *(int *)(param_1 + 0xf8) ||
       (cVar2 = FUN_1411dc586(param_1), cVar2 != '\0')))))) {
    uVar4 = 0;
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 140519bdc FUN_140519bdc body=436 status=ok
// SIG undefined FUN_140519bdc(void)

undefined4 FUN_140519bdc(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  int *piVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0xec) != 0) {
    uVar4 = *(uint *)(param_1 + 0xe8);
    uVar5 = 0;
    if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_140519d66;
    plVar9 = (longlong *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if ((((plVar9 != (longlong *)0x0) &&
         (((((int)plVar9[2] == *(int *)(param_1 + 0xec) &&
            ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) && (lVar2 = *plVar9, lVar2 != 0)) &&
          ((*(longlong *)(lVar2 + 0x620) != 0 && (*(char *)(lVar2 + 0x629) == '\x01')))))) &&
        (0 < *(int *)(lVar2 + 0x638))) &&
       ((*(char *)(lVar2 + 0x628) == '\x01' &&
        (*(char *)(*(longlong *)(param_1 + 0x48) + 0xf1) == '\x01')))) {
      local_48 = 0;
      uStack_40 = 0;
      uVar6 = FUN_140343d7a();
      lVar7 = FUN_140519fd4(uVar6);
      if (lVar7 != 0) {
        if ((longlong)*(int *)(lVar7 + 0x80) != 0) {
          piVar8 = *(int **)(lVar7 + 0x78);
          lVar7 = (longlong)*(int *)(lVar7 + 0x80) * 0x30;
          do {
            if (*piVar8 != 0x7fffffff) {
              FUN_140519d92(piVar8,&local_60,0);
              uVar3 = uStack_40;
              lVar10 = (longlong)(int)uStack_40;
              uVar4 = (int)uStack_40 + 1;
              uStack_40 = CONCAT44(uStack_40._4_4_,uVar4);
              if (uStack_40._4_4_ < uVar4) {
                FUN_1403e3958(&local_48,uVar3 & 0xffffffff);
              }
              *(undefined8 *)(local_48 + 0x10 + lVar10 * 0x18) = local_50;
              puVar1 = (undefined4 *)(local_48 + lVar10 * 0x18);
              *puVar1 = local_60;
              puVar1[1] = uStack_5c;
              puVar1[2] = uStack_58;
              puVar1[3] = uStack_54;
            }
            piVar8 = piVar8 + 0xc;
            lVar7 = lVar7 + -0x30;
          } while (lVar7 != 0);
        }
        uVar5 = FUN_14051a1c8(lVar2,&local_48);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        goto LAB_140519d66;
      }
    }
  }
  uVar5 = 0;
LAB_140519d66:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140519d92 FUN_140519d92 body=576 status=ok
// SIG undefined FUN_140519d92(void)

undefined8 * FUN_140519d92(longlong param_1,undefined8 *param_2,undefined1 *param_3)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar7 = *(longlong **)(param_1 + 0x18);
  if ((((plVar7 == (longlong *)0x0) || (*(int *)(param_1 + 0x14) == 0)) ||
      (uVar1 = *(uint *)(param_1 + 0x10), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) {
LAB_140519ee5:
    param_2[2] = DAT_14cb242f8;
    uVar9 = (undefined4)DAT_14cb242e8;
    uVar10 = DAT_14cb242e8._4_4_;
    uVar11 = (undefined4)DAT_14cb242f0;
    uVar12 = DAT_14cb242f0._4_4_;
  }
  else {
    lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar6 == 0) || (*(int *)(lVar6 + 0x10) != *(int *)(param_1 + 0x14))) ||
       ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)) goto LAB_140519ee5;
    cVar2 = FUN_1449d5ff4(param_1);
    if (cVar2 != '\0') {
      if (((((*(int *)(param_1 + 8) == 0) || (uVar1 = *(uint *)(param_1 + 4), (int)uVar1 < 0)) ||
           (DAT_14c9647dc <= (int)uVar1)) ||
          ((plVar7 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(param_1 + 8))))) ||
         (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (*plVar7 == 0)))) {
        puVar4 = &DAT_14cb242e8;
        uVar9 = (undefined4)DAT_14cb242f8;
        uVar10 = (undefined4)((ulonglong)DAT_14cb242f8 >> 0x20);
      }
      else {
        lVar6 = *(longlong *)(*plVar7 + 0x1c8);
        if (lVar6 == 0) {
          puVar4 = &DAT_14c8464e0;
          uVar9 = (undefined4)DAT_14c8464f0;
          uVar10 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          uVar9 = (undefined4)*(undefined8 *)(lVar6 + 0x270);
          uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x270) >> 0x20);
          puVar4 = (undefined8 *)(lVar6 + 0x260);
        }
      }
      uVar8 = puVar4[1];
      *param_2 = *puVar4;
      param_2[1] = uVar8;
      param_2[2] = CONCAT44(uVar10,uVar9);
      uVar3 = 1;
      goto LAB_140519eb8;
    }
    if (*(int *)(param_1 + 8) == 0) {
LAB_140519f9e:
      uVar8 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 4);
      uVar8 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar4 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar4 == (undefined8 *)0x0) ||
           ((*(int *)(puVar4 + 2) != *(int *)(param_1 + 8) ||
            ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)))) goto LAB_140519f9e;
        uVar8 = *puVar4;
      }
    }
    uVar5 = (**(code **)(*plVar7 + 0x28))(plVar7);
    lVar6 = FUN_1447ca08a(uVar5,uVar8,1);
    if (lVar6 == 0) {
      local_38 = DAT_14cb242f8;
      local_48 = (undefined4)DAT_14cb242e8;
      uStack_44 = DAT_14cb242e8._4_4_;
      uStack_40 = (undefined4)DAT_14cb242f0;
      uStack_3c = DAT_14cb242f0._4_4_;
    }
    else {
      local_38 = *(undefined8 *)(lVar6 + 0x28);
      local_48 = *(undefined4 *)(lVar6 + 0x18);
      uStack_44 = *(undefined4 *)(lVar6 + 0x1c);
      uStack_40 = *(undefined4 *)(lVar6 + 0x20);
      uStack_3c = *(undefined4 *)(lVar6 + 0x24);
    }
    param_2[2] = local_38;
    uVar9 = local_48;
    uVar10 = uStack_44;
    uVar11 = uStack_40;
    uVar12 = uStack_3c;
  }
  *(undefined4 *)param_2 = uVar9;
  *(undefined4 *)((longlong)param_2 + 4) = uVar10;
  *(undefined4 *)(param_2 + 1) = uVar11;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar12;
  uVar3 = 0;
LAB_140519eb8:
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = uVar3;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140519fd4 FUN_140519fd4 body=480 status=ok
// SIG undefined FUN_140519fd4(void)

undefined8 FUN_140519fd4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != (longlong *)0x0) {
    if (DAT_14cb22240 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464376fa;
      local_48 = &LAB_147f28935;
      local_50 = FUN_146437c39;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
    }
    lVar1 = (**(code **)(*param_1 + 0x288))(param_1,DAT_14cb22240);
    if (lVar1 != 0) {
      if (DAT_14cb22240 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1464376fa;
        local_48 = &LAB_147f28935;
        local_50 = FUN_146437c39;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTargeter",&DAT_14cb22240,&DAT_147f28934);
      }
      lVar2 = FUN_144718840(lVar1,DAT_14cb22240);
      if ((lVar1 != lVar2) && (lVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14051a1c8 FUN_14051a1c8 body=1926 status=ok
// SIG undefined FUN_14051a1c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14051a1c8(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar4;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  int iVar15;
  undefined8 uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar30;
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auStack_2f8 [32];
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
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
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  double dStack_1d0;
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
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  undefined1 local_f8 [16];
  double local_e8;
  ulonglong local_d0;
  double dVar3;
  double dVar5;
  
  auVar37 = _DAT_149934d80;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  lVar19 = *(longlong *)(param_1 + 0x620);
  if ((lVar19 != 0) && (*(char *)(lVar19 + 0x54) == '\x01')) {
    dVar28 = DAT_14c8462c0 * 0.999999999999999;
    dVar21 = DAT_14c8462c8 * 0.999999999999999;
    dVar27 = DAT_14c8462d0 * 0.999999999999999;
    local_2a8 = 0.0;
    dStack_2a0 = 0.0;
    local_2b8 = ZEXT816(0);
    auVar6 = *(undefined1 (*) [16])(param_1 + 0x280);
    dVar22 = auVar6._0_8_;
    dVar30 = auVar6._8_8_;
    auVar7 = *(undefined1 (*) [16])(param_1 + 0x290);
    dVar8 = auVar7._0_8_;
    auVar31 = minpd(_DAT_149934d80,auVar6);
    auVar34 = minpd(ZEXT816(0x3ff0000000000000),auVar7);
    auVar32._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
    auVar32._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
    iVar15 = movmskpd((int)lVar19,auVar32);
    auVar31._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
    auVar31._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
    uVar17 = movmskpd((int)param_1,auVar31);
    if ((uVar17 & 0x3fffffff) == 0 && iVar15 == 0) {
      dVar11 = *(double *)(param_1 + 0x240);
      dVar12 = *(double *)(param_1 + 0x248);
      dVar13 = *(double *)(param_1 + 0x250);
      dVar14 = *(double *)(param_1 + 600);
      dVar36 = *(double *)(param_1 + 600);
      dVar33 = *(double *)(param_1 + 600);
      dVar39 = *(double *)(param_1 + 0x240);
      dVar1 = *(double *)(param_1 + 0x240);
      dVar2 = *(double *)(param_1 + 0x248);
      dVar3 = *(double *)(param_1 + 0x248);
      dVar4 = *(double *)(param_1 + 0x250);
      dVar5 = *(double *)(param_1 + 0x250);
      local_2d8 = dVar21 * dVar4 * -1.0 +
                  dVar27 * dVar2 + dVar39 * -4.371139000186241e-08 * 1.0 + dVar28 * dVar36;
      dStack_2d0 = dVar28 * dVar5 * 1.0 +
                   dVar3 * -4.371139000186241e-08 + dVar27 * dVar1 * -1.0 + dVar21 * dVar33;
      dVar22 = dVar22 * 0.0;
      dVar30 = dVar30 * 0.0;
      dVar35 = dVar8 * 0.0;
      dVar9 = auVar7._8_8_ * 0.0;
      dVar24 = dVar30 * dVar11 - dVar22 * dVar12;
      dVar25 = dVar35 * dVar12 - dVar30 * dVar13;
      dVar26 = dVar22 * dVar13 - dVar35 * dVar11;
      dVar10 = dVar9 * dVar14 - dVar9 * dVar14;
      dVar25 = dVar25 + dVar25;
      dVar26 = dVar26 + dVar26;
      dVar24 = dVar24 + dVar24;
      dVar10 = dVar10 + dVar10;
      local_2a8 = (dVar26 * dVar11 - dVar12 * dVar25) + dVar36 * dVar24 + dVar35 +
                  *(double *)(param_1 + 0x270);
      dStack_2a0 = (dVar10 * dVar14 - dVar10 * dVar14) + dVar33 * dVar10 + dVar9 +
                   *(double *)(param_1 + 0x278);
      local_2c8._8_8_ =
           dVar27 * dVar5 * -1.0 +
           ((dVar1 * dVar28 * -1.0 + dVar33 * -4.371139000186241e-08) - dVar21 * dVar3);
      local_2c8._0_8_ =
           dVar4 * -4.371139000186241e-08 * 1.0 +
           ((dVar39 * dVar21 * 1.0 + dVar27 * dVar36) - dVar28 * dVar2);
      local_2b8._8_8_ =
           (dVar25 * dVar13 - dVar24 * dVar11) + dVar33 * dVar26 + dVar30 +
           *(double *)(param_1 + 0x268);
      local_2b8._0_8_ =
           (dVar24 * dVar12 - dVar13 * dVar26) + dVar36 * dVar25 + dVar22 +
           *(double *)(param_1 + 0x260);
    }
    else {
      dVar5 = *(double *)(param_1 + 0x240);
      dVar4 = *(double *)(param_1 + 0x248);
      dVar33 = *(double *)(param_1 + 0x250);
      dVar35 = dVar4 + dVar4;
      dVar36 = dVar33 + dVar33;
      dVar2 = dVar5 * (dVar5 + dVar5);
      local_1d8 = ((double)DAT_149934d80 - (dVar33 * dVar36 + dVar4 * dVar35)) * dVar22;
      dStack_1b0 = (DAT_149934d80._8_8_ - (dVar33 * dVar36 + dVar2)) * dVar30;
      dVar3 = *(double *)(param_1 + 0x240) * dVar36;
      dVar33 = *(double *)(param_1 + 600);
      dVar39 = dVar36 * dVar33;
      dVar1 = (dVar5 + dVar5) * *(double *)(param_1 + 600);
      dVar33 = dVar35 * dVar33;
      local_1b8 = (dVar35 * dVar5 - dVar39) * dVar30;
      dStack_190 = (dVar36 * dVar4 - dVar1) * dVar8;
      local_198 = (dVar33 + dVar3) * dVar8;
      dStack_1d0 = (dVar35 * dVar5 + dVar39) * dVar22;
      local_1a8 = (dVar36 * dVar4 + dVar1) * dVar30;
      local_1c8 = (dVar3 - dVar33) * dVar22;
      uStack_1c0 = 0;
      local_188 = (1.0 - (dVar2 + dVar4 * dVar35)) * dVar8;
      uStack_1a0 = 0;
      uStack_180 = 0;
      local_178 = *(undefined8 *)(param_1 + 0x260);
      uStack_170 = *(undefined8 *)(param_1 + 0x268);
      local_168 = *(undefined8 *)(param_1 + 0x270);
      uStack_160 = 0x3ff0000000000000;
      dVar36 = dVar21 + dVar21;
      dVar39 = dVar27 + dVar27;
      dVar33 = dVar28 * (dVar28 + dVar28);
      local_258 = (double)DAT_149934d80 - (dVar27 * dVar39 + dVar21 * dVar36);
      dStack_230 = DAT_149934d80._8_8_ - (dVar27 * dVar39 + dVar33);
      local_208 = 1.0 - (dVar33 + dVar21 * dVar36);
      dStack_210 = (dVar28 + dVar28) * -4.371139000186241e-08;
      dStack_250 = dVar36 * dVar28 + dVar39 * -4.371139000186241e-08;
      local_228 = dVar39 * dVar21 + dStack_210;
      local_238 = dVar36 * dVar28 - dVar39 * -4.371139000186241e-08;
      dStack_210 = dVar39 * dVar21 - dStack_210;
      local_218 = dVar36 * -4.371139000186241e-08 + dVar28 * dVar39;
      local_248 = dVar28 * dVar39 - dVar36 * -4.371139000186241e-08;
      uStack_240 = 0;
      uStack_220 = 0;
      uStack_200 = 0;
      local_1f8 = 0;
      uStack_1f0 = 0;
      local_1e8 = ZEXT816(0x3ff0000000000000) << 0x40;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar34._8_8_ = -(ulonglong)(0.0 <= dVar30);
      auVar34._0_8_ = -(ulonglong)(0.0 <= dVar22);
      auVar31 = blendvpd(_DAT_149936790,auVar37,auVar34);
      uVar20 = -(ulonglong)(0.0 <= dVar8 * 1.0);
      dVar22 = (double)(~uVar20 & 0xbff0000000000000 |
                       (ulonglong)((uint)(uVar20 >> 0x20) & 0x3ff00000) << 0x20);
      dVar30 = auVar31._0_8_;
      local_148 = local_148 * dVar30;
      local_150 = local_150 * dVar30;
      local_158 = local_158 * dVar30;
      dVar30 = auVar31._8_8_;
      local_128 = local_128 * dVar30;
      local_130 = local_130 * dVar30;
      local_138 = dVar30 * local_138;
      local_108 = local_108 * dVar22;
      local_110 = local_110 * dVar22;
      local_118 = dVar22 * local_118;
      FUN_14481fd10(&local_278,&local_158);
      dVar22 = local_268 * local_268 + local_278 * local_278;
      dVar30 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar29._0_8_ = dVar22 + dVar30;
      auVar29._8_8_ = dVar22 + dVar30;
      auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
      auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
      auVar31 = sqrtpd(auVar29,auVar29);
      auVar37 = divpd(auVar37,auVar31);
      auVar38._0_8_ = auVar37._0_8_ * local_268;
      auVar38._8_8_ = auVar37._8_8_ * dStack_260;
      local_2d8 = (double)((ulonglong)(local_278 * auVar37._0_8_) &
                          -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
      dStack_2d0 = (double)((ulonglong)(dStack_270 * auVar37._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
      local_2c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar38,auVar23);
      local_2b8 = local_f8;
      local_2a8 = local_e8;
      dStack_2a0 = 0.0;
    }
    dVar22 = auVar7._8_8_ * 0.0;
    local_288._8_4_ = SUB84(dVar22,0);
    local_288._0_8_ = dVar8 * 1.0;
    local_288._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    local_298 = auVar6;
    if ((longlong)(int)param_2[1] != 0) {
      lVar18 = *param_2;
      lVar19 = (longlong)(int)param_2[1] * 0x18;
      do {
        lVar19 = lVar19 + -0x18;
        uVar16 = FUN_14051a950(*(longlong *)(param_1 + 0x620) + 0x44,&local_2d8,lVar18);
        if ((char)uVar16 != '\0') break;
        lVar18 = lVar18 + 0x18;
      } while (lVar19 != 0);
      goto LAB_14051a519;
    }
  }
  uVar16 = 0;
LAB_14051a519:
  if ((local_d0 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14051a950 FUN_14051a950 body=564 status=ok
// SIG undefined FUN_14051a950(void)

undefined8 FUN_14051a950(float *param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double _Y;
  undefined8 uVar2;
  ulonglong uVar3;
  float fVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  double dVar5;
  double dVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  double local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  _Y = param_3[2] - (double)param_2[6];
  dVar5 = param_3[1] - (double)param_2[5];
  dVar1 = *param_3 - (double)param_2[4];
  dVar6 = 0.0;
  if ((((dVar5 != 0.0) || (NAN(dVar5))) || (dVar1 != 0.0)) || (NAN(dVar1))) {
    dVar6 = atan2(dVar5,dVar1);
    dVar6 = dVar6 * 57.29577951308232;
  }
  dVar5 = SQRT(dVar1 * dVar1 + dVar5 * dVar5);
  dVar1 = 0.0;
  if (((_Y != 0.0) || (NAN(_Y))) || ((dVar5 != 0.0 || (NAN(dVar5))))) {
    dVar1 = atan2(_Y,dVar5);
    dVar1 = dVar1 * 57.29577951308232;
  }
  local_98 = *param_2;
  uStack_90 = param_2[1];
  local_88 = *(undefined4 *)(param_2 + 2);
  uStack_84 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_80 = *(undefined4 *)(param_2 + 3);
  uStack_7c = *(undefined4 *)((longlong)param_2 + 0x1c);
  FUN_1448052ee(&local_98,&local_78);
  dVar6 = (double)FUN_144719204(SUB84(dVar6 - local_70,0),0x4076800000000000);
  dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar6 |
                  (ulonglong)(dVar6 + 360.0) & -(ulonglong)(dVar6 < 0.0));
  fVar4 = (float)(double)(~-(ulonglong)(180.0 < dVar6) & (ulonglong)dVar6 |
                         (ulonglong)(dVar6 + -360.0) & -(ulonglong)(180.0 < dVar6));
  if ((-param_1[2] <= fVar4) && (fVar4 < param_1[3] || fVar4 == param_1[3])) {
    FUN_144719204(SUB84(dVar1 - local_78,0));
    uVar3 = -(ulonglong)((double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) < 0.0);
    dVar6 = (double)(~uVar3 & CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) |
                    (ulonglong)((double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) + 360.0) & uVar3
                    );
    fVar4 = (float)(double)(~-(ulonglong)(180.0 < dVar6) & (ulonglong)dVar6 |
                           (ulonglong)(dVar6 + -360.0) & -(ulonglong)(180.0 < dVar6));
    if ((-param_1[1] <= fVar4) && (fVar4 < *param_1 || fVar4 == *param_1)) {
      uVar2 = 1;
      goto LAB_14051aacb;
    }
  }
  uVar2 = 0;
LAB_14051aacb:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14051ab86 FUN_14051ab86 body=1697 status=ok
// SIG undefined FUN_14051ab86(void)

void FUN_14051ab86(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  double dVar20;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 *local_b0;
  undefined4 local_a8 [2];
  undefined8 *local_a0;
  undefined8 *local_98 [2];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  int local_70;
  uint local_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *local_b0 = &PTR_FUN_149f61f70;
  local_b0[1] = param_3;
  local_80 = local_98;
  local_88 = (longlong *)local_a8;
  local_a8[0] = 2;
  local_a0 = param_2;
  local_98[0] = local_b0;
  FUN_14051b448(param_2 + 4);
  uVar12 = *(uint *)((longlong)param_3 + 0xc);
  local_c0 = (ulonglong)uVar12;
  iVar5 = *(int *)((longlong)param_2 + 0xc);
  plVar19 = *(longlong **)(param_1 + 0x18);
  plVar8 = *(longlong **)(param_1 + 0x20);
  plVar13 = *(longlong **)(param_1 + 0x28);
  fVar1 = *(float *)(param_1 + 0x10);
  if (plVar13 == (longlong *)0x0 || plVar8 == (longlong *)0x0) {
    if (plVar13 == (longlong *)0x0) {
      if (plVar8 == (longlong *)0x0) goto LAB_14051ac63;
      lVar11 = *plVar8;
      plVar13 = plVar8;
    }
    else {
      lVar11 = *plVar13;
    }
    (**(code **)(lVar11 + 0x50))(plVar13,param_2,param_3);
  }
  else {
    uVar6 = *(uint *)(param_2[0x10] + 8);
    local_c8 = plVar19;
    FUN_14051b394(param_2[0x10],uVar6 + uVar12 * 2,0);
    local_88 = (longlong *)param_2[0x10];
    local_80 = (undefined8 **)CONCAT44(uVar12,uVar6);
    local_70 = uVar6 + uVar12;
    local_b8 = (ulonglong)uVar6;
    local_78 = local_88;
    local_6c = uVar12;
    (**(code **)(*plVar13 + 0x50))(plVar13,param_2,&local_88);
    (**(code **)(*plVar8 + 0x50))(plVar8,param_2,&local_78);
    plVar19 = local_c8;
    iVar7 = *(int *)(param_1 + 0x30);
    if (iVar7 == 0) {
      if (0 < iVar5) {
        lVar11 = 0;
        do {
          lVar15 = (longlong)
                   *(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar11) * 8);
          lVar16 = local_70 + lVar15;
          lVar9 = *local_78;
          lVar18 = (int)local_80 + lVar15;
          lVar14 = *local_88;
          dVar20 = *(double *)(lVar9 + 0x10 + lVar16 * 0x18);
          dVar2 = *(double *)(lVar14 + 0x10 + lVar18 * 0x18);
          dVar3 = *(double *)(lVar9 + 8 + lVar16 * 0x18);
          dVar4 = *(double *)(lVar14 + 8 + lVar18 * 0x18);
          lVar15 = *(int *)(param_3 + 1) + lVar15;
          lVar17 = *(longlong *)*param_3;
          *(double *)(lVar17 + lVar15 * 0x18) =
               *(double *)(lVar9 + lVar16 * 0x18) * *(double *)(lVar14 + lVar18 * 0x18);
          *(double *)(lVar17 + 8 + lVar15 * 0x18) = dVar3 * dVar4;
          *(double *)(lVar17 + 0x10 + lVar15 * 0x18) = dVar20 * dVar2;
          lVar11 = lVar11 + 1;
        } while (iVar5 != (int)lVar11);
      }
    }
    else if (iVar7 == 1) {
      if (0 < iVar5) {
        lVar11 = 0;
        do {
          lVar15 = (longlong)
                   *(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar11) * 8);
          lVar9 = *local_88;
          lVar16 = (int)local_80 + lVar15;
          lVar18 = local_70 + lVar15;
          lVar14 = *local_78;
          dVar20 = *(double *)(lVar9 + 0x10 + lVar16 * 0x18);
          dVar2 = *(double *)(lVar14 + 0x10 + lVar18 * 0x18);
          dVar3 = *(double *)(lVar9 + 8 + lVar16 * 0x18);
          dVar4 = *(double *)(lVar14 + 8 + lVar18 * 0x18);
          lVar15 = *(int *)(param_3 + 1) + lVar15;
          lVar17 = *(longlong *)*param_3;
          *(double *)(lVar17 + lVar15 * 0x18) =
               *(double *)(lVar9 + lVar16 * 0x18) / *(double *)(lVar14 + lVar18 * 0x18);
          *(double *)(lVar17 + 8 + lVar15 * 0x18) = dVar3 / dVar4;
          *(double *)(lVar17 + 0x10 + lVar15 * 0x18) = dVar20 / dVar2;
          lVar11 = lVar11 + 1;
        } while (iVar5 != (int)lVar11);
      }
    }
    else if (iVar7 == 2) {
      if (0 < iVar5) {
        lVar11 = 0;
        do {
          lVar15 = (longlong)
                   *(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar11) * 8);
          lVar16 = local_70 + lVar15;
          lVar9 = *local_78;
          lVar18 = (int)local_80 + lVar15;
          lVar14 = *local_88;
          dVar20 = *(double *)(lVar9 + 0x10 + lVar16 * 0x18);
          dVar2 = *(double *)(lVar14 + 0x10 + lVar18 * 0x18);
          dVar3 = *(double *)(lVar9 + 8 + lVar16 * 0x18);
          dVar4 = *(double *)(lVar14 + 8 + lVar18 * 0x18);
          lVar15 = *(int *)(param_3 + 1) + lVar15;
          lVar17 = *(longlong *)*param_3;
          *(double *)(lVar17 + lVar15 * 0x18) =
               *(double *)(lVar9 + lVar16 * 0x18) + *(double *)(lVar14 + lVar18 * 0x18);
          *(double *)(lVar17 + 8 + lVar15 * 0x18) = dVar3 + dVar4;
          *(double *)(lVar17 + 0x10 + lVar15 * 0x18) = dVar20 + dVar2;
          lVar11 = lVar11 + 1;
        } while (iVar5 != (int)lVar11);
      }
    }
    else if ((iVar7 == 3) && (0 < iVar5)) {
      lVar11 = 0;
      do {
        lVar15 = (longlong)
                 *(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar11) * 8);
        lVar16 = (int)local_80 + lVar15;
        lVar9 = *local_88;
        lVar18 = local_70 + lVar15;
        lVar14 = *local_78;
        dVar20 = *(double *)(lVar9 + 0x10 + lVar16 * 0x18);
        dVar2 = *(double *)(lVar14 + 0x10 + lVar18 * 0x18);
        dVar3 = *(double *)(lVar9 + 8 + lVar16 * 0x18);
        dVar4 = *(double *)(lVar14 + 8 + lVar18 * 0x18);
        lVar15 = *(int *)(param_3 + 1) + lVar15;
        lVar17 = *(longlong *)*param_3;
        *(double *)(lVar17 + lVar15 * 0x18) =
             *(double *)(lVar9 + lVar16 * 0x18) - *(double *)(lVar14 + lVar18 * 0x18);
        *(double *)(lVar17 + 8 + lVar15 * 0x18) = dVar3 - dVar4;
        *(double *)(lVar17 + 0x10 + lVar15 * 0x18) = dVar20 - dVar2;
        lVar11 = lVar11 + 1;
      } while (iVar5 != (int)lVar11);
    }
    FUN_14051b394(param_2[0x10],local_b8,0);
  }
LAB_14051ac63:
  uVar12 = (uint)local_c0;
  if (plVar19 != (longlong *)0x0) {
    plVar8 = (longlong *)param_2[0x11];
    iVar7 = (int)plVar8[1];
    iVar10 = iVar7 + uVar12;
    if (iVar7 < iVar10) {
      *(int *)(plVar8 + 1) = iVar10;
      if ((uint)(*(int *)((longlong)plVar8 + 0xc) - iVar7) < uVar12) {
        FUN_14475e4ac(plVar8);
      }
      memset((void *)((longlong)iVar7 * 4 + *plVar8),0,(longlong)(int)uVar12 << 2);
      uVar12 = (uint)local_c0;
    }
    else {
      if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar10);
      }
      if (iVar10 < iVar7) {
        *(int *)(plVar8 + 1) = iVar10;
      }
    }
    local_88 = (longlong *)param_2[0x11];
    local_80 = (undefined8 **)CONCAT44(uVar12,iVar7);
    (**(code **)(*plVar19 + 0x50))(plVar19);
    if (0 < iVar5) {
      lVar11 = 0;
      do {
        lVar14 = (longlong)
                 *(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar11) * 8);
        lVar17 = *(int *)(param_3 + 1) + lVar14;
        lVar9 = *(longlong *)*param_3;
        dVar20 = (double)*(float *)(*local_88 + ((int)local_80 + lVar14) * 4);
        *(double *)(lVar9 + lVar17 * 0x18) = *(double *)(lVar9 + lVar17 * 0x18) * dVar20;
        *(double *)(lVar9 + 8 + lVar17 * 0x18) = *(double *)(lVar9 + 8 + lVar17 * 0x18) * dVar20;
        *(double *)(lVar9 + 0x10 + lVar17 * 0x18) =
             dVar20 * *(double *)(lVar9 + 0x10 + lVar17 * 0x18);
        lVar11 = lVar11 + 1;
      } while (iVar5 != (int)lVar11);
    }
    plVar19 = (longlong *)param_2[0x11];
    iVar10 = (int)plVar19[1];
    if (iVar10 < iVar7) {
      *(int *)(plVar19 + 1) = iVar7;
      if ((uint)(*(int *)((longlong)plVar19 + 0xc) - iVar10) < (uint)(iVar7 - iVar10)) {
        FUN_14475e4ac(plVar19);
      }
      memset((void *)((longlong)iVar10 * 4 + *plVar19),0,(longlong)(iVar7 - iVar10) << 2);
    }
    else {
      if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar7);
      }
      if (iVar7 < iVar10) {
        *(int *)(plVar19 + 1) = iVar7;
      }
    }
  }
  if (((fVar1 != 1.0) || (NAN(fVar1))) && (0 < iVar5)) {
    dVar20 = (double)fVar1;
    lVar11 = 0;
    do {
      lVar9 = *(longlong *)*param_3;
      lVar14 = (longlong)*(int *)(param_3 + 1) +
               (longlong)*(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar11) * 8);
      *(double *)(lVar9 + lVar14 * 0x18) = *(double *)(lVar9 + lVar14 * 0x18) * dVar20;
      *(double *)(lVar9 + 8 + lVar14 * 0x18) = *(double *)(lVar9 + 8 + lVar14 * 0x18) * dVar20;
      *(double *)(lVar9 + 0x10 + lVar14 * 0x18) = *(double *)(lVar9 + 0x10 + lVar14 * 0x18) * dVar20
      ;
      lVar11 = lVar11 + 1;
    } while (iVar5 != (int)lVar11);
  }
  FUN_14051b27e(local_a0 + 4,local_a8[0]);
  if (local_b0 != (undefined8 *)0x0) {
    (**(code **)*local_b0)(local_b0,1);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14051b228 FUN_14051b228 body=29 status=ok
// SIG undefined FUN_14051b228(void)

undefined8 FUN_14051b228(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14051b246 FUN_14051b246 body=55 status=ok
// SIG undefined FUN_14051b246(void)

void FUN_14051b246(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    switch(*(int *)(param_1 + 0x40)) {
    case 1:
      FUN_14051ba1a();
      return;
    case 2:
      FUN_146e91e7c();
      return;
    case 3:
      FUN_146e91d76();
      return;
    case 4:
      FUN_146e91f9c();
      return;
    default:
      return;
    }
  }
  if ((0.0 < *(float *)(param_1 + 0x20)) && (iVar3 = *(int *)((longlong)param_2 + 0xc), 0 < iVar3))
  {
    fVar1 = *(float *)(param_1 + 0x18);
    fVar2 = *(float *)(param_1 + 0x14);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)*param_2;
      lVar8 = *(int *)(param_2 + 1) + lVar7;
      *(undefined4 *)
       (*(longlong *)*param_3 +
       ((longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar4 + 4 + lVar8 * 8)) * 4) =
           *(undefined4 *)(param_1 + 0x1c);
      lVar6 = (longlong)*(int *)(param_2 + 3) + (longlong)*(int *)(lVar4 + lVar8 * 8);
      lVar5 = *(longlong *)param_2[2];
      dVar9 = *(double *)(lVar5 + 0x10 + lVar6 * 0x18) - *(double *)(param_1 + 0x38);
      dVar11 = *(double *)(lVar5 + 8 + lVar6 * 0x18) - *(double *)(param_1 + 0x30);
      dVar10 = *(double *)(lVar5 + lVar6 * 0x18) - *(double *)(param_1 + 0x28);
      if (SQRT(dVar9 * dVar9 + dVar10 * dVar10 + dVar11 * dVar11) <
          (double)*(float *)(param_1 + 0x20)) {
        *(float *)(*(longlong *)*param_3 +
                  ((longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar4 + 4 + lVar8 * 8)) * 4)
             = (*(float *)(param_1 + 0x14) + (fVar1 - fVar2)) * *(float *)(param_1 + 0x10);
      }
      lVar7 = lVar7 + 1;
    } while (iVar3 != (int)lVar7);
  }
  return;
}



// FUNCTION 14051b27e FUN_14051b27e body=133 status=ok
// SIG undefined FUN_14051b27e(void)

void FUN_14051b27e(longlong *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar4 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar2 * 0x18);
        if (*piVar1 == param_2) {
          iVar3 = *(int *)((longlong)plVar4 + (longlong)piVar1[5] * 4);
          if (iVar3 == iVar2) {
            piVar5 = (int *)((longlong)plVar4 + (longlong)piVar1[5] * 4);
          }
          else {
            do {
              piVar5 = (int *)(*param_1 + (longlong)iVar3 * 0x18 + 0x10);
              iVar3 = *piVar5;
            } while (iVar3 != iVar2);
          }
          *piVar5 = piVar1[4];
          FUN_14051b304(param_1,iVar2,1);
          return;
        }
        iVar2 = piVar1[4];
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 14051b304 FUN_14051b304 body=144 status=ok
// SIG undefined FUN_14051b304(void)

void FUN_14051b304(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14051b394 FUN_14051b394 body=118 status=ok
// SIG undefined FUN_14051b394(void)

void FUN_14051b394(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1403e3958(param_1,iVar1);
    }
    FUN_14051b40a((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_140704026(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14051b40a FUN_14051b40a body=1 status=ok
// SIG undefined FUN_14051b40a(void)

void FUN_14051b40a(void)

{
  return;
}



// FUNCTION 14051b448 FUN_14051b448 body=303 status=ok
// SIG undefined FUN_14051b448(void)

undefined4 * FUN_14051b448(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14051b60e(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  *(undefined8 *)(local_40 + 2) = *puVar1;
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar2 = FUN_14051b578(param_1,uVar4,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[5] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140722b4a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14051b578 FUN_14051b578 body=150 status=ok
// SIG undefined FUN_14051b578(void)

void FUN_14051b578(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_14051b304(iVar2,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_14051b5e2;
        }
        iVar8 = piVar1[4];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_14051b5e2:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 14051b60e FUN_14051b60e body=703 status=ok
// SIG undefined FUN_14051b60e(void)

int * FUN_14051b60e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_14482b872(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_14051b7f8;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_14051b7f8:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14051b8ce FUN_14051b8ce body=100 status=ok
// SIG undefined FUN_14051b8ce(void)

void FUN_14051b8ce(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  
  iVar4 = *(int *)((longlong)param_2 + 0xc);
  if (0 < iVar4) {
    dVar8 = (double)*(float *)(param_1 + 0x10);
    dVar1 = *(double *)(param_1 + 0x28);
    dVar2 = *(double *)(param_1 + 0x20);
    dVar3 = *(double *)(param_1 + 0x18);
    lVar6 = 0;
    do {
      lVar7 = (longlong)*(int *)(param_3 + 1) +
              (longlong)*(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar6) * 8);
      lVar5 = *(longlong *)*param_3;
      *(double *)(lVar5 + lVar7 * 0x18) = dVar8 * dVar3;
      *(double *)(lVar5 + 8 + lVar7 * 0x18) = dVar2 * dVar8;
      *(double *)(lVar5 + 0x10 + lVar7 * 0x18) = dVar1 * dVar8;
      lVar6 = lVar6 + 1;
    } while (iVar4 != (int)lVar6);
  }
  return;
}



// FUNCTION 14051b932 FUN_14051b932 body=231 status=ok
// SIG undefined FUN_14051b932(void)

void FUN_14051b932(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if ((0.0 < *(float *)(param_1 + 0x20)) && (iVar3 = *(int *)((longlong)param_2 + 0xc), 0 < iVar3))
  {
    fVar1 = *(float *)(param_1 + 0x18);
    fVar2 = *(float *)(param_1 + 0x14);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)*param_2;
      lVar8 = *(int *)(param_2 + 1) + lVar7;
      *(undefined4 *)
       (*(longlong *)*param_3 +
       ((longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar4 + 4 + lVar8 * 8)) * 4) =
           *(undefined4 *)(param_1 + 0x1c);
      lVar6 = (longlong)*(int *)(param_2 + 3) + (longlong)*(int *)(lVar4 + lVar8 * 8);
      lVar5 = *(longlong *)param_2[2];
      dVar9 = *(double *)(lVar5 + 0x10 + lVar6 * 0x18) - *(double *)(param_1 + 0x38);
      dVar11 = *(double *)(lVar5 + 8 + lVar6 * 0x18) - *(double *)(param_1 + 0x30);
      dVar10 = *(double *)(lVar5 + lVar6 * 0x18) - *(double *)(param_1 + 0x28);
      if (SQRT(dVar9 * dVar9 + dVar10 * dVar10 + dVar11 * dVar11) <
          (double)*(float *)(param_1 + 0x20)) {
        *(float *)(*(longlong *)*param_3 +
                  ((longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar4 + 4 + lVar8 * 8)) * 4)
             = (*(float *)(param_1 + 0x14) + (fVar1 - fVar2)) * *(float *)(param_1 + 0x10);
      }
      lVar7 = lVar7 + 1;
    } while (iVar3 != (int)lVar7);
  }
  return;
}



// FUNCTION 14051ba1a FUN_14051ba1a body=258 status=ok
// SIG undefined FUN_14051ba1a(void)

void FUN_14051ba1a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if ((0.0 < *(float *)(param_1 + 0x20)) && (iVar3 = *(int *)((longlong)param_2 + 0xc), 0 < iVar3))
  {
    fVar1 = *(float *)(param_1 + 0x18);
    fVar2 = *(float *)(param_1 + 0x14);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)*param_2;
      lVar8 = *(int *)(param_2 + 1) + lVar7;
      *(undefined4 *)
       (*(longlong *)*param_3 +
       ((longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar4 + 4 + lVar8 * 8)) * 4) =
           *(undefined4 *)(param_1 + 0x1c);
      lVar6 = (longlong)*(int *)(param_2 + 3) + (longlong)*(int *)(lVar4 + lVar8 * 8);
      lVar5 = *(longlong *)param_2[2];
      dVar9 = *(double *)(lVar5 + 0x10 + lVar6 * 0x18) - *(double *)(param_1 + 0x38);
      dVar11 = *(double *)(lVar5 + 8 + lVar6 * 0x18) - *(double *)(param_1 + 0x30);
      dVar10 = *(double *)(lVar5 + lVar6 * 0x18) - *(double *)(param_1 + 0x28);
      dVar9 = SQRT(dVar9 * dVar9 + dVar10 * dVar10 + dVar11 * dVar11);
      if (dVar9 < (double)*(float *)(param_1 + 0x20)) {
        *(float *)(*(longlong *)*param_3 +
                  ((longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar4 + 4 + lVar8 * 8)) * 4)
             = ((float)(1.0 - dVar9 / (double)*(float *)(param_1 + 0x20)) * (fVar1 - fVar2) +
               *(float *)(param_1 + 0x14)) * *(float *)(param_1 + 0x10);
      }
      lVar7 = lVar7 + 1;
    } while (iVar3 != (int)lVar7);
  }
  return;
}



// FUNCTION 14051bb1c FUN_14051bb1c body=291 status=ok
// SIG undefined FUN_14051bb1c(void)

void FUN_14051bb1c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  if (0 < iVar1) {
    lVar4 = 0;
    do {
      lVar3 = (longlong)*(int *)(param_2 + 3) +
              (longlong)*(int *)(*(longlong *)*param_2 + (*(int *)(param_2 + 1) + lVar4) * 8);
      lVar2 = *(longlong *)param_2[2];
      dVar5 = *(double *)(lVar2 + 0x10 + lVar3 * 0x18) - *(double *)(param_1 + 0x28);
      dVar9 = *(double *)(lVar2 + 8 + lVar3 * 0x18) - *(double *)(param_1 + 0x20);
      dVar7 = *(double *)(lVar2 + lVar3 * 0x18) - *(double *)(param_1 + 0x18);
      dVar11 = dVar5 * dVar5 + dVar7 * dVar7 + dVar9 * dVar9;
      if (((dVar11 != 1.0) || (dVar6 = dVar5, dVar8 = dVar7, dVar10 = dVar9, NAN(dVar11))) &&
         (dVar6 = DAT_14c8464f0, dVar8 = DAT_14c8464e0, dVar10 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar11)) {
        dVar11 = 1.0 / SQRT(dVar11);
        dVar6 = dVar5 * dVar11;
        dVar8 = dVar7 * dVar11;
        dVar10 = dVar9 * dVar11;
      }
      dVar5 = (double)*(float *)(param_1 + 0x10);
      lVar3 = (longlong)*(int *)(param_3 + 1) +
              (longlong)*(int *)(*(longlong *)*param_2 + 4 + (*(int *)(param_2 + 1) + lVar4) * 8);
      lVar2 = *(longlong *)*param_3;
      *(double *)(lVar2 + lVar3 * 0x18) = dVar8 * dVar5;
      *(double *)(lVar2 + 8 + lVar3 * 0x18) = dVar10 * dVar5;
      *(double *)(lVar2 + 0x10 + lVar3 * 0x18) = dVar6 * dVar5;
      lVar4 = lVar4 + 1;
    } while (iVar1 != (int)lVar4);
  }
  return;
}



// FUNCTION 14051bc40 FUN_14051bc40 body=554 status=ok
// SIG undefined FUN_14051bc40(void)

void FUN_14051bc40(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  double *pdVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  if (0 < iVar2) {
    iVar8 = 0;
    do {
      lVar3 = *(longlong *)*param_2;
      lVar7 = (longlong)(*(int *)(param_2 + 1) + iVar8);
      uVar4 = rand();
      fVar9 = (float)(uVar4 & 0x7fff) / 32767.0;
      *(double *)
       (*(longlong *)*param_3 +
       ((longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar3 + 4 + lVar7 * 8)) * 0x18) =
           (double)(fVar9 + fVar9 + -1.0);
      uVar4 = rand();
      fVar9 = (float)(uVar4 & 0x7fff) / 32767.0;
      *(double *)
       (*(longlong *)*param_3 + 8 +
       ((longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar3 + 4 + lVar7 * 8)) * 0x18) =
           (double)(fVar9 + fVar9 + -1.0);
      uVar4 = rand();
      fVar9 = (float)(uVar4 & 0x7fff) / 32767.0;
      *(double *)
       (*(longlong *)*param_3 + 0x10 +
       ((longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar3 + 4 + lVar7 * 8)) * 0x18) =
           (double)(fVar9 + fVar9 + -1.0);
      lVar6 = (longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar3 + 4 + lVar7 * 8);
      lVar5 = *(longlong *)*param_3;
      dVar12 = *(double *)(lVar5 + lVar6 * 0x18);
      dVar10 = *(double *)(lVar5 + 8 + lVar6 * 0x18);
      dVar11 = *(double *)(lVar5 + 0x10 + lVar6 * 0x18);
      dVar13 = dVar11 * dVar11 + dVar12 * dVar12 + dVar10 * dVar10;
      if (9.99999993922529e-09 < dVar13) {
        pdVar1 = (double *)(lVar5 + lVar6 * 0x18);
        dVar13 = 1.0 / SQRT(dVar13);
        *pdVar1 = dVar12 * dVar13;
        pdVar1[1] = dVar10 * dVar13;
        pdVar1[2] = dVar11 * dVar13;
        lVar5 = *(longlong *)*param_3;
        lVar6 = (longlong)*(int *)(param_3 + 1) + (longlong)*(int *)(lVar3 + 4 + lVar7 * 8);
        dVar12 = *(double *)(lVar5 + lVar6 * 0x18);
        dVar10 = *(double *)(lVar5 + 8 + lVar6 * 0x18);
        dVar11 = *(double *)(lVar5 + 0x10 + lVar6 * 0x18);
      }
      dVar13 = (double)*(float *)(param_1 + 0x10);
      *(double *)(lVar5 + lVar6 * 0x18) = dVar12 * dVar13;
      *(double *)(lVar5 + 8 + lVar6 * 0x18) = dVar10 * dVar13;
      *(double *)(lVar5 + 0x10 + lVar6 * 0x18) = dVar11 * dVar13;
      iVar8 = iVar8 + 1;
    } while (iVar2 != iVar8);
  }
  return;
}



// FUNCTION 14051be6a FUN_14051be6a body=165 status=ok
// SIG undefined FUN_14051be6a(void)

void FUN_14051be6a(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = DAT_14caca268;
  if (DAT_14caca270 == 0) {
    plVar2 = (longlong *)0x0;
  }
  (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
  FUN_14020684a(param_1);
  uVar1 = FUN_1447210f0(param_1);
  FUN_14051bf56(uVar1,local_38);
  if (local_30 != 0) {
    FUN_1434027ce(local_30,uVar1,param_1 + 0x478,param_1 + 0x498);
  }
  FUN_14051bf10(local_38);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14051bf10 FUN_14051bf10 body=69 status=ok
// SIG undefined FUN_14051bf10(void)

void FUN_14051bf10(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = DAT_14cace0c0;
  if (((*(longlong *)(param_1 + 8) != 0) && (DAT_14cace0c0 != 0)) &&
     (*(int *)(DAT_14cace0c0 + 400) == 2)) {
    uVar2 = FUN_14479d2ce();
    FUN_147972d68(lVar1,*(undefined4 *)(param_1 + 0x10),uVar2);
    return;
  }
  return;
}



// FUNCTION 14051bf56 FUN_14051bf56 body=93 status=ok
// SIG undefined FUN_14051bf56(void)

undefined8 * FUN_14051bf56(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x1d8) == 0) {
    if ((DAT_14cb0d2b0 == 0) || (*(longlong *)(DAT_14cb0d2b0 + 0xf50) == 0)) {
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0xffffffff;
      return param_2;
    }
    param_1 = *(longlong *)(DAT_14cb0d2b0 + 0xf50) + 0x90;
  }
  else {
    param_1 = param_1 + 0x1d0;
  }
  FUN_1479733cc(param_2,param_1);
  return param_2;
}



// FUNCTION 14051bfb4 FUN_14051bfb4 body=2184 status=ok
// SIG undefined FUN_14051bfb4(void)

void FUN_14051bfb4(longlong *param_1,longlong param_2)

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
  undefined1 *local_198;
  undefined8 local_190;
  undefined8 local_188;
  code *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_b4;
  undefined4 local_88;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
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
      local_190 = 0;
      local_198 = (undefined1 *)0x4008001;
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
            goto LAB_14051c0b0;
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
        local_190 = CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined1 *)((ulonglong)local_198 & 0xffffffff00000000);
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
LAB_14051c0b0:
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1468d96f0;
      local_190 = 0;
      local_198 = (undefined1 *)0x4008001;
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
            goto LAB_14051c186;
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
        local_190 = CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined1 *)((ulonglong)local_198 & 0xffffffff00000000);
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
LAB_14051c186:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_188 = FUN_1446ddbd2();
      local_180 = FUN_1403a682c;
      local_190 = 0;
      local_198 = (undefined1 *)0x108001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_58);
            goto LAB_14051c24e;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_58) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_58,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_58,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined1 *)((ulonglong)local_198 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_58,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_58,lVar2);
      }
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
LAB_14051c24e:
  memset(local_158,0,0x100);
  local_88 = 0xffffffff;
  local_154 = 0x3f800000;
  local_b4 = 0xffffffff;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_158);
            goto LAB_14051c31e;
          }
        }
        _Src_00 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != local_158) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_158,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(local_158,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_190 = CONCAT44(local_190._4_4_,(int)plVar1[6]);
        local_198 = (undefined1 *)((ulonglong)local_198 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,local_158,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_158,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
LAB_14051c31e:
  local_198 = local_158;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_198 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_168 = local_48;
  local_178 = local_58;
  uStack_174 = uStack_54;
  uStack_170 = uStack_50;
  uStack_16c = uStack_4c;
  (**(code **)(*param_1 + 0x698))(param_1,local_38,local_40);
  if ((local_30 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14051c83e FUN_14051c83e body=94 status=ok
// SIG undefined FUN_14051c83e(void)

void FUN_14051c83e(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14051c90a();
  FUN_140e15cbe(&local_28);
  FUN_14051c89e(param_1 + 0x20d,param_1,local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14051c89e FUN_14051c89e body=106 status=ok
// SIG undefined FUN_14051c89e(void)

void FUN_14051c89e(char *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == '\x01') {
    FUN_14067d554(param_1,&local_30);
    cVar1 = FUN_14048e8dc(param_1 + -0x20d,local_30,param_2,param_3);
    *param_1 = cVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14051c90a FUN_14051c90a body=130 status=ok
// SIG undefined FUN_14051c90a(void)

void FUN_14051c90a(longlong param_1)

{
  byte bVar1;
  
  if (((((*(byte *)(param_1 + 0x96a) & 4) == 0) && ((*(byte *)(param_1 + 0x3e0) & 1) != 0)) &&
      (*(longlong *)(param_1 + 0x3f0) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x3f0) + 0x279) != '\x01')) {
    *(byte *)(param_1 + 0x96a) = *(byte *)(param_1 + 0x96a) | 4;
    FUN_14051c98c(param_1 + 0x530,2);
    bVar1 = *(byte *)(param_1 + 0x968);
    *(byte *)(param_1 + 0x968) = bVar1 | 0x20;
    FUN_140b3b830(param_1,*(byte *)(param_1 + 0x79c) ^ 1 | (bVar1 & 0x10) >> 4);
  }
  *(undefined4 *)(param_1 + 0x97c) = 0xbf800000;
  return;
}



// FUNCTION 14051c98c FUN_14051c98c body=239 status=ok
// SIG undefined FUN_14051c98c(void)

void FUN_14051c98c(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  
  lVar3 = *(longlong *)(param_1 + 8);
  if ((((((lVar3 != 0) && (plVar4 = *(longlong **)(param_1 + 0x10), plVar4 != (longlong *)0x0)) &&
        (0 < (int)plVar4[1])) &&
       ((*(longlong *)(param_1 + 0x20) != 0 && (*(int *)(param_1 + 0x1c) != 0)))) &&
      ((uVar2 = *(uint *)(param_1 + 0x18), -1 < (int)uVar2 &&
       (((int)uVar2 < DAT_14c9647dc &&
        (lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar7 != 0)))))) &&
     ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
      ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
    iVar6 = (int)plVar4[1];
    do {
      plVar8 = (longlong *)0x0;
      if (iVar6 == 0) break;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar8 = plVar4;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      FUN_14051ca7c(lVar3,param_1,param_2);
      LOCK();
      plVar4 = plVar8 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014051ca77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar8 + 0x10))(plVar8);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14051ca7c FUN_14051ca7c body=186 status=ok
// SIG undefined FUN_14051ca7c(void)

void FUN_14051ca7c(longlong param_1,ulonglong param_2,uint param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_2 != 0) && (*(int *)(&DAT_00001868 + param_1) != *(int *)(param_1 + 0x18a4))) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar5 = param_1 + 0x18a8;
    if (*(longlong *)(param_1 + 0x1aa8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x1aa8);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x1ab0) - 1U & (uVar3 >> 0x10 ^ uVar3))
                             * 4);
    if (iVar4 != -1) {
      lVar5 = param_1 + 0x60;
      if (*(longlong *)(&DAT_00001860 + param_1) != 0) {
        lVar5 = *(longlong *)(&DAT_00001860 + param_1);
      }
      do {
        puVar2 = (ulonglong *)(lVar5 + (longlong)iVar4 * 0x18);
        if (*puVar2 == param_2) {
          if (puVar2 == (ulonglong *)0x0) {
            return;
          }
          if (puVar2 + 1 == (ulonglong *)0x0) {
            return;
          }
          puVar1 = (uint *)(puVar2[1] + 0xbc);
          *puVar1 = *puVar1 | param_3;
          return;
        }
        iVar4 = (int)puVar2[2];
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 14051cb36 FUN_14051cb36 body=181 status=ok
// SIG undefined FUN_14051cb36(void)

void FUN_14051cb36(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14051cd08(param_1 + 0x8c8,*(undefined8 *)(param_1 + 0x210),*(undefined8 *)(param_1 + 0x8c0));
  FUN_14051cbec(param_1);
  lVar3 = *(longlong *)(param_1 + 0xa08);
  uVar1 = 0;
  if ((longlong)*(int *)(param_1 + 0xa10) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0xa10) * 0xe0 + lVar3;
    do {
      FUN_14052082e(lVar3);
      FUN_1407f1458(lVar3 + 0xb0);
      lVar3 = lVar3 + 0xe0;
    } while (lVar3 != lVar2);
    uVar1 = *(undefined4 *)(param_1 + 0xa10);
    lVar3 = *(longlong *)(param_1 + 0xa08);
  }
  FUN_1407602ab(lVar3,uVar1);
  *(undefined4 *)(param_1 + 0xa10) = 0;
  if (*(int *)(param_1 + 0xa14) == 0) {
    return;
  }
  FUN_147b4e356(param_1 + 0xa08,0);
  return;
}



// FUNCTION 14051cbec FUN_14051cbec body=118 status=ok
// SIG undefined FUN_14051cbec(void)

void FUN_14051cbec(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x850);
  if (*(longlong **)(param_1 + 0x850) == (longlong *)0x0) {
    plVar1 = (longlong *)(param_1 + 0x2d0);
  }
  if ((longlong)*(int *)(param_1 + 0x858) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x858) * 0xb0;
    do {
      (**(code **)(*plVar1 + 0x20))(plVar1);
      plVar1 = plVar1 + 0x16;
      lVar2 = lVar2 + -0xb0;
    } while (lVar2 != 0);
  }
  FUN_140064cbc((longlong *)(param_1 + 0x2d0),0);
  FUN_14051cc62(param_1);
  *(undefined8 *)(param_1 + 0x8a0) = 0;
  return;
}



// FUNCTION 14051cc62 FUN_14051cc62 body=165 status=ok
// SIG undefined FUN_14051cc62(void)

void FUN_14051cc62(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((*(longlong *)(param_1 + 0x8a0) != 0) &&
       (lVar1 = *(longlong *)(param_1 + 0x298), lVar1 != 0)) &&
      (*(longlong *)(*(longlong *)(param_1 + 0x8a0) + 0x1c0) != 0)) && (0 < *(int *)(lVar1 + 0x18)))
  {
    lVar3 = 0;
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(param_1 + 0x210) + 0x388))
                (*(longlong **)(param_1 + 0x210),*(longlong *)(lVar1 + 0x10) + lVar3 + 0x220,
                 *(undefined8 *)(param_1 + 0x8a0));
      (**(code **)(**(longlong **)(param_1 + 0x210) + 0x388))
                (*(longlong **)(param_1 + 0x210),
                 *(longlong *)(*(longlong *)(param_1 + 0x298) + 0x10) + lVar3,
                 *(undefined8 *)(param_1 + 0x8a0));
      lVar2 = lVar2 + 1;
      lVar1 = *(longlong *)(param_1 + 0x298);
      lVar3 = lVar3 + 0x450;
    } while (lVar2 < *(int *)(lVar1 + 0x18));
  }
  return;
}



// FUNCTION 14051cd08 FUN_14051cd08 body=128 status=ok
// SIG undefined FUN_14051cd08(void)

void FUN_14051cd08(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((((param_2 != (longlong *)0x0) && (param_3 != 0)) && (*(longlong *)(param_3 + 0x1c0) != 0)) &&
     (0 < *(int *)(param_1 + 0x18))) {
    lVar1 = 0;
    do {
      (**(code **)(*param_2 + 0x388))
                (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + lVar1 * 8),param_3);
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x18));
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar1 = 0;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x10) + lVar1 * 8) + 0x20))();
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 14051cd88 FUN_14051cd88 body=1013 status=ok
// SIG undefined FUN_14051cd88(void)

void FUN_14051cd88(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  code *local_108;
  undefined8 local_f8;
  undefined **local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar6 = **(longlong **)(param_1 + 0x278);
  if (lVar6 != 0) {
    do {
      uVar4 = *(undefined8 *)(lVar6 + 8);
      lVar1 = *(longlong *)(param_1 + 0x278);
      *(longlong *)(param_1 + 0x278) = lVar6;
      *(undefined8 *)(lVar6 + 8) = 0;
      if (lVar1 != 0) {
        FUN_1400020a8();
      }
      iVar15 = *(int *)(param_1 + 0xb0);
      *(uint *)(param_1 + 0xb0) = iVar15 + 1U;
      if (*(uint *)(param_1 + 0xb4) < iVar15 + 1U) {
        FUN_14051d5d2(param_1 + 0xa8,iVar15);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar15 * 8) = uVar4;
      lVar6 = **(longlong **)(param_1 + 0x278);
    } while (lVar6 != 0);
  }
  lVar6 = **(longlong **)(param_1 + 0x268);
  if (lVar6 != 0) {
    lVar1 = param_1 + 200;
    do {
      lVar3 = *(longlong *)(lVar6 + 8);
      lVar11 = *(longlong *)(param_1 + 0x268);
      *(longlong *)(param_1 + 0x268) = lVar6;
      *(undefined8 *)(lVar6 + 8) = 0;
      if (lVar11 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_1 + 0xec) == 0) {
        iVar15 = *(int *)(param_1 + 0xc0);
        *(int *)(param_1 + 0xc0) = iVar15 + 1;
        if (*(int *)(param_1 + 0xc4) == iVar15) {
          FUN_14055ddfe(param_1 + 0xb8,iVar15);
        }
        iVar13 = *(int *)(param_1 + 0xe0);
        if (iVar13 == 0) {
          iVar5 = -1;
        }
        else {
          iVar5 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar5 = iVar13 + -1;
          }
          iVar5 = iVar5 >> 5;
        }
        iVar10 = iVar13 + 1;
        iVar12 = iVar13 + 0x1f;
        if (-1 < iVar13) {
          iVar12 = iVar13;
        }
        if (iVar12 >> 5 == iVar5) {
          *(int *)(param_1 + 0xe0) = iVar10;
        }
        else {
          if (*(int *)(param_1 + 0xe4) <= iVar13) {
            if (iVar13 + 0x20U < 0xa0) {
              iVar10 = 0x80;
              iVar5 = iVar13;
            }
            else {
              uVar14 = iVar13 + 0x20U >> 5;
              if (*(int *)(param_1 + 0xe4) + 0x1fU < 0xa0) {
                uVar9 = 4;
                if (4 < uVar14) {
                  uVar9 = uVar14;
                }
              }
              else {
                uVar9 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
              }
              uVar7 = FUN_144a3809e(uVar9 << 2,0);
              iVar5 = (int)(uVar7 >> 2);
              iVar10 = -0x20;
              if ((int)uVar14 <= iVar5) {
                iVar10 = iVar5 << 5;
              }
              iVar5 = *(int *)(param_1 + 0xe0);
            }
            *(int *)(param_1 + 0xe4) = iVar10;
            FUN_1446efbd8(lVar1,iVar5);
            iVar10 = *(int *)(param_1 + 0xe0) + 1;
          }
          iVar5 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar5 = iVar10;
          }
          *(int *)(param_1 + 0xe0) = iVar10;
          if (iVar10 % 0x20 != 0) {
            lVar6 = *(longlong *)(param_1 + 0xd8);
            if (*(longlong *)(param_1 + 0xd8) == 0) {
              lVar6 = lVar1;
            }
            bVar8 = -(char)(iVar10 % 0x20);
            *(uint *)(lVar6 + (longlong)(iVar5 >> 5) * 4) =
                 (uint)(*(int *)(lVar6 + (longlong)(iVar5 >> 5) * 4) << (bVar8 & 0x1f)) >>
                 (bVar8 & 0x1f);
          }
        }
        lVar6 = (longlong)iVar15;
        lVar11 = *(longlong *)(param_1 + 0xd8);
        if (*(longlong *)(param_1 + 0xd8) == 0) {
          lVar11 = lVar1;
        }
        bVar8 = (byte)iVar13 & 0x1f;
        puVar2 = (uint *)(lVar11 + (longlong)(iVar12 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
      }
      else {
        iVar15 = *(int *)(param_1 + 0xe8);
        lVar6 = (longlong)iVar15;
        iVar13 = *(int *)(*(longlong *)(param_1 + 0xb8) + 4 + lVar6 * 8);
        *(int *)(param_1 + 0xe8) = iVar13;
        iVar5 = *(int *)(param_1 + 0xec) + -1;
        *(int *)(param_1 + 0xec) = iVar5;
        if (iVar5 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar13 * 8) = 0xffffffff;
        }
      }
      lVar11 = *(longlong *)(param_1 + 0xd8);
      if (*(longlong *)(param_1 + 0xd8) == 0) {
        lVar11 = lVar1;
      }
      iVar13 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar13 = iVar15;
      }
      puVar2 = (uint *)(lVar11 + (longlong)(iVar13 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)iVar15 & 0x1f);
      *(longlong *)(*(longlong *)(param_1 + 0xb8) + lVar6 * 8) = lVar3;
      *(int *)(lVar3 + 0x1fc) = iVar15;
      lVar6 = **(longlong **)(param_1 + 0x268);
    } while (lVar6 != 0);
  }
  local_118 = *(undefined8 *)(param_1 + 0x1f8);
  local_d0 = &local_148;
  local_148 = *(undefined8 *)(param_1 + 0x1c8);
  uStack_140 = *(undefined8 *)(param_1 + 0x1d0);
  local_138 = *(undefined8 *)(param_1 + 0x1d8);
  uStack_130 = *(undefined8 *)(param_1 + 0x1e0);
  local_128 = *(undefined4 *)(param_1 + 0x1e8);
  uStack_124 = *(undefined4 *)(param_1 + 0x1ec);
  uStack_120 = *(undefined4 *)(param_1 + 0x1f0);
  uStack_11c = *(undefined4 *)(param_1 + 500);
  local_d8 = local_c8;
  local_c8[0] = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0x3ff00000;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  local_f8 = 0;
  local_e8 = &PTR_LAB_14a1e3ab0;
  local_108 = FUN_14051d17e;
  local_e0 = param_1;
  AcquireSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x1b8));
  FUN_14051d17e(&local_e0,*(undefined8 *)(param_1 + 0x1b0));
  ReleaseSRWLockExclusive(*(PSRWLOCK *)(param_1 + 0x1b8));
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14051d17e FUN_14051d17e body=1106 status=ok
// SIG undefined FUN_14051d17e(void)

void FUN_14051d17e(longlong *param_1,longlong *param_2)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  double *pdVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  int local_190;
  undefined1 local_188 [32];
  double local_168;
  double dStack_160;
  double local_158;
  undefined1 local_128 [32];
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar3 = *param_1;
  cVar8 = FUN_141745c40(lVar3 + 0x280,param_1[1]);
  if (cVar8 != '\0') {
    do {
      local_198 = *(undefined8 *)param_1[1];
      local_190 = *(int *)((undefined8 *)param_1[1] + 1);
      uVar17 = (uint)((ulonglong)local_198 >> 0x20) ^ (uint)local_198;
      iVar9 = FUN_14048535e(param_2,(uVar17 >> 2) + uVar17 * 0x40 + local_190 + 0x9e3779b9 ^ uVar17,
                            &local_198);
      lVar10 = (longlong)iVar9 * 0x20 + *param_2;
      if (lVar10 != 0 && iVar9 != -1) {
        plVar14 = *(longlong **)(lVar10 + 0x10);
        if (plVar14 != (longlong *)0x0) {
          uVar17 = ((uint *)param_1[1])[1];
          if (((((uVar17 != 0) && (uVar2 = *(uint *)param_1[1], -1 < (int)uVar2)) &&
               ((int)uVar2 < DAT_14c9647dc)) &&
              ((plVar12 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar12 != (longlong *)0x0 && (*(uint *)(plVar12 + 2) == uVar17)))) &&
             (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 && (*plVar12 != 0)))) {
            if (plVar14[1] != lVar3) goto LAB_14051d3c7;
            pdVar4 = (double *)param_1[2];
            FUN_144941734(plVar14,local_128);
            dVar1 = (double)plVar14[0x4b];
            dVar6 = local_f8 + dVar1;
            dVar7 = local_100 + dVar1;
            dVar1 = dVar1 + local_108;
            FUN_144941734(plVar14,local_188);
            if (((*pdVar4 <= dVar1) &&
                (dVar1 = (double)plVar14[0x4b],
                local_168 - dVar1 < pdVar4[3] || local_168 - dVar1 == pdVar4[3])) &&
               ((pdVar4[1] <= dVar7 &&
                (((dStack_160 - dVar1 < pdVar4[4] || dStack_160 - dVar1 == pdVar4[4] &&
                  (pdVar4[2] <= dVar6)) &&
                 (local_158 - dVar1 < pdVar4[5] || local_158 - dVar1 == pdVar4[5])))))) {
              if (((*(byte *)(plVar14 + 4) & 1) != 0) ||
                 ((((ABS((double)plVar14[0xc]) <= 9.99999993922529e-09 &&
                    (ABS((double)plVar14[0xd]) <= 9.99999993922529e-09)) &&
                   ((ABS((double)plVar14[0xe]) <= 9.99999993922529e-09 &&
                    ((ABS((double)plVar14[9]) <= 9.99999993922529e-09 &&
                     (ABS((double)plVar14[10]) <= 9.99999993922529e-09)))))) &&
                  (ABS((double)plVar14[0xb]) <= 9.99999993922529e-09)))) {
                dVar1 = *(double *)(param_1[1] + 0x70);
                if (dVar1 <= 9.99999993922529e-09) {
                  (**(code **)(*plVar14 + 0x48))(plVar14);
                }
                else {
                  (**(code **)(*plVar14 + 0x30))(plVar14,param_1[1] + 0x10,1.0 / dVar1);
                }
                lVar10 = plVar14[0x55];
                if ((longlong)(int)lVar10 != 0) {
                  lVar5 = plVar14[0x54];
                  lVar13 = 0;
                  do {
                    if (*(int *)(lVar5 + 0x500 + lVar13) == 5) {
                      plVar12 = *(longlong **)(lVar5 + 0x508 + lVar13);
                    }
                    else {
                      plVar12 = (longlong *)0x0;
                    }
                    if (plVar12 == plVar14) {
                      if (*(int *)(lVar5 + 0x510 + lVar13) == 5) {
                        plVar12 = *(longlong **)(lVar5 + 0x518 + lVar13);
                        goto LAB_14051d531;
                      }
                    }
                    else {
LAB_14051d531:
                      if (plVar12 != (longlong *)0x0) {
                        *(undefined1 *)(plVar12 + 0x4e) = 0;
                        plVar12[0x4d] = (longlong)((double)plVar12[0x4f] * 10.0);
                      }
                    }
                    lVar13 = lVar13 + 0x520;
                  } while ((longlong)(int)lVar10 * 0x520 - lVar13 != 0);
                }
              }
              else {
                plVar14 = plVar14 + 0x26;
                plVar12 = (longlong *)(param_1[1] + 0x10);
                for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *plVar12 = *plVar14;
                  plVar14 = plVar14 + 1;
                  plVar12 = plVar12 + 1;
                }
                puVar15 = (undefined8 *)param_1[1];
                puVar11 = (undefined8 *)FUN_14001cc68(0x90,0x10);
                *puVar11 = 0;
                puVar16 = puVar11 + 2;
                for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *puVar16 = *puVar15;
                  puVar15 = puVar15 + 1;
                  puVar16 = puVar16 + 1;
                }
                if (puVar11 != (undefined8 *)0x0) {
                  LOCK();
                  puVar15 = *(undefined8 **)(lVar3 + 0x290);
                  *(undefined8 **)(lVar3 + 0x290) = puVar11;
                  UNLOCK();
                  LOCK();
                  *puVar15 = puVar11;
                  UNLOCK();
                }
              }
              goto LAB_14051d3d2;
            }
          }
          FUN_14592525e(lVar3,plVar14);
        }
LAB_14051d3c7:
        FUN_140d3348a(param_2,&local_198);
      }
LAB_14051d3d2:
      cVar8 = FUN_141745c40(lVar3 + 0x280,param_1[1]);
    } while (cVar8 != '\0');
  }
  if ((local_c0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14051d5d2 FUN_14051d5d2 body=353 status=ok
// SIG undefined FUN_14051d5d2(void)

void FUN_14051d5d2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14051d657;
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
LAB_14051d657:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14051d743 FUN_14051d743 body=1236 status=ok
// SIG undefined FUN_14051d743(void)

void FUN_14051d743(char param_1,undefined8 param_2,undefined4 param_3)

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
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [32];
  undefined **local_88;
  undefined *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_14051d836;
    if (iVar6 != 1) goto LAB_14051d78f;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_14051d836;
  }
  else {
LAB_14051d78f:
    if (iVar6 == 0x10) goto LAB_14051d836;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
    goto LAB_14051d836;
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14051d836;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar2;
    if (puVar10 != (uint *)0x0) goto LAB_14051d905;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_14322aa43);
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
LAB_14051d905:
      puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar15 + 0x17);
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
        puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar15 + 0x17);
        uVar12 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar12 = 1;
          goto LAB_14051d985;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_14051d985:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar6 = 0;
    FUN_1447247dc(puVar15,0);
    *puVar15 = &PTR_FUN_14a3928b8;
    puVar15[0x15] = param_2;
    *(undefined4 *)(puVar15 + 0x16) = param_3;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar12 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
        uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
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
    if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
    }
    puVar15[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar15[9] = puVar15;
    puVar15[10] = puVar15;
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar5 = 1;
      if ((char)uVar16 != '\x06') {
        uVar5 = uVar16;
      }
      uVar16 = uVar5;
      uVar11 = 0;
    }
    else {
      if ((char)uVar16 == '\x06') {
        uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
      }
      uVar11 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar15[0xf] = uVar11;
    puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar15 + 0x1c) = iVar6;
    if (puVar15 == (undefined8 *)0x0) {
      local_78[0] = (undefined *)CONCAT71(local_78[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
      UNLOCK();
      local_78[0] = (undefined *)CONCAT71(local_78[0]._1_7_,1);
      FUN_1447439e4(puVar15);
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
    local_88 = local_78;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a392860;
    local_78[0] = &DAT_14322d962;
    local_50 = param_2;
    local_48 = param_3;
    FUN_14005a792(&DAT_14ca9a440,L"RenderingThreadTickCommand",&DAT_14ca99fa4);
    if (local_78[0] != (undefined *)0x0) {
      pppuVar13 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar13 = &local_58;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
LAB_14051d836:
  if (param_1 != '\0') {
    FUN_14080c2b4();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14051dc18 FUN_14051dc18 body=265 status=ok
// SIG undefined FUN_14051dc18(void)

undefined8 FUN_14051dc18(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14051dd1b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14051dd1b;
    }
    FUN_1400841de(param_1 + 0x18,&local_28);
  }
  else {
LAB_14051dd1b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14051dcd2;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_14051dcd2;
    }
  }
  uVar6 = 0;
LAB_14051dcd2:
  if (local_28 != 0) {
    FUN_140113f3a(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14051dd34 FUN_14051dd34 body=1692 status=ok
// SIG undefined FUN_14051dd34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14051dd34(longlong param_1)

{
  int *piVar1;
  undefined8 **ppuVar2;
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  undefined1 auStack_668 [32];
  uint local_648;
  undefined8 *local_640;
  undefined1 *local_638;
  undefined8 local_628;
  undefined **local_618;
  longlong local_610;
  undefined8 *local_5f8 [20];
  undefined8 *local_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_530;
  undefined4 local_528;
  undefined8 local_524;
  undefined4 local_51c;
  undefined8 local_510;
  undefined4 local_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4e0;
  undefined4 local_4d8;
  undefined8 local_4d4;
  undefined4 local_4cc;
  undefined8 local_4c0;
  undefined4 local_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_490;
  undefined4 local_488;
  undefined8 local_484;
  undefined4 local_47c;
  undefined8 local_470;
  undefined4 local_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_440;
  undefined4 local_438;
  undefined8 local_434;
  undefined4 local_42c;
  undefined8 local_420;
  undefined4 local_418;
  undefined8 local_410;
  undefined4 local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3e0;
  undefined4 local_3d8;
  undefined8 local_3d4;
  undefined4 local_3cc;
  undefined8 local_3c0;
  undefined4 local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_390;
  undefined4 local_388;
  undefined8 local_384;
  undefined4 local_37c;
  undefined8 local_370;
  undefined4 local_368;
  byte local_360;
  longlong local_358;
  undefined1 *local_348 [2];
  undefined8 *local_338;
  undefined1 local_308 [168];
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_234;
  undefined4 local_22c;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_194;
  undefined4 local_18c;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  byte local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_668;
  if (*(int *)(param_1 + 0x2ec) != 1) goto LAB_14051e39b;
  FUN_14010568c(param_1 + 0x180,param_1 + 0x30);
  FUN_1449b4dac(param_1 + 400,param_1 + 0x40);
  FUN_1449b4dac(param_1 + 0x1e0,param_1 + 0x90);
  FUN_1417fc412(param_1 + 0x230,param_1 + 0xe0);
  FUN_1406cbb9a(local_5f8,param_1,param_1 + 0x180);
  bVar4 = local_360;
  if (local_558 == &local_550) {
    memcpy(local_308,local_5f8,0xa8);
    local_70 = bVar4;
    if ((bVar4 & 1) != 0) goto LAB_14051df94;
  }
  else {
    if ((local_360 & 1) != 0) {
      FUN_1414a4ff0(&local_550);
    }
    local_530 = 0;
    local_528 = 0;
    local_550 = 0;
    uStack_548 = 0;
    local_524 = 0xffffffff00000080;
    local_51c = 0;
    local_510 = 0;
    local_508 = 0;
    FUN_144881636(&local_550,local_558);
    local_4e0 = 0;
    local_4d8 = 0;
    local_500 = 0;
    uStack_4f8 = 0;
    local_4d4 = 0xffffffff00000080;
    local_4cc = 0;
    local_4c0 = 0;
    local_4b8 = 0;
    FUN_144881636(&local_500,local_558 + 10);
    local_490 = 0;
    local_488 = 0;
    local_4b0 = 0;
    uStack_4a8 = 0;
    local_484 = 0xffffffff00000080;
    local_47c = 0;
    local_470 = 0;
    local_468 = 0;
    FUN_144881636(&local_4b0,local_558 + 0x14);
    local_440 = 0;
    local_438 = 0;
    local_460 = 0;
    uStack_458 = 0;
    local_434 = 0xffffffff00000080;
    local_42c = 0;
    local_420 = 0;
    local_418 = 0;
    FUN_144881636(&local_460,local_558 + 0x1e);
    local_410 = local_558[0x28];
    local_408 = *(undefined4 *)(local_558 + 0x29);
    local_3e0 = 0;
    local_3d8 = 0;
    local_400 = 0;
    uStack_3f8 = 0;
    local_3d4 = 0xffffffff00000080;
    local_3cc = 0;
    local_3c0 = 0;
    local_3b8 = 0;
    FUN_144881636(&local_400,local_558 + 0x2a);
    local_390 = 0;
    local_388 = 0;
    local_3b0 = 0;
    uStack_3a8 = 0;
    local_384 = 0xffffffff00000080;
    local_37c = 0;
    local_370 = 0;
    local_368 = 0;
    FUN_144881636(&local_3b0,local_558 + 0x34);
    local_360 = 1;
    memcpy(local_308,local_5f8,0xa8);
    local_70 = 1;
LAB_14051df94:
    local_240 = 0;
    local_238 = 0;
    local_260 = 0;
    uStack_258 = 0;
    local_234 = 0xffffffff00000080;
    local_22c = 0;
    local_220 = 0;
    local_218 = 0;
    FUN_144881636(&local_260,&local_550);
    local_1f0 = 0;
    local_1e8 = 0;
    local_210 = 0;
    uStack_208 = 0;
    local_1e4 = 0xffffffff00000080;
    local_1dc = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    FUN_144881636(&local_210,&local_500);
    local_1a0 = 0;
    local_198 = 0;
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_194 = 0xffffffff00000080;
    local_18c = 0;
    local_180 = 0;
    local_178 = 0;
    FUN_144881636(&local_1c0,&local_4b0);
    local_150 = 0;
    local_148 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_144 = 0xffffffff00000080;
    local_13c = 0;
    local_130 = 0;
    local_128 = 0;
    FUN_144881636(&local_170,&local_460);
    local_120 = local_410;
    local_118 = local_408;
    local_f0 = 0;
    local_e8 = 0;
    local_110 = 0;
    uStack_108 = 0;
    local_e4 = 0xffffffff00000080;
    local_dc = 0;
    local_d0 = 0;
    local_c8 = 0;
    FUN_144881636(&local_110,&local_400);
    local_a0 = 0;
    local_98 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_94 = 0xffffffff00000080;
    local_8c = 0;
    local_80 = 0;
    local_78 = 0;
    FUN_144881636(&local_c0,&local_3b0);
    bVar4 = local_360;
  }
  if ((bVar4 & 1) != 0) {
    FUN_1414a4ff0(&local_550);
  }
  uVar5 = DAT_14cb11fd0;
  if (((DAT_14cb11fc8 != 0x400) || (DAT_14c7585d8 != 0)) &&
     ((DAT_14cb11fc8 != 0x800 || (DAT_14c7585dc != 0)))) {
    uVar5 = DAT_14cb11fc8 | _DAT_14cb11fcc;
  }
  memcpy(local_5f8,local_308,0xa8);
  local_360 = local_70;
  if (local_70 == 1) {
    FUN_1437bec8e(&local_550,&local_260);
  }
  local_348[0] = (undefined1 *)0x0;
  local_358 = param_1;
  puVar3 = (undefined8 *)FUN_14001cc68(0x2c0,0x10);
  *puVar3 = &PTR_LAB_14ab2d620;
  local_338 = puVar3;
  memcpy(puVar3 + 2,local_5f8,0xa8);
  *(byte *)(puVar3 + 0x55) = local_360;
  if (local_360 == 1) {
    FUN_1437bec8e(puVar3 + 0x17,&local_550);
  }
  local_648 = uVar5 | 0xff;
  puVar3[0x56] = local_358;
  if (puVar3 + 2 != (undefined8 *)0x0) {
    local_348[0] = &LAB_1437c14c0;
  }
  FUN_14014aede(&local_640,local_348);
  ppuVar2 = (undefined8 **)(param_1 + 0x2f0);
  if (ppuVar2 == &local_640) {
LAB_14051e2b7:
    if (local_640 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_640 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_640)(local_640,1);
      }
    }
  }
  else {
    puVar3 = *ppuVar2;
    *ppuVar2 = local_640;
    local_640 = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      goto LAB_14051e2b7;
    }
  }
  if (local_360 == 1) {
    FUN_1414a4ff0(&local_550);
  }
  local_628 = 0;
  local_618 = &PTR_LAB_14ab2d640;
  local_638 = &LAB_1437c1542;
  local_648 = 1;
  local_610 = param_1;
  FUN_140e6df44(local_5f8);
  ppuVar2 = (undefined8 **)(param_1 + 0x2f8);
  if (ppuVar2 == local_5f8) {
LAB_14051e356:
    if (local_5f8[0] != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_5f8[0] + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_5f8[0])(local_5f8[0],1);
      }
    }
  }
  else {
    puVar3 = *ppuVar2;
    *ppuVar2 = local_5f8[0];
    local_5f8[0] = (undefined8 *)0x0;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      goto LAB_14051e356;
    }
  }
  *(undefined4 *)(param_1 + 0x2ec) = 2;
  if (local_70 == 1) {
    FUN_1414a4ff0(&local_260);
    local_70 = 0;
  }
LAB_14051e39b:
  if ((local_60 ^ (ulonglong)auStack_668) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14051e3d2 FUN_14051e3d2 body=479 status=ok
// SIG undefined FUN_14051e3d2(void)

void FUN_14051e3d2(longlong param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48 [2];
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x988) == '\0') {
    QueryPerformanceCounter(local_48);
    iVar1 = *(int *)(param_1 + 0x15c);
    *(int *)(param_1 + 0x15c) = iVar1 + 1;
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
    }
    bVar3 = false;
    uVar7 = 2;
    do {
      FUN_143788d76(param_1);
      local_38 = 0;
      FUN_141690028(param_1);
      cVar4 = FUN_143788e04(param_1);
      if (cVar4 == '\0') {
        if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
          *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 1;
          lVar6 = 0;
          do {
            if (*(int *)(*(longlong *)(lVar6 + *(longlong *)(param_1 + 0x98)) + 0x100) != 0) {
              FUN_1404601ea(param_1 + 0x98);
              goto LAB_14051e4a3;
            }
            lVar6 = lVar6 + 8;
          } while ((longlong)*(int *)(param_1 + 0xa0) * 8 != lVar6);
          FUN_1404601ea(param_1 + 0x98);
        }
      }
      else {
LAB_14051e4a3:
        uVar7 = 2;
        if ((((!bVar3) && (*(longlong *)(DAT_14cb0d2b0 + 0xc20) != 0)) &&
            (plVar5 = *(longlong **)(DAT_14cb0d2b0 + 0xe40), plVar5 != (longlong *)0x0)) &&
           (((int)plVar5[1] != 0 && ((longlong *)*plVar5 != (longlong *)0x0)))) {
          cVar4 = (**(code **)(*(longlong *)*plVar5 + 0x30))();
          if (cVar4 != '\0') {
            if (*(int *)(*(undefined8 **)(DAT_14cb0d2b0 + 0xe40) + 1) == 0) {
              plVar5 = (longlong *)0x0;
            }
            else {
              plVar5 = (longlong *)**(undefined8 **)(DAT_14cb0d2b0 + 0xe40);
            }
            (**(code **)(*plVar5 + 0x58))
                      (plVar5,*(undefined8 *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0xf8));
            bVar3 = true;
          }
        }
      }
      FUN_143786ce4(param_1,1);
      bVar2 = 1 < uVar7;
      uVar7 = 1;
    } while (bVar2);
    if (((bVar3) && (plVar5 = *(longlong **)(DAT_14cb0d2b0 + 0xe48), plVar5 != (longlong *)0x0)) &&
       (((int)plVar5[1] != 0 && ((longlong *)*plVar5 != (longlong *)0x0)))) {
      cVar4 = (**(code **)(*(longlong *)*plVar5 + 0x30))();
      if (cVar4 != '\0') {
        if (*(int *)(*(undefined8 **)(DAT_14cb0d2b0 + 0xe48) + 1) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = (longlong *)**(undefined8 **)(DAT_14cb0d2b0 + 0xe48);
        }
        (**(code **)(*plVar5 + 0x58))();
      }
    }
    QueryPerformanceCounter(local_48);
    *(int *)(param_1 + 0x15c) = *(int *)(param_1 + 0x15c) + -1;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14051e5b2 FUN_14051e5b2 body=2264 status=ok
// SIG undefined FUN_14051e5b2(void)

void FUN_14051e5b2(longlong param_1,float param_2)

{
  int *piVar1;
  longlong *plVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined *puVar17;
  int iVar18;
  undefined8 ****ppppuVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong unaff_RBP;
  undefined7 uVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auStack_1b8 [32];
  undefined8 *local_198;
  undefined1 local_190;
  uint local_184;
  longlong local_180;
  float local_174;
  undefined8 ***local_170 [3];
  ushort local_158;
  byte local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  longlong *local_138;
  longlong lStack_130;
  undefined8 local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 ***local_f8;
  longlong *local_f0;
  ushort local_e0;
  byte local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  plVar13 = (longlong *)(**(code **)(*(longlong *)(param_1 + 8) + 0x18))(param_1 + 8);
  lVar14 = (**(code **)(*(longlong *)(param_1 + 8) + 0x20))(param_1 + 8);
  if (lVar14 != 0) {
    uVar22 = (undefined7)(unaff_RBP >> 8);
    if (((((*(longlong *)(lVar14 + 0x30) != 0) &&
          (lVar20 = *(longlong *)(*(longlong *)(lVar14 + 0x30) + 0x2b0), lVar20 != 0)) &&
         (*(longlong *)(lVar20 + 0x588) != 0)) &&
        (*(double *)(lVar14 + 0x708) <= *(double *)(lVar14 + 0x6d0))) ||
       (((*(byte *)(lVar14 + 0x154) & 0x40) != 0 && (iVar12 = FUN_14490d72a(lVar14), iVar12 == 3))))
    {
      unaff_RBP = CONCAT71(uVar22,1);
      goto LAB_14051e6db;
    }
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
      lVar20 = 0;
      do {
        lVar6 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar20);
        if (*(longlong *)(lVar6 + 0x360) == lVar14) {
          if ((lVar6 != 0) && (unaff_RBP = CONCAT71(uVar22,1), (*(byte *)(lVar6 + 0x278) & 1) != 0))
          goto LAB_14051e6db;
          break;
        }
        lVar20 = lVar20 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar20);
    }
    cVar10 = FUN_144a80e00(lVar14);
    if (cVar10 != '\0') {
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*(byte *)(lVar14 + 0x155) >> 7);
      goto LAB_14051e6db;
    }
  }
  unaff_RBP = 0;
LAB_14051e6db:
  uVar21 = (ulonglong)(int)plVar13[1];
  if (0 < (longlong)uVar21) {
    lVar14 = uVar21 * 0x78;
    local_184 = (uint)unaff_RBP;
    do {
      lVar14 = lVar14 + -0x78;
      lVar20 = *plVar13;
      lVar6 = *(longlong *)(lVar20 + lVar14);
      if (((char)unaff_RBP == '\0') || (*(char *)(lVar6 + 0xa6) == '\x01')) {
        plVar2 = (longlong *)(lVar20 + lVar14);
        local_174 = *(float *)(lVar20 + 0x6c + lVar14);
        *(float *)(lVar20 + 0x6c + lVar14) = local_174 + param_2;
        if (((*(char *)(lVar20 + 0x38 + lVar14) == '\0') &&
            (fVar25 = (local_174 + param_2) - *(float *)(lVar20 + 0x68 + lVar14),
            pfVar3 = (float *)(lVar20 + 0x70 + lVar14), *pfVar3 <= fVar25 && fVar25 != *pfVar3)) ||
           ((*(char *)(*(longlong *)(lVar20 + 8 + lVar14) + 8) == '\x01' &&
            (*(char *)(lVar6 + 0x3c1) != '\x01')))) {
          FUN_14051f3ba(plVar2);
          FUN_14051f312(plVar13,(int)uVar21 + -1,1);
        }
        else {
          fVar25 = *(float *)(lVar20 + 0x10 + lVar14);
          fVar27 = *(float *)(lVar20 + 0x14 + lVar14);
          fVar4 = *(float *)(lVar20 + 0x18 + lVar14);
          fVar5 = *(float *)(lVar20 + 0x1c + lVar14);
          if ((*(byte *)(lVar6 + 0x18) & 8) != 0) {
            FUN_14051f02a(plVar2);
            lVar15 = *plVar2;
            if ((*(byte *)(lVar15 + 0x18) & 8) != 0) {
              *(undefined4 *)(lVar20 + 0x1c + lVar14) = 0x3f800000;
              if (*(char *)(lVar15 + 0xa7) == '\x01') {
                local_118 = 0;
                local_108 = 0;
                local_128 = 0;
                uStack_120 = 0;
                local_138 = (longlong *)0x0;
                lStack_130 = 0;
                local_148 = 0;
                uStack_140 = 0;
                uStack_110 = 0xf00000d0;
                uStack_100 = 0x3f800000;
                cVar10 = FUN_1401b48d6(lVar15 + 0xa8,&local_148);
                if ((cVar10 == '\0') &&
                   (lVar15 = (**(code **)(**(longlong **)(lVar20 + 8 + lVar14) + 0x18))(),
                   lVar15 != 0)) {
                  lVar23 = *plVar2;
                  local_148 = local_148 & 0xffffffffffffff00;
                  uStack_120 = uStack_120 & 0xffffffff00000000;
                  FUN_1456bb102(&local_148,lVar15);
                  FUN_1448729ea(lVar23 + 0xa8,local_170,&local_148);
                  if (local_150 == 3) {
                    fVar24 = local_170[0]._0_4_;
                    bVar11 = 3;
                  }
                  else {
                    FUN_1400b56fe(&local_f8,local_170,3);
                    fVar24 = 0.0;
                    if (local_d8 != 0) {
                      fVar24 = local_f8._0_4_;
                    }
                    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 +
                                       (ulonglong)((uint)local_d8 * 0x120));
                    if (pcVar7 != (code *)0x0) {
                      ppppuVar19 = &local_f8;
                      if (0x18 < local_e0) {
                        ppppuVar19 = (undefined8 ****)local_f8;
                      }
                      (*pcVar7)(ppppuVar19);
                    }
                    bVar11 = local_150;
                    if (0x18 < local_e0) {
                      FUN_1400020a8(local_f8);
                      bVar11 = local_150;
                    }
                  }
                  *(float *)(lVar20 + 0x1c + lVar14) = fVar24 * *(float *)(lVar20 + 0x1c + lVar14);
                  pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar11 * 0x120));
                  if (pcVar7 != (code *)0x0) {
                    ppppuVar19 = local_170;
                    if (0x18 < local_158) {
                      ppppuVar19 = (undefined8 ****)local_170[0];
                    }
                    (*pcVar7)(ppppuVar19);
                  }
                  if (0x18 < local_158) {
                    FUN_1400020a8(local_170[0]);
                  }
                  if ((longlong)(int)uStack_120 != 0) {
                    lVar23 = (longlong)(int)uStack_120 + -1;
                    local_180 = DAT_14c9a3da0;
                    lVar15 = lVar23 * 0x10;
                    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar15),
                                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar15));
                    if (*(longlong *)(local_180 + lVar15) != 0) {
                      FUN_1400020a8();
                    }
                    lVar16 = DAT_14c9a3da0;
                    iVar12 = (int)lVar23;
                    if (DAT_14c9a3dd4 != 0) {
                      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
                    }
                    *(undefined4 *)(lVar16 + lVar15) = 0xffffffff;
                    iVar18 = -1;
                    if (0 < DAT_14c9a3dd4) {
                      iVar18 = DAT_14c9a3dd0;
                    }
                    *(int *)(lVar16 + 4 + lVar15) = iVar18;
                    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                    puVar17 = DAT_14c9a3dc0;
                    if (DAT_14c9a3dc0 == (undefined *)0x0) {
                      puVar17 = &DAT_14c9a3db0;
                    }
                    iVar18 = iVar12 + 0x1f;
                    if (-1 < iVar12) {
                      iVar18 = iVar12;
                    }
                    bVar11 = (byte)lVar23 & 0x1f;
                    DAT_14c9a3dd0 = iVar12;
                    *(uint *)(puVar17 + (longlong)(iVar18 >> 5) * 4) =
                         *(uint *)(puVar17 + (longlong)(iVar18 >> 5) * 4) &
                         (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
                    uStack_120 = uStack_120 & 0xffffffff00000000;
                  }
                  if (((char)local_148 == '\x03') && (local_138 != (longlong *)0x0)) {
                    LOCK();
                    piVar1 = (int *)((longlong)local_138 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*local_138 + 0x10))();
                    }
                  }
                }
                lVar23 = *plVar2;
                lVar15 = lVar23 + 0x180;
                lVar16 = FUN_1447e736e(lVar15);
                if (lVar16 == 0) {
                  lVar23 = lVar23 + 0x100;
                }
                else {
                  lVar23 = FUN_1447e736e(lVar15);
                  lVar23 = lVar23 + 0x30;
                }
                unaff_RBP = (ulonglong)local_184;
                if (lVar23 != 0) {
                  if ((*(char *)(lVar20 + 0x38 + lVar14) == '\x01') &&
                     (*(int *)(lVar23 + 0x78) != 0)) {
                    FUN_1447c7e44();
                  }
                  fVar24 = (float)FUN_1448c9f94(lVar23);
                  *(float *)(lVar20 + 0x1c + lVar14) = fVar24 * *(float *)(lVar20 + 0x1c + lVar14);
                }
              }
              lVar15 = *plVar2;
              if (*(char *)(lVar15 + 0x1a8) == '\x01') {
                if (*(char *)(lVar15 + 0x1a9) == '\x01') {
                  lVar23 = FUN_1447e736e(lVar15 + 0x238);
                  if (lVar23 == 0) {
                    lVar15 = lVar15 + 0x1b8;
                  }
                  else {
                    lVar15 = FUN_1447e736e(lVar15 + 0x238);
                    lVar15 = lVar15 + 0x30;
                  }
                  unaff_RBP = (ulonglong)local_184;
                  if (lVar15 != 0) {
                    fVar24 = (float)FUN_1448c9f94(lVar15);
                    goto LAB_14051ed45;
                  }
                }
                else {
                  fVar24 = *(float *)(lVar20 + 0x70 + lVar14);
                  if (0.0001 < fVar24) {
                    fVar24 = 1.0 - *(float *)(lVar20 + 0x6c + lVar14) / fVar24;
                    if (fVar24 <= 0.0) {
                      fVar24 = 0.0;
                    }
LAB_14051ed45:
                    *(float *)(lVar20 + 0x1c + lVar14) = fVar24 * *(float *)(lVar20 + 0x1c + lVar14)
                    ;
                  }
                }
              }
            }
          }
          FUN_14051ee92(plVar2);
          if (*(char *)(lVar20 + 0x38 + lVar14) == '\x01') {
            local_f8 = (undefined8 ***)&local_174;
            local_170[0] = *(undefined8 ****)(lVar6 + 0x68);
            local_f0 = plVar2;
            FUN_1446dcdd4(&local_148,local_170);
            if (DAT_14cb7d258 == 0) {
              if (lStack_130 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              lVar15 = FUN_144837462(DAT_14cb7d258,&local_148);
              if (lStack_130 != 0) {
                FUN_1400020a8();
              }
              if ((lVar15 != 0) && (fVar25 = *(float *)(lVar15 + 0x1c), 0.0001 < fVar25)) {
                fVar27 = *(float *)(lVar20 + 0x6c + lVar14) / fVar25;
                auVar26 = blendps(ZEXT416((uint)(local_174 / fVar25)),ZEXT816(0),0xe);
                auVar26 = roundps(auVar26,auVar26,1);
                if (auVar26._0_4_ < (float)((int)ROUND(fVar27 + fVar27 + -0.5) >> 1)) {
                  plVar8 = *(longlong **)(lVar20 + 8 + lVar14);
                  local_138 = DAT_14c846508;
                  local_148 = CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
                  uStack_140 = CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
                  local_198 = &local_148;
                  local_190 = 0;
                  (**(code **)(*plVar8 + 0x60))(plVar8,lVar6 + 0x68,0x3f800000,0);
                }
              }
            }
            if ((*(byte *)(lVar6 + 0x18) & 2) != 0) {
              FUN_143d46734(&local_f8,lVar6 + 0x80);
            }
LAB_14051ea34:
            plVar8 = *(longlong **)(lVar20 + 8 + lVar14);
            (**(code **)(*plVar8 + 0x70))(plVar8,plVar2);
          }
          else if (((*(byte *)(lVar6 + 0x18) & 0x18) != 0) ||
                  (0.0001 < ABS(*(float *)(lVar20 + 0x10 + lVar14) *
                                *(float *)(lVar20 + 0x14 + lVar14) *
                                *(float *)(lVar20 + 0x18 + lVar14) *
                                *(float *)(lVar20 + 0x1c + lVar14) - fVar25 * fVar27 * fVar4 * fVar5
                               ))) goto LAB_14051ea34;
          plVar8 = *(longlong **)(lVar20 + 8 + lVar14);
          (**(code **)(*plVar8 + 0x88))(plVar8,plVar2);
        }
      }
      bVar9 = 1 < uVar21;
      uVar21 = uVar21 - 1;
    } while (bVar9);
  }
  if ((local_d0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14051ee92 FUN_14051ee92 body=407 status=ok
// SIG undefined FUN_14051ee92(void)

void FUN_14051ee92(longlong *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  float fVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined4 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  uVar3 = *(uint *)(lVar2 + 0x18);
  if (((uVar3 & 0x10) != 0) &&
     ((fVar1 = *(float *)(lVar2 + 0x98), fVar1 < 0.0001 ||
      (fVar4 = *(float *)((longlong)param_1 + 0x6c) / fVar1,
      (int)ROUND(param_2 / fVar1 + param_2 / fVar1 + -0.5) >> 1 <
      (int)ROUND(fVar4 + fVar4 + -0.5) >> 1)))) {
    fVar1 = *(float *)(lVar2 + 0x9c);
    fVar4 = *(float *)(lVar2 + 0xa0);
    uVar3 = rand();
    *(float *)((longlong)param_1 + 0x14) =
         ((float)(uVar3 & 0x7fff) / 32767.0) * (fVar1 - fVar4) + fVar4;
    uVar3 = *(uint *)(*param_1 + 0x18);
  }
  if ((uVar3 & 4) != 0) {
    fVar1 = *(float *)(param_1 + 6);
    if ((fVar1 < 0.0001) ||
       (fVar4 = *(float *)((longlong)param_1 + 0x6c) / fVar1,
       (int)ROUND(param_2 / fVar1 + param_2 / fVar1 + -0.5) >> 1 <
       (int)ROUND(fVar4 + fVar4 + -0.5) >> 1)) {
      FUN_14051fb5a(fVar1,&local_68);
      FUN_14051f43a(param_1 + 4,&local_68);
      *(undefined4 *)(param_1 + 6) = local_58;
      FUN_14051f497(local_68,local_60);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14051f02a FUN_14051f02a body=742 status=ok
// SIG undefined FUN_14051f02a(void)

void FUN_14051f02a(longlong *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
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
  undefined1 local_50 [24];
  code *local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(uint *)(*param_1 + 0x18) & 3) == 0) goto LAB_14051f050;
  if (((*(uint *)(*param_1 + 0x18) & 0x20) == 0) && (*(int *)((longlong)param_1 + 0x5c) != 0)) {
    uVar3 = *(uint *)(param_1 + 0xb);
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)((longlong)param_1 + 0x5c)))
          && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) && (lVar4 = *plVar6, lVar4 != 0)) {
        if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
          if (DAT_14cac9ca8 == 0) {
            local_70 = &local_38;
            local_38 = FUN_141030f22;
            local_60 = FUN_14081d0ea;
            local_68 = FUN_14081d0ea;
            local_78 = &LAB_1478c0a72;
            local_80 = &LAB_1417b2375;
            local_88 = L"Engine";
            local_90 = 0x1000000000;
            local_98 = 0x10000004;
            local_a0 = 8;
            local_a8 = 0x390;
            FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
          }
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
          goto LAB_14051f21f;
          lVar4 = *(longlong *)(lVar4 + 0x1c8);
          if (lVar4 == 0) {
            plVar6 = &DAT_14c8464e0;
            lVar4 = DAT_14c8464f0;
          }
          else {
            plVar6 = (longlong *)(lVar4 + 0x260);
            lVar4 = *(longlong *)(lVar4 + 0x270);
          }
LAB_14051f1c6:
          lVar5 = plVar6[1];
          param_1[8] = *plVar6;
          param_1[9] = lVar5;
          param_1[10] = lVar4;
        }
        else {
LAB_14051f21f:
          lVar4 = FUN_14479d2ce(param_1 + 0xb);
          if (lVar4 != 0) {
            lVar5 = FUN_144a799b0();
            if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
              plVar6 = (longlong *)(lVar4 + 0x260);
              lVar4 = *(longlong *)(lVar4 + 0x270);
              goto LAB_14051f1c6;
            }
          }
        }
      }
    }
  }
  (**(code **)(*(longlong *)param_1[1] + 0x28))((longlong *)param_1[1],&local_38,local_50);
  if ((*(byte *)(*param_1 + 0x18) & 1) != 0) {
    fVar1 = *(float *)((longlong)param_1 + 100);
    if ((0.0 < fVar1) && (fVar2 = *(float *)(param_1 + 0xc), fVar2 <= fVar1)) {
      fVar7 = (float)SQRT(((double)param_1[10] - local_28) * ((double)param_1[10] - local_28) +
                          ((double)param_1[8] - (double)local_38) *
                          ((double)param_1[8] - (double)local_38) +
                          ((double)param_1[9] - local_30) * ((double)param_1[9] - local_30));
      if (fVar7 < fVar2) {
        fVar8 = 1.0;
      }
      else {
        fVar8 = 0.0;
        if (fVar7 <= fVar1) {
          if (fVar1 - fVar2 <= 0.0001) goto LAB_14051f050;
          fVar8 = 1.0 - (fVar7 - fVar2) / (fVar1 - fVar2);
        }
      }
      *(float *)(param_1 + 3) = fVar8;
    }
  }
LAB_14051f050:
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14051f312 FUN_14051f312 body=110 status=ok
// SIG undefined FUN_14051f312(void)

void FUN_14051f312(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)param_2 * 0x78 + lVar1);
  FUN_14051f380(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x78),(longlong)iVar3 * 0x78);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 14051f380 FUN_14051f380 body=58 status=ok
// SIG undefined FUN_14051f380(void)

void FUN_14051f380(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      FUN_14051f497(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xf;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14051f3ba FUN_14051f3ba body=127 status=ok
// SIG undefined FUN_14051f3ba(void)

void FUN_14051f3ba(longlong *param_1)

{
  (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],*param_1 + 0x68,1);
  (**(code **)(*(longlong *)param_1[1] + 0x68))((longlong *)param_1[1],*param_1 + 0x80,1);
  FUN_14051f43a(param_1 + 4,&DAT_14cb7d3a0);
  *(undefined4 *)(param_1 + 6) = DAT_14cb7d3b0;
  (**(code **)(*(longlong *)param_1[1] + 0x80))((longlong *)param_1[1],*param_1 + 0x268);
  FUN_14051f8bc(param_1);
  FUN_14051f9d8(param_1);
  FUN_14051f716(param_1);
  return;
}



// FUNCTION 14051f43a FUN_14051f43a body=93 status=ok
// SIG undefined FUN_14051f43a(void)

undefined8 * FUN_14051f43a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14051f497(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14051f772(param_1,iVar1);
      FUN_14051f5b0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14051f497 FUN_14051f497 body=45 status=ok
// SIG undefined FUN_14051f497(void)

void FUN_14051f497(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_14051f4c4(param_1);
      param_1 = param_1 + 0xb8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14051f4c4 FUN_14051f4c4 body=236 status=ok
// SIG undefined FUN_14051f4c4(void)

void FUN_14051f4c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b00bdf8;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  param_1[1] = &DAT_14a176f00;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  param_1[1] = &PTR_FUN_14a177080;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_14472eb64(param_1 + 2,0);
  }
  param_1[8] = 0xffffffff;
  *(undefined4 *)(param_1 + 7) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3c)) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80;
    FUN_1446efbd8(param_1 + 4,0);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14051f5b0 FUN_14051f5b0 body=357 status=ok
// SIG undefined FUN_14051f5b0(void)

void FUN_14051f5b0(longlong param_1,undefined1 *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  if (param_3 != 0) {
    puVar6 = (undefined8 *)(param_1 + 0x80);
    do {
      *(undefined1 *)(puVar6 + -0x10) = *param_2;
      puVar6[-0xf] = &PTR_FUN_14b00bdf8;
      puVar6[-9] = 0;
      *(undefined4 *)(puVar6 + -8) = 0;
      puVar6[-0xd] = 0;
      puVar6[-0xc] = 0;
      *(undefined8 *)((longlong)puVar6 + -0x3c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar6 + -0x34) = 0;
      puVar6[-5] = 0;
      *(undefined4 *)(puVar6 + -4) = 0;
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      puVar6[-0xe] = &PTR_FUN_14a176fc0;
      *(undefined4 *)(puVar6 + -1) = *(undefined4 *)(param_2 + 0x78);
      *(undefined2 *)((longlong)puVar6 + -4) = *(undefined2 *)(param_2 + 0x7c);
      puVar6[-0xe] = &DAT_14a176f00;
      *puVar6 = 0;
      iVar1 = *(int *)(param_2 + 0x88);
      pvVar2 = *(void **)(param_2 + 0x80);
      *(int *)(puVar6 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
      }
      else {
        FUN_140501c24(puVar6,iVar1,0);
        memcpy((void *)*puVar6,pvVar2,(longlong)iVar1 * 0x1c);
      }
      puVar6[2] = *(undefined8 *)(param_2 + 0x90);
      uVar3 = *(undefined4 *)(param_2 + 0x9c);
      uVar4 = *(undefined4 *)(param_2 + 0xa0);
      uVar5 = *(undefined4 *)(param_2 + 0xa4);
      *(undefined4 *)(puVar6 + 3) = *(undefined4 *)(param_2 + 0x98);
      *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar3;
      *(undefined4 *)(puVar6 + 4) = uVar4;
      *(undefined4 *)((longlong)puVar6 + 0x24) = uVar5;
      puVar6[5] = 0;
      iVar1 = *(int *)(param_2 + 0xb0);
      pvVar2 = *(void **)(param_2 + 0xa8);
      *(int *)(puVar6 + 6) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
      }
      else {
        FUN_1446dd670(puVar6 + 5,iVar1,0);
        memcpy((void *)puVar6[5],pvVar2,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 0xb8;
      puVar6 = puVar6 + 0x17;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14051f716 FUN_14051f716 body=91 status=ok
// SIG undefined FUN_14051f716(void)

void FUN_14051f716(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x368) != 0) {
    (**(code **)(*(longlong *)param_1[1] + 0xb0))
              ((longlong *)param_1[1],*(longlong *)(lVar1 + 0x368),lVar1 + 0x370,1);
    lVar1 = *param_1;
  }
  if (*(longlong *)(lVar1 + 0x310) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014051f752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1[1] + 0xb8))();
  return;
}



// FUNCTION 14051f772 FUN_14051f772 body=329 status=ok
// SIG undefined FUN_14051f772(void)

void FUN_14051f772(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar7 = 0;
  if (param_2 != 0) {
    uVar4 = (longlong)param_2 * 0xb8;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14051f7e2;
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
LAB_14051f7e2:
    iVar5 = (int)(uVar4 / 0xb8);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0xb8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14051f8bc FUN_14051f8bc body=282 status=ok
// SIG undefined FUN_14051f8bc(void)

void FUN_14051f8bc(longlong *param_1)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 unaff_RBP;
  undefined4 *puVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_1402d1dc0(*param_1 + 0x288);
  if (lVar3 != 0) {
    lVar3 = (**(code **)(*(longlong *)param_1[1] + 0xd8))();
    if (lVar3 != 0) {
      uVar4 = FUN_1402d1dc0(*param_1 + 0x288);
      puVar6 = &DAT_14c9485f0;
      if (*(undefined4 **)(*param_1 + 8) != (undefined4 *)0x0) {
        puVar6 = *(undefined4 **)(*param_1 + 8);
      }
      if (DAT_14c947fe0 == 0) {
        lVar5 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar5);
        DAT_14c947fe0 = lVar5;
      }
      FUN_140045924(DAT_14c947fe0,&local_40,puVar6,1);
      cVar1 = *(char *)(*param_1 + 0x2f0);
      if (cVar1 == '\x01') {
        if (*(float *)(param_1 + 0xe) <= 0.0) goto LAB_14051f98d;
        cVar2 = FUN_143d46878(lVar3,uVar4,local_40);
        if (cVar2 == '\0') goto LAB_14051f98d;
      }
      FUN_14107e4c6(lVar3,uVar4,local_40,
                    CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar1) & 0xffffffff);
    }
  }
LAB_14051f98d:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14051f9d8 FUN_14051f9d8 body=385 status=ok
// SIG undefined FUN_14051f9d8(void)

void FUN_14051f9d8(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  
  lVar5 = *param_1;
  lVar4 = *(longlong *)(lVar5 + 0x300);
  if (lVar4 == 0) {
    uVar3 = FUN_140067708();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(lVar5 + 0x300) = lVar4;
  }
  if (*(longlong *)(lVar5 + 0x308) == 0) {
    if (*(longlong *)(lVar5 + 0x2f8) == 0) {
      return;
    }
    if (lVar4 == 0) {
      return;
    }
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(lVar5 + 0x308) = 0;
      return;
    }
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar4 = FUN_144aff482(uVar3,(longlong *)(lVar5 + 0x2f8));
    *(longlong *)(lVar5 + 0x308) = lVar4;
    if (lVar4 == 0) {
      return;
    }
  }
  lVar5 = (**(code **)(*(longlong *)param_1[1] + 0xe0))();
  if (lVar5 != 0) {
    lVar4 = *param_1;
    if (*(char *)(lVar4 + 0x3c0) == '\x01') {
      lVar6 = *(longlong *)(lVar4 + 0x300);
      if (lVar6 == 0) {
        uVar3 = FUN_140067708();
        lVar6 = FUN_14477b664(uVar3);
        *(longlong *)(lVar4 + 0x300) = lVar6;
      }
      lVar7 = *(longlong *)(lVar4 + 0x308);
      if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*(longlong *)(lVar4 + 0x2f8) != 0)) {
        plVar1 = *(longlong **)(lVar6 + 0xb8);
        if ((plVar1 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
          lVar7 = 0;
        }
        else {
          uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
          lVar7 = FUN_144aff482(uVar3,(longlong *)(lVar4 + 0x2f8));
        }
        *(longlong *)(lVar4 + 0x308) = lVar7;
      }
      uVar8 = *(undefined1 *)(lVar7 + 0x40);
      lVar4 = *param_1;
    }
    else {
      uVar8 = 0;
    }
    FUN_148855e68(lVar5,lVar4 + 0x2f8,uVar8);
    return;
  }
  return;
}



// FUNCTION 14051fb5a FUN_14051fb5a body=593 status=ok
// SIG undefined FUN_14051fb5a(void)

undefined8 * FUN_14051fb5a(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  uint *puVar8;
  uint *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined4 local_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  bVar1 = *(byte *)(param_1 + 0x18);
  FUN_14051fdac(param_1,param_2,param_1 + 0x30,param_1 + 0x20);
  if ((bVar1 & 5) != 0) {
    FUN_14051fdac(param_1,&local_b8,param_1 + 0x50,param_1 + 0x40);
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      puVar8 = (uint *)*param_2;
      puVar9 = puVar8 + (longlong)*(int *)(param_2 + 1) * 0x2e;
      fVar11 = 1.0;
      do {
        lVar5 = FUN_1447e736e(puVar8 + 0x24);
        if (lVar5 == 0) {
          puVar6 = puVar8 + 4;
        }
        else {
          lVar5 = FUN_1447e736e(puVar8 + 0x24);
          puVar6 = (uint *)(lVar5 + 0x30);
        }
        if ((puVar6 != (uint *)0x0) && (uVar2 = puVar6[0x1e], (longlong)(int)uVar2 != 0)) {
          lVar5 = *(longlong *)(puVar6 + 0x1c);
          lVar7 = 0;
          do {
            local_c8 = 0;
            uStack_c0 = 0;
            FUN_1405201a0(&local_b8,*(undefined4 *)(lVar5 + 4 + lVar7),&local_c8,0x3f800000);
            uVar4 = *puVar8;
            fVar12 = 0.0;
            fVar10 = 0.0;
            if ((uVar4 & 1) != 0) {
              fVar10 = (float)local_c8 + 0.0;
            }
            if ((uVar4 & 2) != 0) {
              fVar10 = fVar10 + local_c8._4_4_;
            }
            if ((uVar4 & 4) != 0) {
              fVar10 = fVar10 + (float)uStack_c0;
            }
            if ((uVar4 & 8) != 0) {
              fVar10 = fVar10 + uStack_c0._4_4_;
            }
            iVar3 = ((uVar4 & 8) >> 3) + ((uVar4 & 4) >> 2) + ((uVar4 & 2) >> 1) + (uVar4 & 1);
            if (iVar3 != 0) {
              fVar12 = fVar10 / (float)iVar3;
            }
            if ((*(byte *)(param_1 + 0x18) & 4) != 0) {
              uVar4 = rand();
              fVar11 = (float)(uVar4 & 0x7fff) / 32767.0;
            }
            *(float *)(lVar5 + 8 + lVar7) =
                 (*(float *)(lVar5 + 8 + lVar7) - fVar12) * fVar11 + fVar12;
            lVar7 = lVar7 + 0x1c;
          } while ((longlong)(int)uVar2 * 0x1c != lVar7);
        }
        puVar8 = puVar8 + 0x2e;
      } while (puVar8 != puVar9);
    }
    FUN_14051f497(local_b8,local_b0);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14051fdac FUN_14051fdac body=542 status=ok
// SIG undefined FUN_14051fdac(void)

longlong * FUN_14051fdac(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_2 + 2) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14051f497(0,0);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_148858e9a(param_2);
  }
  FUN_14051ffcc(param_2,param_4);
  lVar4 = param_3[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar6 = *param_3;
    lVar5 = 0;
    do {
      local_78 = *(undefined8 *)(lVar6 + lVar5);
      FUN_1446dcdd4(local_70,&local_78);
      if (DAT_14cb7d4e0 == 0) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        lVar2 = FUN_144815d88(DAT_14cb7d4e0,local_70);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        if (lVar2 != 0) {
          FUN_14051ffcc(param_2,lVar2 + 0x18);
          fVar7 = *(float *)(lVar2 + 0x28);
          if (*(float *)(param_2 + 2) <= fVar7 && fVar7 != *(float *)(param_2 + 2)) {
            *(float *)(param_2 + 2) = fVar7;
          }
        }
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)(int)lVar4 * 0x18 != lVar5);
  }
  iVar1 = (int)param_2[1];
  if ((*(byte *)(param_1 + 0x18) & 4) == 0) {
    if (iVar1 == 0) goto LAB_14051ff4e;
    lVar4 = (longlong)iVar1 * 0xb8;
    lVar6 = *param_2 + 0x90;
    do {
      lVar5 = FUN_1447e736e(lVar6);
      if (lVar5 != 0) {
        FUN_1447e736e(lVar6);
      }
      lVar6 = lVar6 + 0xb8;
      lVar4 = lVar4 + -0xb8;
    } while (lVar4 != 0);
    iVar1 = (int)param_2[1];
  }
  if (0 < iVar1) {
    lVar4 = 0x90;
    lVar6 = 0;
    do {
      lVar2 = *param_2;
      lVar5 = lVar2 + lVar4;
      lVar3 = FUN_1447e736e(lVar5);
      if (lVar3 == 0) {
        lVar5 = lVar2 + lVar4 + -0x80;
      }
      else {
        lVar5 = FUN_1447e736e(lVar5);
        lVar5 = lVar5 + 0x30;
      }
      if (lVar5 != 0) {
        if ((longlong)*(int *)(lVar5 + 0x78) == 0) {
          fVar7 = 0.0;
        }
        else {
          fVar7 = *(float *)(*(longlong *)(lVar5 + 0x70) + -0x18 +
                            (longlong)*(int *)(lVar5 + 0x78) * 0x1c);
        }
        if (*(float *)(param_2 + 2) <= fVar7 && fVar7 != *(float *)(param_2 + 2)) {
          *(float *)(param_2 + 2) = fVar7;
        }
      }
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0xb8;
    } while (lVar6 < (int)param_2[1]);
  }
LAB_14051ff4e:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14051ffcc FUN_14051ffcc body=95 status=ok
// SIG undefined FUN_14051ffcc(void)

void FUN_14051ffcc(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14052002c(param_1,iVar2);
    }
    FUN_14051f5b0((longlong)iVar2 * 0xb8 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}


