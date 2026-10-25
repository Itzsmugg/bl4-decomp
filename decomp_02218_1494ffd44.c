// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1494ffd44 FUN_1494ffd44 body=188 status=ok
// SIG undefined FUN_1494ffd44(void)

void FUN_1494ffd44(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x158));
  iVar3 = FUN_1447addd0(param_2,0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar5 = (uint)uVar1 & 0xffff;
  iVar3 = FUN_14951985a((longlong *)(param_1 + 0x108),
                        (((uint)uVar1 << 0x10 | uVar5) + (int)((ulonglong)uVar1 >> 0x20) +
                         (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 0xd + iVar3,param_2);
  if ((iVar3 != -1) &&
     (lVar4 = (longlong)iVar3 * 0xa0 + *(longlong *)(param_1 + 0x108), lVar4 != -0x18 && lVar4 != 0)
     ) {
    FUN_1495198e0(lVar4 + 0x58,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001494ffdeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x158));
  return;
}



// FUNCTION 1494ffe00 FUN_1494ffe00 body=32 status=ok
// SIG undefined FUN_1494ffe00(void)

undefined8 FUN_1494ffe00(longlong param_1,undefined8 param_2)

{
  FUN_1494f23a0(param_2,param_1 + 0x198);
  return param_2;
}



// FUNCTION 1494ffe20 FUN_1494ffe20 body=455 status=ok
// SIG undefined FUN_1494ffe20(void)

void FUN_1494ffe20(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar1;
  void *_Dst;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_60 [40];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *(undefined8 *)(param_2 + 4);
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  FUN_1468fdb70(local_60,param_3);
  lVar2 = DAT_14cc1e088;
  cVar3 = FUN_144a8728e();
  if (cVar3 == '\0') {
    bVar4 = FUN_144a61b4f();
    uVar6 = (ulonglong)(bVar4 ^ 1);
  }
  else {
    uVar6 = 0;
  }
  iVar7 = *(int *)(lVar2 + uVar6 * 4);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  EnterCriticalSection(lpCriticalSection);
  iVar8 = *(int *)(param_1 + 0x60) - iVar7;
  if (iVar8 == 0 || *(int *)(param_1 + 0x60) < iVar7) {
    LeaveCriticalSection(lpCriticalSection);
    FUN_1494ffd44(param_1,param_2,local_60);
    EnterCriticalSection(lpCriticalSection);
    iVar7 = *(int *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x60) = iVar7 + 1U;
    if (*(uint *)(param_1 + 100) < iVar7 + 1U) {
      FUN_14951999e((longlong *)(param_1 + 0x58),iVar7);
    }
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x40);
    *(undefined8 *)(puVar1 + 4) = local_68;
    *puVar1 = local_78;
    puVar1[1] = uStack_74;
    puVar1[2] = uStack_70;
    puVar1[3] = uStack_6c;
    FUN_1468fdb70(puVar1 + 6,local_60);
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    _Dst = *(void **)(param_1 + 0x58);
    FUN_14032373c(_Dst,iVar8);
    iVar5 = *(int *)(param_1 + 0x60) - iVar8;
    iVar7 = iVar8;
    if (iVar5 != 0) {
      memmove(_Dst,(void *)((longlong)iVar8 * 0x40 + (longlong)_Dst),(longlong)iVar5 << 6);
      iVar7 = *(int *)(param_1 + 0x60);
    }
    *(int *)(param_1 + 0x60) = iVar7 - iVar8;
    LeaveCriticalSection(lpCriticalSection);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc1e098) {
      FUN_144b3d300(&DAT_14cc1e098);
      if (DAT_14cc1e098 == -1) {
        FUN_1446ddc76(&DAT_14cc1e090,"LiveLinkClient_TooManyFrame",1);
        _Init_thread_footer(&DAT_14cc1e098);
      }
    }
  }
  FUN_1448eac94(local_60);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1494fffe8 FUN_1494fffe8 body=394 status=ok
// SIG undefined FUN_1494fffe8(void)

void FUN_1494fffe8(longlong param_1,double *param_2)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  double dVar5;
  
  lVar4 = DAT_14cc1e4d0;
  cVar1 = FUN_144a8728e();
  if (cVar1 == '\0') {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  else {
    uVar3 = 0;
  }
  cVar1 = *(char *)(lVar4 + uVar3);
  if (1e-08 < ABS(*param_2 - *(double *)(param_1 + 0x70))) {
    *(double *)(param_1 + 0x70) = *param_2;
    if (cVar1 != '\0') {
      FUN_1494f4708(param_1 + 0x30,*param_2,param_2[0x10]);
    }
    FUN_14950f054(param_1,param_2);
  }
  dVar5 = param_2[0xd];
  dVar5 = ((double)(((longlong)dVar5 >> 0x20) * (longlong)SUB84(param_2[0xc],0)) +
          (double)(int)((ulonglong)dVar5 >> 0x20) * (double)(float)((ulonglong)param_2[0xc] >> 0x20)
          ) / (double)SUB84(dVar5,0);
  if ((1e-08 < ABS(dVar5 - *(double *)(param_1 + 0x78))) &&
     (*(double *)(param_1 + 0x78) = dVar5, cVar1 != '\0')) {
    dVar5 = param_2[0x12];
    lVar4 = ((longlong)dVar5 >> 0x20) * (longlong)SUB84(param_2[0x11],0);
    FUN_1494f4708(param_1 + 0x50,lVar4,
                  ((double)lVar4 +
                  (double)(int)((ulonglong)dVar5 >> 0x20) *
                  (double)(float)((ulonglong)param_2[0x11] >> 0x20)) / (double)SUB84(dVar5,0));
  }
  lVar4 = (**(code **)(**(longlong **)(param_1 + 8) + 0x208))
                    (*(longlong **)(param_1 + 8),param_1 + 0x20);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(param_1 + 0x50);
  }
  param_2[1] = *(double *)(param_1 + 0x30);
  return;
}



// FUNCTION 149500172 FUN_149500172 body=125 status=ok
// SIG undefined FUN_149500172(void)

void FUN_149500172(undefined8 param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = *param_3;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_38 = *(undefined8 *)(param_2 + 4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_149519a24(param_1,&local_48,&local_28,param_4);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495001f0 FUN_1495001f0 body=1138 status=ok
// SIG undefined FUN_1495001f0(void)

undefined8 FUN_1495001f0(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_208 [32];
  int local_1e8;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  undefined8 local_1d8;
  undefined8 local_1c8;
  undefined2 uStack_1c0;
  undefined6 uStack_1be;
  undefined2 uStack_1b8;
  undefined8 uStack_1b6;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  undefined8 local_178;
  longlong local_170;
  int local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined8 local_158;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  undefined8 local_138;
  undefined8 local_128;
  undefined2 uStack_120;
  undefined6 uStack_11e;
  undefined2 uStack_118;
  undefined8 uStack_116;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int iStack_dc;
  undefined8 local_d8;
  undefined1 local_d0 [8];
  undefined8 local_c8;
  undefined2 uStack_c0;
  undefined2 uStack_be;
  int iStack_bc;
  undefined2 local_b8;
  undefined6 uStack_b6;
  undefined2 local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined8 uStack_98;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined8 local_58;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar3 = *(longlong *)(param_2 + 6);
  if (lVar3 != 0) {
    lVar2 = FUN_1411f0380();
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) {
        lVar1 = *(longlong *)(param_2 + 6);
        if (lVar1 != 0 &&
            *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30) {
          lVar3 = FUN_1411f0380();
          if (((lVar3 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
              lVar3 + 0x30)) {
            lVar3 = 0;
          }
          else {
            lVar3 = *(longlong *)(param_2 + 6);
          }
          lVar2 = FUN_1411f0380();
          if (lVar3 != lVar2) {
            uVar7 = 0;
            if (((param_2[3] == -0x574db5a6 &&
                 (param_2[2] == 0x4af0635d && (param_2[1] == -0x33a6ee32 && *param_2 == 0x4ed2dc4e))
                 ) && *(longlong *)(param_2 + 10) == 0) || (*(longlong *)(param_2 + 4) == 0))
            goto LAB_149500253;
            local_48 = *param_2;
            iStack_44 = param_2[1];
            iStack_40 = param_2[2];
            iStack_3c = param_2[3];
            lVar3 = FUN_1494fe768(*(undefined8 *)(param_1 + 8));
            if ((lVar3 == 0) || (*(char *)(lVar3 + 0x38) != '\0')) goto LAB_149500251;
            local_58 = *(undefined8 *)(param_2 + 4);
            local_68 = *param_2;
            iStack_64 = param_2[1];
            iStack_60 = param_2[2];
            iStack_5c = param_2[3];
            lVar2 = FUN_1494fd646(*(undefined8 *)(param_1 + 8));
            if (lVar2 != 0) {
              if (*(char *)(lVar2 + 0x19) != '\x01') goto LAB_149500251;
              local_78 = *(undefined8 *)(param_2 + 4);
              local_88 = *param_2;
              iStack_84 = param_2[1];
              iStack_80 = param_2[2];
              iStack_7c = param_2[3];
              FUN_1494ff358(*(undefined8 *)(param_1 + 8));
            }
            uVar7 = DAT_14c951640;
            lVar2 = *(longlong *)(param_2 + 10);
            if (lVar2 == 0) {
              lVar2 = *(longlong *)(param_2 + 8);
              if (lVar2 == 0) {
                plVar4 = (longlong *)FUN_14950079a(DAT_14c951640);
              }
              else {
                uVar5 = FUN_1459888c4();
                plVar4 = (longlong *)FUN_14092e757(uVar5,lVar2,uVar7,0);
              }
              local_158 = *(undefined8 *)(param_2 + 4);
              local_168 = *param_2;
              iStack_164 = param_2[1];
              iStack_160 = param_2[2];
              iStack_15c = param_2[3];
              (**(code **)(*plVar4 + 0x2a0))(plVar4);
              plVar6 = (longlong *)FUN_14001cc68(0x240,0x10);
              local_c8 = *(undefined8 *)(lVar3 + 0x28);
              lVar3 = *(longlong *)(lVar3 + 0x30);
              uStack_c0 = (undefined2)lVar3;
              uStack_be = (undefined2)((ulonglong)lVar3 >> 0x10);
              iStack_bc = (int)((ulonglong)lVar3 >> 0x20);
              if (lVar3 != 0) {
                LOCK();
                *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
                UNLOCK();
              }
              FUN_14950a92c(plVar6,&local_c8);
              local_c8 = *(undefined8 *)param_2;
              iStack_bc = param_2[3];
              uStack_c0 = (undefined2)param_2[2];
              uStack_be = (undefined2)((uint)param_2[2] >> 0x10);
              local_b8 = (undefined2)*(undefined8 *)(param_2 + 4);
              uStack_b6 = (undefined6)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x10);
              local_b0 = 0;
              local_a8 = (longlong *)0x0;
              if (plVar4 != (longlong *)0x0) {
                FUN_1401924dc(plVar4);
                local_a8 = plVar4;
              }
              uStack_98 = 0;
              lVar3 = *(longlong *)(param_2 + 6);
              local_a0 = plVar6;
              if (lVar3 == 0) {
LAB_149500580:
                local_170 = 0;
              }
              else {
                lVar2 = FUN_1411f0380();
                if ((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38)))
                goto LAB_149500580;
                if (*(longlong *)
                     (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
                    lVar2 + 0x30) {
                  local_170 = *(longlong *)(param_2 + 6);
                }
                else {
                  local_170 = 0;
                }
                if ((local_170 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c();
                }
              }
              local_178 = *(undefined8 *)(param_2 + 4);
              local_188 = *param_2;
              iStack_184 = param_2[1];
              iStack_180 = param_2[2];
              iStack_17c = param_2[3];
              (**(code **)(*plVar6 + 8))(plVar6,&local_188,&local_170,param_1);
              uStack_1b6 = CONCAT26(local_b0,uStack_b6);
              uStack_1b8 = local_b8;
              local_1c8 = local_c8;
              uStack_1c0 = uStack_c0;
              uStack_1be = (undefined6)(CONCAT44(iStack_bc,CONCAT22(uStack_be,uStack_c0)) >> 0x10);
              local_a8 = (longlong *)0x0;
              local_a0 = (longlong *)0x0;
              uStack_98 = 0;
              local_198 = 0;
              local_1a8 = plVar4;
              local_1a0 = plVar6;
              FUN_1494ff870(*(undefined8 *)(param_1 + 8));
              local_1d8 = *(undefined8 *)(param_2 + 4);
              local_1e8 = *param_2;
              iStack_1e4 = param_2[1];
              iStack_1e0 = param_2[2];
              iStack_1dc = param_2[3];
              FUN_149500664(*(undefined8 *)(param_1 + 8),&local_1e8,(char)param_2[0xc]);
            }
            else {
              uVar5 = FUN_14594cb18();
              lVar3 = FUN_14092e757(uVar5,lVar2,uVar7,0);
              local_b8 = (undefined2)*(undefined8 *)(param_2 + 4);
              uStack_b6 = (undefined6)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x10);
              local_c8 = *(undefined8 *)param_2;
              iStack_bc = param_2[3];
              uStack_c0 = (undefined2)param_2[2];
              uStack_be = (undefined2)((uint)param_2[2] >> 0x10);
              local_b0 = 0;
              if (lVar3 != 0) {
                FUN_1401924dc(lVar3);
              }
              (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x30))(lVar3 + 0x28,local_d0);
              local_d8 = CONCAT62(uStack_b6,local_b8);
              uStack_e0 = CONCAT22(uStack_be,uStack_c0);
              local_e8 = (undefined4)local_c8;
              uStack_e4 = local_c8._4_4_;
              iStack_dc = iStack_bc;
              (**(code **)(*(longlong *)(lVar3 + 0x28) + 8))
                        (lVar3 + 0x28,&local_e8,local_d0,param_1);
              uStack_116 = CONCAT26(local_b0,uStack_b6);
              uStack_118 = local_b8;
              local_128 = local_c8;
              uStack_120 = uStack_c0;
              uStack_11e = (undefined6)(CONCAT44(iStack_bc,CONCAT22(uStack_be,uStack_c0)) >> 0x10);
              local_108 = 0;
              uStack_100 = 0;
              local_a8 = (longlong *)0x0;
              local_a0 = (longlong *)0x0;
              uStack_98 = 0;
              local_f8 = lVar3;
              FUN_1494ff870(*(undefined8 *)(param_1 + 8));
              local_138 = *(undefined8 *)(param_2 + 4);
              local_148 = *param_2;
              iStack_144 = param_2[1];
              iStack_140 = param_2[2];
              iStack_13c = param_2[3];
              FUN_149500664(*(undefined8 *)(param_1 + 8),&local_148,(char)param_2[0xc]);
            }
            FUN_1494ff962(&local_c8);
            uVar7 = 1;
            goto LAB_149500253;
          }
        }
      }
    }
  }
LAB_149500251:
  uVar7 = 0;
LAB_149500253:
  if ((local_38 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149500664 FUN_149500664 body=292 status=ok
// SIG undefined FUN_149500664(void)

void FUN_149500664(longlong param_1,int *param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == '\0') {
    FUN_14490b2fc(param_1 + 0x150);
    iVar1 = *(int *)(param_1 + 0x18);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar2 + 0x10 + lVar3) == *(longlong *)(param_2 + 4)) {
          *(undefined1 *)(lVar2 + 0x18 + lVar3) = 0;
        }
        lVar3 = lVar3 + 0x38;
      } while ((longlong)iVar1 * 0x38 - lVar3 != 0);
    }
  }
  else {
    local_38 = *(undefined8 *)(param_2 + 4);
    local_48 = *param_2;
    iStack_44 = param_2[1];
    iStack_40 = param_2[2];
    iStack_3c = param_2[3];
    lVar2 = FUN_1494fd646(param_1);
    if (lVar2 == 0) {
      if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    FUN_14490b2fc(param_1 + 0x150);
    *(undefined1 *)(lVar2 + 0x18) = 1;
    iVar1 = *(int *)(param_1 + 0x18);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      lVar3 = 0;
      do {
        if (((*(char *)(lVar2 + 0x18 + lVar3) == '\x01') &&
            (*(longlong *)(lVar2 + 0x10 + lVar3) == *(longlong *)(param_2 + 4))) &&
           ((*(int *)(lVar2 + lVar3) != *param_2 ||
            (((*(int *)(lVar2 + 4 + lVar3) != param_2[1] ||
              (*(int *)(lVar2 + 8 + lVar3) != param_2[2])) ||
             (*(int *)(lVar2 + 0xc + lVar3) != param_2[3])))))) {
          *(undefined1 *)(lVar2 + 0x18 + lVar3) = 0;
        }
        lVar3 = lVar3 + 0x38;
      } while ((longlong)iVar1 * 0x38 - lVar3 != 0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 14950079a FUN_14950079a body=148 status=ok
// SIG undefined FUN_14950079a(void)

undefined8 FUN_14950079a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459888c4();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149500830 FUN_149500830 body=93 status=ok
// SIG undefined FUN_149500830(void)

void FUN_149500830(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_18 = *(undefined8 *)(param_2 + 4);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    lVar1 = FUN_1494fd646(*(longlong *)(param_1 + 8),&local_28);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x19) = 1;
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950088e FUN_14950088e body=533 status=ok
// SIG undefined FUN_14950088e(void)

undefined8 FUN_14950088e(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined2 uStack_100;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined8 uStack_f6;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined2 local_98;
  undefined6 uStack_96;
  undefined1 local_90;
  undefined1 local_8f;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_2 + 4) != 0)) &&
     (lVar2 = *param_3, lVar2 != 0)) {
    lVar1 = FUN_14594cb18();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
         lVar1 + 0x30 && (*param_3 != 0)))) {
      local_48 = *param_2;
      uStack_44 = param_2[1];
      uStack_40 = param_2[2];
      uStack_3c = param_2[3];
      lVar2 = FUN_1494fe768(*(undefined8 *)(param_1 + 8));
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x38) == '\0')) {
        local_58 = *(undefined8 *)(param_2 + 4);
        local_68 = *param_2;
        uStack_64 = param_2[1];
        uStack_60 = param_2[2];
        uStack_5c = param_2[3];
        lVar2 = FUN_1494fd646(*(undefined8 *)(param_1 + 8));
        if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x30) == 0)) {
          lVar2 = *param_3;
          if (lVar2 == 0) {
LAB_1495009c9:
            lVar2 = 0;
          }
          else {
            lVar1 = FUN_14594cb18();
            if (((lVar1 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
               (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
                lVar1 + 0x30)) goto LAB_1495009c9;
            lVar2 = *param_3;
          }
          lVar2 = FUN_149500aa4(DAT_14c951640,lVar2);
          lVar1 = FUN_1494ff812(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_2 + 4));
          local_90 = lVar1 == 0;
          local_98 = (undefined2)*(undefined8 *)(param_2 + 4);
          uStack_96 = (undefined6)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x10);
          local_a8 = *param_2;
          uStack_a4 = param_2[1];
          uStack_9c = param_2[3];
          uStack_a0 = (undefined2)param_2[2];
          uStack_9e = (undefined2)((uint)param_2[2] >> 0x10);
          local_8f = 0;
          if (lVar2 != 0) {
            FUN_1401924dc(lVar2);
          }
          (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x30))(lVar2 + 0x28,local_b0);
          local_b8 = CONCAT62(uStack_96,local_98);
          uStack_c0 = CONCAT22(uStack_9e,uStack_a0);
          local_c8 = local_a8;
          uStack_c4 = uStack_a4;
          uStack_bc = uStack_9c;
          (**(code **)(*(longlong *)(lVar2 + 0x28) + 8))(lVar2 + 0x28,&local_c8,local_b0,param_1);
          uStack_f6 = CONCAT17(local_8f,CONCAT16(local_90,uStack_96));
          uStack_f8 = local_98;
          local_108 = CONCAT44(uStack_a4,local_a8);
          uStack_100 = uStack_a0;
          uStack_fe = (undefined6)(CONCAT44(uStack_9c,CONCAT22(uStack_9e,uStack_a0)) >> 0x10);
          local_e8 = 0;
          uStack_e0 = 0;
          local_88 = 0;
          local_80 = 0;
          uStack_78 = 0;
          local_d8 = lVar2;
          FUN_1494ff870(*(undefined8 *)(param_1 + 8));
          FUN_1494ff962(&local_a8);
          uVar3 = 1;
          goto LAB_1495008f7;
        }
        FUN_1400021e4(param_2 + 4,&local_a8);
        if (CONCAT44(uStack_a4,local_a8) != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  uVar3 = 0;
LAB_1495008f7:
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149500aa4 FUN_149500aa4 body=175 status=ok
// SIG undefined FUN_149500aa4(void)

undefined8 FUN_149500aa4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149500b54 FUN_149500b54 body=84 status=ok
// SIG undefined FUN_149500b54(void)

void FUN_149500b54(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_18 = *(undefined8 *)(param_2 + 4);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    FUN_1494ff358(*(longlong *)(param_1 + 8),&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149500c54 FUN_149500c54 body=126 status=ok
// SIG undefined FUN_149500c54(void)

void FUN_149500c54(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_28 = *(undefined8 *)(param_2 + 4);
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    lVar1 = FUN_1494fd646(*(longlong *)(param_1 + 8),&local_38);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149500ce4 FUN_149500ce4 body=84 status=ok
// SIG undefined FUN_149500ce4(void)

void FUN_149500ce4(longlong param_1)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  undefined1 *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_10 = &local_19;
    local_18 = &LAB_14453df80;
    FUN_14014a076();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149500d3a FUN_149500d3a body=359 status=ok
// SIG undefined FUN_149500d3a(void)

undefined8 *
FUN_149500d3a(longlong param_1,undefined8 *param_2,undefined4 *param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 == 0) {
    param_4 = DAT_14c951640;
  }
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  local_38 = *(undefined8 *)(param_3 + 4);
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  puVar5 = (undefined4 *)FUN_1494fd646(*(undefined8 *)(param_1 + 8));
  if (puVar5 != (undefined4 *)0x0) {
    param_2[2] = *(undefined8 *)(puVar5 + 4);
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    *(undefined4 *)param_2 = uVar1;
    *(undefined4 *)((longlong)param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 1) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
    if (*(longlong *)(puVar5 + 0xc) == 0) {
      plVar9 = *(longlong **)(puVar5 + 10);
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(puVar5 + 0xc) + 0x28);
    }
    (**(code **)(*plVar9 + 0x30))(uVar1,&local_50);
    if (DAT_14c950c29 == '\x01') {
      if (local_50 == 0) {
        local_50 = 0;
      }
      else {
        FUN_1456cec3c();
      }
    }
    param_2[3] = local_50;
    *(undefined1 *)(param_2 + 6) = *(undefined1 *)(puVar5 + 6);
    lVar7 = *(longlong *)(puVar5 + 0xc);
    if (lVar7 == 0) {
      uVar6 = *(undefined8 *)(puVar5 + 8);
      uVar8 = FUN_1459888c4();
      lVar7 = FUN_14092e757(uVar8,uVar6,param_4,0);
      if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar7);
      }
      param_2[4] = lVar7;
    }
    else {
      uVar6 = FUN_14594cb18();
      lVar7 = FUN_14092e757(uVar6,lVar7,param_4,0);
      if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar7);
      }
      param_2[5] = lVar7;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149500ea2 FUN_149500ea2 body=149 status=ok
// SIG undefined FUN_149500ea2(void)

undefined8 FUN_149500ea2(longlong param_1,undefined4 *param_2)

{
  byte extraout_AL;
  longlong lVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  undefined7 uVar3;
  byte bVar4;
  longlong *plVar5;
  byte bVar6;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_2 + 4);
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  lVar1 = FUN_1494fd646(*(undefined8 *)(param_1 + 8),&local_28);
  bVar6 = 0;
  uVar3 = 0;
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      plVar5 = *(longlong **)(lVar1 + 0x28);
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x30) + 0x28);
    }
    (**(code **)(*plVar5 + 0x40))();
    bVar6 = extraout_AL;
    uVar3 = extraout_var;
    if ((extraout_AL != 0) && (lVar1 = *(longlong *)(lVar1 + 0x28), lVar1 != 0)) {
      uVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 8))(lVar1 + 8);
      bVar6 = (char)uVar2 == '\0';
      uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
      bVar4 = 1;
      goto LAB_149500f13;
    }
  }
  bVar4 = 0;
LAB_149500f13:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71(uVar3,bVar6 & bVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149500f38 FUN_149500f38 body=192 status=ok
// SIG undefined FUN_149500f38(void)

undefined8 FUN_149500f38(longlong *param_1,longlong param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined7 uVar6;
  uint uVar7;
  
  if ((int)param_1[0xe] != *(int *)((longlong)param_1 + 0x9c)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    plVar4 = param_1 + 0x14;
    if ((longlong *)param_1[0x15] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[0x15];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[0x16] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar7) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(param_1[0xd] + (longlong)iVar3 * 0x28);
        if (*plVar4 == param_2) {
          if (plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) {
            uVar5 = (**(code **)(*param_1 + 0x1b0))(param_1,plVar4 + 1);
            param_1 = (longlong *)(uVar5 & 0xffffffff);
            uVar6 = (undefined7)(uVar5 >> 8);
            bVar2 = 1;
            goto LAB_149500f49;
          }
          break;
        }
        iVar3 = (int)plVar4[4];
      } while (iVar3 != -1);
    }
  }
  bVar2 = 0;
  uVar6 = 0;
LAB_149500f49:
  return CONCAT71(uVar6,bVar2 & (byte)param_1);
}



// FUNCTION 149500ff8 FUN_149500ff8 body=313 status=ok
// SIG undefined FUN_149500ff8(void)

ulonglong FUN_149500ff8(longlong param_1,uint *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_48 [32];
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == '\0') {
    local_18 = *(undefined8 *)(param_2 + 4);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    uVar4 = FUN_149501132(*(undefined8 *)(param_1 + 8),&local_28);
  }
  else {
    if (*(int *)(param_1 + 0x70) != *(int *)(param_1 + 0x9c)) {
      lVar2 = *(longlong *)(param_2 + 4);
      uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
      uVar6 = (uint)lVar2 & 0xffff;
      lVar5 = param_1 + 0xa0;
      if (*(longlong *)(param_1 + 0xa8) != 0) {
        lVar5 = *(longlong *)(param_1 + 0xa8);
      }
      iVar7 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(param_1 + 0xb0) - 1U &
                               (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                               (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar7 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar7 * 0x28);
          if (*plVar1 == lVar2) {
            if ((((ulonglong)(plVar1 + 1) & 0xfffffffffffffff7) != 0) && (plVar1[3] == lVar2)) {
              uVar4 = (ulonglong)
                      CONCAT31((int3)((*(uint *)(plVar1 + 1) ^ *param_2) >> 8),
                               *(uint *)((longlong)plVar1 + 0x14) == param_2[3] &&
                               (*(uint *)(plVar1 + 2) == param_2[2] &&
                               (*(uint *)((longlong)plVar1 + 0xc) == param_2[1] &&
                               (*(uint *)(plVar1 + 1) ^ *param_2) == 0)));
              goto LAB_149501021;
            }
            break;
          }
          iVar7 = (int)plVar1[4];
        } while (iVar7 != -1);
      }
    }
    uVar4 = 0;
  }
LAB_149501021:
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 149501132 FUN_149501132 body=123 status=ok
// SIG undefined FUN_149501132(void)

ulonglong FUN_149501132(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14490b2fc(param_1 + 0x150);
  local_28 = *(undefined8 *)(param_2 + 4);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  lVar1 = FUN_1494fd646(param_1);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)param_2 >> 8),*(undefined1 *)(lVar1 + 0x18));
  }
  FUN_144a6a7be(param_1 + 0x150);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149501242 FUN_149501242 body=77 status=ok
// SIG undefined FUN_149501242(void)

void FUN_149501242(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_2 + 4);
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_149500664(*(undefined8 *)(param_1 + 8),&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149501290 FUN_149501290 body=117 status=ok
// SIG undefined FUN_149501290(void)

byte FUN_149501290(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *(undefined8 *)(param_1 + 8);
  local_18 = *(undefined8 *)(param_2 + 4);
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  lVar2 = FUN_1494fd646(uVar3,&local_28);
  bVar1 = (byte)uVar3;
  if (lVar2 == 0) {
    bVar1 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x28);
    if (lVar2 != 0) {
      bVar1 = FUN_149501306(lVar2);
    }
    bVar1 = lVar2 != 0 & bVar1;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149501306 FUN_149501306 body=166 status=ok
// SIG undefined FUN_149501306(void)

bool FUN_149501306(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 auStack_48 [40];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = param_1 + 0x2a;
  if (*(char *)((longlong)param_1 + 0x1b9) != '\0') {
    plVar3 = param_1 + 0x37;
  }
  if ((char)*plVar3 == '\x02') {
    lVar4 = (**(code **)(*param_1 + 0x98))();
    iVar2 = DAT_14c846558;
    lVar1 = *(longlong *)(lVar4 + 0x38);
    if ((lVar1 != 0 && *(longlong *)(lVar4 + 0x10) != 0) && (DAT_14c846568 == '\x01')) {
      FUN_144a808d5(local_20,*(undefined8 *)(lVar1 + 0x60),*(undefined8 *)(lVar1 + 0x68),
                    DAT_14c846560);
      bVar5 = iVar2 == local_20[0];
      goto LAB_14950138f;
    }
  }
  bVar5 = false;
LAB_14950138f:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495013ae FUN_1495013ae body=58 status=ok
// SIG undefined FUN_1495013ae(void)

ulonglong FUN_1495013ae(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = *(longlong *)(param_1 + 8);
  lVar2 = FUN_1494ff812(lVar3);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar2 + 0x28);
    if (lVar1 != 0) {
      lVar3 = lVar1;
      lVar2 = FUN_149501306(lVar1);
    }
    uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar1 != 0 & (byte)lVar2);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1495013e8 FUN_1495013e8 body=136 status=ok
// SIG undefined FUN_1495013e8(void)

undefined8 * FUN_1495013e8(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_3 + 4);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  lVar1 = FUN_1494fd646(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      plVar2 = *(longlong **)(lVar1 + 0x28);
    }
    else {
      plVar2 = (longlong *)(*(longlong *)(lVar1 + 0x30) + 0x28);
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  *param_2 = 0;
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149501472 FUN_149501472 body=71 status=ok
// SIG undefined FUN_149501472(void)

undefined8 * FUN_149501472(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_1494ff812(*(undefined8 *)(param_1 + 8),param_3);
  if (lVar1 == 0) {
    *param_2 = 0;
  }
  else {
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      plVar2 = *(longlong **)(lVar1 + 0x28);
    }
    else {
      plVar2 = (longlong *)(*(longlong *)(lVar1 + 0x30) + 0x28);
    }
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
  }
  return param_2;
}



// FUNCTION 1495014ba FUN_1495014ba body=170 status=ok
// SIG undefined FUN_1495014ba(void)

byte FUN_1495014ba(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *(undefined8 *)(param_1 + 8);
  local_28 = *(undefined8 *)(param_2 + 4);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  lVar2 = FUN_1494fd646(uVar3,&local_38);
  bVar1 = (byte)uVar3;
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x30) == 0) {
      plVar4 = *(longlong **)(lVar2 + 0x28);
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x30) + 0x28);
    }
    local_40 = *param_3;
    if ((local_40 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    bVar1 = (**(code **)(*plVar4 + 0x38))(plVar4,&local_40);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 != 0 & bVar1;
}



// FUNCTION 149501566 FUN_149501566 body=148 status=ok
// SIG undefined FUN_149501566(void)

byte FUN_149501566(longlong param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *(undefined8 *)(param_1 + 8);
  lVar2 = FUN_1494ff812(uVar3);
  bVar1 = (byte)uVar3;
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x30) == 0) {
      plVar4 = *(longlong **)(lVar2 + 0x28);
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x30) + 0x28);
    }
    local_28 = *param_3;
    if ((local_28 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    bVar1 = (**(code **)(*plVar4 + 0x38))(plVar4,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 != 0 & bVar1;
}



// FUNCTION 1495015fc FUN_1495015fc body=135 status=ok
// SIG undefined FUN_1495015fc(void)

undefined8 * FUN_1495015fc(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_3 + 4);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  lVar1 = FUN_1494fd646(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      plVar2 = *(longlong **)(lVar1 + 0x28);
    }
    else {
      plVar2 = (longlong *)(*(longlong *)(lVar1 + 0x30) + 0x28);
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149501684 FUN_149501684 body=70 status=ok
// SIG undefined FUN_149501684(void)

undefined8 * FUN_149501684(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = FUN_1494ff812(*(undefined8 *)(param_1 + 8),param_3);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      plVar2 = *(longlong **)(lVar1 + 0x28);
    }
    else {
      plVar2 = (longlong *)(*(longlong *)(lVar1 + 0x30) + 0x28);
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
  }
  return param_2;
}



// FUNCTION 1495016ca FUN_1495016ca body=685 status=ok
// SIG undefined FUN_1495016ca(void)

undefined8 * FUN_1495016ca(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_138 [32];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong *local_e8;
  undefined4 local_e0;
  longlong *local_d8 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  ulonglong *local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined4 auStack_70 [2];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_c8 = *param_3;
  uStack_c4 = param_3[1];
  uStack_c0 = param_3[2];
  uStack_bc = param_3[3];
  (**(code **)(*param_1 + 0x110))(local_c8,&local_b8);
  *param_2 = local_b8;
  if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = local_b0;
  lVar3 = (**(code **)(*param_1 + 0x210))(param_1,param_3);
  if (lVar3 != 0) {
    lVar4 = FUN_1459888c4();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30)) && (*(longlong *)(lVar3 + 0x6c) != 0)) {
      local_e8 = local_b8;
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 8))();
      }
      local_e0 = local_b0;
      FUN_145715fae(local_f8,lVar3 + 0x6c);
      FUN_1467d1526(local_118,L"{0} ({1})");
      FUN_14023409e(&local_108,local_118,1);
      local_78._0_4_ = 4;
      FUN_14023423e(local_68,local_f8);
      local_58 = 4;
      FUN_14023423e(local_48,&local_e8);
      local_98 = &local_78;
      local_90 = &local_38;
      FUN_14010d304(&local_88);
      local_a8 = local_108;
      local_a0 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_100 + 1) = (int)local_100[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_d8,&local_a8,&local_88);
      FUN_14007f2db(local_88,local_80);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      lVar3 = 0x30;
      do {
        if (*(longlong **)((longlong)&local_78 + lVar3) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_78 + lVar3) + 0x10))();
          *(undefined8 *)((longlong)&local_78 + lVar3) = 0;
          *(undefined4 *)((longlong)auStack_70 + lVar3) = 0;
        }
        lVar3 = lVar3 + -0x20;
      } while (lVar3 != -0x10);
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
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
      }
      if (local_e8 != (longlong *)0x0) {
        (**(code **)(*local_e8 + 0x10))();
      }
      FUN_140008f88(param_2,local_d8);
      if (local_d8[0] != (longlong *)0x0) {
        (**(code **)(*local_d8[0] + 0x10))();
      }
      if (local_118[0] != (longlong *)0x0) {
        (**(code **)(*local_118[0] + 0x10))();
      }
    }
  }
  if (local_b8 != (longlong *)0x0) {
    (**(code **)(*local_b8 + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149501978 FUN_149501978 body=263 status=ok
// SIG undefined FUN_149501978(void)

undefined8 FUN_149501978(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong *local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a5dc74(param_2);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = *(undefined8 *)(param_3 + 4);
  lVar1 = FUN_1494fd646(*(undefined8 *)(param_1 + 8));
  if ((lVar1 != 0) &&
     ((plVar2 = *(longlong **)(lVar1 + 0x30), plVar2 != (longlong *)0x0 ||
      (plVar2 = *(longlong **)(lVar1 + 0x20), plVar2 != (longlong *)0x0)))) {
    lVar1 = FUN_1459888c4();
    if ((*(int *)(plVar2[2] + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) {
      lVar1 = FUN_14594cb18();
      if ((*(int *)(plVar2[2] + 0x38) < *(int *)(lVar1 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
          lVar1 + 0x30)) goto LAB_1495019d2;
      (**(code **)(*plVar2 + 0x2a8))(plVar2,local_48);
    }
    else {
      (**(code **)(*plVar2 + 0x2b0))(plVar2,local_48);
    }
    FUN_140008f88(param_2,local_48);
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
  }
LAB_1495019d2:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149501a80 FUN_149501a80 body=161 status=ok
// SIG undefined FUN_149501a80(void)

undefined8 *
FUN_149501a80(longlong param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined1 local_40;
  undefined1 local_3f;
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_48 = *param_3;
  local_58 = param_1;
  local_50 = param_2;
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_30 = &local_58;
  local_3f = param_5;
  local_38 = FUN_14453dffc;
  local_40 = param_4;
  FUN_14014a076(uVar1);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149501b22 FUN_149501b22 body=49 status=ok
// SIG undefined FUN_149501b22(void)

void FUN_149501b22(longlong param_1)

{
  FUN_140323344();
  FUN_1419081bc(param_1);
  FUN_140149e7a(param_1);
  FUN_1447f69b6(param_1 + 0x180);
  return;
}



// FUNCTION 149501b54 FUN_149501b54 body=49 status=ok
// SIG undefined FUN_149501b54(void)

ulonglong FUN_149501b54(longlong param_1)

{
  int iVar1;
  undefined8 unaff_RBX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  iVar1 = *(int *)(param_1 + 0x60);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar1 != 0) & 0xffffffff;
}



// FUNCTION 149501b86 FUN_149501b86 body=94 status=ok
// SIG undefined FUN_149501b86(void)

void FUN_149501b86(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_2 + 4);
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  lVar1 = FUN_1494fd646(*(undefined8 *)(param_1 + 8),&local_28);
  if (lVar1 != 0) {
    LOCK();
    *(undefined1 *)(*(longlong *)(lVar1 + 0x28) + 0x1eb) = 1;
    UNLOCK();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149501be6 FUN_149501be6 body=1438 status=ok
// SIG undefined FUN_149501be6(void)

ulonglong FUN_149501be6(longlong *param_1,double param_2,longlong *param_3,undefined8 param_4)

{
  double dVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0 [2];
  longlong local_b0 [2];
  longlong local_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined **local_70;
  undefined8 local_68;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined8 uStack_57;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar7 = param_1[2];
  if ((((lVar7 == 0) || (lVar4 = FUN_1411f0380(), lVar4 == 0)) ||
      (*(int *)(lVar7 + 0x38) < *(int *)(lVar4 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
       lVar4 + 0x30 || (param_1[2] == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc1e36c) && (FUN_144b3d300(&DAT_14cc1e36c), DAT_14cc1e36c == -1)) {
      FUN_1446ddc76(&DAT_14cc1e364,"LiveLinkSubject_InvalidRole",1);
      puVar8 = &DAT_14cc1e36c;
LAB_149502138:
      _Init_thread_footer(puVar8);
    }
LAB_149501c6c:
    FUN_1400021e4(param_1 + 0x27,&local_98);
LAB_149501c86:
    if (local_98 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar7 = *param_3;
    if (((lVar7 == 0) || (lVar4 = FUN_1411f0380(), lVar4 == 0)) ||
       ((*(int *)(lVar7 + 0x38) < *(int *)(lVar4 + 0x38) ||
        ((*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30 || (*param_3 == 0)))))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc1e378) && (FUN_144b3d300(&DAT_14cc1e378), DAT_14cc1e378 == -1))
      {
        FUN_1446ddc76(&DAT_14cc1e370,"LiveLinkSubject_InvalidDesiredRole",1);
        puVar8 = &DAT_14cc1e378;
        goto LAB_149502138;
      }
      goto LAB_149501c6c;
    }
    plVar5 = param_1 + 0x2a;
    if (*(char *)((longlong)param_1 + 0x1b9) != '\0') {
      plVar5 = param_1 + 0x37;
    }
    if ((char)*plVar5 != '\x01') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc1e384) && (FUN_144b3d300(&DAT_14cc1e384), DAT_14cc1e384 == -1))
      {
        FUN_1446ddc76(&DAT_14cc1e37c,"LiveLinkSubject_EvalutationWorldTime",1);
        puVar8 = &DAT_14cc1e384;
        goto LAB_149502138;
      }
      goto LAB_149501c6c;
    }
    if ((int)param_1[0x17] != 0) {
      dVar1 = (param_2 - (double)*(float *)(param_1 + 0x2c)) - (double)param_1[0x2d];
      lVar7 = param_1[2];
      if ((((lVar7 == 0) || (lVar4 = FUN_1411f0380(), lVar4 == 0)) ||
          (*(int *)(lVar7 + 0x38) < *(int *)(lVar4 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30)) {
        lVar7 = 0;
      }
      else {
        lVar7 = param_1[2];
      }
      lVar4 = *param_3;
      if (((lVar4 == 0) || (lVar6 = FUN_1411f0380(), lVar6 == 0)) ||
         ((*(int *)(lVar4 + 0x38) < *(int *)(lVar6 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
           lVar6 + 0x30)))) {
        lVar4 = 0;
      }
      else {
        lVar4 = *param_3;
      }
      if (lVar7 == lVar4) {
LAB_14950203f:
        FUN_14950b200(param_1,dVar1,param_4);
        uVar9 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        goto LAB_149501c92;
      }
      lVar7 = param_1[2];
      if (((lVar7 == 0) || (lVar4 = FUN_1411f0380(), lVar4 == 0)) ||
         ((*(int *)(lVar7 + 0x38) < *(int *)(lVar4 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
           lVar4 + 0x30)))) {
        lVar7 = 0;
      }
      else {
        lVar7 = param_1[2];
      }
      lVar4 = *param_3;
      if ((((lVar4 != 0) && (lVar6 = FUN_1411f0380(), lVar6 != 0)) &&
          (*(int *)(lVar6 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
         (((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30 && (lVar4 = *param_3, lVar4 != 0)) &&
          ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar7 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)))))) goto LAB_14950203f;
      local_48 = *param_3;
      if ((local_48 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      cVar2 = (**(code **)(*param_1 + 0x38))(param_1,&local_48);
      if (cVar2 != '\0') {
        local_98 = &PTR_FUN_149eacb10;
        local_90 = 0;
        uStack_88 = 0;
        uStack_87 = 0;
        uStack_80 = 0;
        uStack_7f = 0;
        local_70 = &PTR_FUN_149eacb10;
        local_68 = 0;
        uStack_60 = 0;
        uStack_5f = 0;
        uStack_58 = 0;
        uStack_57 = 0;
        FUN_14950b200(param_1,dVar1,&local_98);
        local_a0 = *param_3;
        if ((local_a0 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        local_c8 = param_4;
        uVar3 = FUN_1492dbbcc(param_1,&local_a0,&local_98,&local_70);
        uVar9 = (ulonglong)uVar3;
        FUN_1448eac94(&local_70);
        FUN_1448eac94(&local_98);
        goto LAB_149501c92;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc1e390) && (FUN_144b3d300(&DAT_14cc1e390), DAT_14cc1e390 == -1))
      {
        FUN_1446ddc76(&DAT_14cc1e388,"LiveLinkSubject_CantTranslate",1);
        _Init_thread_footer(&DAT_14cc1e390);
      }
      lVar7 = param_1[2];
      if ((((lVar7 == 0) || (lVar4 = FUN_1411f0380(), lVar4 == 0)) ||
          (*(int *)(lVar7 + 0x38) < *(int *)(lVar4 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30)) {
        lVar7 = 0;
      }
      else {
        lVar7 = param_1[2];
      }
      local_b0[0] = *(longlong *)(lVar7 + 0x18);
      FUN_1400021e4(local_b0,&local_98);
      lVar7 = *param_3;
      if (((lVar7 == 0) || (lVar4 = FUN_1411f0380(), lVar4 == 0)) ||
         ((*(int *)(lVar7 + 0x38) < *(int *)(lVar4 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
           lVar4 + 0x30)))) {
        lVar7 = 0;
      }
      else {
        lVar7 = *param_3;
      }
      local_c0[0] = *(longlong *)(lVar7 + 0x18);
      FUN_1400021e4(local_c0,local_b0);
      FUN_1400021e4(param_1 + 0x27,local_c0);
      if (local_c0[0] != 0) {
        FUN_1400020a8();
      }
      if (local_b0[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_149501c86;
    }
  }
  uVar9 = 0;
LAB_149501c92:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 149502186 FUN_149502186 body=1948 status=ok
// SIG undefined FUN_149502186(void)

ulonglong FUN_149502186(longlong *param_1,int *param_2,longlong *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  int iVar10;
  ulonglong uVar11;
  float fVar12;
  double dVar13;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_158 [32];
  undefined8 local_138;
  longlong local_128 [2];
  longlong local_118 [2];
  longlong local_108;
  undefined **local_100;
  undefined8 local_f8;
  undefined1 uStack_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined8 uStack_e7;
  undefined **local_d8;
  undefined8 local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  longlong local_b0;
  int local_a8;
  float local_a4;
  undefined8 local_a0;
  int local_98;
  float local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar8 = param_1[2];
  if ((((lVar8 == 0) || (lVar5 = FUN_1411f0380(), lVar5 == 0)) ||
      (*(int *)(lVar8 + 0x38) < *(int *)(lVar5 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
       lVar5 + 0x30 || (param_1[2] == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc1e39c) && (FUN_144b3d300(&DAT_14cc1e39c), DAT_14cc1e39c == -1)) {
      FUN_1446ddc76(&DAT_14cc1e394,"LiveLinkSubject_InvalidRole",1);
      puVar9 = &DAT_14cc1e39c;
LAB_1495028d6:
      _Init_thread_footer(puVar9);
    }
LAB_149502232:
    FUN_1400021e4(param_1 + 0x27,&local_100);
  }
  else {
    lVar8 = *param_3;
    if (((lVar8 == 0) || (lVar5 = FUN_1411f0380(), lVar5 == 0)) ||
       ((*(int *)(lVar8 + 0x38) < *(int *)(lVar5 + 0x38) ||
        ((*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
          lVar5 + 0x30 || (*param_3 == 0)))))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc1e3a8) && (FUN_144b3d300(&DAT_14cc1e3a8), DAT_14cc1e3a8 == -1))
      {
        FUN_1446ddc76(&DAT_14cc1e3a0,"LiveLinkSubject_InvalidDesiredRole",1);
        puVar9 = &DAT_14cc1e3a8;
        goto LAB_1495028d6;
      }
      goto LAB_149502232;
    }
    plVar6 = param_1 + 0x2a;
    if (*(char *)((longlong)param_1 + 0x1b9) != '\0') {
      plVar6 = param_1 + 0x37;
    }
    if ((char)*plVar6 != '\x02') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc1e3b4) && (FUN_144b3d300(&DAT_14cc1e3b4), DAT_14cc1e3b4 == -1))
      {
        FUN_1446ddc76(&DAT_14cc1e3ac,"LiveLinkSubject_EvalutationSceneTime",1);
        puVar9 = &DAT_14cc1e3b4;
        goto LAB_1495028d6;
      }
      goto LAB_149502232;
    }
    uVar11 = 0;
    iVar10 = 0;
    if ((int)param_1[0x17] == 0) goto LAB_149502258;
    auVar18 = ZEXT816(0);
    if (*(char *)((longlong)param_1 + 0x184) == '\x01') {
      dVar13 = ((double)param_2[2] * (double)param_1[0x34]) / (double)param_2[3];
      auVar17._8_8_ = 0;
      auVar17._0_8_ = dVar13;
      auVar18 = roundpd(auVar17,auVar17,1);
      dVar16 = auVar18._0_8_;
      dVar13 = dVar13 - dVar16;
      if (2147483647.0 <= dVar16) {
        dVar16 = 2147483647.0;
      }
      if (dVar16 <= -2147483648.0) {
        dVar16 = -2147483648.0;
      }
      fVar12 = (float)dVar13 - (float)(int)dVar13;
      iVar10 = (int)dVar16 + (int)dVar13;
      fVar20 = fVar12;
      if (0.99999994 <= fVar12) {
        fVar20 = 0.99999994;
      }
      auVar21._0_4_ = ~-(uint)(0.0 < fVar12) & (uint)fVar12;
      auVar21._4_4_ = (int)((ulonglong)dVar13 >> 0x20);
      auVar21._8_4_ = (int)extraout_XMM0_Qb;
      auVar21._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar21 = auVar21 | ZEXT416((uint)fVar20 & -(uint)(0.0 < fVar12));
      auVar18._4_12_ = auVar21._4_12_;
      fVar20 = auVar21._0_4_ + 0.5 + -0.5;
      if (0.99999994 <= fVar20) {
        fVar20 = 0.99999994;
      }
      auVar18._0_4_ = fVar20;
      if (fVar20 <= 0.0) {
        auVar1._12_4_ = 0;
        auVar1._0_12_ = auVar18._4_12_;
        auVar18 = auVar1 << 0x20;
      }
    }
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (double)*(float *)(param_1 + 0x33);
    auVar17 = roundpd(auVar19,auVar19,1);
    dVar16 = auVar17._0_8_;
    dVar13 = (double)*(float *)(param_1 + 0x33) - dVar16;
    if (2147483647.0 <= dVar16) {
      dVar16 = 2147483647.0;
    }
    if (dVar16 <= -2147483648.0) {
      dVar16 = -2147483648.0;
    }
    uVar11 = (ulonglong)dVar13 >> 0x20;
    auVar14._0_4_ = (float)dVar13;
    auVar14._4_8_ = uVar11;
    auVar14._12_4_ = 0;
    if (0.99999994 <= auVar14._0_4_) {
      auVar14._12_4_ = 0;
      auVar14._0_4_ = 0.99999994;
    }
    if (auVar14._0_4_ <= 0.0) {
      auVar2._12_4_ = 0;
      auVar2._0_12_ = auVar14._4_12_;
      auVar14 = auVar2 << 0x20;
    }
    auVar15._4_12_ = auVar14._4_12_;
    fVar20 = auVar14._0_4_ + 0.5 + -0.5;
    if (0.99999994 <= fVar20) {
      fVar20 = 0.99999994;
    }
    auVar15._0_4_ = fVar20;
    lVar8 = auVar15._0_8_;
    if (fVar20 <= 0.0) {
      lVar8 = 0;
    }
    FUN_144a808d5(&local_98,lVar8 << 0x20 | (ulonglong)(uint)(int)dVar16,param_1[0x3c],
                  *(undefined8 *)(param_2 + 2));
    auVar22._4_12_ = auVar18._4_12_;
    auVar22._0_4_ = auVar18._0_4_ + local_94;
    auVar18 = roundss(ZEXT416(0),auVar22,9);
    fVar20 = (auVar22._0_4_ - auVar18._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar20) {
      fVar20 = 0.99999994;
    }
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    fVar20 = (float)param_2[1] - fVar20;
    auVar18 = roundps(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20),1);
    iVar10 = iVar10 + local_98 + ((int)ROUND(auVar22._0_4_ + auVar22._0_4_ + -0.5) >> 1);
    local_a8 = (*param_2 - iVar10) + (int)auVar18._0_4_;
    local_a4 = (fVar20 - auVar18._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= local_a4) {
      local_a4 = 0.99999994;
    }
    if (local_a4 <= 0.0) {
      local_a4 = 0.0;
    }
    local_a0 = *(undefined8 *)(param_2 + 2);
    lVar8 = param_1[2];
    if ((((lVar8 == 0) || (lVar5 = FUN_1411f0380(), lVar5 == 0)) ||
        (*(int *)(lVar8 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) {
      lVar8 = 0;
    }
    else {
      lVar8 = param_1[2];
    }
    lVar5 = *param_3;
    if (((lVar5 == 0) || (lVar7 = FUN_1411f0380(), lVar7 == 0)) ||
       ((*(int *)(lVar5 + 0x38) < *(int *)(lVar7 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
         lVar7 + 0x30)))) {
      lVar5 = 0;
    }
    else {
      lVar5 = *param_3;
    }
    if (lVar8 == lVar5) {
LAB_1495027d2:
      FUN_14950b17e(param_1,&local_a8,param_4);
      uVar11 = CONCAT71((uint7)(uint3)((uint)iVar10 >> 8),1);
      goto LAB_149502258;
    }
    lVar8 = param_1[2];
    if (((lVar8 == 0) || (lVar5 = FUN_1411f0380(), lVar5 == 0)) ||
       ((*(int *)(lVar8 + 0x38) < *(int *)(lVar5 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
         lVar5 + 0x30)))) {
      lVar8 = 0;
    }
    else {
      lVar8 = param_1[2];
    }
    lVar5 = *param_3;
    if ((((lVar5 != 0) && (lVar7 = FUN_1411f0380(), lVar7 != 0)) &&
        (*(int *)(lVar7 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
       (((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
          lVar7 + 0x30 && (lVar5 = *param_3, lVar5 != 0)) &&
        ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar8 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)))))) goto LAB_1495027d2;
    local_b0 = *param_3;
    if ((local_b0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    cVar3 = (**(code **)(*param_1 + 0x38))(param_1,&local_b0);
    if (cVar3 != '\0') {
      local_100 = &PTR_FUN_149eacb10;
      local_f8 = 0;
      uStack_f0 = 0;
      uStack_ef = 0;
      uStack_e8 = 0;
      uStack_e7 = 0;
      local_d8 = &PTR_FUN_149eacb10;
      local_d0 = 0;
      uStack_c8 = 0;
      uStack_c7 = 0;
      uStack_c0 = 0;
      uStack_bf = 0;
      FUN_14950b17e(param_1,&local_a8,&local_100);
      local_108 = *param_3;
      if ((local_108 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_138 = param_4;
      uVar4 = FUN_1492dbbcc(param_1,&local_108,&local_100,&local_d8);
      uVar11 = (ulonglong)uVar4;
      FUN_1448eac94(&local_d8);
      FUN_1448eac94(&local_100);
      goto LAB_149502258;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc1e3c0) && (FUN_144b3d300(&DAT_14cc1e3c0), DAT_14cc1e3c0 == -1)) {
      FUN_1446ddc76(&DAT_14cc1e3b8,"LiveLinkSubject_CantTranslate",1);
      _Init_thread_footer(&DAT_14cc1e3c0);
    }
    lVar8 = param_1[2];
    if ((((lVar8 == 0) || (lVar5 = FUN_1411f0380(), lVar5 == 0)) ||
        (*(int *)(lVar8 + 0x38) < *(int *)(lVar5 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) {
      lVar8 = 0;
    }
    else {
      lVar8 = param_1[2];
    }
    local_118[0] = *(longlong *)(lVar8 + 0x18);
    FUN_1400021e4(local_118,&local_100);
    lVar8 = *param_3;
    if (((lVar8 == 0) || (lVar5 = FUN_1411f0380(), lVar5 == 0)) ||
       ((*(int *)(lVar8 + 0x38) < *(int *)(lVar5 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
         lVar5 + 0x30)))) {
      lVar8 = 0;
    }
    else {
      lVar8 = *param_3;
    }
    local_128[0] = *(longlong *)(lVar8 + 0x18);
    FUN_1400021e4(local_128,local_118);
    FUN_1400021e4(param_1 + 0x27,local_128);
    if (local_128[0] != 0) {
      FUN_1400020a8();
    }
    if (local_118[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_100 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  uVar11 = 0;
LAB_149502258:
  if ((local_90 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 14950292c FUN_14950292c body=80 status=ok
// SIG undefined FUN_14950292c(void)

undefined8 * FUN_14950292c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1494ff812(*(undefined8 *)(param_1 + 8),param_3);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x28) == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0xea6000000000;
    *(undefined4 *)(param_2 + 3) = 1;
  }
  else {
    FUN_14950297c(*(longlong *)(lVar1 + 0x28),param_2);
  }
  return param_2;
}



// FUNCTION 14950297c FUN_14950297c body=84 status=ok
// SIG undefined FUN_14950297c(void)

void FUN_14950297c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0x10000ea60;
  iVar1 = *(int *)(param_1 + 0xb8);
  *(bool *)param_2 = 0 < iVar1;
  if (0 < iVar1) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    *(undefined8 *)(param_2 + 0xc) =
         *(undefined8 *)(*(longlong *)(lVar2 + 0x10 + (ulonglong)(iVar1 - 1) * 0x28) + 0x60);
    lVar2 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(lVar2 + 0x60);
    *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(lVar2 + 0x68);
  }
  return;
}



// FUNCTION 1495029d0 FUN_1495029d0 body=204 status=ok
// SIG undefined FUN_1495029d0(void)

undefined8 FUN_1495029d0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  lVar1 = FUN_1494fe768(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x38))(*(longlong **)(lVar1 + 0x18),param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  local_30 = L"InvalidSourceType";
  local_28 = 0x11;
  FUN_1446e940c(local_4c,&local_30);
  local_30 = L"TempLocTextLiveLink";
  local_28 = 0x13;
  FUN_1446e940c(local_50,&local_30);
  FUN_140208bae(param_2,local_50,local_4c,L"Invalid Source Type");
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149502a9e FUN_149502a9e body=204 status=ok
// SIG undefined FUN_149502a9e(void)

undefined8 FUN_149502a9e(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  lVar1 = FUN_1494fe768(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x40))(*(longlong **)(lVar1 + 0x18),param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  local_30 = L"InvalidSourceMachineName";
  local_28 = 0x18;
  FUN_1446e940c(local_4c,&local_30);
  local_30 = L"TempLocTextLiveLink";
  local_28 = 0x13;
  FUN_1446e940c(local_50,&local_30);
  FUN_140208bae(param_2,local_50,local_4c,L"Invalid Source Machine Name");
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149502b6c FUN_149502b6c body=203 status=ok
// SIG undefined FUN_149502b6c(void)

undefined8 FUN_149502b6c(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  lVar1 = FUN_1494fe768(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x48))(*(longlong **)(lVar1 + 0x18),param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  local_38 = L"InvalidSourceStatus";
  local_30 = 0x13;
  FUN_1446e940c(local_4c,&local_38);
  local_38 = L"TempLocTextLiveLink";
  local_30 = 0x13;
  FUN_1446e940c(local_50,&local_38);
  FUN_140208bae(param_2,local_50,local_4c,L"Invalid Source Status");
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 149502c38 FUN_149502c38 body=98 status=ok
// SIG undefined FUN_149502c38(void)

byte FUN_149502c38(longlong param_1,undefined4 *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *(undefined8 *)(param_1 + 8);
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  lVar2 = FUN_1494fe768(uVar3);
  bVar1 = (byte)uVar3;
  if (lVar2 != 0) {
    bVar1 = (**(code **)(**(longlong **)(lVar2 + 0x18) + 0x28))();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 != 0 & bVar1;
}



// FUNCTION 149502c9c FUN_149502c9c body=94 status=ok
// SIG undefined FUN_149502c9c(void)

bool FUN_149502c9c(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_2 + 4);
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  lVar1 = FUN_1494fd646(*(undefined8 *)(param_1 + 8),&local_28);
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(longlong *)(lVar1 + 0x30) != 0;
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149502cfc FUN_149502cfc body=79 status=ok
// SIG undefined FUN_149502cfc(void)

undefined8 FUN_149502cfc(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  lVar1 = FUN_1494fe768(*(undefined8 *)(param_1 + 8));
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149502d4c FUN_149502d4c body=102 status=ok
// SIG undefined FUN_149502d4c(void)

longlong FUN_149502d4c(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_2 + 4);
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  lVar1 = FUN_1494fd646(*(undefined8 *)(param_1 + 8),&local_28);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x30);
    if (lVar2 == 0) {
      lVar2 = *(longlong *)(lVar1 + 0x20);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149502db4 FUN_149502db4 body=122 status=ok
// SIG undefined FUN_149502db4(void)

undefined8 FUN_149502db4(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(param_2 + 4);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  lVar1 = FUN_1494fd646(*(undefined8 *)(param_1 + 8),&local_38);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x28) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149502e42 FUN_149502e42 body=417 status=ok
// SIG undefined FUN_149502e42(void)

void FUN_149502e42(longlong param_1,longlong param_2,LPCRITICAL_SECTION param_3,
                  LPCRITICAL_SECTION param_4,undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar3 = '\0';
  *param_5 = 0;
  local_58 = param_6;
  *param_6 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x158));
  iVar4 = FUN_1447addd0(param_2,0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar6 = (uint)uVar1 & 0xffff;
  lVar5 = FUN_149519df6(param_1 + 0x108,
                        (((uint)uVar1 << 0x10 | uVar6) + (int)((ulonglong)uVar1 >> 0x20) +
                         (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 0xd + iVar4,param_2);
  EnterCriticalSection(param_3);
  if (param_3[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0 && param_3[1].LockCount != 0) {
    cVar3 = (**(code **)(*(longlong *)param_3[1].DebugInfo + 0x30))();
  }
  if (param_3 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_3);
  }
  if (cVar3 != '\0') {
    FUN_149502fe4(lVar5,&local_50,param_3);
    *param_5 = local_50;
  }
  EnterCriticalSection(param_4);
  if (param_4[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0 || param_4[1].LockCount == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = (**(code **)(*(longlong *)param_4[1].DebugInfo + 0x30))();
  }
  if (param_4 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_4);
  }
  if (cVar3 != '\0') {
    FUN_149503076(lVar5 + 0x40,&local_50,param_4);
    *local_58 = local_50;
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000149502f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x158));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149502fe4 FUN_149502fe4 body=145 status=ok
// SIG undefined FUN_149502fe4(void)

undefined8 FUN_149502fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  _RTL_CRITICAL_SECTION local_60;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  InitializeCriticalSection(&local_60);
  SetCriticalSectionSpinCount(&local_60,4000);
  local_38 = 0;
  local_30 = 0;
  FUN_14951a68a(&local_60,param_3);
  FUN_14951a54a(param_1,param_2,&local_60);
  FUN_1401cb1ee(&local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149503076 FUN_149503076 body=145 status=ok
// SIG undefined FUN_149503076(void)

undefined8 FUN_149503076(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  _RTL_CRITICAL_SECTION local_60;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  InitializeCriticalSection(&local_60);
  SetCriticalSectionSpinCount(&local_60,4000);
  local_38 = 0;
  local_30 = 0;
  FUN_14951a88a(&local_60,param_3);
  FUN_14951a74a(param_1,param_2,&local_60);
  FUN_1401cb1ee(&local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149503108 FUN_149503108 body=219 status=ok
// SIG undefined FUN_149503108(void)

void FUN_149503108(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x158));
  iVar3 = FUN_1447addd0(param_2,0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  iVar3 = FUN_14951985a((longlong *)(param_1 + 0x108),
                        (((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
                         (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 0xd + iVar3,param_2);
  if (iVar3 != -1) {
    lVar5 = (longlong)iVar3 * 0xa0 + *(longlong *)(param_1 + 0x108);
    if (lVar5 + 0x18 != 0 && lVar5 != 0) {
      if (param_3 != 0) {
        FUN_141092d32(lVar5 + 0x18,param_3);
      }
      if (param_4 != 0) {
        FUN_141092d32(lVar5 + 0x58,param_4);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001495031b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x158));
  return;
}



// FUNCTION 1495031e4 FUN_1495031e4 body=419 status=ok
// SIG undefined FUN_1495031e4(void)

bool FUN_1495031e4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = param_2;
  lVar2 = FUN_1494ff812(*(undefined8 *)(param_1 + 8));
  if (lVar2 != 0) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar3 = FUN_14951a94a(param_1 + 0xb8,
                          ((uint)param_2 << 0x10 | uVar5) + (int)((ulonglong)param_2 >> 0x20) +
                          (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4),&local_48);
    FUN_149503388(lVar3,&local_50,param_3);
    *param_5 = local_50;
    FUN_14950341a(lVar3 + 0x40,&local_50,param_4);
    *param_6 = local_50;
    if (*(longlong *)(lVar2 + 0x30) == 0) {
      plVar4 = *(longlong **)(lVar2 + 0x28);
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x30) + 0x28);
    }
    (**(code **)(*plVar4 + 0x30))(plVar4,&local_50);
    if (DAT_14c950c29 == '\x01') {
      if (local_50 == 0) {
        local_50 = 0;
      }
      else {
        FUN_1456cec3c();
      }
    }
    *param_7 = local_50;
    if (param_8 != (longlong *)0x0) {
      if (*(longlong *)(lVar2 + 0x30) == 0) {
        plVar4 = *(longlong **)(lVar2 + 0x28);
      }
      else {
        plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x30) + 0x28);
      }
      lVar3 = (**(code **)(*plVar4 + 0x50))(plVar4,1);
      if (*(longlong *)(lVar3 + 0x10) == 0) {
        (**(code **)(*param_8 + 0x40))(param_8);
        *(undefined1 *)(param_8 + 4) = 0;
        param_8[1] = 0;
        param_8[2] = 0;
      }
      else {
        FUN_1492dba98(param_8,lVar3);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149503388 FUN_149503388 body=145 status=ok
// SIG undefined FUN_149503388(void)

undefined8 FUN_149503388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  _RTL_CRITICAL_SECTION local_60;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  InitializeCriticalSection(&local_60);
  SetCriticalSectionSpinCount(&local_60,4000);
  local_38 = 0;
  local_30 = 0;
  FUN_14951b2de(&local_60,param_3);
  FUN_14951b19e(param_1,param_2,&local_60);
  FUN_1401cb1ee(&local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950341a FUN_14950341a body=145 status=ok
// SIG undefined FUN_14950341a(void)

undefined8 FUN_14950341a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_88 [40];
  _RTL_CRITICAL_SECTION local_60;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  InitializeCriticalSection(&local_60);
  SetCriticalSectionSpinCount(&local_60,4000);
  local_38 = 0;
  local_30 = 0;
  FUN_14951b4de(&local_60,param_3);
  FUN_14951b39e(param_1,param_2,&local_60);
  FUN_1401cb1ee(&local_60);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495034ac FUN_1495034ac body=233 status=ok
// SIG undefined FUN_1495034ac(void)

void FUN_1495034ac(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0xc0) != *(int *)(param_1 + 0xec)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0xf0;
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xf8);
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x100) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0xb8) + (longlong)iVar1 * 0x110;
        if (*(longlong *)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar1 * 0x110) == param_2) {
          if (lVar3 + 8 == 0 || lVar3 == 0) {
            return;
          }
          if (param_3 != 0) {
            FUN_141092d32(lVar3 + 8,param_3);
          }
          if (param_4 == 0) {
            return;
          }
          FUN_141092d32(lVar3 + 0x48,param_4);
          return;
        }
        iVar1 = *(int *)(lVar3 + 0x108);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1495035cc FUN_1495035cc body=126 status=ok
// SIG undefined FUN_1495035cc(void)

void FUN_1495035cc(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_28 = *(undefined8 *)(param_2 + 4);
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    lVar1 = FUN_1494fd646(*(longlong *)(param_1 + 8),&local_38);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950365c FUN_14950365c body=243 status=ok
// SIG undefined FUN_14950365c(void)

undefined8 FUN_14950365c(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 8) != 0) {
    local_28 = *(undefined8 *)(param_2 + 4);
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    lVar1 = FUN_1494fd646(*(longlong *)(param_1 + 8),&local_38);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x30) == 0) {
        plVar5 = *(longlong **)(lVar1 + 0x28);
      }
      else {
        plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x30) + 0x28);
      }
      (**(code **)(*plVar5 + 0x30))(plVar5,&local_40);
      lVar3 = local_40;
      if ((((local_40 == 0) || (lVar2 = FUN_1411f0380(), lVar2 == 0)) ||
          (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (lVar6 = local_40,
         *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
         lVar2 + 0x30)) {
        lVar6 = 0;
      }
      lVar3 = FUN_145a92b78();
      if ((lVar6 == lVar3) && (*(char *)(lVar1 + 0x19) == '\0')) {
        if (*(longlong *)(lVar1 + 0x30) == 0) {
          plVar5 = *(longlong **)(lVar1 + 0x28);
        }
        else {
          plVar5 = (longlong *)(*(longlong *)(lVar1 + 0x30) + 0x28);
        }
        uVar4 = (**(code **)(*plVar5 + 0x50))(plVar5,1);
        uVar4 = FUN_1494f81e6(uVar4);
        goto LAB_14950367c;
      }
    }
  }
  uVar4 = 0;
LAB_14950367c:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 149503750 FUN_149503750 body=398 status=ok
// SIG undefined FUN_149503750(void)

void FUN_149503750(longlong *param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  void **ppvVar1;
  void *pvVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [40];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = param_3;
  (**(code **)(*param_1 + 0x158))();
  uVar4 = FUN_1467194c4();
  FUN_1446e6d0e(local_70,uVar4);
  lVar5 = FUN_1494f81e6(local_70);
  FUN_1406fa324(lVar5 + 0x10,param_4);
  local_80 = (void *)0x0;
  local_78 = *(int *)(param_4 + 0x18);
  lVar6 = (longlong)local_78;
  pvVar2 = *(void **)(param_4 + 0x10);
  if (lVar6 == 0) {
    local_74 = 0;
  }
  else {
    FUN_144a06ca8(&local_80,local_78,0);
    memcpy(local_80,pvVar2,lVar6 << 2);
  }
  iVar3 = local_78;
  pvVar2 = local_80;
  ppvVar1 = (void **)(lVar5 + 0x20);
  if (ppvVar1 != &local_80) {
    lVar6 = (longlong)local_78;
    *(int *)(lVar5 + 0x28) = local_78;
    if (local_78 == 0 && *(int *)(lVar5 + 0x2c) == 0) {
      *(undefined4 *)(lVar5 + 0x2c) = 0;
    }
    else {
      FUN_144a06ca8(ppvVar1,local_78);
      if (iVar3 != 0) {
        memcpy(*ppvVar1,pvVar2,lVar6 << 2);
      }
    }
  }
  if (local_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_88 = FUN_145a92b78();
  if ((local_88 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_88);
  }
  (**(code **)(*param_1 + 0x130))(param_1,&local_48,&local_88,local_70);
  FUN_1448eac94(local_70);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495038df FUN_1495038df body=105 status=ok
// SIG undefined FUN_1495038df(void)

void FUN_1495038df(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_140ee6e62(param_1,(int)param_2[1]);
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar4 = 0;
    do {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + lVar4);
      lVar4 = lVar4 + 0xc;
    } while ((longlong)(int)lVar3 * 0xc != lVar4);
  }
  return;
}



// FUNCTION 149503948 FUN_149503948 body=500 status=ok
// SIG undefined FUN_149503948(void)

void FUN_149503948(longlong *param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [40];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  local_48 = param_3;
  (**(code **)(*param_1 + 0x2c8))();
  lVar6 = (**(code **)(*param_1 + 0x2e0))(param_1,&local_58);
  uVar11 = 0;
  if (((lVar6 != 0) && (uVar11 = *(uint *)(lVar6 + 8), uVar11 == 0)) &&
     (uVar11 = 0, 0 < *(int *)(param_4 + 0x18))) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc1e0d0) {
      FUN_144b3d300(&DAT_14cc1e0d0);
      if (DAT_14cc1e0d0 == -1) {
        FUN_1446ddc76(&DAT_14cc1e0c8,"LiveLinkClient_PushSubjectData",1);
        _Init_thread_footer(&DAT_14cc1e0d0);
      }
    }
    (**(code **)(*param_1 + 0x2d8))(param_1,&local_58);
    FUN_1495038df(lVar6,param_4 + 0x10);
    uVar11 = *(uint *)(lVar6 + 8);
  }
  (**(code **)(*param_1 + 0x2d0))(param_1);
  uVar7 = FUN_146719588();
  FUN_1446e6d0e(local_80,uVar7);
  puVar8 = (undefined4 *)FUN_1494f494e(local_80);
  FUN_140bb2e20(puVar8 + 4,param_4 + 0x30);
  uVar7 = *(undefined8 *)(param_4 + 0x88);
  *(undefined8 *)(puVar8 + 0x18) = *(undefined8 *)(param_4 + 0x80);
  *(undefined8 *)(puVar8 + 0x1a) = uVar7;
  uVar3 = *(undefined4 *)(param_4 + 0x24);
  uVar4 = *(undefined4 *)(param_4 + 0x28);
  uVar5 = *(undefined4 *)(param_4 + 0x2c);
  *puVar8 = *(undefined4 *)(param_4 + 0x20);
  puVar8[1] = uVar3;
  puVar8[2] = uVar4;
  puVar8[3] = uVar5;
  FUN_144756208(puVar8 + 0x28,param_4);
  uVar1 = *(uint *)(param_4 + 0x18);
  lVar6 = (longlong)(int)uVar1;
  uVar2 = uVar1;
  if ((int)uVar11 < (int)uVar1) {
    uVar2 = uVar11;
  }
  plVar13 = (longlong *)(puVar8 + 0x1c);
  FUN_144aa29e6(plVar13,uVar11,1);
  if (0 < (int)uVar2) {
    lVar9 = 8;
    uVar10 = 0;
    do {
      *(undefined4 *)(*plVar13 + uVar10 * 4) =
           *(undefined4 *)(*(longlong *)(param_4 + 0x10) + lVar9);
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 0xc;
    } while (uVar2 != uVar10);
  }
  if ((int)uVar1 < (int)uVar11) {
    iVar12 = uVar11 - uVar1;
    do {
      *(undefined4 *)(*plVar13 + lVar6 * 4) = 0x7f800000;
      lVar6 = lVar6 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  (**(code **)(*param_1 + 0x138))(param_1,&local_58,local_80);
  FUN_1448eac94(local_80);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149503b3e FUN_149503b3e body=154 status=ok
// SIG undefined FUN_149503b3e(void)

void FUN_149503b3e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x1a0))(param_1,&local_38,0,1);
  if ((longlong)local_30 != 0) {
    lVar2 = (longlong)local_30 * 0x18;
    lVar1 = local_38;
    do {
      if (*(longlong *)(lVar1 + 0x10) == param_2) {
        (**(code **)(*param_1 + 0x158))(param_1,lVar1);
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149503bda FUN_149503bda body=184 status=ok
// SIG undefined FUN_149503bda(void)

void FUN_149503bda(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x1a0))(param_1,&local_40,0,1);
  FUN_140ee6e62(param_2,local_38);
  lVar2 = local_40;
  if ((longlong)local_38 != 0) {
    lVar3 = 0;
    do {
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446f84a2(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + 0x10 + lVar3);
      lVar3 = lVar3 + 0x18;
    } while ((longlong)local_38 * 0x18 != lVar3);
  }
  if (local_40 != 0) {
    FUN_1400020a8(local_40);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149503c94 FUN_149503c94 body=104 status=ok
// SIG undefined FUN_149503c94(void)

undefined8 FUN_149503c94(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1e0dc) {
    FUN_144b3d300(&DAT_14cc1e0dc);
    if (DAT_14cc1e0dc == -1) {
      FUN_1446ddc76(&DAT_14cc1e0d4,"LiveLinkClient_GetSubjectData",1);
      _Init_thread_footer(&DAT_14cc1e0dc);
    }
  }
  return 0;
}



// FUNCTION 149503cfc FUN_149503cfc body=104 status=ok
// SIG undefined FUN_149503cfc(void)

undefined8 FUN_149503cfc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1e0e8) {
    FUN_144b3d300(&DAT_14cc1e0e8);
    if (DAT_14cc1e0e8 == -1) {
      FUN_1446ddc76(&DAT_14cc1e0e0,"LiveLinkClient_GetSubjectDataAtWorldTime",1);
      _Init_thread_footer(&DAT_14cc1e0e8);
    }
  }
  return 0;
}



// FUNCTION 149503d64 FUN_149503d64 body=104 status=ok
// SIG undefined FUN_149503d64(void)

undefined8 FUN_149503d64(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1e0f4) {
    FUN_144b3d300(&DAT_14cc1e0f4);
    if (DAT_14cc1e0f4 == -1) {
      FUN_1446ddc76(&DAT_14cc1e0ec,"LiveLinkClient_GetSubjectDataAtSceneTime",1);
      _Init_thread_footer(&DAT_14cc1e0f4);
    }
  }
  return 0;
}



// FUNCTION 149503dcc FUN_149503dcc body=185 status=ok
// SIG undefined FUN_149503dcc(void)

void FUN_149503dcc(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  undefined8 param_5)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = *param_4;
  if ((local_40 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1468002e8(&local_58);
  FUN_147516d62(param_3,local_50,&local_58);
  local_4c = 0;
  local_48 = local_58;
  local_68 = param_5;
  (**(code **)(*param_1 + 0x248))(param_1,param_2,local_50,&local_40);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149503e86 FUN_149503e86 body=104 status=ok
// SIG undefined FUN_149503e86(void)

undefined8 FUN_149503e86(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1e100) {
    FUN_144b3d300(&DAT_14cc1e100);
    if (DAT_14cc1e100 == -1) {
      FUN_1446ddc76(&DAT_14cc1e0f8,"LiveLinkClient_GetSubjectRawFrames",1);
      _Init_thread_footer(&DAT_14cc1e100);
    }
  }
  return 0;
}



// FUNCTION 149503f06 FUN_149503f06 body=26 status=ok
// SIG undefined FUN_149503f06(void)

undefined8 FUN_149503f06(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x180))();
  return param_2;
}



// FUNCTION 149503f20 FUN_149503f20 body=26 status=ok
// SIG undefined FUN_149503f20(void)

undefined8 FUN_149503f20(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x178))();
  return param_2;
}



// FUNCTION 149503f3a FUN_149503f3a body=107 status=ok
// SIG undefined FUN_149503f3a(void)

void FUN_149503f3a(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_3;
  if ((local_20 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  (**(code **)(*param_1 + 400))(param_1,param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149503fa6 FUN_149503fa6 body=107 status=ok
// SIG undefined FUN_149503fa6(void)

void FUN_149503fa6(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_3;
  if ((local_20 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  (**(code **)(*param_1 + 0x188))(param_1,param_2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149504012 FUN_149504012 body=223 status=ok
// SIG undefined FUN_149504012(void)

longlong FUN_149504012(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  char local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1e108) && (FUN_144b3d300(&DAT_14cc1e108), DAT_14cc1e108 == -1)) {
    local_11 = '\0';
    local_28 = &DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"LiveLink",L"bUseModularClientReference",&local_11);
    DAT_14cc1e104 = local_11;
    _Init_thread_footer(&DAT_14cc1e108);
  }
  lVar2 = DAT_14cc1e110;
  if (DAT_14cc1e104 == '\x01') {
    plVar1 = (longlong *)FUN_1448c2e86();
    lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,DAT_14cc0b540,0);
    lVar2 = lVar2 + -8;
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1495040f2 FUN_1495040f2 body=180 status=ok
// SIG undefined FUN_1495040f2(void)

void FUN_1495040f2(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1495041a8(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495041a8 FUN_1495041a8 body=235 status=ok
// SIG undefined FUN_1495041a8(void)

void FUN_1495041a8(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar3 = FUN_149504d38();
  if (cVar3 == '\0') {
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x128) + 0x1a0))
              (*(longlong **)(param_1 + 0x128),&local_40,0,1);
    FUN_140ee6e62(param_2,local_38);
    lVar2 = local_40;
    if ((longlong)local_38 != 0) {
      lVar4 = 0;
      do {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1446f84a2(param_2,iVar1);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + 0x10 + lVar4);
        lVar4 = lVar4 + 0x18;
      } while ((longlong)local_38 * 0x18 != lVar4);
    }
    if (local_40 != 0) {
      FUN_1400020a8(local_40);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495042b0 FUN_1495042b0 body=396 status=ok
// SIG undefined FUN_1495042b0(void)

void FUN_1495042b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined ***pppuVar5;
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 local_50;
  longlong *plStack_48;
  undefined1 local_39;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_39 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_39);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_39);
  }
  puVar4 = &local_39;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_58 = &PTR_FUN_14bc1c700;
  local_50 = 0;
  plStack_48 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  pppuVar5 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar5 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14950443e(param_1,local_38,puVar4,pppuVar5);
  plVar3 = plStack_48;
  local_58 = &PTR_FUN_14bc1c700;
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950443e FUN_14950443e body=410 status=ok
// SIG undefined FUN_14950443e(void)

void FUN_14950443e(longlong param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [40];
  longlong local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined8 uStack_67;
  undefined **local_58;
  undefined8 local_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_3 = 0;
  cVar1 = FUN_149504d38();
  if (cVar1 == '\0') goto LAB_149504502;
  local_80 = &PTR_FUN_149eacb10;
  local_78 = 0;
  uStack_70 = 0;
  uStack_6f = 0;
  uStack_68 = 0;
  uStack_67 = 0;
  local_58 = &PTR_FUN_149eacb10;
  local_50 = 0;
  uStack_48 = 0;
  uStack_47 = 0;
  uStack_40 = 0;
  uStack_3f = 0;
  plVar7 = *(longlong **)(param_1 + 0x128);
  local_88 = FUN_145a92b78();
  if ((local_88 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_88);
  }
  cVar1 = (**(code **)(*plVar7 + 0x238))(plVar7,param_2,&local_88,&local_80);
  if (cVar1 != '\0') {
    lVar3 = FUN_1494f81e6(&local_80);
    lVar4 = FUN_1494f494e(&local_58);
    uVar5 = FUN_14671b136();
    FUN_1468fbe3e(local_b0,uVar5,param_4);
    if (lVar3 == 0) {
      pwVar8 = L"Could not get subject data. Static data was invalid.";
LAB_1495045b7:
      FUN_1415b7ec4(pwVar8,2,0);
    }
    else {
      if (lVar4 == 0) {
        pwVar8 = L"Could not get subject data. Frame data was invalid.";
        goto LAB_1495045b7;
      }
      plVar6 = (longlong *)FUN_145a92b78();
      plVar7 = (longlong *)plVar6[0x22];
      if (plVar7 == (longlong *)0x0) {
        (**(code **)(*plVar6 + 1000))(plVar6);
        plVar7 = (longlong *)plVar6[0x22];
      }
      uVar2 = (**(code **)(*plVar7 + 0x2b8))(plVar7,&local_80,local_b0);
      *param_3 = uVar2;
    }
    FUN_1448eac94(local_b0);
  }
  FUN_1448eac94(&local_58);
  FUN_1448eac94(&local_80);
LAB_149504502:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495045e0 FUN_1495045e0 body=502 status=ok
// SIG undefined FUN_1495045e0(void)

void FUN_1495045e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_a8 [32];
  undefined ***local_88;
  undefined **local_78;
  undefined8 local_70;
  longlong *plStack_68;
  undefined1 local_59;
  undefined8 local_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_40 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_58 = 0;
  uStack_50 = 0;
  uStack_4b = 0;
  uStack_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar4 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_59 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  puVar5 = &local_59;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  local_78 = &PTR_FUN_14bc1c700;
  local_70 = 0;
  plStack_68 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_88 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    local_88 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1495047d8(param_1,local_40,puVar4,puVar5);
  plVar3 = plStack_68;
  local_78 = &PTR_FUN_14bc1c700;
  if (plStack_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_68)(plStack_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495047d8 FUN_1495047d8 body=481 status=ok
// SIG undefined FUN_1495047d8(void)

void FUN_1495047d8(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  undefined1 auStack_f8 [32];
  undefined ***local_d8;
  undefined1 local_c8 [4];
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_a0;
  longlong local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 uStack_77;
  undefined **local_68;
  undefined8 local_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_4 = 0;
  cVar1 = FUN_149504d38();
  if (cVar1 == '\0') goto LAB_149504815;
  local_90 = &PTR_FUN_149eacb10;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7f = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  local_68 = &PTR_FUN_149eacb10;
  local_60 = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  uStack_50 = 0;
  uStack_4f = 0;
  plVar7 = *(longlong **)(param_1 + 0x128);
  local_98 = FUN_145a92b78();
  if ((local_98 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_98);
  }
  FUN_1468002e8(&local_a0);
  FUN_147516d62(param_3,local_c8,&local_a0);
  local_c4 = 0;
  local_c0 = local_a0;
  local_d8 = &local_90;
  cVar1 = (**(code **)(*plVar7 + 0x248))(plVar7,param_2,local_c8,&local_98);
  if (cVar1 != '\0') {
    lVar3 = FUN_1494f81e6(&local_90);
    lVar4 = FUN_1494f494e(&local_68);
    uVar5 = FUN_14671b136();
    FUN_1468fbe3e(local_c8,uVar5,param_5);
    if (lVar3 == 0) {
      pwVar8 = L"Could not get subject data. Static data was invalid.";
LAB_149504998:
      FUN_1415b7ec4(pwVar8,2,0);
    }
    else {
      if (lVar4 == 0) {
        pwVar8 = L"Could not get subject data. Frame data was invalid.";
        goto LAB_149504998;
      }
      plVar6 = (longlong *)FUN_145a92b78();
      plVar7 = (longlong *)plVar6[0x22];
      if (plVar7 == (longlong *)0x0) {
        (**(code **)(*plVar6 + 1000))(plVar6);
        plVar7 = (longlong *)plVar6[0x22];
      }
      uVar2 = (**(code **)(*plVar7 + 0x2b8))(plVar7,&local_90,local_c8);
      *param_4 = uVar2;
    }
    FUN_1448eac94(local_c8);
  }
  FUN_1448eac94(&local_68);
  FUN_1448eac94(&local_90);
LAB_149504815:
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495049c0 FUN_1495049c0 body=477 status=ok
// SIG undefined FUN_1495049c0(void)

void FUN_1495049c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined1 auStack_88 [32];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *plStack_48;
  undefined1 local_3d;
  float local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_3d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3d);
  }
  puVar4 = &local_3d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_58 = &PTR_FUN_14bc1c700;
  local_50 = 0;
  plStack_48 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_68 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    local_68 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_149504da0(param_1,local_38,(double)local_3c,puVar4);
  plVar3 = plStack_48;
  local_58 = &PTR_FUN_14bc1c700;
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149504bae FUN_149504bae body=266 status=ok
// SIG undefined FUN_149504bae(void)

void FUN_149504bae(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  longlong local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x120) == '\x01') {
    local_68 = 0;
    uStack_60 = 0;
    FUN_149504cba(*(undefined8 *)(param_1 + 0xa8),&local_68);
    lVar1 = local_68;
    lVar3 = (longlong)(int)uStack_60;
    if (lVar3 != 0) {
      lVar2 = 0;
      do {
        FUN_14348c31c(*(undefined8 *)(lVar1 + lVar2),1);
        lVar2 = lVar2 + 8;
      } while (lVar3 * 8 != lVar2);
    }
    *(undefined1 *)(param_1 + 0x120) = 0;
    if (local_68 != 0) {
      FUN_1400020a8(local_68);
    }
  }
  if (0 < *(int *)(param_1 + 0x118)) {
    FUN_1428255e4(&local_69);
    local_68 = CONCAT44(local_68._4_4_,param_2);
    FUN_1447cd2ec(param_1 + 0x110);
    FUN_1428255f8(&local_69);
  }
  FUN_144a7e84a(param_1,param_2,param_3,param_4);
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149504cba FUN_149504cba body=125 status=ok
// SIG undefined FUN_149504cba(void)

void FUN_149504cba(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_14951b680(param_2);
  }
  local_20 = FUN_144a74fb4();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_14951b59e(param_1,&local_20,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149504d38 FUN_149504d38 body=103 status=ok
// SIG undefined FUN_149504d38(void)

undefined8 FUN_149504d38(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x128);
  if (lVar3 == 0) {
    plVar2 = (longlong *)FUN_1448c2e86();
    iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,DAT_14cc0b540);
    if (iVar1 < 1) {
      lVar3 = *(longlong *)(param_1 + 0x128);
    }
    else {
      lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,DAT_14cc0b540,0);
      lVar3 = lVar3 + -8;
      *(longlong *)(param_1 + 0x128) = lVar3;
    }
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),lVar3 != 0);
}



// FUNCTION 149504da0 FUN_149504da0 body=442 status=ok
// SIG undefined FUN_149504da0(void)

void FUN_149504da0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 *param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  wchar_t *pwVar8;
  undefined1 auStack_e8 [32];
  undefined ***local_c8;
  undefined1 local_c0 [40];
  longlong local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 uStack_77;
  undefined **local_68;
  undefined8 local_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_4 = 0;
  cVar1 = FUN_149504d38();
  if (cVar1 == '\0') goto LAB_149504e74;
  local_90 = &PTR_FUN_149eacb10;
  local_88 = 0;
  uStack_80 = 0;
  uStack_7f = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  local_68 = &PTR_FUN_149eacb10;
  local_60 = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  uStack_50 = 0;
  uStack_4f = 0;
  plVar7 = *(longlong **)(param_1 + 0x128);
  local_98 = FUN_145a92b78();
  if ((local_98 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_98);
  }
  local_c8 = &local_90;
  cVar1 = (**(code **)(*plVar7 + 0x240))(plVar7,param_2,param_3,&local_98);
  if (cVar1 != '\0') {
    lVar3 = FUN_1494f81e6(&local_90);
    lVar4 = FUN_1494f494e(&local_68);
    uVar5 = FUN_14671b136();
    FUN_1468fbe3e(local_c0,uVar5,param_5);
    if (lVar3 == 0) {
      pwVar8 = L"Could not get subject data. Static data was invalid.";
LAB_149504f39:
      FUN_1415b7ec4(pwVar8,2,0);
    }
    else {
      if (lVar4 == 0) {
        pwVar8 = L"Could not get subject data. Frame data was invalid.";
        goto LAB_149504f39;
      }
      plVar6 = (longlong *)FUN_145a92b78();
      plVar7 = (longlong *)plVar6[0x22];
      if (plVar7 == (longlong *)0x0) {
        (**(code **)(*plVar6 + 1000))(plVar6);
        plVar7 = (longlong *)plVar6[0x22];
      }
      uVar2 = (**(code **)(*plVar7 + 0x2b8))(plVar7,&local_90,local_c0);
      *param_4 = uVar2;
    }
    FUN_1448eac94(local_c0);
  }
  FUN_1448eac94(&local_68);
  FUN_1448eac94(&local_90);
LAB_149504e74:
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149504f5c FUN_149504f5c body=159 status=ok
// SIG undefined FUN_149504f5c(void)

undefined8 FUN_149504f5c(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  LOCK();
  *(undefined4 *)(param_1 + 0x88) = 3;
  UNLOCK();
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x18))();
  plVar1 = (longlong *)FUN_1448c2e86();
  uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
  FUN_149504ffc(uVar2,local_20,param_1,&LAB_1495050f2);
  uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
  FUN_149504ffc(uVar2,local_20,param_1,FUN_14950510a);
  FUN_14950514e(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149504ffc FUN_149504ffc body=244 status=ok
// SIG undefined FUN_149504ffc(void)

undefined8
FUN_149504ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14bd355a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14bd35530;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_14951b9a6(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950510a FUN_14950510a body=67 status=ok
// SIG undefined FUN_14950510a(void)

void FUN_14950510a(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if (*param_2 == DAT_14cc0b540) {
    lVar1 = *(longlong *)(param_1 + 0x60) + 8;
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar1 = 0;
    }
    if (lVar1 == param_3) {
      FUN_145d8a092(param_1);
      FUN_14950514e(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14950514e FUN_14950514e body=276 status=ok
// SIG undefined FUN_14950514e(void)

void FUN_14950514e(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)FUN_1448c2e86();
  iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,DAT_14cc0b540);
  if (0 < iVar1) {
    plVar2 = (longlong *)FUN_1448c2e86();
    lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,DAT_14cc0b540,0);
    *(longlong *)(param_1 + 0x60) = lVar3 + -8;
    uVar4 = (**(code **)(*(longlong *)(lVar3 + -8) + 0x298))();
    FUN_14951bd32(local_58,param_1,&LAB_1495054cc);
    FUN_145da85ea(uVar4,local_60,local_58);
    FUN_1401cb1ee(local_58);
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x2a0))();
    FUN_14951bd32(local_58,param_1,FUN_1495054fa);
    FUN_145da85ea(uVar4,local_60,local_58);
    FUN_1401cb1ee(local_58);
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x210))
                      (*(longlong **)(param_1 + 0x60),param_1 + 0x38);
    if (lVar3 != 0) {
      FUN_14950557a(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950526a FUN_14950526a body=435 status=ok
// SIG undefined FUN_14950526a(void)

ulonglong FUN_14950526a(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  LARGE_INTEGER LVar4;
  uint uVar5;
  uint uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  undefined1 auStack_88 [40];
  double local_60;
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[0x11] == 2) {
    LOCK();
    *(char *)((longlong)param_1 + 0xac) = (char)param_1[10];
    UNLOCK();
    LOCK();
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)((longlong)param_1 + 0x54);
    UNLOCK();
    LOCK();
    param_1[0x17] = param_1[0xb];
    UNLOCK();
    FUN_147a920b6();
    QueryPerformanceCounter(&local_58);
    LVar4 = local_58;
    dVar2 = DAT_14c83f420;
    uVar5 = (**(code **)(*param_1 + 0x2c8))(param_1);
    if ((char)uVar5 == '\0') {
      LOCK();
      *(undefined4 *)(param_1 + 0x11) = 3;
      UNLOCK();
    }
    else {
      QueryPerformanceCounter(&local_58);
      dVar1 = (double)local_58.QuadPart * DAT_14c83f420;
      uVar6 = *(uint *)((longlong)param_1 + 0xa4);
      *(uint *)(param_1 + 0x15) = uVar6;
      if (1 < *(uint *)((longlong)param_1 + 0x54)) {
        uVar6 = uVar6 - uVar6 % *(uint *)((longlong)param_1 + 0x54);
        *(uint *)(param_1 + 0x15) = uVar6;
      }
      LOCK();
      *(int *)((longlong)param_1 + 0xa4) = *(int *)((longlong)param_1 + 0xa4) - uVar6;
      dVar3 = DAT_14c846540;
      UNLOCK();
      uVar6 = (**(code **)(*param_1 + 0x2d8))(param_1);
      (**(code **)(*param_1 + 0x2d0))(param_1,&local_58);
      local_58 = (LARGE_INTEGER)
                 (((double)local_58.s.HighPart / (double)(int)local_58.s.LowPart) * (double)uVar6 +
                 dVar3);
      local_60 = (double)local_58 -
                 ((dVar1 + 16777216.0) - ((double)LVar4.QuadPart * dVar2 + 16777216.0));
      FUN_147516e7e(param_1,&local_60,&local_58);
    }
    uVar7 = (ulonglong)uVar5 ^ 1;
  }
  else {
    (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950545c FUN_14950545c body=112 status=ok
// SIG undefined FUN_14950545c(void)

void FUN_14950545c(longlong param_1)

{
  longlong lVar1;
  
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))();
  lVar1 = (longlong)(*(double *)(param_1 + 0x58) * 10000000.0) / 10000;
  if (0xfffffffe < lVar1) {
    lVar1 = 0xffffffff;
  }
  if (lVar1 < 1) {
    lVar1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001495054c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x20))(*(longlong **)(param_1 + 0x90),lVar1,0);
  return;
}



// FUNCTION 1495054fa FUN_1495054fa body=128 status=ok
// SIG undefined FUN_1495054fa(void)

ulonglong FUN_1495054fa(longlong param_1,uint *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = *(ulonglong *)(param_2 + 4);
  if ((((uVar2 == *(ulonglong *)(param_1 + 0x78)) &&
       (uVar2 = (ulonglong)*param_2, *param_2 == *(uint *)(param_1 + 0x68))) &&
      (uVar2 = (ulonglong)*(uint *)(param_1 + 0x6c), param_2[1] == *(uint *)(param_1 + 0x6c))) &&
     ((uVar2 = (ulonglong)*(uint *)(param_1 + 0x70), param_2[2] == *(uint *)(param_1 + 0x70) &&
      (uVar2 = (ulonglong)*(uint *)(param_1 + 0x74), param_2[3] == *(uint *)(param_1 + 0x74))))) {
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x88) = 1;
    uVar2 = (ulonglong)uVar1;
    UNLOCK();
    if (*(longlong *)(param_1 + 0x80) != 0) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x2b0))
                        (*(longlong **)(param_1 + 0x60),(undefined8 *)(param_1 + 0x68),0);
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return uVar2;
}



// FUNCTION 14950557a FUN_14950557a body=249 status=ok
// SIG undefined FUN_14950557a(void)

void FUN_14950557a(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  longlong local_d0;
  undefined8 local_c0;
  _RTL_CRITICAL_SECTION local_b8;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x44);
  local_c0 = 0;
  plVar1 = *(longlong **)(param_1 + 0x60);
  FUN_149505674(local_78,param_1);
  local_88 = 0;
  local_b8.SpinCount = 0;
  uStack_90 = 0;
  local_b8.OwningThread = (HANDLE)0x0;
  local_b8.LockSemaphore = (HANDLE)0x0;
  local_b8.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  local_b8.LockCount = 0;
  local_b8.RecursionCount = 0;
  InitializeCriticalSection(&local_b8);
  SetCriticalSectionSpinCount(&local_b8,4000);
  uStack_90 = 0;
  local_88 = local_88 & 0xffffffff00000000;
  local_d8 = &local_c0;
  local_d0 = param_1 + 0x80;
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1 + 0x68,&local_b8,local_78);
  FUN_1401cb1ee(&local_b8);
  FUN_1401cb1ee(local_78);
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149505674 FUN_149505674 body=220 status=ok
// SIG undefined FUN_149505674(void)

LPCRITICAL_SECTION FUN_149505674(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bd356f0;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14bd35680;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  FUN_14485c47a(&(p_Var1->ProcessLocksList).Blink,param_2);
  *(code **)&p_Var1->EntryCount = FUN_149505750;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 149505750 FUN_149505750 body=238 status=ok
// SIG undefined FUN_149505750(void)

void FUN_149505750(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(*(longlong *)(param_2 + 0x10) + 0x98);
  if (*(int *)(param_1 + 0x88) != 2) {
    LOCK();
    *(undefined4 *)(param_1 + 0x88) = 2;
    UNLOCK();
    LOCK();
    *(int *)(param_1 + 0xa0) = iVar1 + -1;
    UNLOCK();
  }
  iVar3 = 1;
  if (*(int *)(param_1 + 0xa0) < iVar1) {
    iVar3 = iVar1 - *(int *)(param_1 + 0xa0);
  }
  LOCK();
  *(int *)(param_1 + 0xa4) = *(int *)(param_1 + 0xa4) + iVar3;
  UNLOCK();
  LOCK();
  *(int *)(param_1 + 0xa0) = iVar1;
  UNLOCK();
  if (*(uint *)(param_1 + 0xb0) <= *(uint *)(param_1 + 0xa4)) {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
    if ((*(byte *)(param_1 + 0xac) & 1) != 0) {
      cVar2 = FUN_144a61b4f();
      if (cVar2 == '\0') {
        lVar4 = (longlong)(*(double *)(param_1 + 0xb8) * 0.5 * 10000000.0) / 10000;
        if (0xfffffffe < lVar4) {
          lVar4 = 0xffffffff;
        }
        if (lVar4 < 1) {
          lVar4 = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x00014950583b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                  (*(longlong **)(param_1 + 0x98),lVar4,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14950585e FUN_14950585e body=202 status=ok
// SIG undefined FUN_14950585e(void)

void FUN_14950585e(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)FUN_149504012();
  if (((plVar1 != (longlong *)0x0) &&
      (plVar1 = (longlong *)(**(code **)(*plVar1 + 0x28))(plVar1), plVar1 != (longlong *)0x0)) &&
     (*(char *)(param_1 + 0x120) == '\x01')) {
    uVar2 = 0;
    if ((*(longlong *)(param_1 + 0x118) != 0) && ((longlong)(int)plVar1[1] != 0)) {
      lVar4 = (longlong)(int)plVar1[1] << 3;
      uVar2 = 0;
      do {
        if (*(longlong *)(*plVar1 + uVar2 * 8) == *(longlong *)(param_1 + 0x118)) {
          if ((int)uVar2 != -1) {
            if ((int)uVar2 < 0) {
              return;
            }
            goto LAB_1495058cc;
          }
          break;
        }
        uVar2 = uVar2 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
      uVar2 = 0;
    }
LAB_1495058cc:
    if (((int)uVar2 < (int)plVar1[9]) && (lVar4 = *(longlong *)(param_1 + 0xa8), lVar4 != 0)) {
      lVar3 = (uVar2 & 0xffffffff) * 0x60 + plVar1[8];
      if (*(char *)(param_1 + 0x121) == '\x01') {
        FUN_1478c13dc(lVar4,lVar3,0,0,0);
      }
      else {
        FUN_1413d4c10(lVar4,lVar3,0,0,0);
      }
    }
  }
  return;
}



// FUNCTION 149505928 FUN_149505928 body=220 status=ok
// SIG undefined FUN_149505928(void)

undefined4 FUN_149505928(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  plVar7 = (longlong *)param_2[1];
  if (plVar7 == (longlong *)0x0) {
LAB_149505957:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) goto LAB_149505957;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
  }
  lVar9 = *param_2;
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    lVar8 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar8 = 0;
    do {
      if (iVar5 == 0) goto LAB_1495059a2;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
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
LAB_1495059a2:
  if (plVar7 == (longlong *)0x0) {
    lVar9 = 0;
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
  if (lVar9 == lVar8) {
    uVar6 = CONCAT31((int3)((*(uint *)(param_2 + 2) ^ *(uint *)(param_1 + 2)) >> 8),
                     *(int *)((longlong)param_2 + 0x1c) == *(int *)((longlong)param_1 + 0x1c) &&
                     ((int)param_2[3] == (int)param_1[3] &&
                     (*(int *)((longlong)param_2 + 0x14) == *(int *)((longlong)param_1 + 0x14) &&
                     (*(uint *)(param_2 + 2) ^ *(uint *)(param_1 + 2)) == 0)));
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 149505a04 FUN_149505a04 body=292 status=ok
// SIG undefined FUN_149505a04(void)

void FUN_149505a04(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x40) == 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x40) = 1;
    UNLOCK();
    uVar6 = FUN_1405d8a54(0);
    *(undefined8 *)(param_1 + 0x48) = uVar6;
    local_50 = 0;
    local_58 = 0xffffffffffffffff;
    plVar7 = (longlong *)FUN_1411b1052(param_1,L"LiveLinkHeartbeatEmitter",0,0);
    plVar5 = *(longlong **)(param_1 + 0x50);
    if ((plVar5 != plVar7) && (*(longlong **)(param_1 + 0x50) = plVar7, plVar5 != (longlong *)0x0))
    {
      (**(code **)(*plVar5 + 0x30))(plVar5,1);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  uVar6 = *param_3;
  lVar3 = param_3[1];
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  iVar2 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar2 + 1U) {
    FUN_14951c36e((longlong *)(param_1 + 0x30),iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x30);
  lVar8 = (longlong)iVar2 * 0x20;
  *(undefined8 *)(lVar4 + lVar8) = uVar6;
  *(longlong *)(lVar4 + 8 + lVar8) = lVar3;
  puVar1 = (undefined4 *)(lVar4 + 0x10 + lVar8);
  *puVar1 = local_48;
  puVar1[1] = uStack_44;
  puVar1[2] = uStack_40;
  puVar1[3] = uStack_3c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000149505aad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149505b2a FUN_149505b2a body=166 status=ok
// SIG undefined FUN_149505b2a(void)

void FUN_149505b2a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  local_50 = *param_3;
  local_48 = (longlong *)param_3[1];
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_48 + 0xc) = *(int *)((longlong)local_48 + 0xc) + 1;
    UNLOCK();
  }
  local_40 = *param_2;
  uStack_3c = param_2[1];
  uStack_38 = param_2[2];
  uStack_34 = param_2[3];
  local_30 = &local_50;
  FUN_14951c3f4(param_1 + 0x30);
  if (local_48 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149505bd2 FUN_149505bd2 body=266 status=ok
// SIG undefined FUN_149505bd2(void)

undefined8 FUN_149505bd2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    pcVar9 = LeaveCriticalSection_exref;
    do {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x20))
                (*(longlong **)(param_1 + 0x48),(longlong)*(float *)(param_1 + 0x44),0);
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
      if ((*(int *)(param_1 + 0x40) != 0) && ((longlong)*(int *)(param_1 + 0x38) != 0)) {
        plVar8 = *(longlong **)(param_1 + 0x30);
        plVar7 = plVar8 + (longlong)*(int *)(param_1 + 0x38) * 4;
        do {
          plVar3 = (longlong *)plVar8[1];
          if (plVar3 != (longlong *)0x0) {
            iVar6 = (int)plVar3[1];
            do {
              if (iVar6 == 0) goto LAB_149505c7f;
              LOCK();
              iVar5 = (int)plVar3[1];
              bVar10 = iVar6 == iVar5;
              if (bVar10) {
                *(int *)(plVar3 + 1) = iVar6 + 1;
                iVar5 = iVar6;
              }
              iVar6 = iVar5;
              UNLOCK();
            } while (!bVar10);
            lVar4 = *plVar8;
            if (lVar4 != 0) {
              FUN_14001cc68(1,0);
              pcVar9 = LeaveCriticalSection_exref;
              FUN_149505cdc(lVar4);
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
LAB_149505c7f:
          plVar8 = plVar8 + 4;
        } while (plVar8 != plVar7);
      }
      (*pcVar9)((LPCRITICAL_SECTION)(param_1 + 8));
    } while (*(int *)(param_1 + 0x40) != 0);
  }
  return 0;
}



// FUNCTION 149505cdc FUN_149505cdc body=352 status=ok
// SIG undefined FUN_149505cdc(void)

void FUN_149505cdc(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *_Src;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  void **local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0x2bca2875f4373fff;
  local_40 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 1;
  FUN_14706f770(&local_68,0);
  _Src = local_68;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *local_68 = *param_3;
  local_68[1] = uVar3;
  local_68[2] = uVar4;
  local_68[3] = uVar5;
  local_50 = (void *)0x0;
  lVar8 = (longlong)(int)uStack_60;
  local_48 = (int)uStack_60;
  if (lVar8 == 0) {
    local_44 = 0;
  }
  else {
    FUN_14707042c(&local_50,uStack_60 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar8 << 4);
  }
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  uVar7 = FUN_14673d0c8();
  local_80 = &local_38;
  local_88 = &local_40;
  local_90 = &local_50;
  local_98 = &local_78;
  FUN_147aaba9a(param_1,param_2,uVar7,0);
  plVar6 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149505e3e FUN_149505e3e body=135 status=ok
// SIG undefined FUN_149505e3e(void)

void FUN_149505e3e(longlong param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    LOCK();
    *(undefined4 *)(param_1 + 0x40) = 0;
    UNLOCK();
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    FUN_145d1947b(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_14951c526(param_1 + 0x30);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
    }
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))();
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_14018802a();
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
  }
  return;
}



// FUNCTION 149505ec6 FUN_149505ec6 body=105 status=ok
// SIG undefined FUN_149505ec6(void)

undefined4 *
FUN_149505ec6(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  lVar2 = FUN_149505f30(param_1,param_3,param_4);
  if (lVar2 == 0) {
    uVar1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = **(undefined8 **)(lVar2 + 0x20);
    uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + 0x20) + 8);
  }
  *param_2 = uVar1;
  *(undefined8 *)(param_2 + 2) = uVar3;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return param_2;
}



// FUNCTION 149505f30 FUN_149505f30 body=85 status=ok
// SIG undefined FUN_149505f30(void)

longlong * FUN_149505f30(longlong param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x40);
    lVar2 = (longlong)*(int *)(param_1 + 0x48) << 6;
    do {
      if ((((*plVar1 == param_2) && (plVar1[3] == *(longlong *)(param_3 + 4))) &&
          ((int)plVar1[1] == *param_3)) &&
         (((*(int *)((longlong)plVar1 + 0xc) == param_3[1] && ((int)plVar1[2] == param_3[2])) &&
          (*(int *)((longlong)plVar1 + 0x14) == param_3[3])))) {
        return plVar1;
      }
      plVar1 = plVar1 + 8;
      lVar2 = lVar2 + -0x40;
    } while (lVar2 != 0);
  }
  return (longlong *)0x0;
}



// FUNCTION 149505faa FUN_149505faa body=85 status=ok
// SIG undefined FUN_149505faa(void)

longlong * FUN_149505faa(longlong param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x40);
    lVar2 = (longlong)*(int *)(param_1 + 0x48) << 6;
    do {
      if ((((*plVar1 == param_2) && (plVar1[3] == *(longlong *)(param_3 + 4))) &&
          ((int)plVar1[1] == *param_3)) &&
         (((*(int *)((longlong)plVar1 + 0xc) == param_3[1] && ((int)plVar1[2] == param_3[2])) &&
          (*(int *)((longlong)plVar1 + 0x14) == param_3[3])))) {
        return plVar1;
      }
      plVar1 = plVar1 + 8;
      lVar2 = lVar2 + -0x40;
    } while (lVar2 != 0);
  }
  return (longlong *)0x0;
}



// FUNCTION 149506000 FUN_149506000 body=359 status=ok
// SIG undefined FUN_149506000(void)

void FUN_149506000(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if ((((*(int *)(param_2 + 0x20) == *(int *)(param_1 + 0xc)) &&
       (*(int *)(param_2 + 0x24) == *(int *)(param_1 + 0x10))) &&
      (*(int *)(param_2 + 0x28) == *(int *)(param_1 + 0x14))) &&
     (*(int *)(param_2 + 0x2c) == *(int *)(param_1 + 0x18))) {
    local_49 = 1;
    local_58 = FUN_1495062fd(*(undefined8 *)(param_2 + 0x38),param_3);
    uVar5 = (*(code *)**(undefined8 **)*param_3)();
    uVar6 = (**(code **)(*(longlong *)*param_3 + 0x48))();
    plVar7 = (longlong *)FUN_14001cc68(0xa0,0x10);
    local_70 = &local_49;
    local_78 = &local_58;
    local_68 = uVar5;
    FUN_14951c79e(plVar7,uVar6,param_2,param_2 + 0x10);
    iVar3 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x3c) < iVar3 + 1U) {
      FUN_14951c9ce((longlong *)(param_1 + 0x30),iVar3);
    }
    lVar4 = *(longlong *)(param_1 + 0x30);
    *(longlong **)(lVar4 + (longlong)iVar3 * 0x10) = plVar7 + 2;
    *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
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
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000149506079. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149506168 FUN_149506168 body=182 status=ok
// SIG undefined FUN_149506168(void)

void FUN_149506168(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = 0x2bca2875f4373fff;
  local_88 = 0;
  uVar1 = FUN_14585f882();
  local_a8 = &local_78;
  local_58 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_50 = 0x8000000000;
  local_48 = 0xffffffff;
  local_a0 = &local_88;
  local_98 = &local_80;
  FUN_147e0609a(param_1,param_2,uVar1,2);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149506230 FUN_149506230 body=100 status=ok
// SIG undefined FUN_149506230(void)

void FUN_149506230(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  LOCK();
  piVar1 = (int *)(param_1 + 8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x3c);
    FUN_145d195a5(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
    if ((iVar2 < 0) && (*(int *)(param_1 + 0x3c) != 0)) {
      FUN_14951c6ee(param_1 + 0x30);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014950625f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return;
}



// FUNCTION 149506294 FUN_149506294 body=105 status=ok
// SIG undefined FUN_149506294(void)

undefined8 * FUN_149506294(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_14951c71e(param_2,iVar1);
    FUN_14951c776(*param_2,uVar2,iVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  return param_2;
}



// FUNCTION 1495062fd FUN_1495062fd body=179 status=ok
// SIG undefined FUN_1495062fd(void)

void FUN_1495062fd(double param_1,undefined8 *param_2)

{
  double dVar1;
  longlong *plVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140212f8e(&local_50);
  QueryPerformanceCounter(&local_48);
  dVar1 = (double)local_48.QuadPart * DAT_14c83f420;
  plVar2 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x68))();
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(~-(ulonglong)(param_1 < 0.0) &
                (ulonglong)
                ((double)(local_50 - *plVar2) / -10000000.0 + ((dVar1 + 16777216.0) - param_1)));
}



// FUNCTION 1495063b8 FUN_1495063b8 body=416 status=ok
// SIG undefined FUN_1495063b8(void)

void FUN_1495063b8(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined8 *puVar5;
  undefined1 auStack_f8 [40];
  undefined **local_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_80 = 1;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar5 = &local_b8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_d0 = &PTR_FUN_14bc18ce0;
  local_c8 = 0;
  plStack_c0 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  pppuVar4 = *(undefined ****)(param_2 + 0x38);
  if (*(undefined ****)(param_2 + 0x38) == (undefined ***)0x0) {
    pppuVar4 = &local_d0;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14950655a(puVar5,pppuVar4);
  plVar3 = plStack_c0;
  local_d0 = &PTR_FUN_14bc18ce0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_14950680e(&local_b8);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950655a FUN_14950655a body=691 status=ok
// SIG undefined FUN_14950655a(void)

void FUN_14950655a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong **pplVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong *local_98;
  undefined8 uStack_90;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar3 = (longlong *)FUN_1448c2e86();
  iVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,DAT_14cc0b540);
  if (iVar2 < 1) {
    pplVar7 = &local_98;
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
  }
  else {
    lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,DAT_14cc0b540,0);
    FUN_140009b9a(&local_50,param_1 + 0x20);
    FUN_140009b9a(&local_60,param_1 + 0x10);
    plVar5 = (longlong *)FUN_14001cc68(0xc0,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14bd359c0;
    plVar3 = plVar5 + 2;
    local_a8 = *(undefined8 *)(param_1 + 0x30);
    FUN_1495072d2(plVar3,&local_60,&local_50,param_1);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar5 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
    }
    if ((longlong *)CONCAT44(iStack_4c,local_50) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(iStack_4c,local_50) + 0x10))();
    }
    plVar9 = (longlong *)(lVar4 + -8);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_70 = plVar3;
    local_68 = plVar5;
    (**(code **)(*plVar9 + 200))(plVar9,&local_50,&local_70);
    if (((iStack_4c != 0 || local_50 != 0) || local_48 != 0) || local_44 != 0) {
      lVar4 = (**(code **)(*plVar9 + 0x208))(plVar9,&local_50);
      if (lVar4 != 0) {
        if (*(int *)(param_1 + 0x18) == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        else {
          puVar8 = *(undefined2 **)(param_1 + 0x10);
        }
        FUN_140002266(&local_60,L"Name=\"%s\"",puVar8);
        if ((longlong **)(lVar4 + 0x90) == &local_60) {
          if (local_60 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(lVar4 + 0x90) != 0) {
            FUN_1400020a8();
          }
          *(longlong **)(lVar4 + 0x90) = local_60;
          local_60 = (longlong *)0x0;
          *(undefined4 *)(lVar4 + 0x98) = local_58;
          *(undefined4 *)(lVar4 + 0x9c) = local_54;
        }
        lVar6 = FUN_145ba82ac();
        if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar6);
        }
        *(longlong *)(lVar4 + 0xa0) = lVar6;
      }
    }
    local_80 = plVar3;
    local_78 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      FUN_149506ff2(param_2,&local_80);
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
      goto LAB_1495066f2;
    }
    pplVar7 = &local_80;
  }
  FUN_149506ff2(param_2,pplVar7);
LAB_1495066f2:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950680e FUN_14950680e body=90 status=ok
// SIG undefined FUN_14950680e(void)

void FUN_14950680e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149506868 FUN_149506868 body=45 status=ok
// SIG undefined FUN_149506868(void)

void FUN_149506868(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14950706e(DAT_14c951640);
  *param_3 = uVar1;
  return;
}



// FUNCTION 149506896 FUN_149506896 body=521 status=ok
// SIG undefined FUN_149506896(void)

void FUN_149506896(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong local_68;
  ulonglong uStack_60;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong lStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_50 = 0xffffffffffffffff;
  uStack_48 = 0;
  lStack_40 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_68 = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  uVar1 = local_54;
  plVar2 = &local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = (undefined4)local_50;
  uStack_84 = local_50._4_4_;
  uStack_80 = (undefined4)uStack_48;
  uStack_7c = uStack_48._4_4_;
  local_78 = lStack_40;
  if ((lStack_40 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_98 = plVar2;
  FUN_14453bd98(param_1,local_38,&local_88,uVar1);
  FUN_145c343ad(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149506aa4 FUN_149506aa4 body=390 status=ok
// SIG undefined FUN_149506aa4(void)

void FUN_149506aa4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    FUN_1446f470e(local_88,L"LiveLinkMessageBusSource",1);
    FUN_1458bfb2e(&local_80,local_88);
    FUN_149506cc6(&local_80,param_1);
    FUN_1458bfc2e(&local_80,&local_38);
    plVar1 = local_30;
    if ((undefined8 *)(param_1 + 0x28) != &local_38) {
      *(undefined8 *)(param_1 + 0x28) = local_38;
      local_38 = 0;
      plVar4 = *(longlong **)(param_1 + 0x30);
      if (local_30 != plVar4) {
        local_30 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x30) = plVar1;
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
    plVar1 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    FUN_1458bf708(&local_80);
  }
  iVar3 = *(int *)(param_1 + 0x44);
  FUN_145c343ad(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((iVar3 < 0) && (*(int *)(param_1 + 0x44) != 0)) {
    FUN_14951cdbc(param_1 + 0x38);
  }
  FUN_1412e3d1e(&local_80);
  *(undefined4 *)(param_1 + 0x48) = local_80;
  *(undefined4 *)(param_1 + 0x4c) = uStack_7c;
  *(undefined4 *)(param_1 + 0x50) = uStack_78;
  *(undefined4 *)(param_1 + 0x54) = uStack_74;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puVar9 = (undefined4 *)FUN_14001cc68(0x14,0);
  uVar6 = *(undefined4 *)(param_1 + 0x4c);
  uVar7 = *(undefined4 *)(param_1 + 0x50);
  uVar8 = *(undefined4 *)(param_1 + 0x54);
  *puVar9 = *(undefined4 *)(param_1 + 0x48);
  puVar9[1] = uVar6;
  puVar9[2] = uVar7;
  puVar9[3] = uVar8;
  puVar9[4] = 2;
  FUN_149506168(uVar5,puVar9);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149506c2c FUN_149506c2c body=58 status=ok
// SIG undefined FUN_149506c2c(void)

void FUN_149506c2c(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  FUN_149506c66(param_2,param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000149506c5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 149506c66 FUN_149506c66 body=95 status=ok
// SIG undefined FUN_149506c66(void)

undefined8 * FUN_149506c66(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c343ad(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14951cb10(param_1,iVar1);
      FUN_14951cb83(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149506cc6 FUN_149506cc6 body=164 status=ok
// SIG undefined FUN_149506cc6(void)

longlong FUN_149506cc6(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14bd35988;
  puVar3[1] = param_2;
  puVar3[2] = FUN_149506d6a;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14bd359a0;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 149506d6a FUN_149506d6a body=390 status=ok
// SIG undefined FUN_149506d6a(void)

void FUN_149506d6a(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((((*(int *)(param_2 + 0x20) == *(int *)(param_1 + 0x48)) &&
       (*(int *)(param_2 + 0x24) == *(int *)(param_1 + 0x4c))) &&
      (*(int *)(param_2 + 0x28) == *(int *)(param_1 + 0x50))) &&
     (*(int *)(param_2 + 0x2c) == *(int *)(param_1 + 0x54))) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
    iVar1 = *(int *)(param_2 + 0x30);
    uVar2 = FUN_1495062fd((int)*(undefined8 *)(param_2 + 0x38),param_3);
    uVar3 = (**(code **)(*(longlong *)*param_3 + 0x48))();
    local_f0 = 1 < iVar1;
    local_f8 = uVar2;
    FUN_149506ef2(&local_e0,uVar3,param_2,param_2 + 0x10);
    iVar1 = *(int *)(param_1 + 0x40);
    *(uint *)(param_1 + 0x40) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
      FUN_14951cdec((longlong *)(param_1 + 0x38),iVar1);
    }
    puVar4 = (undefined4 *)((longlong)iVar1 * 0x90 + *(longlong *)(param_1 + 0x38));
    *puVar4 = local_e0;
    puVar4[1] = uStack_dc;
    puVar4[2] = uStack_d8;
    puVar4[3] = uStack_d4;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 4) = local_d0;
    local_d0 = 0;
    puVar4[6] = (undefined4)local_c8;
    puVar4[7] = local_c8._4_4_;
    local_c8 = 0;
    *(undefined8 *)(puVar4 + 8) = 0;
    *(undefined8 *)(puVar4 + 8) = local_c0;
    local_c0 = 0;
    puVar4[10] = (undefined4)local_b8;
    puVar4[0xb] = local_b8._4_4_;
    local_b8 = 0;
    *(undefined1 *)(puVar4 + 0xe) = local_a8;
    *(undefined8 *)(puVar4 + 0xc) = local_b0;
    FUN_140d69258();
    FUN_14950680e(&local_e0);
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149506ef2 FUN_149506ef2 body=255 status=ok
// SIG undefined FUN_149506ef2(void)

undefined4 *
FUN_149506ef2(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,undefined1 param_6)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_4 + 1);
  pvVar2 = (void *)*param_4;
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0xc) = param_5;
  *(undefined1 *)(param_1 + 0xe) = param_6;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  param_1[0x1b] = 0x80;
  param_1[0x1c] = 0xffffffff;
  return param_1;
}



// FUNCTION 149506ff2 FUN_149506ff2 body=124 status=ok
// SIG undefined FUN_149506ff2(void)

void FUN_149506ff2(longlong param_1,undefined8 *param_2)

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
  plVar5 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(longlong *)(param_1 + 0x10) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x000149507062. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14950706e FUN_14950706e body=148 status=ok
// SIG undefined FUN_14950706e(void)

undefined8 FUN_14950706e(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145988c54();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149507104 FUN_149507104 body=152 status=ok
// SIG undefined FUN_149507104(void)

undefined8 FUN_149507104(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"ActiveStatus";
  local_28 = 0xc;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"LiveLinkMessageBusSource";
  local_28 = 0x18;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_1,local_38,local_34,L"Active");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950719e FUN_14950719e body=152 status=ok
// SIG undefined FUN_14950719e(void)

undefined8 FUN_14950719e(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"InvalidConnection";
  local_28 = 0x11;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"LiveLinkMessageBusSource";
  local_28 = 0x18;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_1,local_38,local_34,L"Waiting for connection");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149507238 FUN_149507238 body=152 status=ok
// SIG undefined FUN_149507238(void)

undefined8 FUN_149507238(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"TimeoutStatus";
  local_28 = 0xd;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"LiveLinkMessageBusSource";
  local_28 = 0x18;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_1,local_38,local_34,L"Not responding");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495072d2 FUN_1495072d2 body=177 status=ok
// SIG undefined FUN_1495072d2(void)

undefined8 *
FUN_1495072d2(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = &PTR_FUN_14bd2ec50;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  uVar4 = param_4[3];
  *(undefined4 *)(param_1 + 3) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar4;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  plVar1 = (longlong *)*param_2;
  param_1[0xb] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0xc) = (int)param_2[1];
  plVar1 = (longlong *)*param_3;
  param_1[0xd] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0xe) = (int)param_3[1];
  param_1[0xf] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x10),4000);
  param_1[0x15] = param_5;
  return param_1;
}



// FUNCTION 149507386 FUN_149507386 body=621 status=ok
// SIG undefined FUN_149507386(void)

void FUN_149507386(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  LARGE_INTEGER LVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  LARGE_INTEGER local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[6] = param_2;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)(param_1 + 7) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 8) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar6;
  LOCK();
  *(undefined4 *)(param_1 + 5) = 1;
  UNLOCK();
  FUN_1492dc228(&local_58);
  LVar7 = local_58;
  lVar13 = (longlong)(int)local_50;
  if (lVar13 != 0) {
    lVar12 = 0;
    do {
      lVar11 = *(longlong *)(LVar7.QuadPart + lVar12);
      if ((((lVar11 == 0) || (lVar8 = FUN_1411f0380(), lVar8 == 0)) ||
          (*(int *)(lVar11 + 0x38) < *(int *)(lVar8 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
          lVar8 + 0x30)) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = *(longlong **)(LVar7.QuadPart + lVar12);
      }
      lVar11 = plVar10[0x22];
      if (lVar11 == 0) {
        (**(code **)(*plVar10 + 1000))(plVar10);
        lVar11 = plVar10[0x22];
      }
      local_60 = 0;
      FUN_14485c47a(&local_60,lVar11);
      iVar2 = (int)param_1[10];
      *(uint *)(param_1 + 10) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x54) < iVar2 + 1U) {
        FUN_14951cf26(param_1 + 9,iVar2);
      }
      *(undefined8 *)(param_1[9] + (longlong)iVar2 * 8) = local_60;
      lVar12 = lVar12 + 8;
    } while (lVar13 * 8 != lVar12);
  }
  if (local_58.QuadPart != 0) {
    FUN_1400020a8(local_58.QuadPart);
  }
  FUN_1495075f4(param_1,&local_58);
  plVar10 = local_50;
  if ((LARGE_INTEGER *)(param_1 + 1) != &local_58) {
    ((LARGE_INTEGER *)(param_1 + 1))->QuadPart = (LONGLONG)local_58;
    local_58.QuadPart = 0;
    plVar3 = (longlong *)param_1[2];
    if (local_50 != plVar3) {
      local_50 = (longlong *)0x0;
      param_1[2] = (longlong)plVar10;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar10 = plVar3 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
    }
  }
  plVar10 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (((*(int *)((longlong)param_1 + 0x1c) == 0 && (int)param_1[3] == 0) && (int)param_1[4] == 0) &&
      *(int *)((longlong)param_1 + 0x24) == 0) {
    FUN_1446ddc76(&local_58,"LiveLink",1);
    LVar7 = local_58;
    uVar9 = FUN_144a52528();
    plVar10 = (longlong *)FUN_14493e38c(uVar9,LVar7.QuadPart);
    uVar9 = (**(code **)(*plVar10 + 0x50))(plVar10);
    FUN_149506230(uVar9);
    LOCK();
    *(undefined4 *)(param_1 + 5) = 0;
    UNLOCK();
  }
  else {
    (**(code **)(*param_1 + 0x90))(param_1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  QueryPerformanceCounter(&local_58);
  param_1[0xf] = (longlong)((double)local_58.QuadPart * DAT_14c83f420 + 16777216.0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1495075f4 FUN_1495075f4 body=114 status=ok
// SIG undefined FUN_1495075f4(void)

undefined8 FUN_1495075f4(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68 [72];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = (**(code **)(*param_1 + 0x68))();
  FUN_1458bfb2e(local_68,uVar1);
  (**(code **)(*param_1 + 0x70))(param_1,local_68);
  FUN_1458bfc2e(local_68,param_2);
  FUN_1458bf708(local_68);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149507668 FUN_149507668 body=792 status=ok
// SIG undefined FUN_149507668(void)

void FUN_149507668(longlong *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  longlong *plVar17;
  bool bVar18;
  double dVar19;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  LARGE_INTEGER local_80 [2];
  longlong *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((*(int *)((longlong)param_1 + 0x1c) == 0 && (int)param_1[3] == 0) && (int)param_1[4] == 0) &&
      *(int *)((longlong)param_1 + 0x24) == 0) {
    FUN_1446ddc76(&local_70,"LiveLink",1);
    plVar13 = local_70;
    uVar12 = FUN_144a52528();
    plVar13 = (longlong *)FUN_14493e38c(uVar12,plVar13);
    local_b0 = (**(code **)(*plVar13 + 0x50))(plVar13);
    FUN_149506294(local_b0,&local_70);
    if ((longlong)local_68 != 0) {
      local_b8 = param_1 + 3;
      plVar17 = local_70 + (longlong)local_68 * 2;
      plVar13 = local_70;
      do {
        local_98 = (undefined4)param_1[7];
        uStack_94 = *(undefined4 *)((longlong)param_1 + 0x3c);
        uStack_90 = (undefined4)param_1[8];
        uStack_8c = *(undefined4 *)((longlong)param_1 + 0x44);
        (**(code **)(*(longlong *)param_1[6] + 0x110))((longlong *)param_1[6],local_80,&local_98);
        plVar14 = (longlong *)FUN_1447a1f4a(local_80);
        iVar11 = (int)plVar14[1];
        iVar3 = *(int *)(*plVar13 + 0x18);
        if (iVar11 == iVar3) {
          bVar18 = true;
          if (1 < iVar11) {
            lVar15 = 0;
            while( true ) {
              uVar1 = *(ushort *)(*plVar14 + lVar15);
              uVar10 = (uint)uVar1;
              uVar2 = *(ushort *)(*(longlong *)(*plVar13 + 0x10) + lVar15);
              uVar16 = (uint)uVar2;
              if (uVar1 != uVar2) {
                if ((uVar2 | uVar1) < 0x80) {
                  uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                  uVar16 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                  if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14950782a;
                }
                iVar11 = uVar10 - uVar16;
                goto LAB_149507887;
              }
              if (uVar1 == 0) break;
LAB_14950782a:
              lVar15 = lVar15 + 2;
            }
            iVar11 = 0;
LAB_149507887:
            bVar18 = iVar11 == 0;
          }
        }
        else {
          bVar18 = iVar3 + iVar11 == 1;
        }
        if ((longlong *)local_80[0].QuadPart != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_80[0] + 0x10))();
        }
        if (bVar18) {
          puVar4 = (undefined4 *)*plVar13;
          uVar5 = puVar4[1];
          uVar6 = puVar4[2];
          uVar7 = puVar4[3];
          *(undefined4 *)local_b8 = *puVar4;
          *(undefined4 *)((longlong)local_b8 + 4) = uVar5;
          *(undefined4 *)(local_b8 + 1) = uVar6;
          *(undefined4 *)((longlong)local_b8 + 0xc) = uVar7;
          FUN_140009b9a(local_80,*plVar13 + 0x20);
          FUN_140008f88(param_1 + 0xd,local_80);
          if ((longlong *)local_80[0].QuadPart != (longlong *)0x0) {
            (**(code **)(*(longlong *)local_80[0] + 0x10))();
          }
          param_1[0x15] = *(longlong *)(*plVar13 + 0x30);
          LOCK();
          *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + -1;
          UNLOCK();
          (**(code **)(*param_1 + 0x90))(param_1);
          EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
          QueryPerformanceCounter(local_80);
          param_1[0xf] = (longlong)((double)local_80[0].QuadPart * DAT_14c83f420 + 16777216.0);
          LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
          break;
        }
        plVar13 = plVar13 + 2;
      } while (plVar13 != plVar17);
    }
    FUN_145d195a5(local_70,local_68);
    if (local_70 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    plVar13 = (longlong *)FUN_145988e1c();
    lVar15 = plVar13[0x22];
    if (lVar15 == 0) {
      (**(code **)(*plVar13 + 1000))(plVar13);
      lVar15 = plVar13[0x22];
    }
    dVar8 = DAT_14c866ff8;
    LOCK();
    *(uint *)(param_1 + 5) =
         (uint)(DAT_14c866ff8 - (double)param_1[0xf] < *(double *)(lVar15 + 0xa0));
    UNLOCK();
    if ((((int)param_1[5] == 0) &&
        (dVar19 = (double)(**(code **)(*param_1 + 0x88))(param_1),
        dVar19 < dVar8 - (double)param_1[0xf])) &&
       (cVar9 = (**(code **)(*param_1 + 0x30))(param_1), cVar9 != '\0')) {
      local_a8 = (undefined4)param_1[7];
      uStack_a4 = *(undefined4 *)((longlong)param_1 + 0x3c);
      uStack_a0 = (undefined4)param_1[8];
      uStack_9c = *(undefined4 *)((longlong)param_1 + 0x44);
      (**(code **)(*(longlong *)param_1[6] + 0xe0))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149507982 FUN_149507982 body=1574 status=ok
// SIG undefined FUN_149507982(void)

void FUN_149507982(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  LARGE_INTEGER LVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  longlong local_80;
  LARGE_INTEGER local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  LARGE_INTEGER local_68;
  longlong local_60 [2];
  LARGE_INTEGER local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  QueryPerformanceCounter(&local_78);
  param_1[0xf] = (longlong)((double)local_78.QuadPart * DAT_14c83f420 + 16777216.0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  plVar7 = (longlong *)*param_2;
  lVar4 = (**(code **)(*plVar7 + 0x18))(plVar7);
  if (lVar4 == 0) goto LAB_149507adb;
  uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7);
  cVar3 = FUN_144b00e3a(uVar5,0,1);
  if (cVar3 == '\0') goto LAB_149507adb;
  uVar5 = (**(code **)(*(longlong *)*param_2 + 0x20))();
  puVar6 = (undefined8 *)FUN_14479d2ce(uVar5);
  if (puVar6 == (undefined8 *)0x0) goto LAB_149507adb;
  lVar4 = FUN_14671abdc();
  if ((lVar4 == 0) || (*(int *)(puVar6 + 7) < *(int *)(lVar4 + 0x38))) {
    bVar16 = false;
  }
  else {
    bVar16 = *(longlong *)(puVar6[6] + (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30;
  }
  lVar4 = FUN_14671ab78();
  if ((lVar4 == 0) || (*(int *)(puVar6 + 7) < *(int *)(lVar4 + 0x38))) {
    bVar17 = false;
  }
  else {
    bVar17 = *(longlong *)(puVar6[6] + (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30;
  }
  if (!(bool)(bVar16 | bVar17)) goto LAB_149507adb;
  plVar7 = (longlong *)(*(code *)**(undefined8 **)*param_2)();
  if ((int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)) {
    uVar1 = (uint)((ulonglong)DAT_14cc1de1c >> 0x10);
    uVar14 = (uint)DAT_14cc1de1c & 0xffff;
    plVar12 = plVar7 + 7;
    if ((longlong *)plVar7[8] != (longlong *)0x0) {
      plVar12 = (longlong *)plVar7[8];
    }
    iVar11 = *(int *)((longlong)plVar12 +
                     (ulonglong)
                     ((int)plVar7[9] - 1U &
                     (int)((ulonglong)DAT_14cc1de1c >> 0x20) +
                     ((uint)DAT_14cc1de1c << 0x10 | uVar14) + (uVar1 << 0x13 | uVar1 & 0xffff) +
                     (uVar14 >> 4)) * 4);
    if (iVar11 != -1) {
      do {
        lVar4 = *plVar7 + (longlong)iVar11 * 0x20;
        if (*(longlong *)(*plVar7 + (longlong)iVar11 * 0x20) == DAT_14cc1de1c) {
          if ((undefined8 *)(lVar4 + 8) != (undefined8 *)0x0 && lVar4 != 0) {
            if (*(int *)(lVar4 + 0x10) == 0) {
              puVar13 = &DAT_149dfb77a;
            }
            else {
              puVar13 = *(undefined2 **)(lVar4 + 8);
            }
            FUN_1446f470e(&local_78,puVar13,1);
            LVar2 = local_78;
            local_50.s = local_78.s;
            if ((longlong *)local_78.QuadPart != (longlong *)0x0) {
              if (!bVar16) {
                uStack_70 = (undefined4)param_1[8];
                uStack_6c = *(undefined4 *)((longlong)param_1 + 0x44);
                local_68.s = local_78.s;
                local_a8 = puVar6;
                local_78 = *(LARGE_INTEGER *)(param_1 + 7);
                (**(code **)(*param_1 + 0x80))(param_1,LVar2.QuadPart,&local_78,param_2);
                goto LAB_149507adb;
              }
              plVar7 = (longlong *)(*(code *)**(undefined8 **)*param_2)();
              local_88.s = LVar2.s;
              if ((int)plVar7[1] == *(int *)((longlong)plVar7 + 0x34)) goto LAB_149507c20;
              uVar1 = (uint)((ulonglong)DAT_14cc1de24 >> 0x10);
              uVar14 = (uint)DAT_14cc1de24 & 0xffff;
              plVar12 = plVar7 + 7;
              if ((longlong *)plVar7[8] != (longlong *)0x0) {
                plVar12 = (longlong *)plVar7[8];
              }
              iVar11 = *(int *)((longlong)plVar12 +
                               (ulonglong)
                               ((int)plVar7[9] - 1U &
                               (int)((ulonglong)DAT_14cc1de24 >> 0x20) +
                               ((uint)DAT_14cc1de24 << 0x10 | uVar14) +
                               (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar14 >> 4)) * 4);
              if (iVar11 == -1) goto LAB_149507c20;
              local_90.QuadPart = 0;
              goto LAB_149507e05;
            }
          }
          break;
        }
        iVar11 = *(int *)(lVar4 + 0x18);
      } while (iVar11 != -1);
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1e250) && (FUN_144b3d300(&DAT_14cc1e250), DAT_14cc1e250 == -1)) {
    FUN_1446ddc76(&DAT_14cc1e248,"LiveLinkMessageBusSource_InvalidSubject",1);
    _Init_thread_footer(&DAT_14cc1e250);
  }
  (**(code **)(*param_1 + 0x40))(param_1,&local_78);
  FUN_1447a1f4a(&local_78);
  goto LAB_149507ad0;
  while (iVar11 = *(int *)(lVar4 + 0x18), iVar11 != -1) {
LAB_149507e05:
    lVar4 = *plVar7 + (longlong)iVar11 * 0x20;
    if (*(longlong *)(*plVar7 + (longlong)iVar11 * 0x20) == DAT_14cc1de24) {
      if ((undefined8 *)(lVar4 + 8) == (undefined8 *)0x0 || lVar4 == 0) {
LAB_149507c20:
        local_90.QuadPart = 0;
      }
      else {
        if (*(int *)(lVar4 + 0x10) == 0) {
          puVar13 = &DAT_149dfb77a;
        }
        else {
          puVar13 = *(undefined2 **)(lVar4 + 8);
        }
        FUN_1446f470e(&local_78,puVar13,1);
        local_90.s = local_78.s;
      }
      break;
    }
  }
  lVar4 = param_1[10];
  if ((longlong)(int)lVar4 != 0) {
    lVar10 = param_1[9];
    lVar15 = 0;
    do {
      local_78 = *(LARGE_INTEGER *)(lVar10 + lVar15);
      plVar7 = (longlong *)FUN_14479d2ce(&local_78);
      if (plVar7 != (longlong *)0x0) {
        if ((longlong *)local_90.QuadPart == (longlong *)0x0) {
          puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x2a0))(plVar7);
          if (puVar9 == puVar6) goto LAB_149507e6a;
        }
        else if (((longlong *)local_90.QuadPart == *(longlong **)(plVar7[2] + 0x18)) &&
                ((((lVar8 = (**(code **)(*plVar7 + 0x2a0))(plVar7), lVar8 != 0 &&
                   (*(int *)(lVar8 + 0x38) <= *(int *)(puVar6 + 7))) &&
                  (*(longlong *)(puVar6[6] + (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30))
                 || (((bVar17 && (lVar8 = (**(code **)(*plVar7 + 0x2a8))(plVar7), lVar8 != 0)) &&
                     ((*(int *)(lVar8 + 0x38) <= *(int *)(puVar6 + 7) &&
                      (*(longlong *)(puVar6[6] + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                       lVar8 + 0x30)))))))) {
LAB_149507e6a:
          lVar4 = plVar7[2];
          if ((lVar4 == 0) || (DAT_14c950c29 == '\0')) {
            if (lVar4 == 0) break;
          }
          else {
            FUN_1456cec3c(lVar4);
          }
          lVar10 = FUN_1411f0380();
          if (((lVar10 != 0) && (*(int *)(lVar10 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
              lVar10 + 0x30)) {
            local_78 = *(LARGE_INTEGER *)(param_1 + 7);
            uStack_70 = (undefined4)param_1[8];
            uStack_6c = *(undefined4 *)((longlong)param_1 + 0x44);
            local_68.s = local_88.s;
            local_80 = lVar4;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar4);
            }
            local_a8 = param_2;
            local_a0 = puVar6;
            (**(code **)(*param_1 + 0x78))(param_1,local_88.QuadPart,&local_80,&local_78);
            goto LAB_149507adb;
          }
          break;
        }
      }
      lVar15 = lVar15 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar15);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc1e25c) && (FUN_144b3d300(&DAT_14cc1e25c), DAT_14cc1e25c == -1)) {
    FUN_1446ddc76(&DAT_14cc1e254,"LiveLinkMessageBusSource_InvalidRole",1);
    _Init_thread_footer(&DAT_14cc1e25c);
  }
  (**(code **)(*param_1 + 0x40))(param_1,&local_78);
  FUN_1447a1f4a(&local_78);
  FUN_1400021e4(&local_50,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
LAB_149507ad0:
  if ((longlong *)local_78.QuadPart != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_78 + 0x10))();
  }
LAB_149507adb:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149507fc4 FUN_149507fc4 body=66 status=ok
// SIG undefined FUN_149507fc4(void)

undefined8 FUN_149507fc4(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  if (((*(int *)((longlong)param_1 + 0x1c) == 0 && (int)param_1[3] == 0) && (int)param_1[4] == 0) &&
      *(int *)((longlong)param_1 + 0x24) == 0) {
    FUN_14950719e(param_2);
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x28))();
    if (cVar1 == '\0') {
      FUN_149507238(param_2);
    }
    else {
      FUN_149507104();
    }
  }
  return param_2;
}



// FUNCTION 149508006 FUN_149508006 body=49 status=ok
// SIG undefined FUN_149508006(void)

longlong * FUN_149508006(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145ba8396();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 149508038 FUN_149508038 body=126 status=ok
// SIG undefined FUN_149508038(void)

void FUN_149508038(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"LiveLink",1);
  uVar1 = FUN_144a52528();
  plVar2 = (longlong *)FUN_14493e38c(uVar1,local_20);
  uVar1 = (**(code **)(*plVar2 + 0x48))(plVar2);
  FUN_149505a04(uVar1,param_1 + 0x18,param_1 + 8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495080b8 FUN_1495080b8 body=235 status=ok
// SIG undefined FUN_1495080b8(void)

void FUN_1495080b8(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446e6d0e(local_68,param_6);
  uVar2 = (**(code **)(*(longlong *)*param_5 + 0x18))();
  FUN_1495081a4(local_68,param_6,uVar2);
  local_40 = *param_3;
  if ((local_40 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_40);
  }
  plVar1 = *(longlong **)(param_1 + 0x30);
  if ((local_40 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(local_40);
  }
  (**(code **)(*plVar1 + 0x130))(plVar1,param_4,&local_40,local_68);
  FUN_1448eac94(local_68);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495081a4 FUN_1495081a4 body=135 status=ok
// SIG undefined FUN_1495081a4(void)

void FUN_1495081a4(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_14485c47a(&local_28);
  lVar1 = local_28;
  (**(code **)(*param_1 + 0x40))(param_1);
  param_1[1] = lVar1;
  (**(code **)*param_1)(param_1);
  if (param_3 != 0) {
    FUN_1492dc406(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149508248 FUN_149508248 body=219 status=ok
// SIG undefined FUN_149508248(void)

void FUN_149508248(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double dVar4;
  undefined1 auStack_98 [40];
  undefined1 local_70 [16];
  double *local_60;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446e6d0e(local_70,param_5);
  pdVar3 = (double *)(**(code **)(*(longlong *)*param_4 + 0x18))();
  FUN_1494f6cb8(local_70,param_5,pdVar3);
  dVar1 = *pdVar3;
  dVar2 = pdVar3[1];
  QueryPerformanceCounter(&local_48);
  dVar4 = (double)local_48.QuadPart * DAT_14c83f420;
  *local_60 = dVar1 + dVar2;
  local_60[1] = (dVar4 + 16777216.0) - (dVar1 + dVar2);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x138))
            (*(longlong **)(param_1 + 0x30),param_3,local_70);
  FUN_1448eac94(local_70);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149508324 FUN_149508324 body=58 status=ok
// SIG undefined FUN_149508324(void)

undefined8 FUN_149508324(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_145988e1c();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  return *(undefined8 *)(lVar2 + 0xa8);
}



// FUNCTION 14950835e FUN_14950835e body=120 status=ok
// SIG undefined FUN_14950835e(void)

void FUN_14950835e(longlong param_1)

{
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  QueryPerformanceCounter(&local_28);
  *(double *)(param_1 + 0x78) = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495083d8 FUN_1495083d8 body=166 status=ok
// SIG undefined FUN_1495083d8(void)

void FUN_1495083d8(longlong param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  QueryPerformanceCounter(&local_48);
  *(double *)(param_1 + 0x78) = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  if (*param_2 != 0) {
    local_48 = *(LARGE_INTEGER *)(param_1 + 0x38);
    uStack_40 = *(undefined8 *)(param_1 + 0x40);
    local_38 = *param_2;
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x158))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149508480 FUN_149508480 body=59 status=ok
// SIG undefined FUN_149508480(void)

undefined4 FUN_149508480(longlong param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_14001cc68(4,0);
  *puVar2 = 2;
  FUN_1495084bc(param_1,puVar2);
  FUN_149508038(param_1);
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = 1;
  UNLOCK();
  return uVar1;
}



// FUNCTION 1495084bc FUN_1495084bc body=63 status=ok
// SIG undefined FUN_1495084bc(void)

void FUN_1495084bc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 != 0) &&
       (((*(int *)(param_1 + 0x1c) != 0 || *(int *)(param_1 + 0x18) != 0) ||
        *(int *)(param_1 + 0x20) != 0) || *(int *)(param_1 + 0x24) != 0)) &&
      (lVar1 = *(longlong *)(param_1 + 8), lVar1 != 0)) &&
     (((*(longlong *)(lVar1 + 0x38) != 0 && (*(longlong *)(lVar1 + 0x40) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar1 + 0x40) + 8))))) {
    FUN_14951cfac(lVar1,param_2,param_1 + 0x18);
    return;
  }
  return;
}



// FUNCTION 1495084fc FUN_1495084fc body=271 status=ok
// SIG undefined FUN_1495084fc(void)

undefined8 FUN_1495084fc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446ddc76(&local_20,"LiveLink",1);
  uVar6 = local_20;
  uVar3 = FUN_144a52528();
  plVar4 = (longlong *)FUN_14493e38c(uVar3,uVar6);
  lVar5 = (**(code **)(*plVar4 + 0x50))(plVar4);
  if ((*(int *)(lVar5 + 0x50) != 0) &&
     (((*(int *)(param_1 + 0x1c) == 0 && *(int *)(param_1 + 0x18) == 0) &&
      *(int *)(param_1 + 0x20) == 0) && *(int *)(param_1 + 0x24) == 0)) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + -1;
    UNLOCK();
  }
  FUN_1446ddc76(&local_20,"LiveLink",1);
  uVar6 = FUN_144a52528();
  plVar4 = (longlong *)FUN_14493e38c(uVar6,local_20);
  uVar6 = (**(code **)(*plVar4 + 0x48))(plVar4);
  FUN_149505b2a(uVar6,param_1 + 0x18,param_1 + 8);
  if (*(longlong *)(param_1 + 8) != 0) {
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x48) = 0;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950860c FUN_14950860c body=109 status=ok
// SIG undefined FUN_14950860c(void)

undefined * FUN_14950860c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc1e268) {
    FUN_144b3d300(&DAT_14cc1e268);
    if (DAT_14cc1e268 == -1) {
      FUN_1446f470e(&DAT_14cc1e260,L"LiveLinkMessageBusSource",1);
      _Init_thread_footer(&DAT_14cc1e268);
    }
  }
  return &DAT_14cc1e260;
}



// FUNCTION 14950867a FUN_14950867a body=263 status=ok
// SIG undefined FUN_14950867a(void)

void FUN_14950867a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_149508782(param_2,param_1);
  FUN_1495088c2(param_2,param_1);
  FUN_149508b26(param_2,param_1);
  FUN_149508bca(param_2,param_1);
  *(undefined4 *)(param_2 + 0x44) = 0xff;
  FUN_149508c6e(param_2,param_1);
  FUN_1458bfc2e(param_2,&local_30);
  plVar1 = local_28;
  if ((undefined8 *)(param_1 + 8) != &local_30) {
    *(undefined8 *)(param_1 + 8) = local_30;
    local_30 = 0;
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (local_28 != plVar3) {
      local_28 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x10) = plVar1;
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
    }
  }
  plVar1 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149508782 FUN_149508782 body=164 status=ok
// SIG undefined FUN_149508782(void)

longlong FUN_149508782(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14bd359d8;
  puVar3[1] = param_2;
  puVar3[2] = FUN_149508826;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14bd359f0;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 149508826 FUN_149508826 body=155 status=ok
// SIG undefined FUN_149508826(void)

void FUN_149508826(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  QueryPerformanceCounter(&local_30);
  *(double *)(param_1 + 0x78) = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  local_48 = *(undefined4 *)(param_1 + 0x38);
  uStack_44 = *(undefined4 *)(param_1 + 0x3c);
  uStack_40 = *(undefined4 *)(param_1 + 0x40);
  uStack_3c = *(undefined4 *)(param_1 + 0x44);
  (**(code **)**(undefined8 **)(param_1 + 0x30))
            (*(undefined8 **)(param_1 + 0x30),&local_48,*(undefined8 *)(param_2 + 0x20),param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495088c2 FUN_1495088c2 body=164 status=ok
// SIG undefined FUN_1495088c2(void)

longlong FUN_1495088c2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14bd35a08;
  puVar3[1] = param_2;
  puVar3[2] = FUN_149508966;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14bd35a20;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 149508966 FUN_149508966 body=446 status=ok
// SIG undefined FUN_149508966(void)

void FUN_149508966(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  LARGE_INTEGER local_100;
  LARGE_INTEGER local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  QueryPerformanceCounter(&local_f8);
  *(double *)(param_1 + 0x78) = (double)local_f8.QuadPart * DAT_14c83f420 + 16777216.0;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x80));
  local_d0 = 0.0;
  local_f8.QuadPart = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  QueryPerformanceCounter(&local_100);
  local_d8 = (double)local_100.QuadPart * DAT_14c83f420 + 16777216.0;
  local_a8 = 0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0x18;
  uStack_6c = 1;
  FUN_144756208(&local_f8,param_2 + 1);
  FUN_1492e3c24(&local_e8,param_2 + 3);
  FUN_140bb2e20(&local_c8,param_2 + 5);
  local_78 = *(undefined4 *)(param_2 + 0xf);
  uStack_74 = *(undefined4 *)((longlong)param_2 + 0x7c);
  uStack_70 = *(undefined4 *)(param_2 + 0x10);
  uStack_6c = *(undefined4 *)((longlong)param_2 + 0x84);
  dVar1 = (double)param_2[0x11];
  QueryPerformanceCounter(&local_100);
  local_d0 = ((double)local_100.QuadPart * DAT_14c83f420 + 16777216.0) - dVar1;
  local_118 = *(undefined4 *)(param_1 + 0x38);
  uStack_114 = *(undefined4 *)(param_1 + 0x3c);
  uStack_110 = *(undefined4 *)(param_1 + 0x40);
  uStack_10c = *(undefined4 *)(param_1 + 0x44);
  local_d8 = dVar1;
  (**(code **)(**(longlong **)(param_1 + 0x30) + 8))
            (*(longlong **)(param_1 + 0x30),&local_118,*param_2,&local_f8);
  FUN_145cd390c(&local_f8);
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149508b26 FUN_149508b26 body=164 status=ok
// SIG undefined FUN_149508b26(void)

longlong FUN_149508b26(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14bd35a38;
  puVar3[1] = param_2;
  puVar3[2] = FUN_14950835e;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14bd35a50;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 149508bca FUN_149508bca body=164 status=ok
// SIG undefined FUN_149508bca(void)

longlong FUN_149508bca(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14bd35a68;
  puVar3[1] = param_2;
  puVar3[2] = FUN_1495083d8;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14bd35a80;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 149508c6e FUN_149508c6e body=164 status=ok
// SIG undefined FUN_149508c6e(void)

longlong FUN_149508c6e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_LAB_14bd35a98;
  puVar3[1] = param_2;
  puVar3[2] = FUN_149507982;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = &PTR_LAB_14bd35ab0;
  puVar4[2] = puVar3;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1458bf82a(param_1 + 0x28,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  *(undefined8 **)(lVar2 + (longlong)iVar1 * 0x10) = puVar3;
  *(undefined8 **)(lVar2 + 8 + (longlong)iVar1 * 0x10) = puVar4;
  return param_1;
}



// FUNCTION 149508d16 FUN_149508d16 body=152 status=ok
// SIG undefined FUN_149508d16(void)

undefined8 FUN_149508d16(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"SourceDisplayName";
  local_28 = 0x11;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"LiveLinkMessageBusSourceFactory";
  local_28 = 0x1f;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Message Bus Source");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149508db0 FUN_149508db0 body=152 status=ok
// SIG undefined FUN_149508db0(void)

undefined8 FUN_149508db0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"SourceTooltip";
  local_28 = 0xd;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"LiveLinkMessageBusSourceFactory";
  local_28 = 0x1f;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,
                L"Creates a connection to a Message Bus based Live Link Source");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149508e4a FUN_149508e4a body=327 status=ok
// SIG undefined FUN_149508e4a(void)

undefined8 * FUN_149508e4a(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_258 [39];
  undefined1 local_231;
  undefined1 local_230 [8];
  longlong *local_228;
  undefined1 local_218 [16];
  undefined8 local_208;
  longlong *local_200;
  undefined1 local_1f8 [424];
  undefined1 local_50 [16];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_149508f92(local_1f8);
  FUN_149508fbe(local_218,param_1,param_3);
  FUN_144a450dc(local_50,local_218);
  local_40 = *(undefined8 *)(param_1 + 0x10);
  FUN_14951d5d6(local_230,&local_231);
  FUN_14950923a(local_230,&local_208,local_1f8);
  *param_2 = local_208;
  param_2[1] = local_200;
  if (local_200 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_200 + 1) = (int)local_200[1] + 1;
    UNLOCK();
    if (local_200 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_200 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_200)(local_200);
        LOCK();
        piVar2 = (int *)((longlong)local_200 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_200 + 0x10))(local_200);
        }
      }
    }
  }
  if (local_228 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_228 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_228)(local_228);
      LOCK();
      piVar2 = (int *)((longlong)local_228 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_228 + 0x10))(local_228);
      }
    }
  }
  FUN_1449db362(local_218);
  FUN_1449db362(local_50);
  FUN_140a4ff8c(local_1f8);
  FUN_1449db362(param_3);
  if ((local_38 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149508f92 FUN_149508f92 body=43 status=ok
// SIG undefined FUN_149508f92(void)

longlong FUN_149508f92(longlong param_1)

{
  FUN_140a5071c();
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  return param_1;
}



// FUNCTION 149508fbe FUN_149508fbe body=190 status=ok
// SIG undefined FUN_149508fbe(void)

longlong * FUN_149508fbe(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_LAB_14bd35b60;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  FUN_14951dc74(puVar1 + 1,param_3);
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[3] = lVar3;
  *puVar1 = &PTR_FUN_14bd35af0;
  puVar1[4] = 0;
  FUN_14485c47a(puVar1 + 4,param_2);
  puVar1[5] = FUN_14950907c;
  return param_1;
}



// FUNCTION 14950907c FUN_14950907c body=444 status=ok
// SIG undefined FUN_14950907c(void)

void FUN_14950907c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 uStack_88;
  longlong *local_80 [2];
  longlong *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(lVar4 + 0x30);
    FUN_140009b9a(&local_70,lVar4 + 0x20);
    FUN_140009b9a(local_80,*param_2 + 0x10);
    local_b8 = lVar4;
    local_b0 = uVar3;
    (**(code **)(*param_1 + 0x2e0))(param_1,&local_60,local_80,&local_70);
    if (local_80[0] != (longlong *)0x0) {
      (**(code **)(*local_80[0] + 0x10))();
    }
    if (local_70 != (longlong *)0x0) {
      (**(code **)(*local_70 + 0x10))();
    }
    if (*(int *)(*param_2 + 0x18) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)(*param_2 + 0x10);
    }
    FUN_140002266(&local_70,L"Name=\"%s\"",puVar6);
    local_90 = local_70;
    uStack_88 = uStack_68;
    local_70 = (longlong *)0x0;
    uStack_68 = 0;
    local_a0 = local_60;
    local_98 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    FUN_14950949e(param_3,&local_a0,&local_90);
    if (local_70 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_58 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
  }
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
  FUN_1449db362(param_3);
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950923a FUN_14950923a body=115 status=ok
// SIG undefined FUN_14950923a(void)

longlong * FUN_14950923a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_149510adc(*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 1495092ae FUN_1495092ae body=180 status=ok
// SIG undefined FUN_1495092ae(void)

longlong *
FUN_1495092ae(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xc0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14bd359c0;
  FUN_1495072d2(plVar3 + 2,param_3,param_4,param_5,param_6);
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



// FUNCTION 149509362 FUN_149509362 body=315 status=ok
// SIG undefined FUN_149509362(void)

undefined8 * FUN_149509362(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 local_80;
  longlong *local_78 [2];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48[0] = 0;
  local_48[1] = 0;
  if (*(int *)(param_3 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_3;
  }
  local_88 = (undefined8 *)0x0;
  cVar3 = FUN_14063337c(puVar5,L"Name=",local_48,1);
  if (cVar3 == '\0') {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    local_68 = 0;
    uStack_60 = 0;
    uVar4 = FUN_140e82300();
    FUN_140009b9a(local_78,local_48);
    local_80 = 0;
    local_88 = &local_68;
    (**(code **)(*param_1 + 0x2e0))(param_1,&local_58,local_78,uVar4);
    *param_2 = local_58;
    param_2[1] = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_50 + 0x10))(local_50);
          }
        }
      }
    }
    if (local_78[0] != (longlong *)0x0) {
      (**(code **)(*local_78[0] + 0x10))();
    }
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950949e FUN_14950949e body=186 status=ok
// SIG undefined FUN_14950949e(void)

void FUN_14950949e(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    local_28 = *param_3;
    *param_3 = 0;
    local_20 = (undefined4)param_3[1];
    local_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
    local_38 = *param_2;
    local_30 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (**(code **)(*param_1 + 0x60))();
  }
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
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950955e FUN_14950955e body=117 status=ok
// SIG undefined FUN_14950955e(void)

undefined8 * FUN_14950955e(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)*param_3;
  if (plVar1 == (longlong *)0x0 || (int)param_3[1] == 0) {
    *param_2 = 0;
    uVar2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    uVar2 = *param_2;
  }
  uVar2 = FUN_14951de7a(param_1 + 0x270,(int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2,param_2)
  ;
  FUN_149515e14(uVar2,param_3);
  return param_2;
}



// FUNCTION 1495095d4 FUN_1495095d4 body=69 status=ok
// SIG undefined FUN_1495095d4(void)

void FUN_1495095d4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14951e414(param_1 + 0x270,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149509624 FUN_149509624 body=165 status=ok
// SIG undefined FUN_149509624(void)

void FUN_149509624(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1495096ca(param_1,local_24 != 0);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1495096ca FUN_1495096ca body=1317 status=ok
// SIG undefined FUN_1495096ca(void)

undefined8 FUN_1495096ca(longlong param_1,char param_2)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int *piVar10;
  byte bVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  undefined1 auStack_148 [32];
  longlong local_128;
  undefined1 local_11c [4];
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  longlong local_108 [2];
  int *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar8 = (longlong *)FUN_1448c2e86();
  iVar6 = (**(code **)(*plVar8 + 0x18))(plVar8,DAT_14cc0b540);
  if (0 < iVar6) {
    plVar8 = (longlong *)FUN_1448c2e86();
    local_128 = (**(code **)(*plVar8 + 0x20))(plVar8,DAT_14cc0b540,0);
    plVar8 = (longlong *)(local_128 + -8);
    local_f8 = (int *)0x0;
    uStack_f0 = 0;
    (**(code **)(*(longlong *)(local_128 + -8) + 0xf8))(plVar8,&local_98,0);
    uVar3 = uStack_f0;
    lVar14 = (longlong)(int)(uint)uStack_90;
    if (lVar14 != 0) {
      iVar6 = (int)uStack_f0;
      lVar13 = (longlong)(int)uStack_f0;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,(int)uStack_f0 + (uint)uStack_90);
      if ((uint)(uStack_f0._4_4_ - iVar6) < (uint)uStack_90) {
        FUN_140c60952(&local_f8,uVar3 & 0xffffffff);
      }
      memmove(local_f8 + lVar13 * 4,local_98,lVar14 << 4);
      uStack_90 = (ulonglong)uStack_90._4_4_ << 0x20;
    }
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*plVar8 + 0x100))(plVar8,&local_98,0);
    uVar3 = uStack_f0;
    lVar14 = (longlong)(int)(uint)uStack_90;
    if (lVar14 != 0) {
      iVar6 = (int)uStack_f0;
      lVar13 = (longlong)(int)uStack_f0;
      uStack_f0 = CONCAT44(uStack_f0._4_4_,(int)uStack_f0 + (uint)uStack_90);
      if ((uint)(uStack_f0._4_4_ - iVar6) < (uint)uStack_90) {
        FUN_140c60952(&local_f8,uVar3 & 0xffffffff);
      }
      memmove(local_f8 + lVar13 * 4,local_98,lVar14 << 4);
      uStack_90 = uStack_90 & 0xffffffff00000000;
    }
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*plVar8 + 0x1a0))(plVar8,local_108,1,1);
    local_78 = 0;
    local_70 = 0;
    local_98 = (void *)0x0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      piVar15 = *(int **)(param_1 + 0x28);
      piVar1 = piVar15 + (longlong)*(int *)(param_1 + 0x30) * 10;
      do {
        if ((longlong)(int)uStack_f0 != 0) {
          piVar10 = local_f8;
          do {
            if ((((*piVar10 == *piVar15) && (piVar10[1] == piVar15[1])) &&
                (piVar10[2] == piVar15[2])) && (piVar10[3] == piVar15[3])) {
              if (param_2 == '\0') {
                FUN_1457adc9c(&local_98,local_11c,piVar15,0);
              }
              else {
                local_118 = *piVar15;
                iStack_114 = piVar15[1];
                iStack_110 = piVar15[2];
                iStack_10c = piVar15[3];
                (**(code **)(*plVar8 + 0xe0))(plVar8,&local_118);
              }
              break;
            }
            piVar10 = piVar10 + 4;
          } while (piVar10 != local_f8 + (longlong)(int)uStack_f0 * 4);
        }
        piVar15 = piVar15 + 10;
      } while (piVar15 != piVar1);
    }
    if ((longlong)*(int *)(param_1 + 0x40) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x38);
      lVar13 = (longlong)*(int *)(param_1 + 0x40) * 0x38;
      do {
        cVar4 = FUN_14950a334(local_108,lVar14);
        if (cVar4 != '\0') {
          if (param_2 == '\0') {
            FUN_14951e6e6(&local_e8,local_11c,lVar14);
          }
          else {
            (**(code **)(*plVar8 + 0x158))(plVar8,lVar14);
          }
        }
        lVar14 = lVar14 + 0x38;
        lVar13 = lVar13 + -0x38;
      } while (lVar13 != 0);
    }
    FUN_140323344(plVar8);
    FUN_1419081bc(plVar8);
    FUN_140149e7a(plVar8);
    FUN_1447f69b6(local_128 + 0x178);
    bVar11 = 1;
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x28);
      lVar13 = (longlong)*(int *)(param_1 + 0x30) * 0x28;
      do {
        uVar7 = FUN_1447addd0(lVar14,0x10);
        iVar6 = FUN_140f5cb3a(&local_98,uVar7,lVar14);
        bVar5 = 1;
        if (iVar6 == -1) {
          bVar5 = (**(code **)(*plVar8 + 0xd8))(plVar8,lVar14);
        }
        bVar11 = bVar11 & bVar5;
        lVar14 = lVar14 + 0x28;
        lVar13 = lVar13 + -0x28;
      } while (lVar13 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x40) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x38);
      lVar13 = (longlong)*(int *)(param_1 + 0x40) * 0x38;
      do {
        iVar6 = FUN_1447addd0(lVar14,0x10);
        uVar9 = *(undefined8 *)(lVar14 + 0x10);
        uVar2 = (uint)((ulonglong)uVar9 >> 0x10);
        uVar12 = (uint)uVar9 & 0xffff;
        iVar6 = FUN_1495192ee(&local_e8,
                              (((uint)uVar9 << 0x10 | uVar12) + (int)((ulonglong)uVar9 >> 0x20) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar12 >> 4)) * 0xd + iVar6,
                              lVar14);
        bVar5 = 1;
        if (iVar6 == -1) {
          bVar5 = (**(code **)(*plVar8 + 0x140))(plVar8,lVar14);
        }
        bVar11 = bVar11 & bVar5;
        lVar14 = lVar14 + 0x38;
        lVar13 = lVar13 + -0x38;
      } while (lVar13 != 0);
    }
    local_a0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_145d1993e(&local_e8);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140149fc2(&local_98);
    if (local_108[0] != 0) {
      FUN_1400020a8();
    }
    if (local_f8 != (int *)0x0) {
      FUN_1400020a8();
    }
    if (bVar11 != 0) {
      FUN_144750a86(param_1,&local_98,0,0);
      if (local_98 != (void *)0x0) {
        FUN_1400020a8();
      }
      uVar9 = 1;
      goto LAB_149509736;
    }
  }
  FUN_144750a86(param_1,&local_98,0,0);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar9 = 0;
LAB_149509736:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 149509bf4 FUN_149509bf4 body=37 status=ok
// SIG undefined FUN_149509bf4(void)

void FUN_149509bf4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_149509c1a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 149509c1a FUN_149509c1a body=356 status=ok
// SIG undefined FUN_149509c1a(void)

undefined8 FUN_149509c1a(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_1448c2e86();
  iVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,DAT_14cc0b540);
  if (0 < iVar2) {
    plVar3 = (longlong *)FUN_1448c2e86();
    lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,DAT_14cc0b540,0);
    plVar3 = (longlong *)(lVar4 + -8);
    FUN_1494fe8c6(plVar3);
    FUN_140323344(plVar3);
    FUN_1419081bc(plVar3);
    FUN_140149e7a(plVar3);
    FUN_1447f69b6(lVar4 + 0x178);
    if ((longlong)*(int *)(param_1 + 0x30) == 0) {
      bVar6 = 1;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x28);
      lVar7 = (longlong)*(int *)(param_1 + 0x30) * 0x28;
      bVar6 = 1;
      do {
        bVar1 = (**(code **)(*plVar3 + 0xd8))(plVar3,lVar4);
        bVar6 = bVar6 & bVar1;
        lVar4 = lVar4 + 0x28;
        lVar7 = lVar7 + -0x28;
      } while (lVar7 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x40) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x38);
      lVar7 = (longlong)*(int *)(param_1 + 0x40) * 0x38;
      do {
        bVar1 = (**(code **)(*plVar3 + 0x140))(plVar3,lVar4);
        bVar6 = bVar6 & bVar1;
        lVar4 = lVar4 + 0x38;
        lVar7 = lVar7 + -0x38;
      } while (lVar7 != 0);
    }
    if (bVar6 != 0) {
      FUN_144750a86(param_1,local_40,0,0);
      if (local_40[0] != 0) {
        FUN_1400020a8();
      }
      uVar5 = 1;
      goto LAB_149509c75;
    }
  }
  FUN_144750a86(param_1,local_40,0,0);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  uVar5 = 0;
LAB_149509c75:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 149509d80 FUN_149509d80 body=281 status=ok
// SIG undefined FUN_149509d80(void)

void FUN_149509d80(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  longlong lStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_38 = 0xffffffffffffffff;
  uStack_30 = 0;
  lStack_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  local_48 = lStack_28;
  if ((lStack_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_149509e9a(param_1,local_20,&local_58);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149509e9a FUN_149509e9a body=236 status=ok
// SIG undefined FUN_149509e9a(void)

void FUN_149509e9a(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x180))(param_2);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 0x1f0) == 0) {
        lVar1 = lVar1 + 0x460;
      }
      else {
        lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1f0) + 0xf8);
      }
      lVar2 = FUN_14951e626(lVar1,*(undefined8 *)(param_3 + 4),param_3[1]);
      if (lVar2 == 0) {
        puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
        *puVar3 = &PTR_FUN_14bd34fb0;
        puVar3[1] = *(undefined8 *)(param_3 + 2);
        *(undefined4 *)(puVar3 + 2) = *param_3;
        *(undefined8 *)((longlong)puVar3 + 0x14) = 0;
        FUN_14485c47a((longlong)puVar3 + 0x14,*(undefined8 *)(param_3 + 4));
        puVar3[4] = 0;
        FUN_14485c47a(puVar3 + 4,param_1);
        puVar3[5] = 0x3ff0000000000000;
        puVar3[6] = 0;
        FUN_140b1330e(lVar1,*(undefined8 *)(param_3 + 4),param_3[1],puVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149509f9c FUN_149509f9c body=915 status=ok
// SIG undefined FUN_149509f9c(void)

void FUN_149509f9c(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  longlong local_c0;
  longlong *local_b8 [4];
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  longlong local_78;
  int local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x34);
  FUN_145c258b2(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((iVar5 < 0) && (*(int *)(param_1 + 0x34) != 0)) {
    FUN_14951e84a(plVar1);
  }
  local_d8 = (longlong *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (*(int *)(param_1 + 0x44) < 0) {
    FUN_14951e87a(local_d8);
  }
  plVar6 = (longlong *)FUN_1448c2e86();
  iVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,DAT_14cc0b540);
  if (0 < iVar5) {
    plVar6 = (longlong *)FUN_1448c2e86();
    lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6,DAT_14cc0b540,0);
    plVar6 = (longlong *)(lVar7 + -8);
    (**(code **)(*(longlong *)(lVar7 + -8) + 0xf8))(plVar6,&local_98,0);
    lVar7 = CONCAT44(uStack_94,local_98);
    lVar9 = (longlong)iStack_90;
    if (lVar9 != 0) {
      lVar10 = 0;
      do {
        puVar2 = (undefined4 *)(lVar7 + lVar10);
        local_58 = *puVar2;
        uStack_54 = puVar2[1];
        uStack_50 = puVar2[2];
        uStack_4c = puVar2[3];
        (**(code **)(*plVar6 + 0x108))(plVar6,&local_d0,&local_58,param_1);
        iVar5 = *(int *)(param_1 + 0x30);
        lVar8 = (longlong)iVar5;
        *(uint *)(param_1 + 0x30) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x34) < iVar5 + 1U) {
          FUN_14951e8aa(plVar1,iVar5);
        }
        lVar4 = *plVar1;
        piVar3 = (int *)(lVar4 + lVar8 * 0x28);
        *piVar3 = local_d0;
        piVar3[1] = iStack_cc;
        piVar3[2] = iStack_c8;
        piVar3[3] = iStack_c4;
        *(longlong *)(lVar4 + 0x10 + lVar8 * 0x28) = local_c0;
        if ((local_c0 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_14023423e(lVar8 * 0x28 + lVar4 + 0x18,local_b8);
        if (local_b8[0] != (longlong *)0x0) {
          (**(code **)(*local_b8[0] + 0x10))();
        }
        lVar10 = lVar10 + 0x10;
      } while (lVar9 * 0x10 != lVar10);
      lVar7 = CONCAT44(uStack_94,local_98);
    }
    if (lVar7 != 0) {
      FUN_1400020a8(lVar7);
    }
    (**(code **)(*plVar6 + 0x100))(plVar6,&local_98,0);
    lVar7 = CONCAT44(uStack_94,local_98);
    lVar9 = (longlong)iStack_90;
    if (lVar9 != 0) {
      lVar10 = 0;
      do {
        puVar2 = (undefined4 *)(lVar7 + lVar10);
        local_68 = *puVar2;
        uStack_64 = puVar2[1];
        uStack_60 = puVar2[2];
        uStack_5c = puVar2[3];
        (**(code **)(*plVar6 + 0x108))(plVar6,&local_d0,&local_68,param_1);
        if (((iStack_cc != 0 || local_d0 != 0) || iStack_c8 != 0) || iStack_c4 != 0) {
          iVar5 = *(int *)(param_1 + 0x30);
          lVar8 = (longlong)iVar5;
          *(uint *)(param_1 + 0x30) = iVar5 + 1U;
          if (*(uint *)(param_1 + 0x34) < iVar5 + 1U) {
            FUN_14951e8aa(plVar1,iVar5);
          }
          lVar4 = *plVar1;
          piVar3 = (int *)(lVar4 + lVar8 * 0x28);
          *piVar3 = local_d0;
          piVar3[1] = iStack_cc;
          piVar3[2] = iStack_c8;
          piVar3[3] = iStack_c4;
          *(longlong *)(lVar4 + 0x10 + lVar8 * 0x28) = local_c0;
          if ((local_c0 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          FUN_14023423e(lVar8 * 0x28 + lVar4 + 0x18,local_b8);
        }
        if (local_b8[0] != (longlong *)0x0) {
          (**(code **)(*local_b8[0] + 0x10))();
        }
        lVar10 = lVar10 + 0x10;
      } while (lVar9 * 0x10 != lVar10);
      lVar7 = CONCAT44(uStack_94,local_98);
    }
    if (lVar7 != 0) {
      FUN_1400020a8(lVar7);
    }
    (**(code **)(*plVar6 + 0x1a0))(plVar6,&local_78,1,1);
    lVar7 = local_78;
    if ((longlong)local_70 != 0) {
      lVar9 = 0;
      do {
        local_88 = *(undefined8 *)(lVar7 + 0x10 + lVar9);
        puVar2 = (undefined4 *)(lVar7 + lVar9);
        local_98 = *puVar2;
        uStack_94 = puVar2[1];
        iStack_90 = puVar2[2];
        uStack_8c = puVar2[3];
        (**(code **)(*plVar6 + 0x198))(plVar6,&local_d0,&local_98,param_1);
        iVar5 = *(int *)(param_1 + 0x40);
        *(uint *)(param_1 + 0x40) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x44) < iVar5 + 1U) {
          FUN_14951e9ce(local_d8,iVar5);
        }
        FUN_14951e93e((longlong)iVar5 * 0x38 + *local_d8,&local_d0);
        lVar9 = lVar9 + 0x18;
      } while ((longlong)local_70 * 0x18 != lVar9);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14950a334 FUN_14950a334 body=91 status=ok
// SIG undefined FUN_14950a334(void)

undefined8 FUN_14950a334(longlong *param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar2 = 0;
    do {
      if ((((*(longlong *)(lVar1 + 0x10 + lVar2) == *(longlong *)(param_2 + 4)) &&
           (*(int *)(lVar1 + lVar2) == *param_2)) && (*(int *)(lVar1 + 4 + lVar2) == param_2[1])) &&
         ((*(int *)(lVar1 + 8 + lVar2) == param_2[2] &&
          (*(int *)(lVar1 + 0xc + lVar2) == param_2[3])))) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
      lVar2 = lVar2 + 0x18;
    } while ((longlong)(int)param_1[1] * 0x18 != lVar2);
  }
  return 0;
}



// FUNCTION 14950a3a8 FUN_14950a3a8 body=190 status=ok
// SIG undefined FUN_14950a3a8(void)

longlong * FUN_14950a3a8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar3 = DAT_14c950c29;
  lVar2 = param_2[1];
  param_1[1] = lVar2;
  if ((lVar2 != 0 & bVar3) == 1) {
    FUN_1456cec3c();
    bVar3 = DAT_14c950c29;
  }
  lVar2 = param_2[2];
  param_1[2] = lVar2;
  if ((lVar2 != 0 & bVar3) == 1) {
    FUN_1456cec3c();
  }
  param_1[3] = 0;
  iVar1 = (int)param_2[4];
  lVar2 = param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_149515854(param_1 + 3,iVar1,0);
    FUN_1495158b6(param_1[3],lVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14950a466 FUN_14950a466 body=150 status=ok
// SIG undefined FUN_14950a466(void)

undefined8 FUN_14950a466(longlong *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_14475cc44(param_1,&local_20);
    puVar2 = local_20;
    if (local_18 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    uVar1 = FUN_1459888c4();
    local_30 = 0;
    local_38 = 0;
    uVar1 = FUN_141433b6f(uVar1,0,puVar2,0);
    if (local_20 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14950a4fe FUN_14950a4fe body=709 status=ok
// SIG undefined FUN_14950a4fe(void)

void FUN_14950a4fe(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int iVar8;
  bool bVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  int *piVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  int local_84;
  longlong *local_80;
  ulonglong local_78;
  undefined8 *local_70;
  longlong *local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((((int)*param_2 != 0x4ed2dc4e) || (*(int *)((longlong)param_2 + 4) != -0x33a6ee32)) ||
      ((int)param_2[1] != 0x4af0635d)) || (*(int *)((longlong)param_2 + 0xc) != -0x574db5a6)) {
    local_68 = (longlong *)0x0;
    uStack_60 = CONCAT44(uStack_60._4_4_,2);
    FUN_14014a230(&local_68,2,0);
    uVar12 = uStack_60;
    plVar7 = local_68;
    *local_68 = (longlong)(param_1 + 0x2a);
    local_68[1] = (longlong)(param_1 + 0x2b);
    iVar8 = (int)uStack_60;
    lVar11 = (longlong)(int)uStack_60;
    local_68 = (longlong *)0x0;
    uStack_60 = 0;
    FUN_14014a36d(plVar7,uVar12 & 0xffffffff);
    if (lVar11 != 0) {
      lVar19 = 0;
      do {
        FUN_14490b2fc(*(undefined8 *)((longlong)plVar7 + lVar19));
        lVar19 = lVar19 + 8;
      } while (lVar11 * 8 - lVar19 != 0);
    }
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if ((longlong)*(int *)(param_1 + 1) != 0) {
      piVar4 = (int *)*param_1;
      iVar18 = 0;
      lVar19 = 0;
      piVar17 = piVar4;
      do {
        if (((*piVar17 == (int)*param_2) && (piVar17[1] == *(int *)((longlong)param_2 + 4))) &&
           ((piVar17[2] == (int)param_2[1] && (piVar17[3] == *(int *)((longlong)param_2 + 0xc))))) {
          if (iVar18 != 1) {
            local_90 = param_1;
            if (0 < (longlong)*(int *)(param_1 + 3)) {
              lVar19 = lVar19 >> 0x20;
              iVar1 = piVar4[lVar19 * 0x10];
              iVar2 = piVar4[lVar19 * 0x10 + 1];
              iVar3 = piVar4[lVar19 * 0x10 + 2];
              bVar9 = false;
              local_70 = param_1 + 0x22;
              plVar10 = param_1 + 2;
              uVar12 = (longlong)*(int *)(param_1 + 3);
              iVar14 = piVar4[lVar19 * 0x10 + 3];
              do {
                uVar13 = uVar12;
                plVar16 = (longlong *)(*plVar10 + uVar12 * 0x38);
                while (((plVar15 = plVar16 + -7, (int)*plVar15 != iVar1 ||
                        (*(int *)((longlong)plVar16 + -0x34) != iVar2)) ||
                       (((int)plVar16[-6] != iVar3 ||
                        (*(int *)((longlong)plVar16 + -0x2c) != iVar14))))) {
                  bVar5 = uVar13 < 2;
                  uVar13 = uVar13 - 1;
                  plVar16 = plVar15;
                  if (bVar5) {
                    if (!bVar9) goto LAB_14950a783;
                    goto LAB_14950a775;
                  }
                }
                local_58 = plVar16[-5];
                local_68 = (longlong *)*plVar15;
                uStack_60 = plVar16[-6];
                local_78 = uVar13 - 1;
                local_84 = iVar14;
                local_80 = plVar10;
                FUN_14951eb68();
                FUN_14951ebd0(local_80);
                FUN_14950a7c4(local_70,&local_68);
                bVar9 = true;
                plVar10 = local_80;
                uVar12 = local_78;
                iVar14 = local_84;
              } while (1 < uVar13);
LAB_14950a775:
              FUN_1447f69b6(local_90 + 7);
            }
LAB_14950a783:
            puVar6 = local_90;
            FUN_145af9722(local_90,-iVar18);
            FUN_145af968a(puVar6);
            local_68 = (longlong *)*param_2;
            uStack_60 = param_2[1];
            FUN_14951ea80(puVar6 + 0x12);
            FUN_1447f69b6(puVar6 + 4);
          }
          break;
        }
        piVar17 = piVar17 + 0x10;
        lVar19 = lVar19 + 0x100000000;
        iVar18 = iVar18 + -1;
      } while (piVar17 != piVar4 + (longlong)*(int *)(param_1 + 1) * 0x10);
    }
    if (iVar8 != 0) {
      lVar19 = 0;
      do {
        FUN_144a6a7be(*(undefined8 *)((longlong)plVar7 + lVar19));
        lVar19 = lVar19 + 8;
      } while (lVar11 * 8 != lVar19);
    }
    if (plVar7 != (longlong *)0x0) {
      FUN_1400020a8(plVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14950a7c4 FUN_14950a7c4 body=223 status=ok
// SIG undefined FUN_14950a7c4(void)

void FUN_14950a7c4(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  code *local_58 [2];
  undefined8 *local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    local_68 = *(undefined8 *)(param_2 + 4);
    local_78 = *param_2;
    uStack_74 = param_2[1];
    uStack_70 = param_2[2];
    uStack_6c = param_2[3];
    local_58[0] = (code *)0x0;
    local_48 = (undefined8 *)FUN_14001cc68(0x28,8);
    *local_48 = &PTR_LAB_14bd35ec0;
    local_48[1] = param_1;
    local_48[4] = local_68;
    *(undefined4 *)(local_48 + 2) = local_78;
    *(undefined4 *)((longlong)local_48 + 0x14) = uStack_74;
    *(undefined4 *)(local_48 + 3) = uStack_70;
    *(undefined4 *)((longlong)local_48 + 0x1c) = uStack_6c;
    if (local_48 + 1 != (undefined8 *)0x0) {
      local_58[0] = FUN_14951ed6a;
    }
    FUN_1407461b0(1,local_58);
  }
  else {
    local_68 = *(undefined8 *)(param_2 + 4);
    local_78 = *param_2;
    uStack_74 = param_2[1];
    uStack_70 = param_2[2];
    uStack_6c = param_2[3];
    FUN_14951ec76(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950a8a4 FUN_14950a8a4 body=121 status=ok
// SIG undefined FUN_14950a8a4(void)

void FUN_14950a8a4(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_144a61b4f();
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_78);
  }
  local_48 = 0;
  local_38 = &PTR_LAB_14bd35ee0;
  local_58 = &LAB_14951edfe;
  local_30 = param_1;
  FUN_1407461b0(1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950a92c FUN_14950a92c body=531 status=ok
// SIG undefined FUN_14950a92c(void)

undefined8 * FUN_14950a92c(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_14bd31150;
  param_1[1] = &PTR_FUN_14bd311f0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = &PTR_FUN_149eacb10;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = 0;
  param_1[0x19] = puVar5;
  param_1[0x18] = puVar5;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = &PTR_FUN_149eacb10;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf1) = 0;
  param_1[0x20] = &PTR_FUN_149eacb10;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x111) = 0;
  *(undefined8 *)((longlong)param_1 + 0x119) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = *param_2;
  lVar3 = param_2[1];
  param_1[0x29] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0x2a) = 1;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0x3f800000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  *(undefined1 **)((longlong)param_1 + 0x17c) = &DAT_100000018;
  *(undefined1 *)((longlong)param_1 + 0x184) = 0;
  param_1[0x31] = &DAT_100000018;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0x1e;
  param_1[0x34] = 0;
  param_1[0x35] = 0xa00000000;
  *(undefined1 *)(param_1 + 0x36) = 1;
  *(undefined1 *)((longlong)param_1 + 0x1b9) = 0;
  param_1[0x38] = 0;
  *(undefined1 *)(param_1 + 0x39) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 1;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x3e),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x43));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x43),4000);
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



// FUNCTION 14950ab40 FUN_14950ab40 body=407 status=ok
// SIG undefined FUN_14950ab40(void)

void FUN_14950ab40(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_2 + 4);
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)(param_1 + 0x128) = *param_2;
  *(undefined4 *)(param_1 + 300) = uVar4;
  *(undefined4 *)(param_1 + 0x130) = uVar5;
  *(undefined4 *)(param_1 + 0x134) = uVar6;
  lVar11 = *param_3;
  if (DAT_14c950c29 == '\x01') {
    if (lVar11 == 0) {
      lVar11 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar11 = *param_3;
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar11;
  iVar8 = *(int *)(param_1 + 0xbc);
  FUN_14951ef43(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if ((iVar8 < 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    FUN_14951ef6a(param_1 + 0xb0);
  }
  while (lVar11 = **(longlong **)(param_1 + 200), lVar11 != 0) {
    lVar2 = *(longlong *)(param_1 + 200);
    *(longlong *)(param_1 + 200) = lVar11;
    *(undefined4 *)(lVar11 + 8) = 0;
    if (lVar2 != 0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(param_1 + 0x1e0) = 0xffffffff00000001;
  lVar11 = param_1 + 8;
  (**(code **)(*(longlong *)(param_1 + 8) + 0x70))(lVar11);
  plVar10 = *(longlong **)(param_1 + 0x148);
  if (plVar10 != (longlong *)0x0) {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_14950ac28;
      LOCK();
      iVar7 = (int)plVar10[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
    plVar3 = *(longlong **)(param_1 + 0x140);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x58))(plVar3,lVar11);
    }
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
LAB_14950ac28:
  FUN_1446f470e(&local_28,L"TimeManagement",1);
  uVar9 = FUN_144a52528();
  plVar10 = (longlong *)FUN_14493e38c(uVar9,local_28);
  uVar9 = (**(code **)(*plVar10 + 0x40))(plVar10);
  FUN_14950acd8(uVar9,lVar11);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14950acd8 FUN_14950acd8 body=120 status=ok
// SIG undefined FUN_14950acd8(void)

void FUN_14950acd8(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x30);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) == param_2) {
        return;
      }
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 - lVar3 != 0);
  }
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_14951590a((longlong *)(param_1 + 0x28),iVar1);
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  *(longlong *)(lVar2 + lVar4 * 8) = param_2;
  FUN_1447f69b6(param_1);
  return;
}



// FUNCTION 14950ad50 FUN_14950ad50 body=591 status=ok
// SIG undefined FUN_14950ad50(void)

void FUN_14950ad50(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14bd31150;
  param_1[1] = &PTR_FUN_14bd311f0;
  plVar6 = (longlong *)param_1[0x29];
  if (plVar6 != (longlong *)0x0) {
    iVar4 = (int)plVar6[1];
    do {
      if (iVar4 == 0) goto LAB_14950ad94;
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar2 = (longlong *)param_1[0x28];
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_1 + 1);
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
  }
LAB_14950ad94:
  FUN_1446f470e(&local_30,L"TimeManagement",1);
  uVar5 = FUN_144a52528();
  plVar6 = (longlong *)FUN_14493e38c(uVar5,local_30);
  lVar7 = (**(code **)(*plVar6 + 0x40))(plVar6);
  local_30 = param_1 + 1;
  iVar4 = FUN_149515990(lVar7 + 0x28,&local_30);
  if (iVar4 != 0) {
    FUN_1447f69b6(lVar7);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x43));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3e));
  if (*(char *)((longlong)param_1 + 0x1b9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1b9) = 0;
  }
  plVar6 = (longlong *)param_1[0x29];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  FUN_1448eac94(param_1 + 0x20);
  FUN_1448eac94(param_1 + 0x1b);
  while ((undefined8 *)param_1[0x19] != (undefined8 *)0x0) {
    param_1[0x19] = *(undefined8 *)param_1[0x19];
    FUN_1400020a8();
  }
  FUN_14951ef43(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x15) == '\x01') {
    FUN_1448eac94(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x15) = 0;
  }
  FUN_1448eac94(param_1 + 0xb);
  plVar6 = (longlong *)param_1[10];
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
  FUN_145a4972a(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  plVar6 = (longlong *)param_1[6];
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
  FUN_14951eefa(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14950afa0 FUN_14950afa0 body=476 status=ok
// SIG undefined FUN_14950afa0(void)

void FUN_14950afa0(longlong param_1,int param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (0 < param_2) {
    iVar5 = 0;
    do {
      lVar4 = **(longlong **)(param_1 + 200);
      iVar3 = -1;
      if (lVar4 != 0) {
        iVar3 = *(int *)(lVar4 + 8);
        lVar1 = *(longlong *)(param_1 + 200);
        *(longlong *)(param_1 + 200) = lVar4;
        *(undefined4 *)(lVar4 + 8) = 0;
        if (lVar1 != 0) {
          FUN_1400020a8();
        }
      }
      if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
        lVar4 = 0;
        do {
          if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10 + lVar4) + 0x98) == iVar3)
          {
            iVar3 = (int)(lVar4 >> 3) * -0x33333333;
            if (iVar3 != -1) {
              _Dst = (void *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar3 * 0x28);
              FUN_14951ef43(_Dst,1);
              iVar2 = *(int *)(param_1 + 0xb8);
              iVar3 = iVar2 - (iVar3 + 1);
              if (iVar3 != 0) {
                memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)iVar3 * 0x28);
                iVar2 = *(int *)(param_1 + 0xb8);
              }
              *(int *)(param_1 + 0xb8) = iVar2 + -1;
              goto LAB_14950b09d;
            }
            break;
          }
          lVar4 = lVar4 + 0x28;
        } while ((longlong)*(int *)(param_1 + 0xb8) * 0x28 != lVar4);
      }
      FUN_1400021e4(param_1 + 0x138,local_58);
      lVar4 = local_58[0];
      while( true ) {
        if (lVar4 != 0) {
          FUN_1400020a8();
        }
        lVar1 = **(longlong **)(param_1 + 200);
        if (lVar1 == 0) break;
        lVar4 = *(longlong *)(param_1 + 200);
        *(longlong *)(param_1 + 200) = lVar1;
        *(undefined4 *)(lVar1 + 8) = 0;
      }
      iVar3 = *(int *)(param_1 + 0xbc);
      FUN_14951ef43(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
      *(undefined4 *)(param_1 + 0xb8) = 0;
      if ((iVar3 < 0) && (*(int *)(param_1 + 0xbc) != 0)) {
        FUN_14951ef6a(param_1 + 0xb0);
      }
LAB_14950b09d:
      iVar5 = iVar5 + 1;
    } while (iVar5 != param_2);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14950b17e FUN_14950b17e body=130 status=ok
// SIG undefined FUN_14950b17e(void)

bool FUN_14950b17e(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 == 0) {
    cVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))(param_1 + 8);
    if (cVar3 != '\0') {
      LOCK();
      *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
      UNLOCK();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      FUN_14950ce66(param_1,param_2,param_3);
    }
    else {
      FUN_14950cda6(param_1,param_2,param_3);
    }
    if (*(longlong *)(param_3 + 0x10) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      uVar4 = FUN_1492dc406(param_1 + 0x58);
      FUN_1495081a4(param_3,uVar4,uVar2);
    }
  }
  return iVar1 != 0;
}



// FUNCTION 14950b200 FUN_14950b200 body=146 status=ok
// SIG undefined FUN_14950b200(void)

bool FUN_14950b200(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 == 0) {
    cVar3 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))(param_1 + 8);
    if (cVar3 != '\0') {
      LOCK();
      *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
      UNLOCK();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x28) == 0) {
      FUN_14950cbde(param_1,param_2,param_3);
    }
    else {
      FUN_14453d300(param_1,param_2,param_3);
    }
    if (*(longlong *)(param_3 + 0x10) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x68);
      uVar4 = FUN_1492dc406(param_1 + 0x58);
      FUN_1495081a4(param_3,uVar4,uVar2);
    }
    *(undefined8 *)(*(longlong *)(param_3 + 0x38) + 8) = *(undefined8 *)(param_1 + 0x168);
  }
  return iVar1 != 0;
}



// FUNCTION 14950b292 FUN_14950b292 body=399 status=ok
// SIG undefined FUN_14950b292(void)

bool FUN_14950b292(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  undefined8 uVar4;
  double *pdVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  double dVar11;
  
  iVar3 = *(int *)(param_1 + 0xb8);
  if (iVar3 != 0) {
    iVar10 = ~*(uint *)(param_1 + 0x1a8) + iVar3;
    iVar9 = 0;
    if (0 < iVar10) {
      iVar9 = iVar10;
    }
    if (iVar3 <= iVar10) {
      iVar9 = iVar3 + -1;
    }
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar9 * 0x28 + 0x10);
    uVar8 = FUN_1492dc4d4();
    FUN_1494f6cb8(param_2 + 0x28,uVar8,uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    uVar8 = FUN_1492dc406(param_1 + 0x58);
    FUN_1495081a4(param_2,uVar8,uVar4);
    cVar7 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))(param_1 + 8);
    if (cVar7 != '\0') {
      if (iVar10 < 0 && iVar10 < iVar3) {
        LOCK();
        *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + 1;
        UNLOCK();
      }
      if (iVar3 <= iVar10) {
        LOCK();
        *(int *)(param_1 + 0x1d0) = *(int *)(param_1 + 0x1d0) + 1;
        UNLOCK();
      }
      pdVar5 = *(double **)
                (*(longlong *)(param_1 + 0xb0) + -0x18 + (longlong)*(int *)(param_1 + 0xb8) * 0x28);
      dVar1 = *pdVar5;
      dVar2 = pdVar5[1];
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10);
      uVar4 = *(undefined8 *)(lVar6 + 0x60);
      lVar6 = *(longlong *)(lVar6 + 0x68);
      dVar11 = **(double **)(param_2 + 0x38) + (*(double **)(param_2 + 0x38))[1];
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
      *(float *)(param_1 + 0x1d8) = (float)((dVar1 + dVar2) - dVar11);
      *(float *)(param_1 + 0x1dc) =
           (float)(dVar11 - ((double)((lVar6 >> 0x20) * (longlong)(int)uVar4) +
                            (double)(int)((ulonglong)lVar6 >> 0x20) *
                            (double)(float)((ulonglong)uVar4 >> 0x20)) / (double)(int)lVar6);
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
    }
  }
  return iVar3 != 0;
}



// FUNCTION 14950b422 FUN_14950b422 body=200 status=ok
// SIG undefined FUN_14950b422(void)

void FUN_14950b422(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*(longlong *)(param_1 + 0xd8) + 0x40))(param_1 + 0xd8);
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  (**(code **)(*(longlong *)(param_1 + 0x100) + 0x40))(param_1 + 0x100);
  *(undefined1 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  iVar1 = *(int *)(param_1 + 0xbc);
  FUN_14951ef43(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0xbc) != 0)) {
    FUN_14951ef6a(param_1 + 0xb0);
  }
  while (lVar3 = **(longlong **)(param_1 + 200), lVar3 != 0) {
    lVar2 = *(longlong *)(param_1 + 200);
    *(longlong *)(param_1 + 200) = lVar3;
    *(undefined4 *)(lVar3 + 8) = 0;
    if (lVar2 != 0) {
      FUN_1400020a8();
    }
  }
  return;
}



// FUNCTION 14950b536 FUN_14950b536 body=192 status=ok
// SIG undefined FUN_14950b536(void)

longlong * FUN_14950b536(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  double *pdVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14950b5f6(param_2,*(undefined4 *)(param_1 + 0xb8));
  iVar5 = *(int *)(param_1 + 0xb8);
  if ((longlong)iVar5 != 0) {
    lVar7 = *(longlong *)(param_1 + 0xb0);
    lVar13 = 0;
    do {
      pdVar8 = *(double **)(lVar7 + 0x10 + lVar13);
      dVar2 = *pdVar8;
      dVar3 = *(double *)(param_1 + 0x168);
      dVar4 = *(double *)(param_1 + 0x170);
      iVar6 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
        FUN_1492e4a48(param_2,iVar6);
      }
      lVar9 = *param_2;
      *(double *)(lVar9 + (longlong)iVar6 * 0x18) = dVar2 + dVar3 + dVar4;
      uVar10 = *(undefined4 *)((longlong)pdVar8 + 100);
      uVar11 = *(undefined4 *)(pdVar8 + 0xd);
      uVar12 = *(undefined4 *)((longlong)pdVar8 + 0x6c);
      puVar1 = (undefined4 *)(lVar9 + 8 + (longlong)iVar6 * 0x18);
      *puVar1 = *(undefined4 *)(pdVar8 + 0xc);
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      lVar13 = lVar13 + 0x28;
    } while ((longlong)iVar5 * 0x28 != lVar13);
  }
  return param_2;
}



// FUNCTION 14950b5f6 FUN_14950b5f6 body=41 status=ok
// SIG undefined FUN_14950b5f6(void)

void FUN_14950b5f6(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14951ef9a();
  return;
}



// FUNCTION 14950b620 FUN_14950b620 body=855 status=ok
// SIG undefined FUN_14950b620(void)

undefined8 FUN_14950b620(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x68) == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc1e3cc) && (FUN_144b3d300(&DAT_14cc1e3cc), DAT_14cc1e3cc == -1)) {
      FUN_1446ddc76(&DAT_14cc1e3c4,"LiveLinkSubject_InvalidStatFrame",1);
      _Init_thread_footer(&DAT_14cc1e3cc);
    }
    FUN_1400021e4(param_1 + 0x138,local_30);
LAB_14950b6ec:
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x10);
    if ((((lVar3 != 0) && (lVar2 = FUN_1411f0380(), lVar2 != 0)) &&
        (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30 && (lVar3 = *(longlong *)(param_1 + 0x10), lVar3 != 0)))) {
      lVar2 = FUN_1411f0380();
      if ((lVar2 == 0) ||
         ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
           lVar2 + 0x30)))) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x10);
      }
      plVar5 = (longlong *)plVar6[0x22];
      if (plVar5 == (longlong *)0x0) {
        (**(code **)(*plVar6 + 1000))(plVar6);
        plVar5 = (longlong *)plVar6[0x22];
      }
      lVar3 = (**(code **)(*plVar5 + 0x2a8))();
      lVar2 = FUN_1492dc4d4(param_2);
      if (lVar3 == lVar2) {
        local_48 = *(longlong *)(param_1 + 0x10);
        if ((local_48 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        cVar1 = FUN_1492dc448(&local_48,param_2);
        uVar4 = 1;
        if (cVar1 != '\0') goto LAB_14950b6f8;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cc1e3e4) &&
           (FUN_144b3d300(&DAT_14cc1e3e4), DAT_14cc1e3e4 == -1)) {
          FUN_1446ddc76(&DAT_14cc1e3dc,"LiveLinkSubject_UnsupportedFrameData",1);
          _Init_thread_footer(&DAT_14cc1e3e4);
        }
        lVar3 = *(longlong *)(param_1 + 0x10);
        if ((((lVar3 == 0) || (lVar2 = FUN_1411f0380(), lVar2 == 0)) ||
            (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
            lVar2 + 0x30)) {
          lVar3 = 0;
        }
        else {
          lVar3 = *(longlong *)(param_1 + 0x10);
        }
        local_40[0] = *(longlong *)(lVar3 + 0x18);
        FUN_1400021e4(local_40,local_30);
      }
      else {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cc1e3d8) &&
           (FUN_144b3d300(&DAT_14cc1e3d8), DAT_14cc1e3d8 == -1)) {
          FUN_1446ddc76(&DAT_14cc1e3d0,"LiveLinkSubject_IncompatibleRoles",1);
          _Init_thread_footer(&DAT_14cc1e3d8);
        }
        lVar3 = *(longlong *)(param_1 + 0x10);
        if (((lVar3 == 0) || (lVar2 = FUN_1411f0380(), lVar2 == 0)) ||
           ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38) ||
            (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
             lVar2 + 0x30)))) {
          lVar3 = 0;
        }
        else {
          lVar3 = *(longlong *)(param_1 + 0x10);
        }
        local_40[0] = *(longlong *)(lVar3 + 0x18);
        FUN_1400021e4(local_40,local_30);
        FUN_1400021e4(param_1 + 0x138,local_40);
        if (local_40[0] != 0) {
          FUN_1400020a8();
        }
      }
      goto LAB_14950b6ec;
    }
  }
  uVar4 = 0;
LAB_14950b6f8:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14950b978 FUN_14950b978 body=253 status=ok
// SIG undefined FUN_14950b978(void)

void FUN_14950b978(longlong param_1,double *param_2)

{
  double dVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x158) == '\x01') {
    dVar1 = ((DAT_14c866ff8 - (double)*(float *)(param_1 + 0x160)) -
            (double)*(float *)(param_1 + 0x15c)) - *(double *)(param_1 + 0x168);
    if (*param_2 <= dVar1 && dVar1 != *param_2) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cc1e3f0) {
        FUN_144b3d300(&DAT_14cc1e3f0);
        if (DAT_14cc1e3f0 == -1) {
          FUN_1446ddc76(&DAT_14cc1e3e8,"LiveLinkSubject_InvalidWorldTIme",1);
          _Init_thread_footer(&DAT_14cc1e3f0);
        }
      }
      FUN_1400021e4(param_1 + 0x138,local_30);
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_14950cac4(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950ba76 FUN_14950ba76 body=1615 status=ok
// SIG undefined FUN_14950ba76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14950ba76(longlong param_1,int *param_2,double *param_3)

{
  longlong lVar1;
  double *pdVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auStack_88 [32];
  int local_68;
  float local_64;
  longlong local_60 [2];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_2 < 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc1e408) && (FUN_144b3d300(&DAT_14cc1e408), DAT_14cc1e408 == -1)) {
      FUN_1446ddc76(&DAT_14cc1e400,"LiveLinkSubject_NoSceneTime",1);
      _Init_thread_footer(&DAT_14cc1e408);
    }
    FUN_1400021e4(param_1 + 0x138,local_60);
    if (local_60[0] != 0) {
      FUN_1400020a8();
    }
    uVar9 = 0xffffffff;
    goto LAB_14950be80;
  }
  if ((DAT_14c846568 == '\x01') && (*(char *)(param_1 + 400) == '\x01')) {
    iVar4 = 0;
    fVar22 = 0.0;
    if (*(char *)(param_1 + 0x184) == '\x01') {
      dVar17 = ((double)*(int *)(param_1 + 0x1e0) * *(double *)(param_1 + 0x1a0)) /
               (double)*(int *)(param_1 + 0x1e4);
      auVar19._8_8_ = 0;
      auVar19._0_8_ = dVar17;
      auVar19 = roundpd(auVar19,auVar19,1);
      dVar18 = auVar19._0_8_;
      dVar17 = dVar17 - dVar18;
      if (2147483647.0 <= dVar18) {
        dVar18 = 2147483647.0;
      }
      if (dVar18 <= -2147483648.0) {
        dVar18 = -2147483648.0;
      }
      iVar4 = (int)dVar17;
      fVar15 = (float)dVar17 - (float)iVar4;
      iVar4 = (int)dVar18 + iVar4;
      fVar22 = fVar15;
      if (0.99999994 <= fVar15) {
        fVar22 = 0.99999994;
      }
      fVar22 = (float)(~-(uint)(0.0 < fVar15) & (uint)fVar15 | (uint)fVar22 & -(uint)(0.0 < fVar15))
               + 0.5 + -0.5;
      if (0.99999994 <= fVar22) {
        fVar22 = 0.99999994;
      }
      if (fVar22 <= 0.0) {
        fVar22 = 0.0;
      }
    }
    FUN_144a808d5(&local_68,_DAT_14c846558,DAT_14c846560,*(undefined8 *)(param_1 + 0x1e0));
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (double)*(float *)(param_1 + 0x198);
    auVar19 = roundpd(auVar20,auVar20,1);
    dVar18 = auVar19._0_8_;
    dVar17 = (double)*(float *)(param_1 + 0x198) - dVar18;
    if (2147483647.0 <= dVar18) {
      dVar18 = 2147483647.0;
    }
    if (dVar18 <= -2147483648.0) {
      dVar18 = -2147483648.0;
    }
    fVar15 = (float)dVar17;
    fVar16 = 0.99999994;
    if (0.99999994 <= fVar15) {
      fVar15 = fVar16;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    fVar15 = fVar15 + 0.5 + -0.5;
    if (0.99999994 <= fVar15) {
      fVar15 = fVar16;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    local_64 = local_64 - fVar15;
    auVar19 = roundps(ZEXT416((uint)local_64),ZEXT416((uint)local_64),1);
    fVar15 = (local_64 - auVar19._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar15) {
      fVar15 = fVar16;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    auVar20 = roundps(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15),1);
    fVar15 = (fVar15 - auVar20._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar15) {
      fVar15 = 0.99999994;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    fVar15 = fVar15 - fVar22;
    auVar21 = roundps(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15),1);
    fVar22 = (fVar15 - auVar21._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar22) {
      fVar22 = 0.99999994;
    }
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    if ((float)param_2[1] + (float)*param_2 <
        fVar22 + (float)((((local_68 - (iVar4 + *(int *)(param_1 + 0x194))) + (int)auVar19._0_4_ +
                          (int)auVar20._0_4_) - (int)dVar18) + (int)auVar21._0_4_)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc1e414) && (FUN_144b3d300(&DAT_14cc1e414), DAT_14cc1e414 == -1))
      {
        FUN_1446ddc76(&DAT_14cc1e40c,"LiveLinkSubject_InvalidTC",1);
        _Init_thread_footer(&DAT_14cc1e414);
      }
      FUN_1400021e4(param_1 + 0x138,local_60);
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (*(char *)(param_1 + 0x178) == '\x01') {
    uVar6 = *(uint *)(param_1 + 0xb8);
    uVar9 = (ulonglong)uVar6;
    lVar10 = uVar9 * 0x28 + 0x38;
    uVar5 = uVar9 + 1;
    uVar14 = uVar6;
    do {
      uVar12 = uVar14;
      if ((int)uVar12 < 1) {
        uVar9 = 0;
        goto LAB_14950be80;
      }
      lVar1 = *(longlong *)(param_1 + 0xb0);
      plVar11 = (longlong *)(lVar1 + -0x50 + lVar10);
      lVar10 = lVar10 + -0x28;
      uVar5 = uVar5 - 1;
      uVar14 = uVar12 - 1;
    } while (*param_2 <= *(int *)(*plVar11 + 0x60));
    if ((int)uVar6 <= (int)(uint)uVar5) goto LAB_14950be80;
    plVar11 = (longlong *)(lVar10 + lVar1);
    uVar9 = uVar5 & 0xffffffff;
    do {
      uVar14 = (uint)uVar9;
      if (*param_2 != *(int *)(*plVar11 + 0x60)) break;
      uVar13 = (uint)uVar9 + 1;
      uVar9 = (ulonglong)uVar13;
      plVar11 = plVar11 + 5;
      uVar14 = uVar6;
    } while ((int)uVar13 < (int)uVar6);
    lVar10 = (longlong)(int)uVar14;
    uVar6 = uVar12 & 0x7fffffff;
    if (lVar10 < (longlong)(ulonglong)(uVar12 & 0x7fffffff)) {
      uVar6 = uVar14;
    }
    uVar9 = (ulonglong)(uVar14 + 1);
    puVar8 = (undefined8 *)(lVar1 + lVar10 * 0x28 + -0x18);
    do {
      if (lVar10 <= (longlong)(ulonglong)((uint)uVar5 & 0x7fffffff)) {
        uVar9 = (ulonglong)uVar6;
        goto LAB_14950be80;
      }
      lVar10 = lVar10 + -1;
      pdVar2 = (double *)*puVar8;
      uVar9 = (ulonglong)((int)uVar9 - 1);
      puVar8 = puVar8 + -5;
    } while (*param_3 < *pdVar2);
    if (1e-08 < ABS(*pdVar2 - *param_3)) goto LAB_14950be80;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc1e420) && (FUN_144b3d300(&DAT_14cc1e420), DAT_14cc1e420 == -1)) {
      FUN_1446ddc76(&DAT_14cc1e418,"LiveLinkSubject_SameWorldSceneTime",1);
      puVar7 = &DAT_14cc1e420;
      goto LAB_14950c0bc;
    }
  }
  else {
    lVar10 = *(longlong *)(param_2 + 2);
    fVar22 = ((float)((lVar10 >> 0x20) * (longlong)(int)*(undefined8 *)param_2) +
             (float)(int)((ulonglong)lVar10 >> 0x20) *
             (float)((ulonglong)*(undefined8 *)param_2 >> 0x20)) / (float)(int)lVar10;
    uVar6 = *(uint *)(param_1 + 0xb8);
    lVar10 = (ulonglong)uVar6 * 0x28 + -0x18;
    uVar5 = (ulonglong)uVar6;
    do {
      uVar9 = uVar5;
      if ((int)uVar9 < 1) {
        uVar9 = (ulonglong)((int)uVar6 >> 0x1f & uVar6);
        goto LAB_14950be80;
      }
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + lVar10);
      uVar3 = *(undefined8 *)(lVar1 + 0x60);
      lVar1 = *(longlong *)(lVar1 + 0x68);
      fVar15 = ((float)((lVar1 >> 0x20) * (longlong)(int)uVar3) +
               (float)(int)((ulonglong)lVar1 >> 0x20) * (float)((ulonglong)uVar3 >> 0x20)) /
               (float)(int)lVar1;
      lVar10 = lVar10 + -0x28;
      uVar5 = (ulonglong)((int)uVar9 - 1);
    } while (fVar22 < fVar15);
    if (1e-08 < ABS(fVar15 - fVar22)) goto LAB_14950be80;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc1e42c) && (FUN_144b3d300(&DAT_14cc1e42c), DAT_14cc1e42c == -1)) {
      FUN_1446ddc76(&DAT_14cc1e424,"LiveLinkSubject_SameSceneTime",1);
      puVar7 = &DAT_14cc1e42c;
LAB_14950c0bc:
      _Init_thread_footer(puVar7);
    }
  }
  FUN_1400021e4(param_1 + 0x138,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
LAB_14950be80:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14950c0c6 FUN_14950c0c6 body=117 status=ok
// SIG undefined FUN_14950c0c6(void)

ulonglong FUN_14950c0c6(longlong *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14951f00a(param_1,iVar1);
  }
  lVar2 = (ulonglong)param_3 * 0x28;
  memmove((void *)(*param_1 + lVar2 + 0x28),(void *)(*param_1 + lVar2),
          (ulonglong)(iVar1 - param_3) * 0x28);
  FUN_1468fdb70(lVar2 + *param_1,param_2);
  return (ulonglong)param_3;
}



// FUNCTION 14950c13c FUN_14950c13c body=2322 status=ok
// SIG undefined FUN_14950c13c(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14950c13c(longlong param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  int iVar28;
  int iVar29;
  undefined8 *puVar30;
  int iVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_3d8 [40];
  uint local_3b0;
  uint uStack_3ac;
  ulonglong local_3a8;
  ulonglong local_3a0;
  longlong local_398;
  longlong local_390;
  undefined4 local_388 [188];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  fVar37 = ((float)*(int *)(param_1 + 0x1e0) / (float)*(int *)(param_1 + 0x1e4)) /
           ((float)*(int *)(param_1 + 0x188) / (float)*(int *)(param_1 + 0x18c));
  lVar17 = *(longlong *)(param_1 + 0xb0);
  plVar16 = (longlong *)(lVar17 + (ulonglong)param_2 * 0x28 + 0x10);
  iVar1 = *(int *)(*plVar16 + 0x60);
  uVar18 = param_2;
  do {
    if (iVar1 != *(int *)(*(longlong *)(lVar17 + 0x10 + (ulonglong)uVar18 * 0x28) + 0x60))
    goto LAB_14950c1ed;
    bVar34 = 0 < (int)uVar18;
    uVar18 = uVar18 - 1;
  } while (bVar34);
  uVar18 = 0xffffffff;
LAB_14950c1ed:
  uVar2 = *(uint *)(param_1 + 0xb8);
  uVar20 = uVar2 - 1;
  uVar5 = uVar18 + 1;
  if ((int)uVar20 <= (int)(uVar18 + 1)) {
    uVar5 = uVar20;
  }
  uVar25 = 0;
  if (0 < (int)uVar5) {
    uVar25 = (ulonglong)uVar5;
  }
  uVar18 = param_2;
  if ((int)param_2 < (int)uVar2) {
    do {
      uVar18 = param_2;
      if (iVar1 != *(int *)(*plVar16 + 0x60)) break;
      param_2 = param_2 + 1;
      plVar16 = plVar16 + 5;
      uVar18 = uVar2;
    } while (uVar2 != param_2);
  }
  if ((int)uVar18 < (int)uVar20) {
    uVar20 = uVar18;
  }
  iVar28 = (int)uVar25;
  uVar21 = (ulonglong)uVar20;
  if ((int)uVar20 < iVar28) {
    uVar21 = uVar25;
  }
  if (iVar28 < (int)uVar20) {
    uVar18 = (uint)uVar21 - iVar28;
    local_3b0 = uVar18 + 1;
    if (0 < (int)uVar18) {
      lVar17 = lVar17 + uVar25 * 0x28;
      uStack_3ac = (uint)uVar21;
      local_3a8 = (ulonglong)uVar18;
      local_3a0 = uVar25;
      memset(local_388,0,0x2f0);
      local_390 = lVar17 + -0x28 + (ulonglong)local_3b0 * 0x28;
      local_398 = lVar17;
      fVar35 = logf((float)(int)local_3b0);
      local_388[0] = (int)(longlong)(fVar35 + fVar35);
      plVar16 = &local_398;
      do {
        puVar24 = (undefined8 *)*plVar16;
        puVar14 = (undefined8 *)plVar16[1];
        iVar28 = (int)plVar16[2];
        iVar31 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar24) >> 3) * -0x33333333;
        uVar18 = iVar31 + 1;
        puVar26 = puVar14;
        puVar33 = puVar24;
        if (iVar28 != 0) {
LAB_14950c2e0:
          if (8 < (int)uVar18) {
            uVar25 = (ulonglong)(uVar18 >> 1);
            uVar3 = puVar24[uVar25 * 5 + 4];
            uVar6 = puVar24[uVar25 * 5];
            uVar7 = (puVar24 + uVar25 * 5)[1];
            uVar8 = puVar24[uVar25 * 5 + 2];
            uVar9 = (puVar24 + uVar25 * 5 + 2)[1];
            puVar24[uVar25 * 5 + 4] = puVar24[4];
            uVar10 = *puVar24;
            uVar11 = puVar24[1];
            uVar12 = puVar24[3];
            puVar24[uVar25 * 5 + 2] = puVar24[2];
            (puVar24 + uVar25 * 5 + 2)[1] = uVar12;
            puVar24[uVar25 * 5] = uVar10;
            (puVar24 + uVar25 * 5)[1] = uVar11;
            puVar24[4] = uVar3;
            puVar24[2] = uVar8;
            puVar24[3] = uVar9;
            *puVar24 = uVar6;
            puVar24[1] = uVar7;
            puVar30 = puVar26 + 5;
            puVar19 = puVar24;
            do {
              puVar13 = puVar19 + 5;
              puVar27 = puVar19 + 5;
              do {
                puVar19 = puVar27;
                puVar32 = puVar13;
                if (puVar26 < puVar19) break;
                puVar13 = puVar32 + 5;
                puVar27 = puVar19 + 5;
              } while (*(double *)puVar19[2] < *(double *)puVar24[2] ||
                       *(double *)puVar19[2] == *(double *)puVar24[2]);
              puVar13 = puVar30 + -10;
              do {
                puVar27 = puVar30;
                puVar23 = puVar13;
                puVar30 = puVar27 + -5;
                if (puVar30 <= puVar24) break;
                puVar13 = puVar23 + -5;
              } while (*(double *)puVar24[2] < *(double *)puVar27[-3] ||
                       *(double *)puVar24[2] == *(double *)puVar27[-3]);
              if (puVar30 < puVar19) goto LAB_14950c430;
              uVar3 = puVar19[4];
              uVar6 = *puVar19;
              uVar7 = puVar19[1];
              uVar8 = puVar19[2];
              uVar9 = puVar19[3];
              puVar19[4] = puVar27[-1];
              uVar10 = *puVar30;
              uVar11 = puVar27[-4];
              uVar12 = puVar27[-2];
              puVar19[2] = puVar27[-3];
              puVar19[3] = uVar12;
              *puVar19 = uVar10;
              puVar19[1] = uVar11;
              puVar27[-1] = uVar3;
              puVar27[-3] = uVar8;
              puVar27[-2] = uVar9;
              *puVar30 = uVar6;
              puVar27[-4] = uVar7;
            } while( true );
          }
          for (; puVar33 = puVar24, puVar14 = puVar24, puVar24 < puVar26; puVar26 = puVar26 + -5) {
            while (puVar30 = puVar33, puVar14 = puVar14 + 5, puVar14 <= puVar26) {
              puVar33 = puVar14;
              if (*(double *)puVar14[2] < *(double *)puVar30[2] ||
                  *(double *)puVar14[2] == *(double *)puVar30[2]) {
                puVar33 = puVar30;
              }
            }
            local_78 = puVar30[4];
            local_98 = *puVar30;
            uStack_90 = puVar30[1];
            local_88 = puVar30[2];
            uStack_80 = puVar30[3];
            puVar30[4] = puVar26[4];
            uVar3 = *puVar26;
            uVar6 = puVar26[1];
            uVar7 = puVar26[3];
            puVar30[2] = puVar26[2];
            puVar30[3] = uVar7;
            *puVar30 = uVar3;
            puVar30[1] = uVar6;
            puVar26[4] = local_78;
            puVar26[2] = local_88;
            puVar26[3] = uStack_80;
            *puVar26 = local_98;
            puVar26[1] = uStack_90;
          }
          goto LAB_14950c8d9;
        }
LAB_14950c526:
        if (uVar18 != 0) {
          iVar28 = (iVar31 - (iVar31 + -1 >> 0x1f)) + -1 >> 1;
          iVar31 = iVar28;
joined_r0x00014950c54c:
          do {
            iVar29 = iVar28 * 2 + 1;
            if (iVar29 < (int)uVar18) {
              iVar22 = iVar28 * 2 + 2;
              if ((iVar22 < (int)uVar18) &&
                 (*(double *)puVar24[(longlong)iVar29 * 5 + 2] <
                  *(double *)puVar24[(longlong)iVar22 * 5 + 2] ||
                  *(double *)puVar24[(longlong)iVar29 * 5 + 2] ==
                  *(double *)puVar24[(longlong)iVar22 * 5 + 2])) {
                iVar29 = iVar22;
              }
              if (*(double *)puVar24[(longlong)iVar28 * 5 + 2] <=
                  *(double *)puVar24[(longlong)iVar29 * 5 + 2] &&
                  *(double *)puVar24[(longlong)iVar29 * 5 + 2] !=
                  *(double *)puVar24[(longlong)iVar28 * 5 + 2]) {
                puVar26 = puVar24 + (longlong)iVar28 * 5;
                puVar14 = puVar24 + (longlong)iVar29 * 5;
                local_78 = puVar26[4];
                local_98 = *puVar26;
                uStack_90 = puVar26[1];
                local_88 = puVar26[2];
                uStack_80 = puVar26[3];
                puVar26[4] = puVar14[4];
                uVar3 = *puVar14;
                uVar6 = puVar14[1];
                uVar7 = puVar14[3];
                puVar26[2] = puVar14[2];
                puVar26[3] = uVar7;
                *puVar26 = uVar3;
                puVar26[1] = uVar6;
                puVar14[4] = local_78;
                puVar14[2] = local_88;
                puVar14[3] = uStack_80;
                *puVar14 = local_98;
                puVar14[1] = uStack_90;
                iVar28 = iVar29;
                goto joined_r0x00014950c54c;
              }
            }
            bVar34 = iVar31 != 0;
            iVar28 = iVar31 + -1;
            iVar31 = iVar28;
          } while (bVar34);
          if (1 < (int)uVar18) {
            uVar25 = (ulonglong)uVar18 - 1;
            local_78 = puVar24[4];
            local_98 = *puVar24;
            uStack_90 = puVar24[1];
            local_88 = puVar24[2];
            uStack_80 = puVar24[3];
            puVar24[4] = puVar24[uVar25 * 5 + 4];
            uVar3 = puVar24[uVar25 * 5];
            uVar6 = (puVar24 + uVar25 * 5)[1];
            uVar7 = (puVar24 + uVar25 * 5 + 2)[1];
            puVar24[2] = puVar24[uVar25 * 5 + 2];
            puVar24[3] = uVar7;
            *puVar24 = uVar3;
            puVar24[1] = uVar6;
            puVar24[uVar25 * 5 + 4] = local_78;
            puVar24[uVar25 * 5 + 2] = local_88;
            (puVar24 + uVar25 * 5 + 2)[1] = uStack_80;
            puVar24[uVar25 * 5] = local_98;
            (puVar24 + uVar25 * 5)[1] = uStack_90;
            if (uVar18 != 2) {
              do {
                iVar28 = 0;
                iVar29 = 1;
                iVar31 = 0;
                do {
                  iVar28 = iVar28 + 2;
                  iVar22 = iVar29;
                  if (((longlong)iVar28 < (longlong)uVar25) &&
                     (*(double *)puVar24[(longlong)iVar29 * 5 + 2] <
                      *(double *)puVar24[(longlong)iVar28 * 5 + 2] ||
                      *(double *)puVar24[(longlong)iVar29 * 5 + 2] ==
                      *(double *)puVar24[(longlong)iVar28 * 5 + 2])) {
                    iVar22 = iVar28;
                  }
                  if (*(double *)puVar24[(longlong)iVar22 * 5 + 2] <
                      *(double *)puVar24[(longlong)iVar31 * 5 + 2] ||
                      *(double *)puVar24[(longlong)iVar22 * 5 + 2] ==
                      *(double *)puVar24[(longlong)iVar31 * 5 + 2]) break;
                  puVar26 = puVar24 + (longlong)iVar31 * 5;
                  puVar14 = puVar24 + (longlong)iVar22 * 5;
                  uVar3 = puVar26[4];
                  uVar6 = *puVar26;
                  uVar7 = puVar26[1];
                  uVar8 = puVar26[2];
                  uVar9 = puVar26[3];
                  puVar26[4] = puVar14[4];
                  uVar10 = *puVar14;
                  uVar11 = puVar14[1];
                  uVar12 = puVar14[3];
                  puVar26[2] = puVar14[2];
                  puVar26[3] = uVar12;
                  *puVar26 = uVar10;
                  puVar26[1] = uVar11;
                  puVar14[4] = uVar3;
                  puVar14[2] = uVar8;
                  puVar14[3] = uVar9;
                  *puVar14 = uVar6;
                  puVar14[1] = uVar7;
                  iVar28 = iVar22 * 2;
                  iVar29 = iVar22 * 2 + 1;
                  iVar31 = iVar22;
                } while ((longlong)iVar29 < (longlong)uVar25);
                uVar21 = uVar25 - 1;
                local_78 = puVar24[4];
                local_98 = *puVar24;
                uStack_90 = puVar24[1];
                local_88 = puVar24[2];
                uStack_80 = puVar24[3];
                puVar24[4] = puVar24[uVar21 * 5 + 4];
                uVar3 = puVar24[uVar21 * 5];
                uVar6 = (puVar24 + uVar21 * 5)[1];
                uVar7 = (puVar24 + uVar21 * 5 + 2)[1];
                puVar24[2] = puVar24[uVar21 * 5 + 2];
                puVar24[3] = uVar7;
                *puVar24 = uVar3;
                puVar24[1] = uVar6;
                puVar24[uVar21 * 5 + 4] = local_78;
                puVar24[uVar21 * 5 + 2] = local_88;
                (puVar24 + uVar21 * 5 + 2)[1] = uStack_80;
                puVar24[uVar21 * 5] = local_98;
                (puVar24 + uVar21 * 5)[1] = uStack_90;
                bVar34 = 2 < uVar25;
                uVar25 = uVar21;
              } while (bVar34);
            }
          }
        }
LAB_14950c8d9:
        plVar16 = plVar16 + -3;
      } while (&local_398 <= plVar16);
      uVar21 = (ulonglong)uStack_3ac;
      uVar18 = (uint)local_3a8;
      uVar25 = local_3a0;
    }
    if ((int)(1.0 / fVar37) <= (int)uVar18) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc1e438) && (FUN_144b3d300(&DAT_14cc1e438), DAT_14cc1e438 == -1))
      {
        FUN_1446ddc76(&DAT_14cc1e430,"LiveLinkSubject_TooManyFrameForGenerateSubFrame",1);
        _Init_thread_footer(&DAT_14cc1e438);
      }
      FUN_1400021e4(param_1 + 0x138,&local_398);
      if (local_398 != 0) {
        FUN_1400020a8();
      }
      fVar37 = 1.0 / (float)(int)local_3b0;
    }
    lVar15 = (uVar21 - uVar25) + 1;
    lVar17 = uVar25 * 0x28 + 0x10;
    fVar35 = 0.0;
    do {
      fVar36 = fVar35 + 0.5 + -0.5;
      if (0.99999994 <= fVar36) {
        fVar36 = 0.99999994;
      }
      if (fVar36 <= 0.0) {
        fVar36 = 0.0;
      }
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + lVar17);
      *(int *)(lVar4 + 0x60) = iVar1;
      *(float *)(lVar4 + 100) = fVar36;
      lVar17 = lVar17 + 0x28;
      lVar15 = lVar15 + -1;
      fVar35 = fVar37 + fVar35;
    } while (lVar15 != 0);
  }
  if ((local_70 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14950c430:
  local_78 = puVar24[4];
  local_98 = *puVar24;
  uStack_90 = puVar24[1];
  local_88 = puVar24[2];
  uStack_80 = puVar24[3];
  puVar24[4] = puVar27[-1];
  uVar3 = *puVar30;
  uVar6 = puVar27[-4];
  uVar7 = puVar27[-2];
  puVar24[2] = puVar27[-3];
  puVar24[3] = uVar7;
  *puVar24 = uVar3;
  puVar24[1] = uVar6;
  puVar27[-1] = local_78;
  puVar27[-3] = local_88;
  puVar27[-2] = uStack_80;
  *puVar30 = local_98;
  puVar27[-4] = uStack_90;
  iVar28 = iVar28 + -1;
  puVar27 = puVar27 + -10;
  if ((longlong)puVar23 - (longlong)puVar33 < (longlong)puVar14 - (longlong)puVar32) {
    if (puVar19 < puVar26) {
      *plVar16 = (longlong)puVar19;
      plVar16[1] = (longlong)puVar26;
      *(int *)(plVar16 + 2) = iVar28;
      plVar16 = plVar16 + 3;
    }
    puVar32 = puVar24;
    puVar14 = puVar23;
    if (puVar30 <= puVar24 + 5) goto LAB_14950c8d9;
  }
  else {
    if (puVar24 + 5 < puVar30) {
      *plVar16 = (longlong)puVar24;
      plVar16[1] = (longlong)puVar27;
      *(int *)(plVar16 + 2) = iVar28;
      plVar16 = plVar16 + 3;
    }
    puVar24 = puVar19;
    puVar27 = puVar26;
    puVar14 = puVar26;
    if (puVar26 <= puVar19) goto LAB_14950c8d9;
  }
  iVar31 = (int)((ulonglong)((longlong)puVar14 - (longlong)puVar32) >> 3) * -0x33333333;
  uVar18 = iVar31 + 1;
  puVar26 = puVar27;
  puVar33 = puVar32;
  if (iVar28 == 0) goto LAB_14950c526;
  goto LAB_14950c2e0;
}



// FUNCTION 14950ca50 FUN_14950ca50 body=116 status=ok
// SIG undefined FUN_14950ca50(void)

void FUN_14950ca50(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 0x18);
    puVar4 = puVar5 + (longlong)*(int *)(param_1 + 0x20) * 2;
    do {
      plVar2 = (longlong *)*puVar5;
      plVar3 = (longlong *)puVar5[1];
      if (plVar3 == (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,param_2);
      }
      else {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        (**(code **)(*plVar2 + 8))(plVar2,param_2);
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
      puVar5 = puVar5 + 2;
    } while (puVar5 != puVar4);
  }
  return;
}



// FUNCTION 14950cac4 FUN_14950cac4 body=281 status=ok
// SIG undefined FUN_14950cac4(void)

uint FUN_14950cac4(longlong param_1,double *param_2)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *(uint *)(param_1 + 0xb8);
  uVar5 = (ulonglong)uVar2;
  uVar2 = (int)uVar2 >> 0x1f & uVar2;
  lVar3 = uVar5 * 0x28 + -0x18;
  do {
    uVar4 = (uint)uVar5;
    if ((int)uVar4 < 1) goto LAB_14950cb7e;
    dVar1 = **(double **)(*(longlong *)(param_1 + 0xb0) + lVar3);
    lVar3 = lVar3 + -0x28;
    uVar5 = (ulonglong)(uVar4 - 1);
  } while (*param_2 < dVar1);
  uVar2 = uVar4;
  if (ABS(dVar1 - *param_2) <= 1e-08) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc1e3fc) && (FUN_144b3d300(&DAT_14cc1e3fc), DAT_14cc1e3fc == -1)) {
      FUN_1446ddc76(&DAT_14cc1e3f4,"LiveLinkSubject_SameWorldTime",1);
      _Init_thread_footer(&DAT_14cc1e3fc);
    }
    FUN_1400021e4(param_1 + 0x138,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_14950cb7e:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14950cbde FUN_14950cbde body=456 status=ok
// SIG undefined FUN_14950cbde(void)

void FUN_14950cbde(longlong param_1,double param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar6 = (ulonglong)*(uint *)(param_1 + 0xb8);
  lVar3 = *(longlong *)(param_1 + 0xb0);
  lVar8 = lVar3 + uVar6 * 0x28;
  lVar10 = 0;
  do {
    if ((int)(*(uint *)(param_1 + 0xb8) + (int)lVar10) < 1) {
      uVar4 = *(undefined8 *)(lVar3 + 0x10);
      uVar7 = FUN_1492dc4d4();
      FUN_1494f6cb8(param_3 + 0x28,uVar7,uVar4);
      cVar5 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))(param_1 + 8);
      if (cVar5 == '\0') {
        return;
      }
      goto LAB_14950cca4;
    }
    dVar1 = **(double **)(lVar8 + -0x18);
    lVar10 = lVar10 + -1;
    lVar8 = lVar8 + -0x28;
  } while (param_2 < dVar1);
  if ((int)lVar10 == -1) {
    FUN_1492dbb32(param_3 + 0x28);
    cVar5 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))(param_1 + 8);
    if (cVar5 == '\0') {
      return;
    }
    if (1e-08 < ABS(dVar1 - param_2)) {
LAB_14950cca4:
      LOCK();
      *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + 1;
      UNLOCK();
    }
  }
  else {
    uVar9 = uVar6 + lVar10 + 1;
    dVar2 = **(double **)(lVar3 + 0x10 + (ulonglong)((uint)uVar9 & 0x7fffffff) * 0x28);
    uVar6 = uVar6 + lVar10;
    if ((float)((param_2 - dVar2) / (dVar2 - dVar1)) <= 0.5) {
      uVar6 = uVar9;
    }
    uVar4 = *(undefined8 *)(lVar3 + (uVar6 & 0xffffffff) * 0x28 + 0x10);
    uVar7 = FUN_1492dc4d4();
    FUN_1494f6cb8(param_3 + 0x28,uVar7,uVar4);
    cVar5 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))(param_1 + 8);
    if (cVar5 == '\0') {
      return;
    }
  }
  dVar1 = **(double **)
            (*(longlong *)(param_1 + 0xb0) + -0x18 + (longlong)*(int *)(param_1 + 0xb8) * 0x28);
  dVar2 = **(double **)(*(longlong *)(param_1 + 0xb0) + 0x10);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  *(float *)(param_1 + 0x1d8) = (float)(dVar1 - param_2);
  *(float *)(param_1 + 0x1dc) = (float)(param_2 - dVar2);
                    /* WARNING: Could not recover jumptable at 0x00014950cd11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  return;
}



// FUNCTION 14950cda6 FUN_14950cda6 body=190 status=ok
// SIG undefined FUN_14950cda6(void)

void FUN_14950cda6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined8 local_34;
  undefined8 local_2c;
  undefined2 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &local_34;
  local_2c = 0xffffffffffffffff;
  local_24 = 0;
  local_48 = param_3;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 8))
            (*(longlong **)(param_1 + 0x28),param_2,param_1 + 0x58,param_1 + 0xb0);
  cVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))(param_1 + 8);
  if (cVar1 != '\0') {
    lVar2 = 0x1d0;
    if ((local_24._1_1_ != '\0') || (lVar2 = 0x1cc, (char)local_24 == '\x01')) {
      LOCK();
      *(int *)(param_1 + lVar2) = *(int *)(param_1 + lVar2) + 1;
      UNLOCK();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
    *(undefined8 *)(param_1 + 0x1d8) = local_34;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950ce66 FUN_14950ce66 body=802 status=ok
// SIG undefined FUN_14950ce66(void)

void FUN_14950ce66(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  lVar9 = param_2[1];
  fVar4 = ((float)((lVar9 >> 0x20) * (longlong)(int)*param_2) +
          (float)(int)((ulonglong)lVar9 >> 0x20) * (float)((ulonglong)*param_2 >> 0x20)) /
          (float)(int)lVar9;
  uVar7 = (ulonglong)*(uint *)(param_1 + 0xb8);
  lVar1 = *(longlong *)(param_1 + 0xb0);
  lVar9 = lVar1 + uVar7 * 0x28;
  lVar11 = 0;
  do {
    if ((int)(*(uint *)(param_1 + 0xb8) + (int)lVar11) < 1) {
      uVar2 = *(undefined8 *)(lVar1 + 0x10);
      uVar8 = FUN_1492dc4d4();
      FUN_1494f6cb8(param_3 + 0x28,uVar8,uVar2);
      cVar6 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))(param_1 + 8);
      lVar9 = 0x1cc;
      if (cVar6 == '\0') {
        return;
      }
      goto LAB_14950cfbd;
    }
    uVar2 = *(undefined8 *)(*(longlong *)(lVar9 + -0x18) + 0x60);
    lVar3 = *(longlong *)(*(longlong *)(lVar9 + -0x18) + 0x68);
    fVar5 = ((float)((lVar3 >> 0x20) * (longlong)(int)uVar2) +
            (float)(int)((ulonglong)lVar3 >> 0x20) * (float)((ulonglong)uVar2 >> 0x20)) /
            (float)(int)lVar3;
    lVar11 = lVar11 + -1;
    lVar9 = lVar9 + -0x28;
  } while (fVar4 < fVar5);
  if ((int)lVar11 == -1) {
    FUN_1492dbb32(param_3 + 0x28);
    cVar6 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))(param_1 + 8);
    if (cVar6 == '\0') {
      return;
    }
    lVar9 = 0x1d0;
    if (1e-08 < ABS(fVar5 - fVar4)) {
LAB_14950cfbd:
      LOCK();
      *(int *)(param_1 + lVar9) = *(int *)(param_1 + lVar9) + 1;
      UNLOCK();
    }
  }
  else {
    uVar10 = uVar7 + lVar11 + 1;
    lVar9 = *(longlong *)(lVar1 + 0x10 + (ulonglong)((uint)uVar10 & 0x7fffffff) * 0x28);
    uVar2 = *(undefined8 *)(lVar9 + 0x60);
    lVar9 = *(longlong *)(lVar9 + 0x68);
    uVar7 = uVar7 + lVar11;
    if ((fVar4 - fVar5) /
        (((float)((lVar9 >> 0x20) * (longlong)(int)uVar2) +
         (float)(int)((ulonglong)lVar9 >> 0x20) * (float)((ulonglong)uVar2 >> 0x20)) /
         (float)(int)lVar9 - fVar5) <= 0.5) {
      uVar7 = uVar10;
    }
    uVar2 = *(undefined8 *)(lVar1 + (uVar7 & 0xffffffff) * 0x28 + 0x10);
    uVar8 = FUN_1492dc4d4();
    FUN_1494f6cb8(param_3 + 0x28,uVar8,uVar2);
    cVar6 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))(param_1 + 8);
    if (cVar6 == '\0') {
      return;
    }
  }
  lVar9 = *(longlong *)
           (*(longlong *)(param_1 + 0xb0) + -0x18 + (longlong)*(int *)(param_1 + 0xb8) * 0x28);
  uVar2 = *(undefined8 *)(lVar9 + 0x60);
  lVar9 = *(longlong *)(lVar9 + 0x68);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10);
  uVar8 = *(undefined8 *)(lVar1 + 0x60);
  lVar1 = *(longlong *)(lVar1 + 0x68);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  *(float *)(param_1 + 0x1d8) =
       ((float)((lVar9 >> 0x20) * (longlong)(int)uVar2) +
       (float)(int)((ulonglong)lVar9 >> 0x20) * (float)((ulonglong)uVar2 >> 0x20)) /
       (float)(int)lVar9 - fVar4;
  *(float *)(param_1 + 0x1dc) =
       fVar4 - ((float)((lVar1 >> 0x20) * (longlong)(int)uVar8) +
               (float)(int)((ulonglong)lVar1 >> 0x20) * (float)((ulonglong)uVar8 >> 0x20)) /
               (float)(int)lVar1;
                    /* WARNING: Could not recover jumptable at 0x00014950d0b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
  return;
}



// FUNCTION 14950d188 FUN_14950d188 body=1928 status=ok
// SIG undefined FUN_14950d188(void)

void FUN_14950d188(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined ***pppuVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined **local_80;
  longlong *local_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  undefined8 uStack_67;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x43));
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x28) == '\x02') {
      bVar12 = *(char *)(param_2 + 0x50) != (char)param_1[0x2f];
      bVar13 = *(char *)(param_2 + 0x5c) != *(char *)((longlong)param_1 + 0x184);
    }
    else {
      bVar12 = false;
      bVar13 = false;
    }
    if (((*(char *)(param_2 + 0x28) != (char)param_1[0x2a]) || (bVar12)) || (bVar13)) {
      iVar6 = *(int *)((longlong)param_1 + 0xbc);
      FUN_14951ef43(param_1[0x16],(int)param_1[0x17]);
      *(undefined4 *)(param_1 + 0x17) = 0;
      if ((iVar6 < 0) && (*(int *)((longlong)param_1 + 0xbc) != 0)) {
        FUN_14951ef6a(param_1 + 0x16);
      }
      while (lVar7 = *(longlong *)param_1[0x19], lVar7 != 0) {
        lVar8 = param_1[0x19];
        param_1[0x19] = lVar7;
        *(undefined4 *)(lVar7 + 8) = 0;
        if (lVar8 != 0) {
          FUN_1400020a8();
        }
      }
    }
    *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x28);
    plVar9 = (longlong *)(param_2 + 0x30);
    plVar10 = param_1 + 0x2b;
    for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
      *plVar10 = *plVar9;
      plVar9 = plVar9 + 1;
      plVar10 = plVar10 + 1;
    }
    iVar6 = 1;
    if (1 < *(int *)((longlong)param_1 + 0x1ac)) {
      iVar6 = *(int *)((longlong)param_1 + 0x1ac);
    }
    *(int *)((longlong)param_1 + 0x1ac) = iVar6;
    if ((((char)param_1[0x2f] == '\x01') &&
        ((double)(int)param_1[0x31] / (double)*(int *)((longlong)param_1 + 0x18c) <=
         (double)(int)param_1[0x3c] / (double)*(int *)((longlong)param_1 + 0x1e4))) &&
       ((*(undefined1 *)(param_1 + 0x2f) = 0,
        *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc1e45c && (FUN_144b3d300(&DAT_14cc1e45c), DAT_14cc1e45c == -1)))) {
      FUN_1446ddc76(&DAT_14cc1e454,"LiveLinkSubject_CantGenerateSubFrame",1);
      _Init_thread_footer(&DAT_14cc1e45c);
    }
  }
  if (param_3 != 0) {
    *(longlong *)(param_3 + 0x60) = param_1[0x3c];
    *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)(param_3 + 0x69);
    plVar9 = param_1 + 3;
    iVar6 = *(int *)((longlong)param_1 + 0x24);
    FUN_14951eefa(param_1[3],(int)param_1[4]);
    *(undefined4 *)(param_1 + 4) = 0;
    if ((iVar6 < 0) && (*(int *)((longlong)param_1 + 0x24) != 0)) {
      FUN_14951f09e(plVar9);
    }
    iVar6 = *(int *)(param_3 + 0x30);
    local_88 = param_3;
    if ((longlong)iVar6 != 0) {
      lVar7 = *(longlong *)(param_3 + 0x28);
      lVar8 = 0;
      do {
        plVar10 = *(longlong **)(lVar7 + lVar8);
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x2a8))(plVar10,&local_80);
          if (local_80 != (undefined **)0x0) {
            iVar4 = (int)param_1[4];
            *(uint *)(param_1 + 4) = iVar4 + 1U;
            if (*(uint *)((longlong)param_1 + 0x24) < iVar4 + 1U) {
              FUN_14951f0ce(plVar9,iVar4);
            }
            lVar11 = *plVar9;
            *(undefined ***)(lVar11 + (longlong)iVar4 * 0x10) = local_80;
            *(longlong **)(lVar11 + 8 + (longlong)iVar4 * 0x10) = local_78;
            if (local_78 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_78 + 1) = (int)local_78[1] + 1;
              UNLOCK();
            }
          }
          plVar10 = local_78;
          if (local_78 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_78 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_78)(local_78);
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
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar6 * 8 != lVar8);
    }
    param_1[9] = 0;
    plVar9 = (longlong *)param_1[10];
    if (plVar9 != (longlong *)0x0) {
      param_1[10] = 0;
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    lVar7 = local_88;
    plVar9 = *(longlong **)(local_88 + 0x50);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x2a8))(plVar9,&local_80);
      plVar9 = local_78;
      cVar5 = '\x01';
      if ((local_80 != (undefined **)0x0) && (*(char *)(*(longlong *)(lVar7 + 0x50) + 0x78) == '\0')
         ) {
        cVar5 = *(char *)((longlong)param_1 + 0x1ea);
      }
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_78 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      *(undefined1 *)((longlong)param_1 + 0x1ea) = 0;
      plVar9 = *(longlong **)(lVar7 + 0x50);
      if (cVar5 == '\0') {
        (**(code **)(*plVar9 + 0x2a8))(plVar9,&local_58);
      }
      else {
        (**(code **)(*plVar9 + 0x2a0))(plVar9,&local_58);
        if (local_58 != (longlong *)0x0) {
          *(undefined1 *)(*(longlong *)(lVar7 + 0x50) + 0x78) = 0;
          cVar5 = (**(code **)(**(longlong **)(lVar7 + 0x50) + 0x2c0))();
          if (cVar5 == '\0') {
            (**(code **)(*param_1 + 0x20))(param_1);
            if ((char)param_1[0x15] == '\x01') {
              FUN_1448eac94(param_1 + 0x10);
              *(undefined1 *)(param_1 + 0x15) = 0;
            }
          }
          else {
            local_80 = &PTR_FUN_149eacb10;
            local_78 = (longlong *)0x0;
            uStack_70 = 0;
            uStack_6f = 0;
            uStack_68 = 0;
            uStack_67 = 0;
            FUN_1492dba98(&local_80,param_1 + 0xb);
            (**(code **)(*local_58 + 8))(local_58,&local_80);
            cVar5 = (**(code **)(*param_1 + 0x40))(param_1);
            if (cVar5 != '\0') {
              (**(code **)(*local_58 + 8))(local_58,param_1 + 0x1b);
              (**(code **)(*local_58 + 0x10))(local_58,param_1 + 0x1b,param_1 + 0x20);
            }
            if ((longlong)(int)param_1[0x17] != 0) {
              lVar8 = param_1[0x16];
              lVar11 = (longlong)(int)param_1[0x17] * 0x28;
              do {
                (**(code **)(*local_58 + 0x10))(local_58,&local_80,lVar8);
                lVar8 = lVar8 + 0x28;
                lVar11 = lVar11 + -0x28;
              } while (lVar11 != 0);
            }
            pppuVar3 = (undefined ***)(param_1 + 0x10);
            if (&local_80 != pppuVar3) {
              if ((char)param_1[0x15] == '\x01') {
                FUN_1448eac94(pppuVar3);
              }
              FUN_1468fdb70(pppuVar3,&local_80);
              *(undefined1 *)(param_1 + 0x15) = 1;
            }
            (**(code **)(*param_1 + 0x80))(param_1,0);
            FUN_1448eac94(&local_80);
          }
        }
      }
      plVar9 = local_50;
      if ((longlong **)(param_1 + 9) != &local_58) {
        param_1[9] = (longlong)local_58;
        local_58 = (longlong *)0x0;
        plVar10 = (longlong *)param_1[10];
        if (local_50 != plVar10) {
          local_50 = (longlong *)0x0;
          param_1[10] = (longlong)plVar9;
          if (plVar10 != (longlong *)0x0) {
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
      }
      plVar9 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_50 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_50)(local_50);
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
    param_1[5] = 0;
    plVar9 = (longlong *)param_1[6];
    if (plVar9 != (longlong *)0x0) {
      param_1[6] = 0;
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    plVar9 = *(longlong **)(lVar7 + 0x38);
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x2a8))(plVar9,&local_80);
      plVar9 = local_78;
      if ((undefined ***)(param_1 + 5) != &local_80) {
        param_1[5] = (longlong)local_80;
        local_80 = (undefined **)0x0;
        plVar10 = (longlong *)param_1[6];
        if (local_78 != plVar10) {
          local_78 = (longlong *)0x0;
          param_1[6] = (longlong)plVar9;
          if (plVar10 != (longlong *)0x0) {
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
      }
      plVar9 = local_78;
      if (local_78 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_78 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_78)(local_78);
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
    plVar9 = param_1 + 7;
    iVar6 = *(int *)((longlong)param_1 + 0x44);
    FUN_145a4972a(param_1[7],(int)param_1[8]);
    *(undefined4 *)(param_1 + 8) = 0;
    if ((iVar6 < 0) && (*(int *)((longlong)param_1 + 0x44) != 0)) {
      FUN_1492e4adc(plVar9,0);
    }
    iVar6 = *(int *)(lVar7 + 0x48);
    if ((longlong)iVar6 != 0) {
      lVar7 = *(longlong *)(lVar7 + 0x40);
      lVar8 = 0;
      do {
        plVar10 = *(longlong **)(lVar7 + lVar8);
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x2b0))(plVar10,&local_80);
          if (local_80 != (undefined **)0x0) {
            iVar4 = (int)param_1[8];
            *(uint *)(param_1 + 8) = iVar4 + 1U;
            if (*(uint *)((longlong)param_1 + 0x44) < iVar4 + 1U) {
              FUN_1492e4b3c(plVar9,iVar4);
            }
            lVar11 = *plVar9;
            *(undefined ***)(lVar11 + (longlong)iVar4 * 0x10) = local_80;
            *(longlong **)(lVar11 + 8 + (longlong)iVar4 * 0x10) = local_78;
            if (local_78 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_78 + 1) = (int)local_78[1] + 1;
              UNLOCK();
            }
          }
          plVar10 = local_78;
          if (local_78 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_78 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_78)(local_78);
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
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar6 * 8 != lVar8);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x43));
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14950d912 FUN_14950d912 body=32 status=ok
// SIG undefined FUN_14950d912(void)

undefined8 FUN_14950d912(longlong param_1,undefined8 param_2)

{
  FUN_145715fae(param_2,param_1 + 0x130);
  return param_2;
}



// FUNCTION 14950d932 FUN_14950d932 body=112 status=ok
// SIG undefined FUN_14950d932(void)

ulonglong FUN_14950d932(longlong param_1)

{
  double dVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  dVar1 = DAT_14c866ff8 - *(double *)(param_1 + 0x1b8);
  plVar2 = (longlong *)FUN_145988e1c();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  if (dVar1 < *(double *)(lVar3 + 0xb8)) {
    uVar4 = (**(code **)(*(longlong *)(param_1 + -8) + 0x40))((longlong *)(param_1 + -8));
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 14950dc6c FUN_14950dc6c body=620 status=ok
// SIG undefined FUN_14950dc6c(void)

longlong * FUN_14950dc6c(longlong param_1,longlong *param_2)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  double *pdVar6;
  double dVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < *(int *)(param_1 + 0xb0)) {
    if (*(char *)(param_1 + 0x17c) == '\x01') {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x10);
      dVar13 = ((double)*(int *)(lVar5 + 0x68) * *(double *)(param_1 + 0x198)) /
               (double)*(int *)(lVar5 + 0x6c);
      auVar15._8_8_ = 0;
      auVar15._0_8_ = dVar13;
      auVar15 = roundpd(auVar15,auVar15,1);
      dVar14 = auVar15._0_8_;
      dVar13 = dVar13 - dVar14;
      if (2147483647.0 <= dVar14) {
        dVar14 = 2147483647.0;
      }
      if (dVar14 <= -2147483648.0) {
        dVar14 = -2147483648.0;
      }
      iVar9 = (int)dVar13;
      fVar12 = (float)dVar13 - (float)iVar9;
      iVar9 = (int)dVar14 + iVar9;
      fVar16 = fVar12;
      if (0.99999994 <= fVar12) {
        fVar16 = 0.99999994;
      }
      fVar16 = (float)(~-(uint)(0.0 < fVar12) & (uint)fVar12 | (uint)fVar16 & -(uint)(0.0 < fVar12))
               + 0.5 + -0.5;
      if (0.99999994 <= fVar16) {
        fVar16 = 0.99999994;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
    }
    else {
      fVar16 = 0.0;
      iVar9 = 0;
    }
    FUN_14951f154(param_2);
    iVar2 = *(int *)(param_1 + 0xb0);
    if ((longlong)iVar2 != 0) {
      lVar5 = *(longlong *)(param_1 + 0xa8);
      lVar11 = 0;
      do {
        pdVar6 = *(double **)(lVar5 + 0x10 + lVar11);
        dVar13 = *pdVar6;
        dVar14 = *(double *)(param_1 + 0x160);
        dVar1 = *(double *)(param_1 + 0x168);
        fVar17 = *(float *)((longlong)pdVar6 + 100) + fVar16;
        iVar3 = *(int *)(pdVar6 + 0xc);
        auVar15 = roundss(ZEXT816(0),ZEXT416((uint)fVar17),9);
        fVar12 = (fVar17 - auVar15._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar12) {
          fVar12 = 0.99999994;
        }
        dVar7 = pdVar6[0xd];
        iVar4 = (int)param_2[1];
        lVar10 = (longlong)iVar4;
        *(uint *)(param_2 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
          FUN_14951f1bc(param_2,iVar4);
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        lVar8 = *param_2;
        *(double *)(lVar8 + lVar10 * 0x18) = dVar13 + dVar14 + dVar1;
        *(int *)(lVar8 + 8 + lVar10 * 0x18) =
             ((int)ROUND(fVar17 + fVar17 + -0.5) >> 1) + iVar3 + iVar9;
        *(float *)(lVar8 + 0xc + lVar10 * 0x18) = fVar12;
        *(double *)(lVar8 + 0x10 + lVar10 * 0x18) = dVar7;
        lVar11 = lVar11 + 0x28;
      } while ((longlong)iVar2 * 0x28 != lVar11);
    }
  }
  return param_2;
}



// FUNCTION 14950dee8 FUN_14950dee8 body=46 status=ok
// SIG undefined FUN_14950dee8(void)

void FUN_14950dee8(longlong *param_1,char param_2)

{
  if ((param_2 != '\0') && ((char)param_1[0x38] == '\0')) {
    (**(code **)(*param_1 + 0x70))(param_1);
  }
  *(char *)(param_1 + 0x38) = param_2;
  return;
}



// FUNCTION 14950df2e FUN_14950df2e body=56 status=ok
// SIG undefined FUN_14950df2e(void)

void FUN_14950df2e(longlong param_1,undefined8 *param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e8));
  *param_2 = *(undefined8 *)(param_1 + 0x1d0);
                    /* WARNING: Could not recover jumptable at 0x00014950df5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e8));
  return;
}



// FUNCTION 14950df66 FUN_14950df66 body=76 status=ok
// SIG undefined FUN_14950df66(void)

void FUN_14950df66(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e8));
  LOCK();
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  UNLOCK();
  LOCK();
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  UNLOCK();
  *(undefined8 *)(param_1 + 0x1d0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014950dfab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e8));
  return;
}



// FUNCTION 14950dfbc FUN_14950dfbc body=305 status=ok
// SIG undefined FUN_14950dfbc(void)

undefined8 * FUN_14950dfbc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  double dVar7;
  undefined1 auStack_58 [32];
  uint local_38;
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 < 1) {
    *param_2 = 0;
  }
  else {
    if ((iVar1 != 1) && (*(int *)(param_1 + 0x48) != 2)) {
      QueryPerformanceCounter(&local_30);
      dVar7 = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
      uVar2 = *(uint *)(param_1 + 0x88);
      lVar5 = (ulonglong)uVar2 * 0x18;
      uVar6 = uVar2;
      do {
        local_38 = uVar6;
        lVar5 = lVar5 + -0x18;
        if ((int)local_38 < 1) {
          local_38 = 1;
          uVar6 = 0;
          goto LAB_14950e0da;
        }
        uVar6 = local_38 - 1;
      } while (dVar7 < *(double *)(*(longlong *)(param_1 + 0x80) + lVar5));
      if ((int)uVar2 <= (int)local_38) {
        uVar6 = uVar2 - 2;
        local_38 = uVar2 - 1;
      }
LAB_14950e0da:
      FUN_14950e0ee(param_1,param_2,dVar7,uVar6);
      goto LAB_14950e039;
    }
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 8 + (ulonglong)(iVar1 - 1) * 0x18);
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x10 + (ulonglong)(iVar1 - 1) * 0x18);
    if (*(char *)(param_1 + 0x4c) != '\x01') {
      *param_2 = uVar3;
      param_2[1] = uVar4;
      goto LAB_14950e039;
    }
    FUN_144a808d5(param_2,uVar3,uVar4,*(undefined8 *)(param_1 + 0x50));
  }
  param_2[1] = *(undefined8 *)(param_1 + 0x50);
LAB_14950e039:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950e0ee FUN_14950e0ee body=493 status=ok
// SIG undefined FUN_14950e0ee(void)

int * FUN_14950e0ee(longlong param_1,int *param_2,double param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_78 [32];
  int local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x80);
  dVar9 = *(double *)(lVar2 + (longlong)param_4 * 0x18);
  lVar5 = (longlong)param_5;
  dVar9 = (param_3 - dVar9) / (*(double *)(lVar2 + lVar5 * 0x18) - dVar9);
  if (*(int *)(param_1 + 0x48) == 0) {
    if ((ABS(dVar9 + -1.0) <= 1e-08) || (ABS(dVar9) <= 1e-08)) goto LAB_14950e154;
    lVar1 = lVar2 + (longlong)param_4 * 0x18;
    uVar6 = *(undefined8 *)(lVar1 + 0x10);
    dVar3 = (double)*(float *)(lVar1 + 0xc) + (double)*(int *)(lVar1 + 8);
    FUN_144a808d5(&local_58,*(undefined8 *)(lVar2 + 8 + lVar5 * 0x18),
                  *(undefined8 *)(lVar2 + 0x10 + lVar5 * 0x18),uVar6);
    dVar3 = dVar9 * (((double)local_54 + (double)local_58) - dVar3) + dVar3;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = dVar3;
    auVar10 = roundpd(auVar10,auVar10,1);
    dVar9 = auVar10._0_8_;
    dVar3 = dVar3 - dVar9;
    if (2147483647.0 <= dVar9) {
      dVar9 = 2147483647.0;
    }
    if (dVar9 <= -2147483648.0) {
      dVar9 = -2147483648.0;
    }
    fVar8 = (float)dVar3;
    if (0.99999994 <= fVar8) {
      fVar8 = 0.99999994;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    fVar8 = fVar8 + 0.5 + -0.5;
    if (0.99999994 <= fVar8) {
      fVar8 = 0.99999994;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    if (*(char *)(param_1 + 0x4c) != '\x01') {
      *param_2 = (int)dVar9;
      param_2[1] = (int)fVar8;
      *(undefined8 *)(param_2 + 2) = uVar6;
      goto LAB_14950e18f;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = CONCAT44(fVar8,(int)dVar9);
  }
  else {
LAB_14950e154:
    if (dVar9 < 0.5) {
      param_5 = param_4;
    }
    uVar4 = *(undefined8 *)(lVar2 + 8 + (longlong)param_5 * 0x18);
    uVar6 = *(undefined8 *)(lVar2 + 0x10 + (longlong)param_5 * 0x18);
    if (*(char *)(param_1 + 0x4c) != '\x01') {
      *(undefined8 *)param_2 = uVar4;
      *(undefined8 *)(param_2 + 2) = uVar6;
      goto LAB_14950e18f;
    }
    uVar7 = *(undefined8 *)(param_1 + 0x50);
  }
  FUN_144a808d5(param_2,uVar4,uVar6,uVar7);
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 0x50);
LAB_14950e18f:
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950e2dc FUN_14950e2dc body=159 status=ok
// SIG undefined FUN_14950e2dc(void)

undefined8 FUN_14950e2dc(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  LOCK();
  *(undefined4 *)(param_1 + 0x5c) = 3;
  UNLOCK();
  plVar1 = (longlong *)FUN_1448c2e86();
  uVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
  FUN_14950e37c(uVar2,local_20,param_1,&LAB_14950e472);
  uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
  FUN_14950e37c(uVar2,local_20,param_1,FUN_14950e48a);
  FUN_14950e4ce(param_1);
  FUN_14950e5e4(param_1);
  FUN_14950e674(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950e37c FUN_14950e37c body=244 status=ok
// SIG undefined FUN_14950e37c(void)

undefined8
FUN_14950e37c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14bd355a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14bd35f00;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_14951b9a6(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950e48a FUN_14950e48a body=67 status=ok
// SIG undefined FUN_14950e48a(void)

void FUN_14950e48a(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if (*param_2 == DAT_14cc0b540) {
    lVar1 = *(longlong *)(param_1 + 0x60) + 8;
    if (*(longlong *)(param_1 + 0x60) == 0) {
      lVar1 = 0;
    }
    if (lVar1 == param_3) {
      FUN_145c93870(param_1);
      FUN_14950e4ce(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14950e4ce FUN_14950e4ce body=276 status=ok
// SIG undefined FUN_14950e4ce(void)

void FUN_14950e4ce(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined1 local_58 [56];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)FUN_1448c2e86();
  iVar1 = (**(code **)(*plVar2 + 0x18))(plVar2,DAT_14cc0b540);
  if (0 < iVar1) {
    plVar2 = (longlong *)FUN_1448c2e86();
    lVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,DAT_14cc0b540,0);
    *(longlong *)(param_1 + 0x60) = lVar3 + -8;
    uVar4 = (**(code **)(*(longlong *)(lVar3 + -8) + 0x298))();
    FUN_14951f4e6(local_58,param_1,&LAB_14950e7cc);
    FUN_145da85ea(uVar4,local_60,local_58);
    FUN_1401cb1ee(local_58);
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x2a0))();
    FUN_14951f4e6(local_58,param_1,&LAB_14950e7fa);
    FUN_145da85ea(uVar4,local_60,local_58);
    FUN_1401cb1ee(local_58);
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x210))
                      (*(longlong **)(param_1 + 0x60),param_1 + 0x30);
    if (lVar3 != 0) {
      FUN_14950e674(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950e5e4 FUN_14950e5e4 body=144 status=ok
// SIG undefined FUN_14950e5e4(void)

void FUN_14950e5e4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x2b0))
              (*(longlong **)(param_1 + 0x60),param_1 + 0x68,0);
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  if (*(int *)(param_1 + 0x8c) < 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    FUN_14951ef9a(param_1 + 0x80,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014950e653. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  return;
}



// FUNCTION 14950e674 FUN_14950e674 body=318 status=ok
// SIG undefined FUN_14950e674(void)

void FUN_14950e674(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  longlong local_d0;
  undefined8 local_c0;
  _RTL_CRITICAL_SECTION local_b8;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined1 local_78 [56];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  if (*(int *)(param_1 + 0x8c) < 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    FUN_14951ef9a(param_1 + 0x80,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x3c);
  local_c0 = 0;
  plVar1 = *(longlong **)(param_1 + 0x60);
  FUN_14950e832(local_78,param_1);
  local_88 = 0;
  local_b8.SpinCount = 0;
  uStack_90 = 0;
  local_b8.OwningThread = (HANDLE)0x0;
  local_b8.LockSemaphore = (HANDLE)0x0;
  local_b8.DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  local_b8.LockCount = 0;
  local_b8.RecursionCount = 0;
  InitializeCriticalSection(&local_b8);
  SetCriticalSectionSpinCount(&local_b8,4000);
  uStack_90 = 0;
  local_88 = local_88 & 0xffffffff00000000;
  local_d8 = &local_c0;
  local_d0 = param_1 + 0xb8;
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1 + 0x68,&local_b8,local_78);
  FUN_1401cb1ee(&local_b8);
  FUN_1401cb1ee(local_78);
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950e7b4 FUN_14950e7b4 body=24 status=ok
// SIG undefined FUN_14950e7b4(void)

undefined4 FUN_14950e7b4(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_145c93870();
  LOCK();
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  UNLOCK();
  return uVar1;
}



// FUNCTION 14950e832 FUN_14950e832 body=220 status=ok
// SIG undefined FUN_14950e832(void)

LPCRITICAL_SECTION FUN_14950e832(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bd356f0;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14bd35fe0;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  FUN_14485c47a(&(p_Var1->ProcessLocksList).Blink,param_2);
  *(code **)&p_Var1->EntryCount = FUN_14950e90e;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 14950e90e FUN_14950e90e body=393 status=ok
// SIG undefined FUN_14950e90e(void)

void FUN_14950e90e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  double *pdVar4;
  double dVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pdVar4 = *(double **)(param_2 + 0x10);
  dVar5 = *pdVar4 + pdVar4[1];
  local_68 = *(undefined4 *)(pdVar4 + 0xc);
  uStack_64 = *(undefined4 *)((longlong)pdVar4 + 100);
  uStack_60 = *(undefined4 *)(pdVar4 + 0xd);
  uStack_5c = *(undefined4 *)((longlong)pdVar4 + 0x6c);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    plVar1 = (longlong *)(param_1 + 0x80);
    uVar3 = *(uint *)(param_1 + 0x88);
    uVar10 = (ulonglong)uVar3;
    lVar8 = uVar10 * 0x18;
    do {
      lVar8 = lVar8 + -0x18;
      uVar9 = (uint)uVar10;
      if ((int)uVar9 < 1) {
        if (uVar3 != 0) goto LAB_14950e9fe;
        uVar9 = 0;
        break;
      }
      uVar10 = (ulonglong)(uVar9 - 1);
    } while (dVar5 < *(double *)(*plVar1 + lVar8) || dVar5 == *(double *)(*plVar1 + lVar8));
    *(uint *)(param_1 + 0x88) = uVar3 + 1;
    if (*(uint *)(param_1 + 0x8c) < uVar3 + 1) {
      FUN_1492e4a48(plVar1,uVar3);
    }
    lVar6 = (ulonglong)uVar9 * 0x18;
    memmove((void *)(*(longlong *)(param_1 + 0x80) + lVar6 + 0x18),
            (void *)(*(longlong *)(param_1 + 0x80) + lVar6),(ulonglong)(uVar3 - uVar9) * 0x18);
    lVar8 = *(longlong *)(param_1 + 0x80);
    *(double *)(lVar8 + lVar6) = dVar5;
    puVar2 = (undefined4 *)(lVar8 + 8 + lVar6);
    *puVar2 = local_68;
    puVar2[1] = uStack_64;
    puVar2[2] = uStack_60;
    puVar2[3] = uStack_5c;
    if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0x88)) {
      LOCK();
      *(undefined4 *)(param_1 + 0x5c) = 2;
      UNLOCK();
      iVar7 = 0;
      iVar11 = *(int *)(param_1 + 0x88) + -1;
      if (iVar11 != 0) {
        memmove(*(void **)(param_1 + 0x80),(void *)((longlong)*(void **)(param_1 + 0x80) + 0x18),
                (longlong)iVar11 * 0x18);
        iVar7 = *(int *)(param_1 + 0x88) + -1;
      }
      *(int *)(param_1 + 0x88) = iVar7;
      FUN_14951fb14(plVar1);
    }
  }
LAB_14950e9fe:
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014950ea23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  return;
}



// FUNCTION 14950ea98 FUN_14950ea98 body=403 status=ok
// SIG undefined FUN_14950ea98(void)

undefined8 * FUN_14950ea98(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14bd31f80;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 4) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  param_1[6] = 0;
  param_1[7] = 0x3fd0000000000000;
  param_1[8] = 0x3f1a36e2eb1c432d;
  *(undefined4 *)(param_1 + 9) = 5;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 5;
  param_1[10] = 0;
  param_1[0xb] = 0x3fd0000000000000;
  param_1[0xc] = 0x3f1a36e2eb1c432d;
  *(undefined4 *)(param_1 + 0xd) = 5;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 5;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x7fffffff00000000;
  FUN_1446f470e(&local_20,L"TimeManagement",1);
  uVar4 = FUN_144a52528();
  plVar5 = (longlong *)FUN_14493e38c(uVar4,local_20);
  uVar4 = (**(code **)(*plVar5 + 0x40))(plVar5);
  FUN_14950ec2c(uVar4,param_1);
  plVar5 = (longlong *)FUN_145988e1c();
  lVar6 = plVar5[0x22];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
    lVar6 = plVar5[0x22];
  }
  if (0.0 < *(float *)(lVar6 + 0x88)) {
    param_1[8] = (double)*(float *)(lVar6 + 0x88);
  }
  plVar5 = (longlong *)FUN_145988e1c();
  lVar6 = plVar5[0x22];
  if (lVar6 == 0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
    lVar6 = plVar5[0x22];
  }
  if (0.0 < *(float *)(lVar6 + 0x88)) {
    param_1[0xc] = (double)*(float *)(lVar6 + 0x88);
  }
  if (*(int *)((longlong)param_1 + 0x8c) < 200) {
    FUN_140cb0586(param_1 + 0x10,200);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950ec2c FUN_14950ec2c body=120 status=ok
// SIG undefined FUN_14950ec2c(void)

void FUN_14950ec2c(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  iVar1 = *(int *)(param_1 + 0x20);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) == param_2) {
        return;
      }
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 - lVar3 != 0);
  }
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_149515acc((longlong *)(param_1 + 0x18),iVar1);
    lVar2 = *(longlong *)(param_1 + 0x18);
  }
  *(longlong *)(lVar2 + lVar4 * 8) = param_2;
  FUN_1447f69b6(param_1);
  return;
}



// FUNCTION 14950eca4 FUN_14950eca4 body=176 status=ok
// SIG undefined FUN_14950eca4(void)

void FUN_14950eca4(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14bd31f80;
  FUN_1446ddc76(&local_28,"TimeManagement",1);
  plVar2 = (longlong *)FUN_1447c1074(local_28);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 0x40))(plVar2);
    local_20 = param_1;
    iVar1 = FUN_149515b52(lVar3 + 0x18);
    if (iVar1 != 0) {
      FUN_1447f69b6(lVar3);
    }
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950ed56 FUN_14950ed56 body=84 status=ok
// SIG undefined FUN_14950ed56(void)

undefined8 FUN_14950ed56(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined4 *)(param_1 + 0x20);
  uStack_24 = *(undefined4 *)(param_1 + 0x24);
  uStack_20 = *(undefined4 *)(param_1 + 0x28);
  uStack_1c = *(undefined4 *)(param_1 + 0x2c);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x110))(*(longlong **)(param_1 + 8));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950edac FUN_14950edac body=81 status=ok
// SIG undefined FUN_14950edac(void)

undefined8 * FUN_14950edac(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_14951fbc2(param_2,iVar1);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 << 3);
  }
  return param_2;
}



// FUNCTION 14950edfe FUN_14950edfe body=59 status=ok
// SIG undefined FUN_14950edfe(void)

undefined1 FUN_14950edfe(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x208))
                    (*(longlong **)(param_1 + 8),param_1 + 0x20);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
    if (*(char *)(lVar2 + 0x28) != '\x01') {
      uVar1 = *(char *)(lVar2 + 0x28) == '\x02';
    }
  }
  return uVar1;
}



// FUNCTION 14950ee3a FUN_14950ee3a body=69 status=ok
// SIG undefined FUN_14950ee3a(void)

void FUN_14950ee3a(longlong param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x208))
                    (*(longlong **)(param_1 + 8),param_1 + 0x20);
  if (lVar1 != 0) {
    cVar2 = '\x01';
    if (param_2 != '\x02') {
      cVar2 = (param_2 == '\x01') * '\x02';
    }
    if (*(char *)(lVar1 + 0x28) != cVar2) {
      *(char *)(lVar1 + 0x28) = cVar2;
    }
  }
  return;
}



// FUNCTION 14950ee80 FUN_14950ee80 body=87 status=ok
// SIG undefined FUN_14950ee80(void)

double FUN_14950ee80(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x208))
                    (*(longlong **)(param_1 + 8),param_1 + 0x20);
  if (lVar1 == 0) {
    dVar2 = 0.0;
  }
  else {
    if (*(char *)(lVar1 + 0x28) == '\x02') {
      dVar2 = (double)FUN_14751785a((double)*(float *)(lVar1 + 0x70),*(undefined8 *)(lVar1 + 0x54));
      return dVar2;
    }
    if (*(char *)(lVar1 + 0x28) == '\x01') {
      dVar2 = (double)*(float *)(lVar1 + 0x38);
    }
    else {
      dVar2 = (double)*(int *)(lVar1 + 0x80);
    }
  }
  return dVar2;
}



// FUNCTION 14950eed8 FUN_14950eed8 body=119 status=ok
// SIG undefined FUN_14950eed8(void)

void FUN_14950eed8(longlong param_1,double param_2)

{
  char cVar1;
  double dVar2;
  longlong lVar3;
  
  lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x208))
                    (*(longlong **)(param_1 + 8),param_1 + 0x20);
  if (lVar3 != 0) {
    cVar1 = *(char *)(lVar3 + 0x28);
    if (cVar1 == '\x02') {
      dVar2 = (double)FUN_1475177c0(SUB84(param_2,0),*(undefined8 *)(lVar3 + 0x54));
      *(float *)(lVar3 + 0x70) = (float)dVar2;
    }
    else if (cVar1 == '\x01') {
      *(float *)(lVar3 + 0x38) = (float)param_2;
    }
    else if (cVar1 == '\0') {
      *(int *)(lVar3 + 0x80) = (int)param_2;
    }
  }
  return;
}



// FUNCTION 14950ef50 FUN_14950ef50 body=80 status=ok
// SIG undefined FUN_14950ef50(void)

undefined8 * FUN_14950ef50(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x208))
                    (*(longlong **)(param_1 + 8),param_1 + 0x20);
  if (lVar1 == 0) {
    puVar2 = &DAT_14cab1918;
  }
  else {
    puVar2 = &DAT_14cab1918;
    if (*(char *)(lVar1 + 0x28) == '\x02') {
      puVar2 = (undefined8 *)(lVar1 + 0x54);
    }
  }
  *param_2 = *puVar2;
  return param_2;
}



// FUNCTION 14950efa0 FUN_14950efa0 body=45 status=ok
// SIG undefined FUN_14950efa0(void)

undefined4 FUN_14950efa0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x208))
                    (*(longlong **)(param_1 + 8),param_1 + 0x20);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x84);
  }
  return uVar1;
}



// FUNCTION 14950efce FUN_14950efce body=134 status=ok
// SIG undefined FUN_14950efce(void)

void FUN_14950efce(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  
  lVar6 = DAT_14cc1e4b8;
  cVar3 = FUN_144a8728e();
  if (cVar3 == '\0') {
    bVar4 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar4 ^ 1);
  }
  else {
    uVar5 = 0;
  }
  lVar2 = DAT_14cc1e4a0;
  iVar7 = *(int *)(lVar6 + uVar5 * 4);
  cVar3 = FUN_144a8728e();
  if (cVar3 == '\0') {
    bVar4 = FUN_144a61b4f();
    uVar5 = (ulonglong)(bVar4 ^ 1);
  }
  else {
    uVar5 = 0;
  }
  iVar1 = *(int *)(lVar2 + uVar5 * 4);
  lVar6 = (**(code **)(**(longlong **)(param_1 + 8) + 0x208))
                    (*(longlong **)(param_1 + 8),param_1 + 0x20);
  if (lVar6 != 0) {
    if (param_2 < iVar7) {
      iVar7 = param_2;
    }
    if (iVar7 < iVar1) {
      iVar7 = iVar1;
    }
    *(int *)(lVar6 + 0x84) = iVar7;
  }
  return;
}



// FUNCTION 14950f054 FUN_14950f054 body=454 status=ok
// SIG undefined FUN_14950f054(void)

void FUN_14950f054(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  undefined8 uVar2;
  double *pdVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  double dVar13;
  
  iVar10 = *(int *)(param_1 + 0x88);
  if (199 < iVar10) {
    memmove(*(void **)(param_1 + 0x80),(void *)((longlong)*(void **)(param_1 + 0x80) + 8),
            (ulonglong)(iVar10 - 1) << 3);
    iVar10 = *(int *)(param_1 + 0x88) + -1;
    *(int *)(param_1 + 0x88) = iVar10;
  }
  uVar2 = *param_2;
  *(uint *)(param_1 + 0x88) = iVar10 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar10 + 1U) {
    FUN_144941252((undefined8 *)(param_1 + 0x80),iVar10);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar10 * 8) = uVar2;
  lVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x208))
                    (*(longlong **)(param_1 + 8),param_1 + 0x20);
  lVar4 = DAT_14cc1e4e8;
  if (lVar7 == 0) {
    return;
  }
  cVar5 = FUN_144a8728e();
  if (cVar5 == '\0') {
    bVar6 = FUN_144a61b4f();
    uVar8 = (ulonglong)(bVar6 ^ 1);
  }
  else {
    uVar8 = 0;
  }
  fVar1 = *(float *)(lVar4 + uVar8 * 4);
  if (fVar1 <= 0.0) {
    *(undefined8 *)(lVar7 + 0x48) = 0;
    return;
  }
  iVar10 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar10 < 2) {
    return;
  }
  uVar9 = iVar10 - 1;
  pdVar3 = *(double **)(param_1 + 0x80);
  dVar13 = pdVar3[uVar9] - pdVar3[(longlong)iVar10 + -2];
  if (0.5 < dVar13) {
    *pdVar3 = pdVar3[uVar9];
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) - uVar9;
    *(undefined8 *)(lVar7 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x94) = 1;
    return;
  }
  dVar12 = (double)fVar1;
  if (0.005 < ABS(dVar13 - *(double *)(lVar7 + 0x48) / dVar12)) {
    iVar11 = *(int *)(param_1 + 0x90);
    *(int *)(param_1 + 0x90) = iVar11 + 1;
    if (iVar11 < 4) goto LAB_14950f1a3;
    *(undefined4 *)(param_1 + 0x94) = 4;
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
LAB_14950f1a3:
  iVar11 = *(int *)(param_1 + 0x94) + 1;
  if (iVar10 <= *(int *)(param_1 + 0x94)) {
    iVar11 = iVar10;
  }
  *(int *)(param_1 + 0x94) = iVar11;
  *(double *)(lVar7 + 0x48) =
       ((pdVar3[uVar9] - pdVar3[iVar10 - iVar11]) / (double)(iVar11 + -1)) * dVar12;
  return;
}



// FUNCTION 14950f21e FUN_14950f21e body=244 status=ok
// SIG undefined FUN_14950f21e(void)

undefined8
FUN_14950f21e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14bd355a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14bd36050;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_14951b9a6(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950f360 FUN_14950f360 body=213 status=ok
// SIG undefined FUN_14950f360(void)

int * FUN_14950f360(longlong param_1,int *param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_68 [44];
  undefined8 local_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x60) != DAT_14c872be0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    *(longlong *)(param_1 + 0x60) = DAT_14c872be0;
    FUN_14950292c(*(longlong *)(param_1 + 0x38),&local_3c,*(undefined8 *)(param_1 + 0x30));
    *(ulonglong *)(param_1 + 0x50) = CONCAT44(uStack_2c,uStack_30);
    *(undefined8 *)(param_1 + 0x58) = uStack_28;
    *(undefined8 *)(param_1 + 0x44) = local_3c;
    *(ulonglong *)(param_1 + 0x4c) = CONCAT44(uStack_30,uStack_34);
  }
  fVar1 = *(float *)(param_1 + 0x54) + 0.0;
  auVar2 = roundss(ZEXT816(0),ZEXT416((uint)fVar1),9);
  *param_2 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x50) +
             ((int)ROUND(fVar1 + fVar1 + -0.5) >> 1);
  fVar1 = (fVar1 - auVar2._0_4_) + 0.5 + -0.5;
  if (0.99999994 <= fVar1) {
    fVar1 = 0.99999994;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  param_2[1] = (int)fVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950f436 FUN_14950f436 body=213 status=ok
// SIG undefined FUN_14950f436(void)

int * FUN_14950f436(longlong param_1,int *param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_68 [44];
  undefined8 local_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x60) != DAT_14c872be0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    *(longlong *)(param_1 + 0x60) = DAT_14c872be0;
    FUN_14950292c(*(longlong *)(param_1 + 0x38),&local_3c,*(undefined8 *)(param_1 + 0x30));
    *(ulonglong *)(param_1 + 0x50) = CONCAT44(uStack_2c,uStack_30);
    *(undefined8 *)(param_1 + 0x58) = uStack_28;
    *(undefined8 *)(param_1 + 0x44) = local_3c;
    *(ulonglong *)(param_1 + 0x4c) = CONCAT44(uStack_30,uStack_34);
  }
  fVar1 = *(float *)(param_1 + 0x4c) + 0.0;
  auVar2 = roundss(ZEXT816(0),ZEXT416((uint)fVar1),9);
  *param_2 = *(int *)(param_1 + 0x2c) + *(int *)(param_1 + 0x48) +
             ((int)ROUND(fVar1 + fVar1 + -0.5) >> 1);
  fVar1 = (fVar1 - auVar2._0_4_) + 0.5 + -0.5;
  if (0.99999994 <= fVar1) {
    fVar1 = 0.99999994;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  param_2[1] = (int)fVar1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950f50c FUN_14950f50c body=128 status=ok
// SIG undefined FUN_14950f50c(void)

undefined8 * FUN_14950f50c(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x60) != DAT_14c872be0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    *(longlong *)(param_1 + 0x60) = DAT_14c872be0;
    FUN_14950292c(*(longlong *)(param_1 + 0x38),&local_3c,*(undefined8 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x50) = uStack_30;
    *(undefined4 *)(param_1 + 0x54) = uStack_2c;
    *(undefined4 *)(param_1 + 0x58) = uStack_28;
    *(undefined4 *)(param_1 + 0x5c) = uStack_24;
    *(undefined4 *)(param_1 + 0x44) = local_3c;
    *(undefined4 *)(param_1 + 0x48) = uStack_38;
    *(undefined4 *)(param_1 + 0x4c) = uStack_34;
    *(undefined4 *)(param_1 + 0x50) = uStack_30;
  }
  *param_2 = *(undefined8 *)(param_1 + 0x58);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950f58e FUN_14950f58e body=141 status=ok
// SIG undefined FUN_14950f58e(void)

undefined8 FUN_14950f58e(longlong param_1)

{
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x60) != DAT_14c872be0) && (*(longlong *)(param_1 + 0x38) != 0)) {
    *(longlong *)(param_1 + 0x60) = DAT_14c872be0;
    FUN_14950292c(*(longlong *)(param_1 + 0x38),&local_34,*(undefined8 *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x50) = uStack_28;
    *(undefined4 *)(param_1 + 0x54) = uStack_24;
    *(undefined4 *)(param_1 + 0x58) = uStack_20;
    *(undefined4 *)(param_1 + 0x5c) = uStack_1c;
    *(undefined4 *)(param_1 + 0x44) = local_34;
    *(undefined4 *)(param_1 + 0x48) = uStack_30;
    *(undefined4 *)(param_1 + 0x4c) = uStack_2c;
    *(undefined4 *)(param_1 + 0x50) = uStack_28;
  }
  if ((*(longlong *)(param_1 + 0x38) != 0) && (*(char *)(param_1 + 0x44) == '\x01')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950f62a FUN_14950f62a body=570 status=ok
// SIG undefined FUN_14950f62a(void)

undefined8 FUN_14950f62a(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = param_1 + 0x68;
    cVar2 = (**(code **)(*plVar1 + 0x1c0))(plVar1,lVar3,0);
    if (cVar2 == '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cc1e510) {
        FUN_144b3d300(&DAT_14cc1e510);
        if (DAT_14cc1e510 == -1) {
          FUN_1446ddc76(&DAT_14cc1e508,"ULiveLinkTimeSynchronizationSource_DisabledSubject",1);
          puVar5 = &DAT_14cc1e510;
LAB_14950f85b:
          _Init_thread_footer(puVar5);
        }
      }
    }
    else {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x1e0))
                        (*(longlong **)(param_1 + 0x38),lVar3);
      if (cVar2 == '\0') {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x208))
                          (*(longlong **)(param_1 + 0x38),lVar3);
        if (lVar3 == 0) {
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110) <
              DAT_14cc1e528) {
            FUN_144b3d300(&DAT_14cc1e528);
            if (DAT_14cc1e528 == -1) {
              FUN_1446ddc76(&DAT_14cc1e520,"ULiveLinkTimeSynchronizationSource_InvalidSettings",1);
              puVar5 = &DAT_14cc1e528;
              goto LAB_14950f85b;
            }
          }
        }
        else {
          uVar4 = 1;
          if (*(char *)(lVar3 + 0x28) == '\x02') goto LAB_14950f721;
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110) <
              DAT_14cc1e534) {
            FUN_144b3d300(&DAT_14cc1e534);
            if (DAT_14cc1e534 == -1) {
              FUN_1446ddc76(&DAT_14cc1e52c,"ULiveLinkTimeSynchronizationSource_InvalidTimeMode",1);
              puVar5 = &DAT_14cc1e534;
              goto LAB_14950f85b;
            }
          }
        }
      }
      else if (*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cc1e51c) {
        FUN_144b3d300(&DAT_14cc1e51c);
        if (DAT_14cc1e51c == -1) {
          FUN_1446ddc76(&DAT_14cc1e514,"ULiveLinkTimeSynchronizationSource_VirtualSubject",1);
          puVar5 = &DAT_14cc1e51c;
          goto LAB_14950f85b;
        }
      }
    }
    FUN_1400021e4(param_1 + 0x30,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  uVar4 = 0;
LAB_14950f721:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950f866 FUN_14950f866 body=254 status=ok
// SIG undefined FUN_14950f866(void)

ulonglong FUN_14950f866(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined4 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 == (longlong *)0x0) {
    uVar7 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x1a0))(plVar1,&local_28,0,0);
    if ((longlong)local_20 != 0) {
      lVar8 = (longlong)local_20 * 0x18;
      puVar6 = local_28;
      do {
        if (*(longlong *)(puVar6 + 4) == *(longlong *)(param_1 + 0x30)) {
          if (puVar6 != (undefined4 *)0x0) {
            *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(puVar6 + 4);
            uVar2 = puVar6[1];
            uVar3 = puVar6[2];
            uVar4 = puVar6[3];
            *(undefined4 *)(param_1 + 0x68) = *puVar6;
            *(undefined4 *)(param_1 + 0x6c) = uVar2;
            *(undefined4 *)(param_1 + 0x70) = uVar3;
            *(undefined4 *)(param_1 + 0x74) = uVar4;
            cVar5 = FUN_14950f62a(param_1);
            if (cVar5 == '\0') goto LAB_14950f90e;
            *(undefined4 *)(param_1 + 0x40) = 1;
            uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
            goto LAB_14950f910;
          }
          break;
        }
        puVar6 = puVar6 + 6;
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != 0);
    }
    FUN_1400021e4(param_1 + 0x30,local_38);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
LAB_14950f90e:
    uVar7 = 0;
LAB_14950f910:
    if (local_28 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14950f980 FUN_14950f980 body=26 status=ok
// SIG undefined FUN_14950f980(void)

undefined8 FUN_14950f980(longlong param_1,undefined8 param_2)

{
  FUN_1400021e4(param_1 + 0x30);
  return param_2;
}



// FUNCTION 14950f9a2 FUN_14950f9a2 body=1 status=ok
// SIG undefined FUN_14950f9a2(void)

void FUN_14950f9a2(void)

{
  return;
}



// FUNCTION 14950f9a8 FUN_14950f9a8 body=29 status=ok
// SIG undefined FUN_14950f9a8(void)

undefined8 FUN_14950f9a8(longlong param_1,undefined8 param_2)

{
  FUN_145715fae(param_2,param_1 + 8);
  return param_2;
}



// FUNCTION 14950f9c6 FUN_14950f9c6 body=25 status=ok
// SIG undefined FUN_14950f9c6(void)

undefined8 FUN_14950f9c6(undefined8 param_1,undefined8 param_2)

{
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 14950f9e0 FUN_14950f9e0 body=152 status=ok
// SIG undefined FUN_14950f9e0(void)

undefined8 FUN_14950f9e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  wchar_t *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = L"VirtualSubjectSourceStatus";
  local_28 = 0x1a;
  FUN_1446e940c(local_34,&local_30);
  local_30 = L"LiveLinkVirtualSubjectSource";
  local_28 = 0x1c;
  FUN_1446e940c(local_38,&local_30);
  FUN_140208bae(param_2,local_38,local_34,L"Active");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950fa8a FUN_14950fa8a body=75 status=ok
// SIG undefined FUN_14950fa8a(void)

void FUN_14950fa8a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  switchD_143c3d4dc::caseD_21(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14950fae0 FUN_14950fae0 body=1392 status=ok
// SIG undefined FUN_14950fae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14950fae0(undefined1 (*param_1) [16],byte param_2,byte param_3,byte param_4,char param_5,
                  double *param_6,char param_7,undefined8 param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  bool bVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  float fVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  double dVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  undefined1 unaff_XMM6 [16];
  double dVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  uint uVar32;
  undefined4 uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined1 auStack_148 [32];
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108 [4];
  double local_e8 [3];
  ulonglong local_d0;
  undefined4 uVar31;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_e8[0] = *(double *)param_1[2];
  local_e8[1] = (double)*(undefined8 *)(param_1[2] + 8);
  local_e8[2] = (double)*(undefined8 *)param_1[3];
  bVar9 = param_2 % 3;
  fVar16 = 1.0;
  fVar13 = 1.0;
  if (2 < param_2) {
    fVar13 = -1.0;
  }
  bVar10 = param_3 % 3;
  fVar18 = 1.0;
  if (2 < param_3) {
    fVar18 = -1.0;
  }
  bVar11 = param_4 % 3;
  if (2 < param_4) {
    fVar16 = -1.0;
  }
  local_108[0] = *(double *)param_1[4];
  local_108[1] = (double)*(undefined8 *)(param_1[4] + 8);
  local_108[2] = (double)*(undefined8 *)param_1[5];
  auVar21 = *param_1;
  uVar4 = auVar21._0_8_;
  uVar29 = auVar21._0_4_;
  uVar32 = auVar21._4_4_;
  uVar5 = auVar21._8_8_;
  auVar24 = param_1[1];
  switch(param_2) {
  case 0:
    unaff_XMM6 = auVar21;
    break;
  case 1:
    unaff_XMM6._8_8_ = (double)uVar5;
    unaff_XMM6._0_8_ = uVar5;
    break;
  case 2:
    unaff_XMM6 = auVar24;
    break;
  case 3:
    unaff_XMM6._0_8_ = uVar4 ^ 0x8000000000000000;
    unaff_XMM6._8_8_ = (double)(uVar5 ^ 0x8000000000000000);
    break;
  case 4:
    unaff_XMM6._0_8_ = uVar5 ^ 0x8000000000000000;
    unaff_XMM6._8_8_ = (double)(uVar5 ^ 0x8000000000000000);
    break;
  case 5:
    unaff_XMM6._0_8_ = auVar24._0_8_ ^ 0x8000000000000000;
    unaff_XMM6._8_8_ = -auVar24._8_8_;
  }
  uVar30 = auVar21._8_4_;
  uVar31 = auVar24._0_4_;
  uVar35 = auVar21._12_4_;
  uVar34 = auVar24._4_4_;
  switch(param_3) {
  case 0:
    unaff_XMM6._8_8_ = (double)uVar4;
    break;
  case 1:
    unaff_XMM6 = blendpd(unaff_XMM6,auVar21,2);
    break;
  case 2:
    unaff_XMM6._8_8_ = (double)auVar24._0_8_;
    break;
  case 3:
    uVar33 = uVar29;
    uVar36 = uVar32;
    goto LAB_14950fce2;
  case 4:
    auVar21._8_4_ = uVar30;
    auVar21._0_8_ = uVar4 ^ 0x8000000000000000;
    auVar21._12_4_ = uVar35 ^ 0x80000000;
    unaff_XMM6 = blendpd(unaff_XMM6,auVar21,2);
    break;
  case 5:
    uVar33 = uVar31;
    uVar36 = uVar34;
LAB_14950fce2:
    unaff_XMM6._8_8_ = (double)(CONCAT44(uVar36,uVar33) ^ 0x8000000000000000);
  }
  dVar1 = local_108[bVar9];
  dVar2 = local_108[bVar10];
  dVar3 = local_108[bVar11];
  switch(param_4) {
  case 0:
    break;
  case 1:
    uVar29 = uVar30;
    uVar32 = uVar35;
    break;
  case 2:
    uVar29 = uVar31;
    uVar32 = uVar34;
  default:
switchD_14950fd28_default:
    bVar12 = bVar11 == 2;
    if ((bVar9 == 0 && bVar10 == 1) && bVar12) {
      uVar35 = 0x3ff00000;
      goto LAB_14950fe18;
    }
    goto LAB_14950fd4d;
  case 3:
    goto switchD_14950fd28_caseD_3;
  case 4:
    uVar29 = uVar30;
    uVar32 = uVar35;
switchD_14950fd28_caseD_3:
    uVar32 = uVar32 ^ 0x80000000;
    break;
  case 5:
    uVar29 = uVar31;
    uVar32 = uVar34 ^ 0x80000000;
    goto switchD_14950fd28_default;
  }
  bVar12 = false;
LAB_14950fd4d:
  uVar35 = 0x3ff00000;
  if (((bVar9 ^ 1) != 0 || (bVar10 ^ 2) != 0) || bVar11 != 0) {
    if (((bVar9 ^ 2) != 0 || bVar10 != 0) || (bVar11 ^ 1) != 0) {
      uVar35 = 0xbff00000;
      uVar34 = uVar35;
      if (bVar9 != 0) {
        uVar34 = 0;
      }
      if ((bVar11 ^ 1) != 0 || (bVar10 ^ 2) != 0) {
        uVar34 = 0;
      }
      uVar36 = uVar35;
      if (!bVar12) {
        uVar36 = uVar34;
      }
      if ((bVar9 ^ 1) != 0 || bVar10 != 0) {
        uVar36 = uVar34;
      }
      if (bVar10 != 1) {
        uVar35 = uVar36;
      }
      if (bVar11 != 0 || (bVar9 ^ 2) != 0) {
        uVar35 = uVar36;
      }
    }
  }
LAB_14950fe18:
  dVar17 = (double)CONCAT44(uVar32,uVar29);
  dVar8 = (double)((float)local_e8[bVar9] * fVar13);
  dVar26 = (double)((float)local_e8[bVar10] * fVar18);
  dVar6 = (double)((float)local_e8[bVar11] * fVar16);
  dVar14 = (double)(fVar13 * fVar18 * fVar16) * auVar24._8_8_ * (double)((ulonglong)uVar35 << 0x20);
  if (param_5 != '\0') {
    dVar8 = dVar8 + *param_6;
    dVar26 = dVar26 + param_6[1];
    dVar6 = dVar6 + param_6[2];
  }
  if (param_7 != '\0') {
    FUN_144a7484c(param_8,&local_128);
    dVar19 = dVar14 * local_128;
    dVar22 = dVar14 * dStack_120;
    dVar27 = unaff_XMM6._0_8_;
    dVar28 = unaff_XMM6._8_8_;
    dVar17 = dStack_110 * (double)CONCAT44(uVar32,uVar29) * 1.0 +
             ((dVar27 * dStack_120 * 1.0 + dVar14 * local_118) - dVar28 * local_128);
    dVar14 = local_118 * (double)CONCAT44(uVar32,uVar29) * -1.0 +
             ((dVar27 * local_128 * -1.0 + dVar14 * dStack_110) - dVar28 * dStack_120);
    unaff_XMM6._8_8_ =
         local_128 * (double)CONCAT44(uVar32,uVar29) * 1.0 +
         dStack_110 * dVar28 + dVar27 * local_118 * -1.0 + dVar22;
    unaff_XMM6._0_8_ =
         (ulonglong)
         (dStack_120 * (double)CONCAT44(uVar32,uVar29) * -1.0 +
         local_118 * dVar28 + dVar27 * dStack_110 * 1.0 + dVar19);
  }
  dVar27 = unaff_XMM6._0_8_;
  dVar28 = unaff_XMM6._8_8_;
  auVar20._0_8_ = dVar27 * dVar27;
  auVar20._8_8_ = dVar28 * dVar28;
  dVar19 = dVar17 * dVar17 + auVar20._0_8_;
  dVar22 = dVar14 * dVar14 + auVar20._8_8_;
  auVar23._0_8_ = dVar19 + dVar22;
  auVar23._8_8_ = dVar19 + dVar22;
  auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
  auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
  auVar21 = sqrtpd(auVar20,auVar23);
  auVar24 = divpd(_DAT_149934d80,auVar21);
  auVar25._0_8_ = auVar24._0_8_ * dVar17;
  auVar25._8_8_ = auVar24._8_8_ * dVar14;
  auVar21 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar25,auVar15);
  *(ulonglong *)*param_1 =
       (ulonglong)(dVar27 * auVar24._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
  *(ulonglong *)(*param_1 + 8) =
       (ulonglong)(dVar28 * auVar24._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
  param_1[1] = auVar21;
  auVar7._8_4_ = SUB84(dVar26,0);
  auVar7._0_8_ = dVar8;
  auVar7._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  param_1[2] = auVar7;
  *(double *)param_1[3] = dVar6;
  *(undefined8 *)(param_1[3] + 8) = 0;
  auVar24._8_4_ = SUB84((double)(float)dVar2,0);
  auVar24._0_8_ = (double)(float)dVar1;
  auVar24._12_4_ = (int)((ulonglong)(double)(float)dVar2 >> 0x20);
  param_1[4] = auVar24;
  *(double *)param_1[5] = (double)(float)dVar3;
  *(undefined8 *)(param_1[5] + 8) = 0;
  if ((local_d0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149510052 FUN_149510052 body=49 status=ok
// SIG undefined FUN_149510052(void)

longlong * FUN_149510052(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1459f61fe();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 149510084 FUN_149510084 body=161 status=ok
// SIG undefined FUN_149510084(void)

undefined8 FUN_149510084(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 *local_70;
  undefined1 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_149510126(param_2);
  local_28 = *(undefined8 *)(param_1 + 0x38);
  local_60 = &local_38;
  local_38 = *(undefined8 *)(param_1 + 0x28);
  uStack_30 = *(undefined8 *)(param_1 + 0x30);
  local_68 = *(undefined1 *)(param_1 + 0xc);
  local_58 = *(undefined4 *)(param_1 + 0x10);
  uStack_54 = *(undefined4 *)(param_1 + 0x14);
  uStack_50 = *(undefined4 *)(param_1 + 0x18);
  uStack_4c = *(undefined4 *)(param_1 + 0x1c);
  local_70 = &local_58;
  local_48 = *(undefined8 *)(param_1 + 0x20);
  local_78 = *(undefined1 *)(param_1 + 0xb);
  FUN_14950fae0(lVar1 + 0xa0,*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9),
                *(undefined1 *)(param_1 + 10));
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149510126 FUN_149510126 body=74 status=ok
// SIG undefined FUN_149510126(void)

undefined8 FUN_149510126(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = FUN_1492dc4d4();
  if (((lVar2 == 0) || (lVar3 = FUN_14671a1de(), lVar3 == 0)) ||
     (*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30) {
      uVar4 = uVar1;
    }
  }
  return uVar4;
}



// FUNCTION 149510170 FUN_149510170 body=49 status=ok
// SIG undefined FUN_149510170(void)

longlong * FUN_149510170(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_1459f61fe();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 1495101a2 FUN_1495101a2 body=437 status=ok
// SIG undefined FUN_1495101a2(void)

longlong * FUN_1495101a2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  lVar7 = *(longlong *)(param_1 + 0x60);
  if (lVar7 != 0) goto LAB_1495101ba;
  plVar8 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14bd360c0;
  plVar8[3] = 0x20100;
  plVar8[2] = (longlong)&PTR_FUN_14bd360d8;
  lVar7 = DAT_14c8464e8;
  plVar8[4] = DAT_14c8464e0;
  plVar8[5] = lVar7;
  plVar8[6] = DAT_14c8464f0;
  uVar6 = DAT_14c846500._4_4_;
  uVar5 = (undefined4)DAT_14c846500;
  uVar4 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(plVar8 + 7) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)plVar8 + 0x3c) = uVar4;
  *(undefined4 *)(plVar8 + 8) = uVar5;
  *(undefined4 *)((longlong)plVar8 + 0x44) = uVar6;
  plVar8[9] = DAT_14c846508;
  if (plVar8 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = 0x10;
    plVar9 = *(longlong **)(param_1 + 0x68);
    if (plVar9 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x68) = 0;
LAB_14951026f:
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
      if (plVar8 != (longlong *)0x0) goto LAB_149510293;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x60) = plVar8 + 2;
    plVar9 = *(longlong **)(param_1 + 0x68);
    if (plVar8 == plVar9) {
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
      *(longlong **)(param_1 + 0x68) = plVar8;
      if (plVar9 != (longlong *)0x0) goto LAB_14951026f;
    }
LAB_149510293:
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 8) = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 9) = *(undefined1 *)(param_1 + 0x29);
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 10) = *(undefined1 *)(param_1 + 0x2a);
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xb) = *(undefined1 *)(param_1 + 0x2b);
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xc) = *(undefined1 *)(param_1 + 0x2c);
  lVar7 = *(longlong *)(param_1 + 0x60);
  *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(lVar7 + 0x18) = uVar3;
  lVar7 = *(longlong *)(param_1 + 0x60);
  *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(lVar7 + 0x30) = uVar3;
  lVar7 = *(longlong *)(param_1 + 0x60);
LAB_1495101ba:
  *param_2 = lVar7;
  lVar7 = *(longlong *)(param_1 + 0x68);
  param_2[1] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 149510358 FUN_149510358 body=49 status=ok
// SIG undefined FUN_149510358(void)

longlong * FUN_149510358(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145a92b78();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 14951038a FUN_14951038a body=220 status=ok
// SIG undefined FUN_14951038a(void)

undefined8 FUN_14951038a(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined4 *local_90;
  undefined1 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = FUN_1494f494e(param_2);
  if ((longlong)*(int *)(lVar1 + 0xa8) != 0) {
    lVar2 = *(longlong *)(lVar1 + 0xa0);
    lVar1 = (longlong)*(int *)(lVar1 + 0xa8) * 0x60;
    do {
      local_48 = *(undefined8 *)(param_1 + 0x38);
      local_58 = *(undefined8 *)(param_1 + 0x28);
      uStack_50 = *(undefined8 *)(param_1 + 0x30);
      local_88 = *(undefined1 *)(param_1 + 0xc);
      local_68 = *(undefined8 *)(param_1 + 0x20);
      local_78 = *(undefined4 *)(param_1 + 0x10);
      uStack_74 = *(undefined4 *)(param_1 + 0x14);
      uStack_70 = *(undefined4 *)(param_1 + 0x18);
      uStack_6c = *(undefined4 *)(param_1 + 0x1c);
      local_98 = *(undefined1 *)(param_1 + 0xb);
      local_90 = &local_78;
      local_80 = &local_58;
      FUN_14950fae0(lVar2,*(undefined1 *)(param_1 + 8),*(undefined1 *)(param_1 + 9),
                    *(undefined1 *)(param_1 + 10));
      lVar2 = lVar2 + 0x60;
      lVar1 = lVar1 + -0x60;
    } while (lVar1 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149510468 FUN_149510468 body=49 status=ok
// SIG undefined FUN_149510468(void)

longlong * FUN_149510468(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145a92b78();
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  return param_2;
}



// FUNCTION 14951049a FUN_14951049a body=437 status=ok
// SIG undefined FUN_14951049a(void)

longlong * FUN_14951049a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  lVar7 = *(longlong *)(param_1 + 0x60);
  if (lVar7 != 0) goto LAB_1495104b2;
  plVar8 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14bd360f0;
  plVar8[3] = 0x20100;
  lVar7 = DAT_14c8464e8;
  plVar8[4] = DAT_14c8464e0;
  plVar8[5] = lVar7;
  plVar8[6] = DAT_14c8464f0;
  plVar8[9] = DAT_14c846508;
  uVar6 = DAT_14c846500._4_4_;
  uVar5 = (undefined4)DAT_14c846500;
  uVar4 = DAT_14c8464f8._4_4_;
  *(undefined4 *)(plVar8 + 7) = (undefined4)DAT_14c8464f8;
  *(undefined4 *)((longlong)plVar8 + 0x3c) = uVar4;
  *(undefined4 *)(plVar8 + 8) = uVar5;
  *(undefined4 *)((longlong)plVar8 + 0x44) = uVar6;
  plVar8[2] = (longlong)&PTR_FUN_14bd36108;
  if (plVar8 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = 0x10;
    plVar9 = *(longlong **)(param_1 + 0x68);
    if (plVar9 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x68) = 0;
LAB_149510567:
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
      if (plVar8 != (longlong *)0x0) goto LAB_14951058b;
    }
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x60) = plVar8 + 2;
    plVar9 = *(longlong **)(param_1 + 0x68);
    if (plVar8 == plVar9) {
      LOCK();
      plVar9 = plVar8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
      *(longlong **)(param_1 + 0x68) = plVar8;
      if (plVar9 != (longlong *)0x0) goto LAB_149510567;
    }
LAB_14951058b:
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 8) = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 9) = *(undefined1 *)(param_1 + 0x29);
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 10) = *(undefined1 *)(param_1 + 0x2a);
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xb) = *(undefined1 *)(param_1 + 0x2b);
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xc) = *(undefined1 *)(param_1 + 0x2c);
  lVar7 = *(longlong *)(param_1 + 0x60);
  *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(lVar7 + 0x18) = uVar3;
  lVar7 = *(longlong *)(param_1 + 0x60);
  *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(lVar7 + 0x30) = uVar3;
  lVar7 = *(longlong *)(param_1 + 0x60);
LAB_1495104b2:
  *param_2 = lVar7;
  lVar7 = *(longlong *)(param_1 + 0x68);
  param_2[1] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  return param_2;
}


