// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1490de5a8 FUN_1490de5a8 body=106 status=ok
// SIG undefined FUN_1490de5a8(void)

undefined8 * FUN_1490de5a8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc00888) {
    FUN_144b3d300(&DAT_14cc00888);
    if (DAT_14cc00888 == -1) {
      DAT_14cc00878 = 0;
      uRam000000014cc00880 = 0;
      atexit((_func_5014 *)&LAB_144466d07);
      _Init_thread_footer(&DAT_14cc00888);
    }
  }
  return &DAT_14cc00878;
}



// FUNCTION 1490de612 FUN_1490de612 body=661 status=ok
// SIG undefined FUN_1490de612(void)

longlong * FUN_1490de612(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  char local_259;
  longlong local_258;
  ulonglong uStack_250;
  code *local_248;
  undefined1 local_23c;
  longlong *local_238;
  longlong local_228 [11];
  undefined1 local_1d0 [104];
  undefined1 local_168 [224];
  undefined8 local_88 [2];
  undefined8 local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = (int)param_3[1];
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    plVar5 = (longlong *)*param_3;
    lVar4 = lVar6 * 0x50;
    do {
      if (*plVar5 == *param_4) {
        if (plVar5 != (longlong *)0x0) {
          local_258 = 0;
          uStack_250 = 0;
          FUN_140bfc200(&local_258,iVar1,1);
          FUN_1490fc8cc(plVar5,local_168);
          local_259 = '\x01';
          local_248 = (code *)0x0;
          local_238 = (longlong *)FUN_14001cc68(0x30,8);
          *local_238 = (longlong)&PTR_FUN_14bad5620;
          local_238[1] = (longlong)&local_259;
          local_238[2] = param_1;
          local_238[3] = (longlong)param_4;
          local_238[4] = (longlong)param_3;
          local_238[5] = (longlong)&local_258;
          if (local_238 + 1 != (longlong *)0x0) {
            local_248 = FUN_14446c976;
          }
          FUN_140019f06(local_168,&local_248);
          if (local_248 != (code *)0x0) {
            plVar5 = local_238;
            if (local_238 == (longlong *)0x0) {
              plVar5 = local_228;
            }
            (**(code **)(*plVar5 + 0x10))();
          }
          if (local_259 == '\x01') {
            if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar1);
            }
            FUN_1490f22c6(param_2,iVar1);
            lVar7 = 0;
            lVar4 = 0;
            do {
              FUN_1490fc8cc(*param_3 + lVar4,&local_248);
              lVar3 = local_258;
              lVar2 = *param_3;
              if (*(int *)(local_258 + 8 + lVar7) == 0) {
                iVar1 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar1 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
                  FUN_1490f2336(param_2,iVar1);
                }
                local_88[0] = 0;
                local_78 = 0;
                local_268 = local_88;
                FUN_144478fee((longlong)iVar1 * 0x50 + *param_2,*(undefined8 *)(lVar2 + lVar4),
                              local_23c,local_1d0);
              }
              else {
                iVar1 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar1 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
                  FUN_1490f2336(param_2,iVar1);
                }
                FUN_144478eaa((longlong)iVar1 * 0x50 + *param_2,*(undefined8 *)(lVar2 + lVar4),
                              local_23c,lVar3 + lVar7);
              }
              FUN_14083ed00(&local_248);
              lVar4 = lVar4 + 0x50;
              lVar7 = lVar7 + 0x10;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
          }
          FUN_14083ed00(local_168);
          FUN_144716727(local_258,uStack_250 & 0xffffffff);
          if (local_258 != 0) {
            FUN_1400020a8();
          }
        }
        break;
      }
      plVar5 = plVar5 + 10;
      lVar4 = lVar4 + -0x50;
    } while (lVar4 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1490de8aa FUN_1490de8aa body=48 status=ok
// SIG undefined FUN_1490de8aa(void)

ulonglong FUN_1490de8aa(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  if (0 < (longlong)*(int *)(param_1 + 0x10)) {
    plVar2 = *(longlong **)(param_1 + 8);
    uVar1 = 0;
    do {
      if (*plVar2 == *param_2) {
        return uVar1 & 0xffffffff;
      }
      uVar1 = uVar1 + 1;
      plVar2 = plVar2 + 0x1a;
    } while ((longlong)*(int *)(param_1 + 0x10) != uVar1);
  }
  return 0xffffffff;
}



// FUNCTION 1490de8da FUN_1490de8da body=68 status=ok
// SIG undefined FUN_1490de8da(void)

void FUN_1490de8da(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490de91e FUN_1490de91e body=66 status=ok
// SIG undefined FUN_1490de91e(void)

void FUN_1490de91e(void)

{
  FUN_144469c20();
  return;
}



// FUNCTION 1490de960 FUN_1490de960 body=85 status=ok
// SIG undefined FUN_1490de960(void)

undefined8 * FUN_1490de960(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147a6efc8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x58);
      }
    }
  }
  return param_1;
}



// FUNCTION 1490de9b6 FUN_1490de9b6 body=104 status=ok
// SIG undefined FUN_1490de9b6(void)

undefined8 * FUN_1490de9b6(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  int iVar1;
  ulonglong uVar2;
  
  _Src = (void *)*param_2;
  uVar2 = (param_2[1] - (longlong)_Src >> 3) * 0x2e8ba2e8ba2e8ba3;
  iVar1 = (int)uVar2;
  *(int *)(param_1 + 1) = iVar1;
  if (*(int *)((longlong)param_1 + 0xc) == 0 && iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_147a6efc8(param_1,uVar2 & 0xffffffff);
    if (iVar1 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x58);
    }
  }
  return param_1;
}



// FUNCTION 1490dea1e FUN_1490dea1e body=550 status=ok
// SIG undefined FUN_1490dea1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1490dea1e(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cc00990) && (FUN_144b3d300(&DAT_14cc00990), DAT_14cc00990 == -1)) {
    _DAT_14cc00980 = 0x800000014bacca30;
    _DAT_14cc00988 = FUN_145af9a3a("ControlRigExecuteContext",0x18);
    DAT_14cc0098c = 0;
    _Init_thread_footer(&DAT_14cc00990);
  }
  local_34 = *(undefined4 *)(param_1 + 8);
  FUN_1446f57c6(&DAT_14cc00980,&local_40);
  uVar2 = FUN_1468ec2ac(&local_34,local_40);
  if ((char)uVar2 != '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc009a8) && (FUN_144b3d300(&DAT_14cc009a8), DAT_14cc009a8 == -1)) {
      FUN_140056680(&DAT_14cc00998,L"/Script/ControlRig.ControlRigExecuteContext");
      atexit((_func_5014 *)&LAB_14446bd39);
      _Init_thread_footer(&DAT_14cc009a8);
    }
    puVar7 = DAT_14cc00998;
    if (DAT_14cc009a0 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    uVar3 = FUN_1446f4bba();
    local_48 = 0;
    uVar3 = FUN_140277cc4(uVar3,puVar7,0xc,0);
    plVar4 = (longlong *)FUN_14001cc68(0x28,0x10);
    FUN_1446e6d0e(plVar4,uVar3);
    plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar5[1] = (longlong)&DAT_100000001;
    *plVar5 = (longlong)&PTR_FUN_14a4c7c20;
    plVar5[2] = (longlong)plVar4;
    uVar6 = (**(code **)(*plVar4 + 0x18))(plVar4);
    FUN_14483b62e(uVar3,param_2,uVar6,0);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1490dec46 FUN_1490dec46 body=56 status=ok
// SIG undefined FUN_1490dec46(void)

void FUN_1490dec46(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  FUN_145a593dc(param_1 + 0x10,param_2 + 0x10);
  FUN_145a593dc(param_1 + 0x60,param_2 + 0x60);
  return;
}



// FUNCTION 1490dec7e FUN_1490dec7e body=134 status=ok
// SIG undefined FUN_1490dec7e(void)

longlong * FUN_1490dec7e(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar12 = param_2[1];
  if ((longlong)(int)lVar12 != 0) {
    lVar4 = *param_2;
    lVar15 = 0;
    lVar13 = 0;
    do {
      iVar3 = (int)param_1[1];
      lVar14 = (longlong)iVar3;
      *(uint *)(param_1 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
        FUN_1490ee6d0(param_1,iVar3);
        lVar13 = *param_1;
      }
      puVar1 = (undefined4 *)(lVar4 + lVar15);
      *(undefined8 *)(lVar13 + 0x20 + lVar14 * 0x28) = *(undefined8 *)(puVar1 + 8);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      uVar9 = puVar1[5];
      uVar10 = puVar1[6];
      uVar11 = puVar1[7];
      puVar2 = (undefined4 *)(lVar13 + 0x10 + lVar14 * 0x28);
      *puVar2 = puVar1[4];
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      puVar1 = (undefined4 *)(lVar13 + lVar14 * 0x28);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar15 = lVar15 + 0x30;
    } while ((longlong)(int)lVar12 * 0x30 != lVar15);
  }
  return param_1;
}



// FUNCTION 1490ded04 FUN_1490ded04 body=121 status=ok
// SIG undefined FUN_1490ded04(void)

longlong FUN_1490ded04(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x2c) == -1) {
    lVar3 = 0;
  }
  else {
    FUN_14001a7b2();
    plVar2 = (longlong *)(**(code **)(DAT_14cc012d0 + 0x130))(&DAT_14cc012d0);
    lVar1 = *(longlong *)(*plVar2 + (longlong)(*(int *)(param_1 + 0x2c) / 0x59) * 8);
    lVar4 = (longlong)(*(int *)(param_1 + 0x2c) % 0x59) * 0xb8;
    lVar3 = 0;
    if (1 < *(int *)(lVar1 + 0x38 + lVar4)) {
      lVar3 = lVar1 + lVar4;
    }
  }
  return lVar3;
}



// FUNCTION 1490ded92 FUN_1490ded92 body=53 status=ok
// SIG undefined FUN_1490ded92(void)

bool FUN_1490ded92(longlong param_1)

{
  longlong lVar1;
  
  param_1 = param_1 + 0x18;
  lVar1 = FUN_1401fe4bc(param_1);
  if (lVar1 == 0) {
    FUN_144a6654a(param_1);
  }
  lVar1 = FUN_1401fe4bc(param_1);
  return lVar1 != 0;
}



// FUNCTION 1490dedc8 FUN_1490dedc8 body=157 status=ok
// SIG undefined FUN_1490dedc8(void)

undefined8 FUN_1490dedc8(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  cVar1 = FUN_1490ded92();
  if ((cVar1 != '\0') && (lVar2 = FUN_1401fe4bc(param_1 + 0x18), lVar2 != 0)) {
    lVar3 = FUN_1446f4bba();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      if (DAT_14cc00940 == 0) {
        uVar4 = FUN_1408ed7fc();
        DAT_14cc00940 = FUN_140002ddd(FUN_141905ec2,uVar4,L"RigVMExecuteContext");
        if (DAT_14cc00940 == 0) {
          return 0;
        }
      }
      if ((*(int *)(DAT_14cc00940 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cc00940 + 0x38) * 8)
          == DAT_14cc00940 + 0x30)) {
        return CONCAT71((int7)((ulonglong)(DAT_14cc00940 + 0x30) >> 8),1);
      }
    }
  }
  return 0;
}



// FUNCTION 1490dee66 FUN_1490dee66 body=238 status=ok
// SIG undefined FUN_1490dee66(void)

void FUN_1490dee66(longlong param_1)

{
  FUN_1490ee25a(param_1 + 0x148);
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  FUN_1490ee2d2(param_1 + 0xe8);
  FUN_1490e5d69(*(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xe0));
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_145be1eb3(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_1490e6860(param_1);
  return;
}



// FUNCTION 1490def54 FUN_1490def54 body=328 status=ok
// SIG undefined FUN_1490def54(void)

longlong FUN_1490def54(longlong param_1)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1490ee308();
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x8c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x94) = 0x3f800000;
  FUN_144a5dc74(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x184) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1d4) = 0xffffffff00000080;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490df09e FUN_1490df09e body=722 status=ok
// SIG undefined FUN_1490df09e(void)

longlong FUN_1490df09e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  FUN_1490edd5e();
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  uVar5 = *(undefined4 *)(param_2 + 0x54);
  uVar6 = *(undefined4 *)(param_2 + 0x58);
  uVar7 = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(undefined4 *)(param_1 + 0x58) = uVar6;
  *(undefined4 *)(param_1 + 0x5c) = uVar7;
  FUN_1490e45c6(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = 0;
  iVar1 = *(int *)(param_2 + 0x80);
  pvVar2 = *(void **)(param_2 + 0x78);
  *(int *)(param_1 + 0x80) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x78),iVar1,0);
    memcpy(*(void **)(param_1 + 0x78),pvVar2,(longlong)iVar1 * 2);
  }
  uVar5 = *(undefined4 *)(param_2 + 0x8c);
  uVar6 = *(undefined4 *)(param_2 + 0x90);
  uVar7 = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = uVar5;
  *(undefined4 *)(param_1 + 0x90) = uVar6;
  *(undefined4 *)(param_1 + 0x94) = uVar7;
  plVar3 = *(longlong **)(param_2 + 0x98);
  *(longlong **)(param_1 + 0x98) = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  iVar1 = *(int *)(param_2 + 0xb0);
  pvVar2 = *(void **)(param_2 + 0xa8);
  *(int *)(param_1 + 0xb0) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0xa8),iVar1,0);
    memcpy(*(void **)(param_1 + 0xa8),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
  iVar1 = *(int *)(param_2 + 0xc0);
  pvVar2 = *(void **)(param_2 + 0xb8);
  *(int *)(param_1 + 0xc0) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xc4) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0xb8),iVar1,0);
    memcpy(*(void **)(param_1 + 0xb8),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 200) = 0;
  iVar1 = *(int *)(param_2 + 0xd0);
  pvVar2 = *(void **)(param_2 + 200);
  *(int *)(param_1 + 0xd0) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 200),iVar1,0);
    memcpy(*(void **)(param_1 + 200),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  iVar1 = *(int *)(param_2 + 0xe0);
  uVar4 = *(undefined8 *)(param_2 + 0xd8);
  *(int *)(param_1 + 0xe0) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  else {
    FUN_1490eda3e((undefined8 *)(param_1 + 0xd8),iVar1,0);
    FUN_1490edab0(*(undefined8 *)(param_1 + 0xd8),uVar4,iVar1);
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  FUN_1490edc08(param_1 + 0xe8,param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0x138) = 0;
  iVar1 = *(int *)(param_2 + 0x140);
  pvVar2 = *(void **)(param_2 + 0x138);
  *(int *)(param_1 + 0x140) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x144) = 0;
  }
  else {
    FUN_1490ede5c((undefined8 *)(param_1 + 0x138),iVar1,0);
    memcpy(*(void **)(param_1 + 0x138),pvVar2,(longlong)iVar1 * 0x30);
  }
  FUN_1490ee3e8(param_1 + 0x148,param_2 + 0x148);
  return param_1;
}



// FUNCTION 1490df370 FUN_1490df370 body=149 status=ok
// SIG undefined FUN_1490df370(void)

longlong * FUN_1490df370(longlong *param_1)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_1[5] < 2) && (*param_1 != 0)) {
    FUN_14475cc44(param_1,&local_30);
    if (param_1 + 4 == &local_30) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[4] != 0) {
        FUN_1400020a8();
      }
      param_1[4] = local_30;
      *(undefined4 *)(param_1 + 5) = local_28;
      *(undefined4 *)((longlong)param_1 + 0x2c) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1 + 4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490df406 FUN_1490df406 body=487 status=ok
// SIG undefined FUN_1490df406(void)

longlong * FUN_1490df406(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  wchar_t *pwVar3;
  bool bVar4;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  int local_80;
  wchar_t *local_78;
  int local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  wchar_t *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = (wchar_t *)0x0;
  uStack_40 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_68 = 0;
  uStack_60 = 0;
  cVar1 = FUN_149172c3b(param_2);
  if (cVar1 == '\0') {
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_1490df4eb;
  }
  bVar4 = (longlong)uStack_40 < 0;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  if (bVar4) {
    FUN_1446f8c06(&local_48,0);
  }
  if (local_48 != (wchar_t *)0x0) {
    *local_48 = L'\0';
  }
  cVar1 = FUN_149172d2d(local_58,&local_48,&local_68);
  if (cVar1 != '\0') {
    FUN_140056680(&local_78,L"Entry");
    pwVar3 = local_78;
    if ((int)uStack_40 == local_70) {
      bVar4 = true;
      if (1 < (int)uStack_40) {
        iVar2 = wcscmp(local_48,local_78);
        if (iVar2 != 0) goto LAB_1490df556;
        bVar4 = true;
      }
    }
    else {
      bVar4 = true;
      if (local_70 + (int)uStack_40 != 1) {
LAB_1490df556:
        FUN_140056680(&local_88,L"Return");
        if ((int)uStack_40 == local_80) {
          bVar4 = true;
          if (1 < (int)uStack_40) {
            iVar2 = wcscmp(local_48,local_88);
            bVar4 = iVar2 == 0;
          }
        }
        else {
          bVar4 = local_80 + (int)uStack_40 == 1;
        }
        pwVar3 = local_78;
        if (local_88 != (wchar_t *)0x0) {
          FUN_1400020a8(local_88);
          pwVar3 = local_78;
        }
      }
    }
    if (pwVar3 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar3);
    }
    if (bVar4) {
      *param_1 = local_68;
      local_68 = 0;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_60._4_4_;
      goto LAB_1490df4eb;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_1490df4eb:
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1490df5ee FUN_1490df5ee body=464 status=ok
// SIG undefined FUN_1490df5ee(void)

undefined4 * FUN_1490df5ee(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  wchar_t *local_78;
  int local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1400021e4(param_3,&local_78);
  plVar1 = (longlong *)(param_1 + 0x388);
  lVar2 = param_1 + 0x398;
  local_68 = (wchar_t *)&DAT_100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x3b0) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar5 = *(int *)(param_1 + 0x3b0);
  }
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = (int)uStack_60;
  uStack_8c = uStack_60._4_4_;
  local_a0 = plVar1;
  if ((iStack_54 != iVar5) || (uStack_60 != lVar2)) {
    do {
      lVar6 = (longlong)iStack_84 * 0x20 + *local_a0;
      FUN_1490df406(&local_68,lVar6);
      pwVar3 = local_68;
      if (1 < (int)uStack_60) {
        if ((int)uStack_60 == local_70) {
          iVar4 = wcscmp(local_68,local_78);
          if (iVar4 == 0) {
LAB_1490df78d:
            *(undefined2 *)(param_2 + 1) = *(undefined2 *)(lVar6 + 0x14);
            *param_2 = *(undefined4 *)(lVar6 + 0x10);
            if (pwVar3 != (wchar_t *)0x0) {
              FUN_1400020a8(pwVar3);
            }
            goto LAB_1490df6a9;
          }
        }
        else if (local_70 + (int)uStack_60 == 1) goto LAB_1490df78d;
      }
      if (pwVar3 != (wchar_t *)0x0) {
        FUN_1400020a8(pwVar3);
      }
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
    } while (local_a0 != plVar1 || (CONCAT44(uStack_8c,uStack_90) != lVar2 || iStack_84 != iVar5));
  }
  *(undefined1 *)param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 2) = 0xffffffff;
LAB_1490df6a9:
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1490df7c0 FUN_1490df7c0 body=421 status=ok
// SIG undefined FUN_1490df7c0(void)

ulonglong FUN_1490df7c0(longlong param_1)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_c8 [36];
  undefined1 local_a4 [6];
  undefined1 local_9e [2];
  short local_9c;
  undefined2 local_9a;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar7 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar5 = *(uint *)(param_1 + 0xe0);
  if ((longlong)(int)uVar5 != 0) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar5);
    }
    FUN_1490f27ce(&local_98,uVar5);
    iVar3 = 1;
    if (3 < uVar5) {
      uVar5 = (uVar5 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar3)) {
      local_50 = iVar3;
      FUN_1490f2964();
    }
    if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xd8);
      lVar8 = (longlong)*(int *)(param_1 + 0xe0) * 0xb0;
      do {
        cVar2 = FUN_1490dedc8(lVar6);
        if ((cVar2 == '\0') &&
           (FUN_1490df5ee(param_1,local_9e,lVar6), uVar1 = local_9a, local_9c != -1)) {
          uVar4 = FUN_144a78877(local_9e[0]);
          uVar4 = FUN_144a78877(uVar4,uVar1);
          iVar3 = FUN_1490f2b38(&local_98,uVar4,local_9e);
          if (iVar3 != -1) {
            uVar7 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
            goto LAB_1490df81e;
          }
          FUN_1490f2ba2(&local_98,local_a4,local_9e);
        }
        lVar6 = lVar6 + 0xb0;
        lVar8 = lVar8 + -0xb0;
      } while (lVar8 != 0);
    }
    uVar7 = 0;
  }
LAB_1490df81e:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1490f2740(&local_98);
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1490df968 FUN_1490df968 body=3395 status=ok
// SIG undefined FUN_1490df968(void)

void FUN_1490df968(longlong param_1)

{
  int *piVar1;
  undefined2 uVar2;
  ushort uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  short sVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong lVar21;
  undefined1 auStack_228 [38];
  short local_202;
  longlong local_200;
  uint local_1f4;
  longlong *local_1f0;
  longlong *local_1e8;
  int *local_1e0;
  longlong local_1d8 [2];
  longlong *local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8 [4];
  longlong *local_198;
  undefined8 uStack_190;
  longlong local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_168;
  char local_160;
  undefined1 uStack_15f;
  short sStack_15e;
  short sStack_15c;
  undefined2 uStack_15a;
  undefined2 uStack_158;
  undefined6 uStack_156;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  longlong *local_118;
  undefined8 uStack_110;
  longlong local_108 [3];
  char local_ee;
  undefined1 uStack_ed;
  ushort uStack_ec;
  short sStack_ea;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  ulonglong local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8 [4];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  cVar6 = FUN_1490df7c0();
  if (cVar6 == '\0') {
LAB_1490df9a1:
    if ((local_60 ^ (ulonglong)auStack_228) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  iVar9 = *(int *)(param_1 + 0xe0);
  if (iVar9 < 0) {
LAB_1490e036e:
    local_70 = 0;
    local_78 = 0;
    local_84 = 0;
    local_8c = 0xffffffff00000080;
    local_90 = 0;
    local_98 = 0;
    local_b8[1] = 0;
    local_b8[0] = 0;
    uStack_e0 = 0;
    local_e8 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar9);
  }
  local_1e8 = (longlong *)(param_1 + 0x2b8);
  local_1f0 = (longlong *)(param_1 + 0x388);
  local_200 = param_1;
LAB_1490dfa66:
  local_70 = 0;
  local_78 = 0;
  local_84 = 0;
  local_8c = 0xffffffff00000080;
  local_90 = 0;
  local_98 = 0;
  local_b8[1] = 0;
  local_b8[0] = 0;
  uStack_e0 = 0;
  local_e8 = 0;
  iVar18 = 0;
  if (iVar9 != 0) {
    FUN_1490f2e90(&local_e8);
    iVar18 = 0;
    if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
      puVar20 = *(undefined8 **)(param_1 + 0xd8);
      lVar19 = (longlong)*(int *)(param_1 + 0xe0) * 0xb0;
      do {
        cVar6 = FUN_1490dedc8(puVar20);
        if (cVar6 == '\0') {
          FUN_1490df5ee(param_1,&local_168,puVar20);
          uVar4 = uStack_e0;
          if (local_168._2_2_ != -1) {
            lVar21 = (longlong)(int)uStack_e0;
            uVar7 = (int)uStack_e0 + 1;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar7);
            if (uStack_e0._4_4_ < uVar7) {
              FUN_1490f2ee6(&local_e8,uVar4 & 0xffffffff);
            }
            lVar21 = lVar21 * 0x10;
            *(undefined8 *)(local_e8 + lVar21) = *puVar20;
            *(undefined4 *)(local_e8 + 8 + lVar21) = (undefined4)local_168;
            uVar2 = local_168._4_2_;
            *(undefined2 *)(local_e8 + 0xc + lVar21) = local_168._4_2_;
            uVar8 = FUN_144a78877((ulonglong)local_168 & 0xff,local_168._2_2_);
            uVar8 = FUN_144a78877(uVar8,uVar2);
            plVar10 = (longlong *)FUN_1490f2f6c(local_b8,uVar8,&local_168);
            iVar9 = (int)plVar10[1];
            *(uint *)(plVar10 + 1) = iVar9 + 1U;
            if (*(uint *)((longlong)plVar10 + 0xc) < iVar9 + 1U) {
              FUN_1446f84a2(plVar10,iVar9);
            }
            *(undefined8 *)(*plVar10 + (longlong)iVar9 * 8) = *puVar20;
          }
        }
        puVar20 = puVar20 + 0x16;
        lVar19 = lVar19 + -0xb0;
      } while (lVar19 != 0);
      iVar18 = *(int *)(param_1 + 0xe0);
    }
  }
  local_ee = '\0';
  uStack_ec = 0xffff;
  sStack_ea = -1;
  local_108[0] = 0;
  local_108[1] = 0;
  local_118 = (longlong *)0x0;
  uStack_110 = 0;
  if (0 < iVar18) {
    lVar19 = 0;
    lVar21 = 0;
    uVar7 = 0xffffffff;
    do {
      lVar13 = *(longlong *)(param_1 + 0xd8);
      piVar1 = (int *)(lVar13 + lVar19);
      cVar6 = FUN_1490dedc8(piVar1);
      uVar16 = uVar7;
      if (cVar6 == '\0') {
        local_1e0 = piVar1;
        FUN_1490df5ee(param_1,&local_ee,piVar1);
        sVar15 = sStack_ea;
        uVar3 = uStack_ec;
        cVar6 = local_ee;
        uVar17 = (uint)uStack_ec;
        if (uStack_ec == 0xffff) {
          local_ee = '\0';
          sStack_ea = -1;
          uVar16 = uVar7 + 1;
        }
        else {
          local_202 = sStack_ea;
          local_1f4 = uVar7 + 1;
          uVar8 = FUN_144a78877(local_ee,uStack_ec);
          uVar8 = FUN_144a78877(uVar8,sVar15);
          iVar9 = FUN_1490f2ff2(local_b8,uVar8,&local_ee);
          lVar12 = 0;
          if (iVar9 != -1) {
            lVar12 = (longlong)iVar9 * 0x20 + local_b8[0];
          }
          param_1 = local_200;
          uVar16 = local_1f4;
          if (*(int *)(lVar12 + 0x10) != 1) {
            if ((**(int **)(lVar12 + 8) != *local_1e0) ||
               ((*(int **)(lVar12 + 8))[1] != *(int *)(lVar13 + 4 + lVar19))) goto LAB_1490dfcde;
          }
        }
      }
      lVar21 = lVar21 + 1;
      lVar19 = lVar19 + 0xb0;
      uVar7 = uVar16;
      if (*(int *)(param_1 + 0xe0) <= lVar21) {
        if (local_118 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_108[0] != 0) {
          FUN_1400020a8();
        }
        break;
      }
    } while( true );
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1490ee4b6(local_b8);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  goto LAB_1490df9a1;
LAB_1490dfcde:
  lVar21 = local_200 + 0x398;
  FUN_1490e06ac(&local_168,(ulonglong)(uVar17 * 0x50) + *(longlong *)(local_200 + 0x2b8));
  local_d8 = 0x100000000;
  local_c8 = 0xffffffff;
  local_c0 = 0;
  iVar9 = 0;
  lStack_d0 = lVar21;
  if (*(int *)(local_200 + 0x3b0) != 0) {
    FUN_1449c0562(&local_d8);
    iVar9 = *(int *)(local_200 + 0x3b0);
  }
  local_180 = local_c8;
  uVar4 = local_180;
  local_178 = local_c0;
  local_174 = local_bc;
  uStack_190 = local_d8;
  local_188 = lStack_d0;
  local_198 = local_1f0;
  local_180._4_4_ = (int)(local_c8 >> 0x20);
  iVar18 = local_180._4_4_;
  if ((local_180._4_4_ != iVar9) || (local_180 = uVar4, lStack_d0 != lVar21)) {
    do {
      local_180 = uVar4;
      if ((*(char *)(*local_198 + 0x10 + (longlong)iVar18 * 0x20) == cVar6) &&
         ((lVar12 = *local_198 + (longlong)iVar18 * 0x20, *(ushort *)(lVar12 + 0x12) == uVar3 &&
          (*(short *)(lVar12 + 0x14) == local_202)))) {
        FUN_144a787a6(local_108);
        break;
      }
      local_180 = CONCAT44(local_180._4_4_,(uint)local_180 & ~uStack_190._4_4_);
      FUN_1449c0562(&uStack_190);
      iVar18 = local_180._4_4_;
      uVar4 = local_180;
    } while (local_198 != local_1f0 || (local_188 != lVar21 || local_180._4_4_ != iVar9));
  }
  local_198 = (longlong *)0x0;
  uStack_190 = 0;
  local_d8 = 0;
  lStack_d0 = 0;
  local_1b8[2] = 0;
  local_1b8[3] = 0;
  local_1b8[0] = 0;
  local_1b8[1] = 0;
  FUN_149172db5(local_108,&local_198,local_1b8);
  FUN_149172c3b(&local_198,&local_d8,local_1b8 + 2);
  plVar10 = local_1f0;
  if ((*(byte *)(lVar13 + 0x41 + lVar19) & 0xfd) == 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc00b30) && (FUN_144b3d300(&DAT_14cc00b30), DAT_14cc00b30 == -1)) {
      FUN_140056680(&DAT_14cc00b20,L"Entry");
      atexit((_func_5014 *)&LAB_14446c03b);
      _Init_thread_footer(&DAT_14cc00b30);
    }
    puVar20 = &DAT_14cc00b20;
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc00b48) && (FUN_144b3d300(&DAT_14cc00b48), DAT_14cc00b48 == -1)) {
      FUN_140056680(&DAT_14cc00b38,L"Return");
      atexit((_func_5014 *)&LAB_14446c04c);
      _Init_thread_footer(&DAT_14cc00b48);
    }
    puVar20 = &DAT_14cc00b38;
  }
  FUN_149172cc0(&local_1c8,&local_d8,puVar20);
  if (local_198 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_198 = local_1c8;
  uStack_190 = uStack_1c0;
  FUN_1400021e4(local_1e0,local_1d8);
  FUN_149172e3a(&local_1c8,&local_198,local_1d8);
  if (local_118 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_118 = local_1c8;
  local_1c8 = (longlong *)0x0;
  iVar9 = (int)uStack_1c0;
  uStack_110 = uStack_1c0;
  uStack_1c0 = 0;
  if (local_1d8[0] != 0) {
    FUN_1400020a8();
    iVar9 = (int)uStack_110;
  }
  plVar14 = local_118;
  if (iVar9 == 0) {
    plVar14 = (longlong *)&DAT_149dfb77a;
  }
  FUN_1446f470e(local_1d8,plVar14);
  FUN_1490f5bb0(&local_1c8,local_1d8);
  uVar17 = local_1f4;
  local_168 = local_1c8;
  uVar16 = *(uint *)(local_200 + 0x2c0);
  if ((int)local_1f4 < (int)uVar16 && -2 < (int)uVar7) {
    FUN_1490e07b2(local_1e8,&local_168);
    uVar16 = uVar17;
  }
  else {
    *(uint *)(local_200 + 0x2c0) = uVar16 + 1;
    if (*(uint *)(local_200 + 0x2c4) < uVar16 + 1) {
      FUN_1490e73f8(local_1e8,uVar16);
    }
    FUN_1490e06ac((longlong)(int)uVar16 * 0x50 + *local_1e8,&local_168);
  }
  if ((int)uVar16 < 0) {
    uVar16 = 0xffff;
  }
  if (local_1b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_1b8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_198 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1490e082a(&local_168);
  iVar9 = *(int *)(local_200 + 0x2d0);
  sVar15 = (short)uVar16;
  uVar16 = uVar16 & 0xffff;
  if ((longlong)iVar9 != 0) {
    uVar7 = uVar16;
    if (sVar15 == -1) {
      uVar7 = 0xffffffff;
    }
    lVar19 = *(longlong *)(local_200 + 0x2c8);
    lVar13 = 0;
    do {
      iVar18 = *(int *)(lVar19 + lVar13);
      if ((iVar18 != -1) && ((int)uVar7 <= iVar18)) {
        *(int *)(lVar19 + lVar13) = iVar18 + 1;
      }
      lVar13 = lVar13 + 0x28;
    } while ((longlong)iVar9 * 0x28 != lVar13);
  }
  local_198 = (longlong *)0x100000000;
  local_188 = 0xffffffff;
  local_180 = local_180 & 0xffffffff00000000;
  iVar9 = 0;
  uStack_190 = lVar21;
  if (*(int *)(local_200 + 0x3b0) != 0) {
    FUN_1449c0562(&local_198);
    iVar9 = *(int *)(local_200 + 0x3b0);
  }
  local_150 = local_188;
  uVar5 = local_150;
  local_148 = (uint)local_180;
  local_144 = local_180._4_4_;
  local_160 = (char)local_198;
  uStack_15f = (undefined1)((ulonglong)local_198 >> 8);
  sStack_15e = (short)((ulonglong)local_198 >> 0x10);
  sStack_15c = (short)((ulonglong)local_198 >> 0x20);
  uStack_15a = (undefined2)((ulonglong)local_198 >> 0x30);
  uStack_158 = (undefined2)uStack_190;
  uStack_156 = (undefined6)((ulonglong)uStack_190 >> 0x10);
  local_168 = plVar10;
  local_150._4_4_ = (int)((ulonglong)local_188 >> 0x20);
  iVar18 = local_150._4_4_;
  if ((local_150._4_4_ != iVar9) || (local_150 = uVar5, uStack_190 != lVar21)) {
    do {
      local_150 = uVar5;
      lVar19 = *local_168;
      lVar13 = (longlong)iVar18 * 0x20;
      if (*(char *)(lVar19 + 0x10 + lVar13) == cVar6) {
        uVar7 = (uint)*(ushort *)(lVar19 + 0x12 + lVar13);
        if (uVar7 == 0xffff) {
          uVar7 = 0xffffffff;
        }
        if ((sVar15 == -1) || ((int)uVar16 <= (int)uVar7)) {
          *(short *)(lVar13 + lVar19 + 0x12) = (short)uVar7 + 1;
        }
      }
      local_150 = CONCAT44(local_150._4_4_,(uint)local_150 & ~CONCAT22(uStack_15a,sStack_15c));
      FUN_1449c0562(&local_160);
      iVar18 = local_150._4_4_;
      uVar5 = local_150;
    } while (local_168 != plVar10 ||
             (CONCAT62(uStack_156,uStack_158) != lVar21 || local_150._4_4_ != iVar9));
  }
  param_1 = local_200;
  iVar9 = (int)uStack_110 + -1;
  plVar10 = local_118;
  if ((int)uStack_110 == 0) {
    iVar9 = 0;
    plVar10 = (longlong *)&DAT_149dfb77a;
  }
  lVar19 = local_200 + 0x1f8;
  uVar8 = FUN_144a49b4a(iVar9,plVar10);
  pcVar11 = (char *)FUN_1490f3518(local_1f0,uVar8,&local_118);
  *pcVar11 = cVar6;
  *(short *)(pcVar11 + 2) = sVar15;
  *(short *)(pcVar11 + 4) = local_202;
  FUN_141157eea(&local_198,lVar19,*(undefined1 *)(param_1 + 0x2a0));
  if ((longlong)(int)uStack_190 != 0) {
    plVar14 = local_198 + (longlong)(int)uStack_190 * 2;
    plVar10 = local_198;
    do {
      FUN_1490de1aa(lVar19,&local_168,plVar10);
      lVar21 = (longlong)CONCAT22(sStack_15e,CONCAT11(uStack_15f,local_160));
      if (0 < lVar21) {
        lVar13 = 0;
        do {
          if (*(char *)((longlong)local_168 + lVar13) == cVar6) {
            uVar7 = (uint)*(ushort *)((longlong)local_168 + lVar13 + 2);
            if (uVar7 == 0xffff) {
              uVar7 = 0xffffffff;
            }
            if ((sVar15 == -1) || ((int)uVar16 <= (int)uVar7)) {
              *(short *)((longlong)local_168 + lVar13 + 2) = (short)uVar7 + 1;
            }
          }
          lVar13 = lVar13 + 6;
        } while (lVar21 * 6 != lVar13);
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != plVar14);
  }
  local_168 = (longlong *)
              CONCAT26(sStack_ea,
                       CONCAT42(CONCAT22(uStack_ec,CONCAT11(uStack_ed,local_ee)),
                                (undefined2)local_168));
  local_168 = (longlong *)CONCAT71(local_168._1_7_,0x44);
  local_160 = cVar6;
  sStack_15c = local_202;
  uStack_15a = 0;
  uStack_158 = 4;
  sStack_15e = sVar15;
  FUN_14581592e(lVar19,&local_168);
  if (local_198 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_118 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1490ee4b6(local_b8);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  iVar9 = *(int *)(param_1 + 0xe0);
  if (iVar9 < 0) goto LAB_1490e036e;
  goto LAB_1490dfa66;
}



// FUNCTION 1490e06ac FUN_1490e06ac body=262 status=ok
// SIG undefined FUN_1490e06ac(void)

undefined8 * FUN_1490e06ac(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  pvVar2 = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[3] = param_2[3];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 5);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
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
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1490e07b2 FUN_1490e07b2 body=119 status=ok
// SIG undefined FUN_1490e07b2(void)

int FUN_1490e07b2(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1490e73f8(param_1,iVar1);
  }
  lVar2 = (longlong)param_3 * 0x50;
  memmove((void *)(*param_1 + lVar2 + 0x50),(void *)(*param_1 + lVar2),
          (ulonglong)(uint)(iVar1 - param_3) * 0x50);
  FUN_1490e06ac(lVar2 + *param_1,param_2);
  return param_3;
}



// FUNCTION 1490e082a FUN_1490e082a body=62 status=ok
// SIG undefined FUN_1490e082a(void)

void FUN_1490e082a(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490e0868 FUN_1490e0868 body=134 status=ok
// SIG undefined FUN_1490e0868(void)

longlong * FUN_1490e0868(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_14bb46be0);
  FUN_1490f38c0(param_1,param_2);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_1,&DAT_14bb46be0);
    if (iVar1 < 0xe) {
      if (*(int *)(param_2 + 0x18) != *(int *)(param_2 + 0x44)) {
        FUN_14062e926(param_2 + 0x10);
        FUN_147def0d2(param_2 + 0x10);
      }
      goto LAB_1490e08d4;
    }
  }
  FUN_1490f3bd4(param_1,param_2 + 0x10);
LAB_1490e08d4:
  FUN_147d11f74(param_1,param_2 + 0x60);
  return param_1;
}



// FUNCTION 1490e093e FUN_1490e093e body=38 status=ok
// SIG undefined FUN_1490e093e(void)

undefined8 FUN_1490e093e(undefined8 param_1,int param_2)

{
  FUN_1401f96ee();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490e0982 FUN_1490e0982 body=103 status=ok
// SIG undefined FUN_1490e0982(void)

undefined8 FUN_1490e0982(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 8 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_1490e0b30(param_2 + 0x18 + lVar6,param_3 + 0x18 + lVar6);
      *(undefined8 *)(param_2 + 0x68 + lVar6) = *(undefined8 *)(param_3 + 0x68 + lVar6);
      lVar6 = lVar6 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1490e0a12 FUN_1490e0a12 body=59 status=ok
// SIG undefined FUN_1490e0a12(void)

undefined8 FUN_1490e0a12(longlong *param_1)

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



// FUNCTION 1490e0a58 FUN_1490e0a58 body=32 status=ok
// SIG undefined FUN_1490e0a58(void)

void FUN_1490e0a58(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1490e0aca FUN_1490e0aca body=55 status=ok
// SIG undefined FUN_1490e0aca(void)

void FUN_1490e0aca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc00940 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc00940 = FUN_140002ddd(FUN_141905ec2,uVar1,L"RigVMExecuteContext");
  }
  return;
}



// FUNCTION 1490e0b06 FUN_1490e0b06 body=38 status=ok
// SIG undefined FUN_1490e0b06(void)

undefined8 FUN_1490e0b06(undefined8 param_1,int param_2)

{
  FUN_1410a12b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490e0b30 FUN_1490e0b30 body=122 status=ok
// SIG undefined FUN_1490e0b30(void)

longlong FUN_1490e0b30(longlong param_1,longlong param_2)

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
    FUN_1490e0baa(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1490e0baa FUN_1490e0baa body=221 status=ok
// SIG undefined FUN_1490e0baa(void)

longlong * FUN_1490e0baa(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1410a133e(param_1,(ulonglong)uVar1);
    lVar5 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar5 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar5) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar1) {
      lVar5 = *param_1;
      lVar3 = *param_2;
      lVar6 = 0;
      uVar7 = 0;
      do {
        plVar8 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar8 = param_2 + 2;
        }
        uVar2 = *(uint *)((longlong)plVar8 + (uVar7 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar5 + lVar6) = *(undefined4 *)(lVar3 + lVar6);
        if ((uVar2 >> ((uint)uVar7 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar5 + 4 + lVar6) = *(undefined4 *)(lVar3 + 4 + lVar6);
        }
        else {
          *(undefined8 *)(lVar5 + 8 + lVar6) = *(undefined8 *)(lVar3 + 8 + lVar6);
          lVar4 = *(longlong *)(lVar3 + 0x10 + lVar6);
          *(longlong *)(lVar5 + 0x10 + lVar6) = lVar4;
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(lVar5 + 0x18 + lVar6) = *(undefined8 *)(lVar3 + 0x18 + lVar6);
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x20;
      } while (uVar1 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 1490e0ca6 FUN_1490e0ca6 body=103 status=ok
// SIG undefined FUN_1490e0ca6(void)

undefined8 FUN_1490e0ca6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 8 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_1490e0b30(param_2 + 0x18 + lVar6,param_3 + 0x18 + lVar6);
      *(undefined8 *)(param_2 + 0x68 + lVar6) = *(undefined8 *)(param_3 + 0x68 + lVar6);
      lVar6 = lVar6 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1490e0d36 FUN_1490e0d36 body=59 status=ok
// SIG undefined FUN_1490e0d36(void)

undefined8 FUN_1490e0d36(longlong *param_1)

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



// FUNCTION 1490e0d7c FUN_1490e0d7c body=32 status=ok
// SIG undefined FUN_1490e0d7c(void)

void FUN_1490e0d7c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1490e0e0c FUN_1490e0e0c body=103 status=ok
// SIG undefined FUN_1490e0e0c(void)

undefined8 FUN_1490e0e0c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + 8 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + 8 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_1490e0b30(param_2 + 0x18 + lVar6,param_3 + 0x18 + lVar6);
      *(undefined8 *)(param_2 + 0x68 + lVar6) = *(undefined8 *)(param_3 + 0x68 + lVar6);
      lVar6 = lVar6 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1490e0e9c FUN_1490e0e9c body=59 status=ok
// SIG undefined FUN_1490e0e9c(void)

undefined8 FUN_1490e0e9c(longlong *param_1)

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



// FUNCTION 1490e0ee2 FUN_1490e0ee2 body=32 status=ok
// SIG undefined FUN_1490e0ee2(void)

void FUN_1490e0ee2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1410a12b0(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1490e0fee FUN_1490e0fee body=59 status=ok
// SIG undefined FUN_1490e0fee(void)

undefined8 FUN_1490e0fee(longlong *param_1)

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



// FUNCTION 1490e1122 FUN_1490e1122 body=59 status=ok
// SIG undefined FUN_1490e1122(void)

undefined8 FUN_1490e1122(longlong *param_1)

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



// FUNCTION 1490e122c FUN_1490e122c body=59 status=ok
// SIG undefined FUN_1490e122c(void)

undefined8 FUN_1490e122c(longlong *param_1)

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



// FUNCTION 1490e12cc FUN_1490e12cc body=29 status=ok
// SIG undefined FUN_1490e12cc(void)

undefined8 FUN_1490e12cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490e12ea FUN_1490e12ea body=82 status=ok
// SIG undefined FUN_1490e12ea(void)

undefined8 * FUN_1490e12ea(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1490e1370 FUN_1490e1370 body=25 status=ok
// SIG undefined FUN_1490e1370(void)

undefined8 FUN_1490e1370(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 1490e1420 FUN_1490e1420 body=59 status=ok
// SIG undefined FUN_1490e1420(void)

undefined8 FUN_1490e1420(longlong *param_1)

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



// FUNCTION 1490e14c0 FUN_1490e14c0 body=29 status=ok
// SIG undefined FUN_1490e14c0(void)

undefined8 FUN_1490e14c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490e1546 FUN_1490e1546 body=59 status=ok
// SIG undefined FUN_1490e1546(void)

undefined8 FUN_1490e1546(longlong *param_1)

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



// FUNCTION 1490e15e6 FUN_1490e15e6 body=29 status=ok
// SIG undefined FUN_1490e15e6(void)

undefined8 FUN_1490e15e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490e1604 FUN_1490e1604 body=171 status=ok
// SIG undefined FUN_1490e1604(void)

void FUN_1490e1604(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14bad5830;
  param_2[2] = &PTR_FUN_14bad5c20;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[8] = 0x3f91111111111111;
  param_2[9] = 0x800;
  param_2[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *param_2 = &PTR_FUN_14bacf6c0;
  return;
}



// FUNCTION 1490e16b0 FUN_1490e16b0 body=148 status=ok
// SIG undefined FUN_1490e16b0(void)

void FUN_1490e16b0(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bad5830;
  param_2[2] = &PTR_FUN_14bad5c20;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[8] = 0x3f91111111111111;
  param_2[9] = 0x800;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *param_2 = &PTR_FUN_14bacf6c0;
  return;
}



// FUNCTION 1490e1768 FUN_1490e1768 body=205 status=ok
// SIG undefined FUN_1490e1768(void)

undefined8 FUN_1490e1768(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
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
      lVar1 = param_3 + lVar14;
      uVar3 = *(undefined4 *)(lVar1 + 0x18);
      uVar4 = *(undefined4 *)(lVar1 + 0x1c);
      uVar5 = *(undefined4 *)(lVar1 + 0x20);
      uVar6 = *(undefined4 *)(lVar1 + 0x24);
      uVar7 = *(undefined4 *)(lVar1 + 0x28);
      uVar8 = *(undefined4 *)(lVar1 + 0x2c);
      uVar9 = *(undefined4 *)(lVar1 + 0x30);
      uVar10 = *(undefined4 *)(lVar1 + 0x34);
      uVar11 = *(undefined4 *)(lVar1 + 0x3c);
      uVar12 = *(undefined4 *)(lVar1 + 0x40);
      uVar13 = *(undefined4 *)(lVar1 + 0x44);
      lVar2 = param_2 + 0x48 + lVar14;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + -0xc) = uVar11;
      *(undefined4 *)(lVar2 + -8) = uVar12;
      *(undefined4 *)(lVar2 + -4) = uVar13;
      *(undefined4 *)(lVar2 + -0x20) = uVar7;
      *(undefined4 *)(lVar2 + -0x1c) = uVar8;
      *(undefined4 *)(lVar2 + -0x18) = uVar9;
      *(undefined4 *)(lVar2 + -0x14) = uVar10;
      *(undefined4 *)(lVar2 + -0x30) = uVar3;
      *(undefined4 *)(lVar2 + -0x2c) = uVar4;
      *(undefined4 *)(lVar2 + -0x28) = uVar5;
      *(undefined4 *)(lVar2 + -0x24) = uVar6;
      FUN_14591e93c();
      _Src = (void *)(param_3 + 0x60 + lVar14);
      memcpy((void *)(param_2 + lVar14 + 0x60),_Src,0x98);
      FUN_1490e1992(param_2 + lVar14 + 0xf8,param_3 + lVar14 + 0xf8);
      FUN_145c50a48(param_2 + lVar14 + 0x108,param_3 + lVar14 + 0x108);
      *(undefined8 *)(param_2 + lVar14 + 0x118) = *(undefined8 *)((longlong)_Src + 0xb8);
      lVar14 = lVar14 + 0x120;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1490e185e FUN_1490e185e body=59 status=ok
// SIG undefined FUN_1490e185e(void)

undefined8 FUN_1490e185e(longlong *param_1)

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



// FUNCTION 1490e18aa FUN_1490e18aa body=49 status=ok
// SIG undefined FUN_1490e18aa(void)

void FUN_1490e18aa(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x24) == '\x01') {
    *param_2 = &PTR_FUN_14bad5830;
    FUN_140f8ceac(param_2 + 2);
    *(undefined1 *)(param_2 + 0x24) = 0;
  }
  return;
}



// FUNCTION 1490e192a FUN_1490e192a body=52 status=ok
// SIG undefined FUN_1490e192a(void)

undefined8 * FUN_1490e192a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490e195e FUN_1490e195e body=52 status=ok
// SIG undefined FUN_1490e195e(void)

undefined8 * FUN_1490e195e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490e1992 FUN_1490e1992 body=88 status=ok
// SIG undefined FUN_1490e1992(void)

undefined8 * FUN_1490e1992(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1490e19ea(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 5);
      }
    }
  }
  return param_1;
}



// FUNCTION 1490e19ea FUN_1490e19ea body=98 status=ok
// SIG undefined FUN_1490e19ea(void)

void FUN_1490e19ea(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1490e1ab6 FUN_1490e1ab6 body=59 status=ok
// SIG undefined FUN_1490e1ab6(void)

undefined8 FUN_1490e1ab6(longlong *param_1)

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



// FUNCTION 1490e1b56 FUN_1490e1b56 body=29 status=ok
// SIG undefined FUN_1490e1b56(void)

undefined8 FUN_1490e1b56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490e1b76 FUN_1490e1b76 body=171 status=ok
// SIG undefined FUN_1490e1b76(void)

void FUN_1490e1b76(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14bad5830;
  param_2[2] = &PTR_FUN_14bad5c20;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[8] = 0x3f91111111111111;
  param_2[9] = 0x800;
  param_2[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *param_2 = &PTR_FUN_14bacfa80;
  return;
}



// FUNCTION 1490e1c22 FUN_1490e1c22 body=148 status=ok
// SIG undefined FUN_1490e1c22(void)

void FUN_1490e1c22(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bad5830;
  param_2[2] = &PTR_FUN_14bad5c20;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[8] = 0x3f91111111111111;
  param_2[9] = 0x800;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *param_2 = &PTR_FUN_14bacfa80;
  return;
}



// FUNCTION 1490e1cda FUN_1490e1cda body=205 status=ok
// SIG undefined FUN_1490e1cda(void)

undefined8 FUN_1490e1cda(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
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
      lVar1 = param_3 + lVar14;
      uVar3 = *(undefined4 *)(lVar1 + 0x18);
      uVar4 = *(undefined4 *)(lVar1 + 0x1c);
      uVar5 = *(undefined4 *)(lVar1 + 0x20);
      uVar6 = *(undefined4 *)(lVar1 + 0x24);
      uVar7 = *(undefined4 *)(lVar1 + 0x28);
      uVar8 = *(undefined4 *)(lVar1 + 0x2c);
      uVar9 = *(undefined4 *)(lVar1 + 0x30);
      uVar10 = *(undefined4 *)(lVar1 + 0x34);
      uVar11 = *(undefined4 *)(lVar1 + 0x3c);
      uVar12 = *(undefined4 *)(lVar1 + 0x40);
      uVar13 = *(undefined4 *)(lVar1 + 0x44);
      lVar2 = param_2 + 0x48 + lVar14;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + -0xc) = uVar11;
      *(undefined4 *)(lVar2 + -8) = uVar12;
      *(undefined4 *)(lVar2 + -4) = uVar13;
      *(undefined4 *)(lVar2 + -0x20) = uVar7;
      *(undefined4 *)(lVar2 + -0x1c) = uVar8;
      *(undefined4 *)(lVar2 + -0x18) = uVar9;
      *(undefined4 *)(lVar2 + -0x14) = uVar10;
      *(undefined4 *)(lVar2 + -0x30) = uVar3;
      *(undefined4 *)(lVar2 + -0x2c) = uVar4;
      *(undefined4 *)(lVar2 + -0x28) = uVar5;
      *(undefined4 *)(lVar2 + -0x24) = uVar6;
      FUN_14591e93c();
      _Src = (void *)(param_3 + 0x60 + lVar14);
      memcpy((void *)(param_2 + lVar14 + 0x60),_Src,0x98);
      FUN_1490e1992(param_2 + lVar14 + 0xf8,param_3 + lVar14 + 0xf8);
      FUN_145c50a48(param_2 + lVar14 + 0x108,param_3 + lVar14 + 0x108);
      *(undefined8 *)(param_2 + lVar14 + 0x118) = *(undefined8 *)((longlong)_Src + 0xb8);
      lVar14 = lVar14 + 0x120;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1490e1dd0 FUN_1490e1dd0 body=59 status=ok
// SIG undefined FUN_1490e1dd0(void)

undefined8 FUN_1490e1dd0(longlong *param_1)

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



// FUNCTION 1490e1e1c FUN_1490e1e1c body=49 status=ok
// SIG undefined FUN_1490e1e1c(void)

void FUN_1490e1e1c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x24) == '\x01') {
    *param_2 = &PTR_FUN_14bad5830;
    FUN_140f8ceac(param_2 + 2);
    *(undefined1 *)(param_2 + 0x24) = 0;
  }
  return;
}



// FUNCTION 1490e1e9c FUN_1490e1e9c body=52 status=ok
// SIG undefined FUN_1490e1e9c(void)

undefined8 * FUN_1490e1e9c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490e1ed2 FUN_1490e1ed2 body=37 status=ok
// SIG undefined FUN_1490e1ed2(void)

void FUN_1490e1ed2(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x340);
  FUN_1490e202e(param_2);
  return;
}



// FUNCTION 1490e1f24 FUN_1490e1f24 body=63 status=ok
// SIG undefined FUN_1490e1f24(void)

undefined1 FUN_1490e1f24(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1490e21f2(param_2,param_3);
    param_3 = param_3 + 0x340;
    param_2 = param_2 + 0x340;
  }
  return 1;
}



// FUNCTION 1490e1f8c FUN_1490e1f8c body=59 status=ok
// SIG undefined FUN_1490e1f8c(void)

undefined8 FUN_1490e1f8c(longlong *param_1)

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



// FUNCTION 1490e202e FUN_1490e202e body=375 status=ok
// SIG undefined FUN_1490e202e(void)

void FUN_1490e202e(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14bacfc60;
  param_1[2] = &PTR_FUN_14bad5c20;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0x3f91111111111111;
  param_1[9] = 0x800;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x24] = &PTR_FUN_14bad5c20;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined2 *)(param_1 + 0x27) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2a] = 0x3f91111111111111;
  param_1[0x2b] = 0x800;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x32;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x46] = &PTR_FUN_14bad5c20;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined2 *)(param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x4c] = 0x3f91111111111111;
  param_1[0x4d] = 0x800;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_1 + 0x54;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  return;
}



// FUNCTION 1490e21a6 FUN_1490e21a6 body=76 status=ok
// SIG undefined FUN_1490e21a6(void)

undefined8 * FUN_1490e21a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bacfc60;
  FUN_140f8ceac(param_1 + 0x46);
  FUN_140f8ceac(param_1 + 0x24);
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490e21f2 FUN_1490e21f2 body=386 status=ok
// SIG undefined FUN_1490e21f2(void)

longlong FUN_1490e21f2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  uVar2 = *(undefined4 *)(param_2 + 0x1c);
  uVar3 = *(undefined4 *)(param_2 + 0x20);
  uVar4 = *(undefined4 *)(param_2 + 0x24);
  uVar5 = *(undefined4 *)(param_2 + 0x28);
  uVar6 = *(undefined4 *)(param_2 + 0x2c);
  uVar7 = *(undefined4 *)(param_2 + 0x30);
  uVar8 = *(undefined4 *)(param_2 + 0x34);
  uVar9 = *(undefined4 *)(param_2 + 0x3c);
  uVar10 = *(undefined4 *)(param_2 + 0x40);
  uVar11 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar9;
  *(undefined4 *)(param_1 + 0x40) = uVar10;
  *(undefined4 *)(param_1 + 0x44) = uVar11;
  *(undefined4 *)(param_1 + 0x28) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  FUN_14591e93c(param_1 + 0x48,param_2 + 0x48);
  memcpy((void *)(param_1 + 0x60),(void *)(param_2 + 0x60),0x98);
  FUN_1490e1992(param_1 + 0xf8,param_2 + 0xf8);
  FUN_145c50a48(param_1 + 0x108,param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_2 + 0x118);
  uVar1 = *(undefined4 *)(param_2 + 0x128);
  uVar2 = *(undefined4 *)(param_2 + 300);
  uVar3 = *(undefined4 *)(param_2 + 0x130);
  uVar4 = *(undefined4 *)(param_2 + 0x134);
  uVar5 = *(undefined4 *)(param_2 + 0x138);
  uVar6 = *(undefined4 *)(param_2 + 0x13c);
  uVar7 = *(undefined4 *)(param_2 + 0x140);
  uVar8 = *(undefined4 *)(param_2 + 0x144);
  uVar9 = *(undefined4 *)(param_2 + 0x14c);
  uVar10 = *(undefined4 *)(param_2 + 0x150);
  uVar11 = *(undefined4 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  *(undefined4 *)(param_1 + 0x14c) = uVar9;
  *(undefined4 *)(param_1 + 0x150) = uVar10;
  *(undefined4 *)(param_1 + 0x154) = uVar11;
  *(undefined4 *)(param_1 + 0x138) = uVar5;
  *(undefined4 *)(param_1 + 0x13c) = uVar6;
  *(undefined4 *)(param_1 + 0x140) = uVar7;
  *(undefined4 *)(param_1 + 0x144) = uVar8;
  *(undefined4 *)(param_1 + 0x128) = uVar1;
  *(undefined4 *)(param_1 + 300) = uVar2;
  *(undefined4 *)(param_1 + 0x130) = uVar3;
  *(undefined4 *)(param_1 + 0x134) = uVar4;
  FUN_14591e93c(param_1 + 0x158,param_2 + 0x158);
  memcpy((void *)(param_1 + 0x170),(void *)(param_2 + 0x170),0x98);
  FUN_1490e1992(param_1 + 0x208,param_2 + 0x208);
  FUN_145c50a48(param_1 + 0x218,param_2 + 0x218);
  *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)(param_2 + 0x228);
  uVar1 = *(undefined4 *)(param_2 + 0x238);
  uVar2 = *(undefined4 *)(param_2 + 0x23c);
  uVar3 = *(undefined4 *)(param_2 + 0x240);
  uVar4 = *(undefined4 *)(param_2 + 0x244);
  uVar5 = *(undefined4 *)(param_2 + 0x248);
  uVar6 = *(undefined4 *)(param_2 + 0x24c);
  uVar7 = *(undefined4 *)(param_2 + 0x250);
  uVar8 = *(undefined4 *)(param_2 + 0x254);
  uVar9 = *(undefined4 *)(param_2 + 0x25c);
  uVar10 = *(undefined4 *)(param_2 + 0x260);
  uVar11 = *(undefined4 *)(param_2 + 0x264);
  *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_2 + 600);
  *(undefined4 *)(param_1 + 0x25c) = uVar9;
  *(undefined4 *)(param_1 + 0x260) = uVar10;
  *(undefined4 *)(param_1 + 0x264) = uVar11;
  *(undefined4 *)(param_1 + 0x248) = uVar5;
  *(undefined4 *)(param_1 + 0x24c) = uVar6;
  *(undefined4 *)(param_1 + 0x250) = uVar7;
  *(undefined4 *)(param_1 + 0x254) = uVar8;
  *(undefined4 *)(param_1 + 0x238) = uVar1;
  *(undefined4 *)(param_1 + 0x23c) = uVar2;
  *(undefined4 *)(param_1 + 0x240) = uVar3;
  *(undefined4 *)(param_1 + 0x244) = uVar4;
  FUN_14591e93c(param_1 + 0x268,param_2 + 0x268);
  memcpy((void *)(param_1 + 0x280),(void *)(param_2 + 0x280),0x98);
  FUN_1490e1992(param_1 + 0x318,param_2 + 0x318);
  FUN_145c50a48(param_1 + 0x328,param_2 + 0x328);
  *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)(param_2 + 0x338);
  return param_1;
}



// FUNCTION 1490e2376 FUN_1490e2376 body=73 status=ok
// SIG undefined FUN_1490e2376(void)

void FUN_1490e2376(undefined8 *param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    *param_1 = &PTR_FUN_14bacfc60;
    FUN_140f8ceac(param_1 + 0x46);
    FUN_140f8ceac(param_1 + 0x24);
    FUN_140f8ceac(param_1 + 2);
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  return;
}



// FUNCTION 1490e2428 FUN_1490e2428 body=59 status=ok
// SIG undefined FUN_1490e2428(void)

undefined8 FUN_1490e2428(longlong *param_1)

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



// FUNCTION 1490e24c8 FUN_1490e24c8 body=29 status=ok
// SIG undefined FUN_1490e24c8(void)

undefined8 FUN_1490e24c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490e24e6 FUN_1490e24e6 body=171 status=ok
// SIG undefined FUN_1490e24e6(void)

void FUN_1490e24e6(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  *param_2 = &PTR_FUN_14bad5830;
  param_2[2] = &PTR_FUN_14bad5c20;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[8] = 0x3f91111111111111;
  param_2[9] = 0x800;
  param_2[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *param_2 = &PTR_FUN_14bad0020;
  return;
}



// FUNCTION 1490e2592 FUN_1490e2592 body=148 status=ok
// SIG undefined FUN_1490e2592(void)

void FUN_1490e2592(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_2 = &PTR_FUN_14bad5830;
  param_2[2] = &PTR_FUN_14bad5c20;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
  param_2[8] = 0x3f91111111111111;
  param_2[9] = 0x800;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  puVar2 = &DAT_14c846480;
  puVar3 = param_2 + 0x10;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  *param_2 = &PTR_FUN_14bad0020;
  return;
}



// FUNCTION 1490e264a FUN_1490e264a body=205 status=ok
// SIG undefined FUN_1490e264a(void)

undefined8 FUN_1490e264a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
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
      lVar1 = param_3 + lVar14;
      uVar3 = *(undefined4 *)(lVar1 + 0x18);
      uVar4 = *(undefined4 *)(lVar1 + 0x1c);
      uVar5 = *(undefined4 *)(lVar1 + 0x20);
      uVar6 = *(undefined4 *)(lVar1 + 0x24);
      uVar7 = *(undefined4 *)(lVar1 + 0x28);
      uVar8 = *(undefined4 *)(lVar1 + 0x2c);
      uVar9 = *(undefined4 *)(lVar1 + 0x30);
      uVar10 = *(undefined4 *)(lVar1 + 0x34);
      uVar11 = *(undefined4 *)(lVar1 + 0x3c);
      uVar12 = *(undefined4 *)(lVar1 + 0x40);
      uVar13 = *(undefined4 *)(lVar1 + 0x44);
      lVar2 = param_2 + 0x48 + lVar14;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + -0xc) = uVar11;
      *(undefined4 *)(lVar2 + -8) = uVar12;
      *(undefined4 *)(lVar2 + -4) = uVar13;
      *(undefined4 *)(lVar2 + -0x20) = uVar7;
      *(undefined4 *)(lVar2 + -0x1c) = uVar8;
      *(undefined4 *)(lVar2 + -0x18) = uVar9;
      *(undefined4 *)(lVar2 + -0x14) = uVar10;
      *(undefined4 *)(lVar2 + -0x30) = uVar3;
      *(undefined4 *)(lVar2 + -0x2c) = uVar4;
      *(undefined4 *)(lVar2 + -0x28) = uVar5;
      *(undefined4 *)(lVar2 + -0x24) = uVar6;
      FUN_14591e93c();
      _Src = (void *)(param_3 + 0x60 + lVar14);
      memcpy((void *)(param_2 + lVar14 + 0x60),_Src,0x98);
      FUN_1490e1992(param_2 + lVar14 + 0xf8,param_3 + lVar14 + 0xf8);
      FUN_145c50a48(param_2 + lVar14 + 0x108,param_3 + lVar14 + 0x108);
      *(undefined8 *)(param_2 + lVar14 + 0x118) = *(undefined8 *)((longlong)_Src + 0xb8);
      lVar14 = lVar14 + 0x120;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1490e2740 FUN_1490e2740 body=59 status=ok
// SIG undefined FUN_1490e2740(void)

undefined8 FUN_1490e2740(longlong *param_1)

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



// FUNCTION 1490e278c FUN_1490e278c body=49 status=ok
// SIG undefined FUN_1490e278c(void)

void FUN_1490e278c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x24) == '\x01') {
    *param_2 = &PTR_FUN_14bad5830;
    FUN_140f8ceac(param_2 + 2);
    *(undefined1 *)(param_2 + 0x24) = 0;
  }
  return;
}



// FUNCTION 1490e280c FUN_1490e280c body=52 status=ok
// SIG undefined FUN_1490e280c(void)

undefined8 * FUN_1490e280c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bad5830;
  FUN_140f8ceac(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490e2878 FUN_1490e2878 body=87 status=ok
// SIG undefined FUN_1490e2878(void)

undefined1 FUN_1490e2878(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1490e29ae(param_2,param_3);
    FUN_1490e29ae(param_2 + 0x10,param_3 + 0x10);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 1490e28f8 FUN_1490e28f8 body=59 status=ok
// SIG undefined FUN_1490e28f8(void)

undefined8 FUN_1490e28f8(longlong *param_1)

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



// FUNCTION 1490e293e FUN_1490e293e body=34 status=ok
// SIG undefined FUN_1490e293e(void)

void FUN_1490e293e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    FUN_1458688fe(param_2);
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1490e29ae FUN_1490e29ae body=95 status=ok
// SIG undefined FUN_1490e29ae(void)

undefined8 * FUN_1490e29ae(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145868945(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1490e2dfc(param_1,iVar1);
      FUN_1490e2e6e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1490e2a0e FUN_1490e2a0e body=50 status=ok
// SIG undefined FUN_1490e2a0e(void)

void FUN_1490e2a0e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x430) != 0) {
    FUN_1400020a8();
  }
  FUN_1490e2a40(param_1 + 0x1f8);
  FUN_1490dee66(param_1);
  return;
}



// FUNCTION 1490e2a40 FUN_1490e2a40 body=446 status=ok
// SIG undefined FUN_1490e2a40(void)

void FUN_1490e2a40(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x230) = 0;
  if (*(longlong *)(param_1 + 0x228) != 0) {
    FUN_1400020a8();
  }
  FUN_1458b77d8(param_1 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    FUN_1400020a8();
  }
  FUN_1490e2bfe(param_1 + 400);
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  FUN_1403dd50a(param_1 + 0x140);
  FUN_1490e2d99(*(undefined8 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x138));
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  FUN_1490e2dd6(*(undefined8 *)(param_1 + 0x120),*(undefined4 *)(param_1 + 0x128));
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FUN_1400020a8();
  }
  FUN_1490e2d99(*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x118));
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_1490e2dd6(*(undefined8 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x108));
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_1490e2d99(*(undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf8));
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  FUN_1490e2dd6(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe8));
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_1490e2d99(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd8));
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  FUN_1490e2dd6(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_1458b7810(param_1);
  return;
}



// FUNCTION 1490e2bfe FUN_1490e2bfe body=54 status=ok
// SIG undefined FUN_1490e2bfe(void)

void FUN_1490e2bfe(longlong *param_1)

{
  FUN_1490e2c34(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490e2c34 FUN_1490e2c34 body=355 status=ok
// SIG undefined FUN_1490e2c34(void)

void FUN_1490e2c34(longlong *param_1,int param_2)

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
      if (*(longlong *)(*local_70 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1446f4a44(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1490e2d99 FUN_1490e2d99 body=61 status=ok
// SIG undefined FUN_1490e2d99(void)

void FUN_1490e2d99(longlong param_1,int param_2)

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



// FUNCTION 1490e2dd6 FUN_1490e2dd6 body=38 status=ok
// SIG undefined FUN_1490e2dd6(void)

void FUN_1490e2dd6(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1490e082a(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 1490e2dfc FUN_1490e2dfc body=114 status=ok
// SIG undefined FUN_1490e2dfc(void)

void FUN_1490e2dfc(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x440,8);
    iVar2 = (int)(uVar1 / 0x440);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x440,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1490e2e6e FUN_1490e2e6e body=60 status=ok
// SIG undefined FUN_1490e2e6e(void)

void FUN_1490e2e6e(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1490e2eaa(param_1,param_2);
    param_1 = param_1 + 0x440;
    param_2 = param_2 + 0x440;
  }
  return;
}



// FUNCTION 1490e2eaa FUN_1490e2eaa body=135 status=ok
// SIG undefined FUN_1490e2eaa(void)

longlong FUN_1490e2eaa(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  FUN_1490df09e();
  FUN_1490e2f32(param_1 + 0x1f8,param_2 + 0x1f8);
  *(undefined8 *)(param_1 + 0x430) = 0;
  iVar1 = *(int *)(param_2 + 0x438);
  _Src = *(void **)(param_2 + 0x430);
  *(int *)(param_1 + 0x438) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x43c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_1 + 0x430),iVar1,0);
    memcpy(*(void **)(param_1 + 0x430),_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1490e2f32 FUN_1490e2f32 body=1004 status=ok
// SIG undefined FUN_1490e2f32(void)

longlong FUN_1490e2f32(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  FUN_1490e331e();
  *(undefined8 *)(param_1 + 0xb0) = 0;
  iVar1 = *(int *)(param_2 + 0xb8);
  _Src = *(void **)(param_2 + 0xb0);
  *(int *)(param_1 + 0xb8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  else {
    FUN_1401b309e((undefined8 *)(param_1 + 0xb0),iVar1,0);
    memcpy(*(void **)(param_1 + 0xb0),_Src,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  iVar1 = *(int *)(param_2 + 200);
  uVar2 = *(undefined8 *)(param_2 + 0xc0);
  *(int *)(param_1 + 200) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  else {
    FUN_1490e355c((undefined8 *)(param_1 + 0xc0),iVar1,0);
    FUN_1490e35cf(*(undefined8 *)(param_1 + 0xc0),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  iVar1 = *(int *)(param_2 + 0xd8);
  uVar2 = *(undefined8 *)(param_2 + 0xd0);
  *(int *)(param_1 + 0xd8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xdc) = 0;
  }
  else {
    FUN_1490e3604((undefined8 *)(param_1 + 0xd0),iVar1,0);
    FUN_1490e3677(*(undefined8 *)(param_1 + 0xd0),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  iVar1 = *(int *)(param_2 + 0xe8);
  uVar2 = *(undefined8 *)(param_2 + 0xe0);
  *(int *)(param_1 + 0xe8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  else {
    FUN_1490e355c((undefined8 *)(param_1 + 0xe0),iVar1,0);
    FUN_1490e35cf(*(undefined8 *)(param_1 + 0xe0),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0xf0) = 0;
  iVar1 = *(int *)(param_2 + 0xf8);
  uVar2 = *(undefined8 *)(param_2 + 0xf0);
  *(int *)(param_1 + 0xf8) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  else {
    FUN_1490e3604((undefined8 *)(param_1 + 0xf0),iVar1,0);
    FUN_1490e3677(*(undefined8 *)(param_1 + 0xf0),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x100) = 0;
  iVar1 = *(int *)(param_2 + 0x108);
  uVar2 = *(undefined8 *)(param_2 + 0x100);
  *(int *)(param_1 + 0x108) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  else {
    FUN_1490e355c((undefined8 *)(param_1 + 0x100),iVar1,0);
    FUN_1490e35cf(*(undefined8 *)(param_1 + 0x100),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x110) = 0;
  iVar1 = *(int *)(param_2 + 0x118);
  uVar2 = *(undefined8 *)(param_2 + 0x110);
  *(int *)(param_1 + 0x118) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  else {
    FUN_1490e3604((undefined8 *)(param_1 + 0x110),iVar1,0);
    FUN_1490e3677(*(undefined8 *)(param_1 + 0x110),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x120) = 0;
  iVar1 = *(int *)(param_2 + 0x128);
  uVar2 = *(undefined8 *)(param_2 + 0x120);
  *(int *)(param_1 + 0x128) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 300) = 0;
  }
  else {
    FUN_1490e355c((undefined8 *)(param_1 + 0x120),iVar1,0);
    FUN_1490e35cf(*(undefined8 *)(param_1 + 0x120),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x130) = 0;
  iVar1 = *(int *)(param_2 + 0x138);
  uVar2 = *(undefined8 *)(param_2 + 0x130);
  *(int *)(param_1 + 0x138) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x13c) = 0;
  }
  else {
    FUN_1490e3604((undefined8 *)(param_1 + 0x130),iVar1,0);
    FUN_1490e3677(*(undefined8 *)(param_1 + 0x130),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  FUN_1490e3756(param_1 + 0x140,param_2 + 0x140);
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1bc) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  FUN_1490e3848(param_1 + 400,param_2 + 400);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined1 *)(param_1 + 0x1e4) = *(undefined1 *)(param_2 + 0x1e4);
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x214) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  FUN_1456c4326(param_1 + 0x1e8,param_2 + 0x1e8);
  return param_1;
}



// FUNCTION 1490e331e FUN_1490e331e body=458 status=ok
// SIG undefined FUN_1490e331e(void)

undefined8 * FUN_1490e331e(undefined8 *param_1,undefined8 *param_2)

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
    FUN_1447a127e(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  pvVar2 = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1456c42b2(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 0xc);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 6);
  pvVar2 = (void *)param_2[5];
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1490e88a6(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 0x18);
  }
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 8);
  pvVar2 = (void *)param_2[7];
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1490e34e8(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 * 0x30);
  }
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  pvVar2 = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  FUN_1456c43a0(param_1 + 0xb,param_2 + 0xb);
  *(undefined2 *)(param_1 + 0x15) = *(undefined2 *)(param_2 + 0x15);
  return param_1;
}



// FUNCTION 1490e34e8 FUN_1490e34e8 body=115 status=ok
// SIG undefined FUN_1490e34e8(void)

void FUN_1490e34e8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1490e355c FUN_1490e355c body=115 status=ok
// SIG undefined FUN_1490e355c(void)

void FUN_1490e355c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1490e35cf FUN_1490e35cf body=52 status=ok
// SIG undefined FUN_1490e35cf(void)

void FUN_1490e35cf(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1490e06ac(param_1,param_2);
    param_1 = param_1 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return;
}



// FUNCTION 1490e3604 FUN_1490e3604 body=115 status=ok
// SIG undefined FUN_1490e3604(void)

void FUN_1490e3604(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1490e3677 FUN_1490e3677 body=52 status=ok
// SIG undefined FUN_1490e3677(void)

void FUN_1490e3677(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1490e36ac(param_1,param_2);
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
  }
  return;
}



// FUNCTION 1490e36ac FUN_1490e36ac body=170 status=ok
// SIG undefined FUN_1490e36ac(void)

undefined4 * FUN_1490e36ac(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  pvVar2 = *(void **)(param_2 + 2);
  param_1[4] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy(*(void **)(param_1 + 2),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  pvVar2 = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1490e3756 FUN_1490e3756 body=122 status=ok
// SIG undefined FUN_1490e3756(void)

longlong FUN_1490e3756(longlong param_1,longlong param_2)

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
    FUN_1490e37d0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1490e37d0 FUN_1490e37d0 body=119 status=ok
// SIG undefined FUN_1490e37d0(void)

undefined8 * FUN_1490e37d0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1403dd62e(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140171ad2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x14);
    }
  }
  return param_1;
}



// FUNCTION 1490e3848 FUN_1490e3848 body=122 status=ok
// SIG undefined FUN_1490e3848(void)

longlong FUN_1490e3848(longlong param_1,longlong param_2)

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
    FUN_1490e38c2(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1490e38c2 FUN_1490e38c2 body=290 status=ok
// SIG undefined FUN_1490e38c2(void)

undefined8 * FUN_1490e38c2(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1490e2c34(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined8 *)*param_1;
      puVar5 = (undefined8 *)*param_2;
      uVar4 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar4 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar4 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)puVar6 = *(undefined4 *)puVar5;
          *(undefined4 *)((longlong)puVar6 + 4) = *(undefined4 *)((longlong)puVar5 + 4);
        }
        else {
          *puVar6 = 0;
          iVar2 = *(int *)(puVar5 + 1);
          _Src = (void *)*puVar5;
          *(int *)(puVar6 + 1) = iVar2;
          if ((longlong)iVar2 == 0) {
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar6,iVar2,0);
            memcpy((void *)*puVar6,_Src,(longlong)iVar2 * 2);
          }
          *(undefined2 *)((longlong)puVar6 + 0x14) = *(undefined2 *)((longlong)puVar5 + 0x14);
          *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar5 + 2);
          puVar6[3] = puVar5[3];
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 4;
        puVar6 = puVar6 + 4;
      } while (uVar1 != uVar4);
    }
  }
  return param_1;
}



// FUNCTION 1490e39e4 FUN_1490e39e4 body=114 status=ok
// SIG undefined FUN_1490e39e4(void)

void FUN_1490e39e4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 6,2);
    iVar2 = (int)(uVar1 / 6);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,6,2);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1490e3ab6 FUN_1490e3ab6 body=54 status=ok
// SIG undefined FUN_1490e3ab6(void)

undefined1 FUN_1490e3ab6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145a593dc(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1490e3b14 FUN_1490e3b14 body=59 status=ok
// SIG undefined FUN_1490e3b14(void)

undefined8 FUN_1490e3b14(longlong *param_1)

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



// FUNCTION 1490e3b5a FUN_1490e3b5a body=32 status=ok
// SIG undefined FUN_1490e3b5a(void)

void FUN_1490e3b5a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    FUN_1401f9e80(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1490e3c4c FUN_1490e3c4c body=59 status=ok
// SIG undefined FUN_1490e3c4c(void)

undefined8 FUN_1490e3c4c(longlong *param_1)

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



// FUNCTION 1490e3d5a FUN_1490e3d5a body=59 status=ok
// SIG undefined FUN_1490e3d5a(void)

undefined8 FUN_1490e3d5a(longlong *param_1)

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



// FUNCTION 1490e3ea8 FUN_1490e3ea8 body=59 status=ok
// SIG undefined FUN_1490e3ea8(void)

undefined8 FUN_1490e3ea8(longlong *param_1)

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



// FUNCTION 1490e3f92 FUN_1490e3f92 body=62 status=ok
// SIG undefined FUN_1490e3f92(void)

undefined1 FUN_1490e3f92(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x18;
      param_2 = param_2 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1490e3ff8 FUN_1490e3ff8 body=59 status=ok
// SIG undefined FUN_1490e3ff8(void)

undefined8 FUN_1490e3ff8(longlong *param_1)

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



// FUNCTION 1490e403e FUN_1490e403e body=48 status=ok
// SIG undefined FUN_1490e403e(void)

void FUN_1490e403e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 3) == '\x01') {
    *param_2 = &PTR_FUN_14bad08f0;
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 3) = 0;
  }
  return;
}



// FUNCTION 1490e40bc FUN_1490e40bc body=57 status=ok
// SIG undefined FUN_1490e40bc(void)

undefined8 * FUN_1490e40bc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bad08f0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490e4102 FUN_1490e4102 body=54 status=ok
// SIG undefined FUN_1490e4102(void)

void FUN_1490e4102(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_144a5dc74(param_2 + 3);
  param_2[5] = &DAT_3f8000003f800000;
  param_2[6] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_2 + 7) = 1;
  return;
}



// FUNCTION 1490e4138 FUN_1490e4138 body=54 status=ok
// SIG undefined FUN_1490e4138(void)

void FUN_1490e4138(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  FUN_144a5dc74(param_2 + 3);
  param_2[5] = &DAT_3f8000003f800000;
  param_2[6] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_2 + 7) = 1;
  return;
}



// FUNCTION 1490e416e FUN_1490e416e body=49 status=ok
// SIG undefined FUN_1490e416e(void)

void FUN_1490e416e(undefined8 param_1,longlong param_2)

{
  if (*(longlong **)(param_2 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0x10))();
  }
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490e41b6 FUN_1490e41b6 body=54 status=ok
// SIG undefined FUN_1490e41b6(void)

undefined1 FUN_1490e41b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1490e42ea(param_2,param_3);
    param_3 = param_3 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return 1;
}



// FUNCTION 1490e4214 FUN_1490e4214 body=70 status=ok
// SIG undefined FUN_1490e4214(void)

void FUN_1490e4214(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1490e4356(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e4266 FUN_1490e4266 body=53 status=ok
// SIG undefined FUN_1490e4266(void)

void FUN_1490e4266(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    if (*(longlong **)(param_2 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_2 + 0x18) + 0x10))();
    }
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1490e42ea FUN_1490e42ea body=107 status=ok
// SIG undefined FUN_1490e42ea(void)

undefined8 * FUN_1490e42ea(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 1,param_2 + 1);
  plVar1 = (longlong *)param_2[3];
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != plVar1) {
    param_1[3] = plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  return param_1;
}



// FUNCTION 1490e4356 FUN_1490e4356 body=258 status=ok
// SIG undefined FUN_1490e4356(void)

void FUN_1490e4356(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(param_1,&local_38);
  puVar6 = local_38;
  if (local_30 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  iVar1 = local_30 + -1;
  if (local_30 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar6);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x10);
  puVar8 = &DAT_149dfb77a;
  puVar6 = &DAT_149dfb77a;
  if (iVar1 != 0) {
    puVar6 = *(undefined2 **)(param_1 + 8);
  }
  iVar7 = 0;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = iVar7;
  }
  uVar3 = FUN_144a49b4a(iVar5,puVar6);
  uVar2 = FUN_144a78877(uVar2,uVar3);
  puVar4 = (undefined8 *)FUN_1447a1f4a(param_1 + 0x18);
  if (*(int *)(puVar4 + 1) != 0) {
    puVar8 = (undefined2 *)*puVar4;
    iVar7 = *(int *)(puVar4 + 1) + -1;
  }
  uVar3 = FUN_144a49b4a(iVar7,puVar8);
  uVar2 = FUN_144a78877(uVar2,uVar3);
  uVar3 = FUN_1448eb174(param_1 + 0x28,0x10,0);
  uVar2 = FUN_144a78877(uVar2,uVar3);
  uVar2 = FUN_144a78877(uVar2,*(undefined1 *)(param_1 + 0x38));
  FUN_144a78877(uVar2,*(undefined1 *)(param_1 + 0x39));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e4472 FUN_1490e4472 body=46 status=ok
// SIG undefined FUN_1490e4472(void)

void FUN_1490e4472(undefined8 param_1,longlong param_2)

{
  FUN_145be1eb3(*(undefined8 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x18));
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490e44b6 FUN_1490e44b6 body=75 status=ok
// SIG undefined FUN_1490e44b6(void)

undefined1 FUN_1490e44b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_1490e45c6();
      lVar6 = lVar6 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1490e452a FUN_1490e452a body=59 status=ok
// SIG undefined FUN_1490e452a(void)

undefined8 FUN_1490e452a(longlong *param_1)

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



// FUNCTION 1490e45c6 FUN_1490e45c6 body=95 status=ok
// SIG undefined FUN_1490e45c6(void)

undefined8 * FUN_1490e45c6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145be1eb3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1490e4626(param_1,iVar1);
      FUN_1490e4688(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1490e4626 FUN_1490e4626 body=98 status=ok
// SIG undefined FUN_1490e4626(void)

void FUN_1490e4626(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1490e4688 FUN_1490e4688 body=52 status=ok
// SIG undefined FUN_1490e4688(void)

void FUN_1490e4688(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1490e46bc(param_1,param_2);
    param_1 = param_1 + 0x40;
    param_2 = param_2 + 0x40;
  }
  return;
}



// FUNCTION 1490e46bc FUN_1490e46bc body=146 status=ok
// SIG undefined FUN_1490e46bc(void)

undefined8 * FUN_1490e46bc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  plVar2 = (longlong *)param_2[3];
  param_1[3] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 7);
  return param_1;
}



// FUNCTION 1490e4750 FUN_1490e4750 body=52 status=ok
// SIG undefined FUN_1490e4750(void)

void FUN_1490e4750(longlong param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_145be1eb3(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1490e47ca FUN_1490e47ca body=119 status=ok
// SIG undefined FUN_1490e47ca(void)

undefined1 FUN_1490e47ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      lVar2 = param_2 + 0x10 + lVar6;
      *(undefined4 *)(lVar2 + -0x10) = *puVar1;
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 4);
      uVar3 = puVar1[9];
      uVar4 = puVar1[10];
      uVar5 = puVar1[0xb];
      *(undefined4 *)(lVar2 + 0x10) = puVar1[8];
      *(undefined4 *)(lVar2 + 0x14) = uVar3;
      *(undefined4 *)(lVar2 + 0x18) = uVar4;
      *(undefined4 *)(lVar2 + 0x1c) = uVar5;
      FUN_1490e45c6(param_2 + lVar6 + 0x30,param_3 + lVar6 + 0x30);
      lVar6 = lVar6 + 0x40;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1490e486a FUN_1490e486a body=70 status=ok
// SIG undefined FUN_1490e486a(void)

void FUN_1490e486a(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1490e4969(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e48bc FUN_1490e48bc body=34 status=ok
// SIG undefined FUN_1490e48bc(void)

void FUN_1490e48bc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x40) == '\x01') {
    FUN_1490e492c(param_2);
    *(undefined1 *)(param_2 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1490e492c FUN_1490e492c body=60 status=ok
// SIG undefined FUN_1490e492c(void)

void FUN_1490e492c(longlong param_1)

{
  FUN_145be1eb3(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490e4969 FUN_1490e4969 body=150 status=ok
// SIG undefined FUN_1490e4969(void)

undefined4 FUN_1490e4969(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_1447addd0(param_1 + 0x20,0x10);
  FUN_14475cc44(param_1,&local_30);
  puVar4 = local_30;
  if (local_28 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  iVar1 = local_28 + -1;
  if (local_28 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar4);
  uVar2 = FUN_144a78877(uVar3,uVar2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1490e4a10 FUN_1490e4a10 body=44 status=ok
// SIG undefined FUN_1490e4a10(void)

void FUN_1490e4a10(undefined8 param_1,longlong *param_2)

{
  FUN_1490e4bab(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490e4a52 FUN_1490e4a52 body=54 status=ok
// SIG undefined FUN_1490e4a52(void)

undefined1 FUN_1490e4a52(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1490e4b4c(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1490e4ab0 FUN_1490e4ab0 body=59 status=ok
// SIG undefined FUN_1490e4ab0(void)

undefined8 FUN_1490e4ab0(longlong *param_1)

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



// FUNCTION 1490e4b4c FUN_1490e4b4c body=95 status=ok
// SIG undefined FUN_1490e4b4c(void)

undefined8 * FUN_1490e4b4c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1490e4bab(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1490e4bd4(param_1,iVar1);
      FUN_1490e4c4a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1490e4bab FUN_1490e4bab body=41 status=ok
// SIG undefined FUN_1490e4bab(void)

void FUN_1490e4bab(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1490dee66(param_1);
    param_1 = param_1 + 0x1f8;
  }
  return;
}



// FUNCTION 1490e4bd4 FUN_1490e4bd4 body=118 status=ok
// SIG undefined FUN_1490e4bd4(void)

void FUN_1490e4bd4(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x1f8,8);
    iVar2 = (int)(uVar1 / 0x1f8);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x1f8,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1490e4c4a FUN_1490e4c4a body=60 status=ok
// SIG undefined FUN_1490e4c4a(void)

void FUN_1490e4c4a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1490df09e(param_1,param_2);
    param_1 = param_1 + 0x1f8;
    param_2 = param_2 + 0x1f8;
  }
  return;
}



// FUNCTION 1490e4c88 FUN_1490e4c88 body=50 status=ok
// SIG undefined FUN_1490e4c88(void)

void FUN_1490e4c88(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1490e4bab(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1490e4cba FUN_1490e4cba body=68 status=ok
// SIG undefined FUN_1490e4cba(void)

void FUN_1490e4cba(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145868945(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1490e4d94(param_1,param_2);
  return;
}



// FUNCTION 1490e4cff FUN_1490e4cff body=80 status=ok
// SIG undefined FUN_1490e4cff(void)

undefined8 FUN_1490e4cff(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  FUN_1490e4e04();
  FUN_1490e4f70(param_1,param_2 + 0x1f8);
  iVar1 = FUN_1448332aa(param_1,&DAT_149e3cc78);
  if (100 < iVar1) {
    FUN_14021219d(param_1,param_2 + 0x430);
  }
  return param_1;
}



// FUNCTION 1490e4d50 FUN_1490e4d50 body=67 status=ok
// SIG undefined FUN_1490e4d50(void)

longlong FUN_1490e4d50(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1490e84bc(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x440 + *param_1;
  FUN_1490e8473(lVar2,1);
  return lVar2;
}



// FUNCTION 1490e4d94 FUN_1490e4d94 body=112 status=ok
// SIG undefined FUN_1490e4d94(void)

void FUN_1490e4d94(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x440,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x440)) {
      uVar2 = uVar1 / 0x440 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x440,8);
  }
  return;
}



// FUNCTION 1490e4e04 FUN_1490e4e04 body=364 status=ok
// SIG undefined FUN_1490e4e04(void)

longlong * FUN_1490e4e04(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_14bb46be0);
  FUN_1490e53b4(param_1,param_2);
  if (((*(byte *)(param_1 + 5) & 1) == 0) ||
     (iVar1 = FUN_1448332aa(param_1,&DAT_14bb46be0), 10 < iVar1)) {
    (**(code **)(*param_1 + 0x218))(param_1,&DAT_14bb46be0);
    FUN_1402ac1b3(param_1,param_2 + 0x50);
    FUN_1490e558e(param_1,param_2 + 0x60);
  }
  (**(code **)(*param_1 + 0x160))(param_1,param_2 + 0x70);
  FUN_14021219d(param_1,param_2 + 0x78);
  FUN_1408ef3d7(param_1,param_2 + 0x88);
  if (((*(byte *)(param_1 + 5) & 1) == 0) ||
     (iVar1 = FUN_1448332aa(param_1,&DAT_14bb46be0), 8 < iVar1)) {
    FUN_14021219d(param_1,param_2 + 0xa8);
  }
  else {
    (**(code **)(*param_1 + 0x158))(param_1,param_2 + 0x98);
  }
  FUN_14021219d(param_1,param_2 + 0xb8);
  FUN_14021219d(param_1,param_2 + 200);
  FUN_1490e59fc(param_1,param_2 + 0xd8);
  FUN_1490e6274(param_1,param_2 + 0xe8);
  FUN_1490e6b08(param_1,param_2 + 0x138);
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_1,&DAT_14bb46be0);
    if (iVar1 < 0xd) {
      FUN_1490e5510(param_2 + 0x148);
      return param_1;
    }
  }
  FUN_1490e0868(param_1,param_2 + 0x148);
  return param_1;
}



// FUNCTION 1490e4f70 FUN_1490e4f70 body=1091 status=ok
// SIG undefined FUN_1490e4f70(void)

longlong * FUN_1490e4f70(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  byte local_95;
  undefined8 local_94;
  undefined1 local_8c [4];
  undefined8 ***local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cc08);
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cbb8);
  FUN_145814b84(param_2,param_1);
  FUN_140219018(param_1,param_2 + 0xb0);
  FUN_1490e70d6(param_1,param_2 + 0xc0);
  FUN_1490e748c(param_1,param_2 + 0xd0);
  FUN_1490e70d6(param_1,param_2 + 0xe0);
  FUN_1490e748c(param_1,param_2 + 0xf0);
  FUN_1490e70d6(param_1,param_2 + 0x100);
  FUN_1490e748c(param_1,param_2 + 0x110);
  FUN_1490e70d6(param_1,param_2 + 0x120);
  FUN_1490e748c(param_1,param_2 + 0x130);
  FUN_140c191a2(param_1,param_2 + 0x140);
  FUN_1490e7818(param_1,param_2 + 400);
  puVar4 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + 0x1e0),4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x1e0) = *puVar4;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    *(undefined1 *)(param_2 + 0x1e4) = 0;
  }
  iVar7 = FUN_1448332aa(param_1,&DAT_149e3cc08);
  if ((0x2b < iVar7) || (iVar7 = FUN_1448332aa(param_1,&DAT_149e3cbb8), 0x70 < iVar7)) {
    local_94._7_1_ = (char)*(undefined4 *)(param_2 + 0x1f0) - (char)*(undefined4 *)(param_2 + 0x21c)
    ;
    puVar5 = (ulonglong *)param_1[1];
    pbVar1 = (byte *)*puVar5 + 1;
    if ((byte *)puVar5[1] < pbVar1) {
      (**(code **)(*param_1 + 0x170))(param_1,(longlong)&local_94 + 7,1);
    }
    else {
      local_94._7_1_ = *(byte *)*puVar5;
      *puVar5 = (ulonglong)pbVar1;
    }
    plVar3 = (longlong *)(param_2 + 0x1e8);
    if ((*(byte *)(param_1 + 5) & 1) == 0) {
      lVar13 = param_2 + 0x1f8;
      local_88 = (undefined8 ***)&DAT_100000000;
      local_78 = 0xffffffff;
      uStack_70 = 0;
      uStack_80 = lVar13;
      if (*(int *)(param_2 + 0x210) == 0) {
        iVar7 = 0;
      }
      else {
        FUN_1449c0562(&local_88);
        iVar7 = *(int *)(param_2 + 0x210);
      }
      uStack_b0 = (undefined4)uStack_80;
      uStack_ac = uStack_80._4_4_;
      uStack_a0 = CONCAT44(uStack_6c,uStack_70);
      local_a8 = local_78;
      uVar6 = local_a8;
      local_b8 = (undefined8 ****)local_88;
      local_a8._4_4_ = (int)((ulonglong)local_78 >> 0x20);
      iVar8 = local_a8._4_4_;
      local_c0 = plVar3;
      if ((local_a8._4_4_ != iVar7) || (local_a8 = local_78, uStack_80 != lVar13)) {
        do {
          local_a8 = uVar6;
          lVar12 = *local_c0;
          lVar10 = lVar12 + (longlong)iVar8 * 0x20;
          FUN_141158ce6(lVar10,param_1);
          local_88 = (undefined8 ***)
                     CONCAT71(local_88._1_7_,*(undefined1 *)(lVar12 + 0x10 + (longlong)iVar8 * 0x20)
                             );
          puVar5 = (ulonglong *)param_1[1];
          puVar2 = (undefined1 *)*puVar5 + 1;
          if ((undefined1 *)puVar5[1] < puVar2) {
            (**(code **)(*param_1 + 0x170))(param_1,&local_88,1);
          }
          else {
            local_88 = (undefined8 ***)CONCAT71(local_88._1_7_,*(undefined1 *)*puVar5);
            *puVar5 = (ulonglong)puVar2;
          }
          if ((longlong)*(int *)(lVar10 + 0x10) != 0) {
            lVar12 = *(longlong *)(lVar10 + 8);
            lVar10 = (longlong)*(int *)(lVar10 + 0x10) * 6;
            do {
              FUN_141158ce6(lVar12,param_1);
              lVar12 = lVar12 + 6;
              lVar10 = lVar10 + -6;
            } while (lVar10 != 0);
          }
          local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~local_b8._4_4_);
          FUN_1449c0562(&local_b8);
          iVar8 = local_a8._4_4_;
          uVar6 = local_a8;
        } while (local_c0 != plVar3 ||
                 (CONCAT44(uStack_ac,uStack_b0) != lVar13 || local_a8._4_4_ != iVar7));
      }
    }
    else if (local_94._7_1_ != 0) {
      uVar9 = 0;
      do {
        local_94._0_1_ = 0;
        local_94._2_4_ = 0xffffffff;
        FUN_141158ce6(&local_94,param_1);
        puVar5 = (ulonglong *)param_1[1];
        pbVar1 = (byte *)*puVar5 + 1;
        if ((byte *)puVar5[1] < pbVar1) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_95,1);
        }
        else {
          local_95 = *(byte *)*puVar5;
          *puVar5 = (ulonglong)pbVar1;
        }
        local_88 = (undefined8 ****)0x0;
        uStack_80 = 0;
        FUN_1490e7088(&local_88,local_95,1);
        if (local_95 != 0) {
          lVar13 = 0;
          uVar11 = 0;
          do {
            FUN_141158ce6((undefined1 *)((longlong)local_88 + lVar13),param_1);
            uVar11 = uVar11 + 1;
            lVar13 = lVar13 + 6;
          } while (uVar11 < local_95);
        }
        local_c0 = &local_94;
        local_b8 = &local_88;
        FUN_1490e7e9c(plVar3,local_8c,&local_c0,0);
        if ((undefined8 ****)local_88 != (undefined8 ****)0x0) {
          FUN_1400020a8();
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_94._7_1_);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1490e53b4 FUN_1490e53b4 body=347 status=ok
// SIG undefined FUN_1490e53b4(void)

longlong * FUN_1490e53b4(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_14bb46be0);
  bVar1 = *(byte *)(param_1 + 5);
  if ((((bVar1 & 4) != 0) && ((int)param_2[5] < 2)) && (*param_2 != 0)) {
    puVar3 = (undefined8 *)FUN_1490df370(param_2);
    iVar2 = *(int *)(puVar3 + 1) + -1;
    if (*(int *)(puVar3 + 1) == 0) {
      iVar2 = 0;
    }
    FUN_1402980a2(param_2 + 4,*puVar3,iVar2);
    bVar1 = *(byte *)(param_1 + 5);
  }
  if ((bVar1 & 1) != 0) {
    iVar2 = FUN_1448332aa(param_1,&DAT_14bb46be0);
    if (iVar2 < 10) {
      local_38 = 0;
      uStack_30 = 0;
      local_48 = 0;
      uStack_40 = 0;
      (**(code **)(*param_1 + 0x128))(param_1,&local_48);
      FUN_14475cc44(&local_48,&local_58);
      if (param_2 + 4 == &local_58) {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_2[4] != 0) {
          FUN_1400020a8();
        }
        param_2[4] = local_58;
        local_58 = 0;
        *(undefined4 *)(param_2 + 5) = local_50;
        *(undefined4 *)((longlong)param_2 + 0x2c) = local_4c;
      }
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1490e549b;
    }
  }
  FUN_14021219d(param_1,param_2 + 4);
LAB_1490e549b:
  (**(code **)(*param_1 + 0x128))(param_1,param_2 + 6);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e5510 FUN_1490e5510 body=126 status=ok
// SIG undefined FUN_1490e5510(void)

void FUN_1490e5510(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_1490e6f7a(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_1490e7016(param_1,0);
  }
  if (*(int *)(param_1 + 3) != *(int *)((longlong)param_1 + 0x44)) {
    FUN_14062e926(param_1 + 2);
    FUN_147def0d2(param_1 + 2);
  }
  if (*(int *)(param_1 + 0xd) == *(int *)((longlong)param_1 + 0x94)) {
    return;
  }
  FUN_14587c8aa(param_1 + 0xc);
  FUN_145da4014(param_1 + 0xc);
  return;
}



// FUNCTION 1490e558e FUN_1490e558e body=349 status=ok
// SIG undefined FUN_1490e558e(void)

longlong * FUN_1490e558e(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 6,(longlong)*(int *)((longlong)param_2 + 0xc) << 6
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
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_145be1eb3(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1490e58b8(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x40000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1490e5731(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x40;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1490e56ec(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1490e5878(param_2);
        FUN_1490e5731(param_1,uVar3);
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



// FUNCTION 1490e56ec FUN_1490e56ec body=68 status=ok
// SIG undefined FUN_1490e56ec(void)

void FUN_1490e56ec(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_145be1eb3(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1490e58b8(param_1,param_2);
  return;
}



// FUNCTION 1490e5731 FUN_1490e5731 body=325 status=ok
// SIG undefined FUN_1490e5731(void)

longlong * FUN_1490e5731(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_14bb46be0);
  (**(code **)(*param_1 + 0x160))(param_1,param_2);
  FUN_14021219d(param_1,param_2 + 8);
  (**(code **)(*param_1 + 0x158))(param_1,param_2 + 0x18);
  FUN_1408ef3d7(param_1,param_2 + 0x28);
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x38);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x38) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x38) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x39);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x39) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x39) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e5878 FUN_1490e5878 body=64 status=ok
// SIG undefined FUN_1490e5878(void)

longlong FUN_1490e5878(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1490e5976(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_1490e5918(lVar2,1);
  return lVar2;
}



// FUNCTION 1490e58b8 FUN_1490e58b8 body=96 status=ok
// SIG undefined FUN_1490e58b8(void)

void FUN_1490e58b8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 6,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 1490e5918 FUN_1490e5918 body=94 status=ok
// SIG undefined FUN_1490e5918(void)

void FUN_1490e5918(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x18;
    do {
      *(undefined8 *)(param_1 + -0x18) = 0;
      *(undefined8 *)(param_1 + -0x10) = 0;
      *(undefined8 *)(param_1 + -8) = 0;
      FUN_144a5dc74(param_1);
      *(undefined1 **)(param_1 + 0x10) = &DAT_3f8000003f800000;
      *(undefined1 **)(param_1 + 0x18) = &DAT_3f8000003f800000;
      *(undefined2 *)(param_1 + 0x20) = 1;
      param_1 = param_1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1490e5976 FUN_1490e5976 body=132 status=ok
// SIG undefined FUN_1490e5976(void)

void FUN_1490e5976(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1490e59fc FUN_1490e59fc body=358 status=ok
// SIG undefined FUN_1490e59fc(void)

longlong * FUN_1490e59fc(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0xb0,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xb0);
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
      FUN_1490e5d69(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1490e5d92(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x1745d < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1490e5ba9(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xb0;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1490e5b64(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1490e5d26(param_2);
        FUN_1490e5ba9(param_1,uVar3);
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



// FUNCTION 1490e5b64 FUN_1490e5b64 body=68 status=ok
// SIG undefined FUN_1490e5b64(void)

void FUN_1490e5b64(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1490e5d69(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1490e5d92(param_1,param_2);
  return;
}



// FUNCTION 1490e5ba9 FUN_1490e5ba9 body=379 status=ok
// SIG undefined FUN_1490e5ba9(void)

longlong * FUN_1490e5ba9(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x160))();
  (**(code **)(*param_1 + 0x160))(param_1,param_2 + 8);
  (**(code **)(*param_1 + 0x160))(param_1,param_2 + 0x10);
  (**(code **)(*param_1 + 0x130))(param_1,param_2 + 0x18);
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x40);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x40) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x40) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,(undefined1 *)(param_2 + 0x41),1);
  }
  else {
    *(undefined1 *)(param_2 + 0x41) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FUN_14021219d(param_1,param_2 + 0x48);
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_2 + 0x58);
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x58) = local_24 != 0;
  }
  else {
    *(bool *)(param_2 + 0x58) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_1490e5e5c(param_1,param_2 + 0x60);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e5d26 FUN_1490e5d26 body=67 status=ok
// SIG undefined FUN_1490e5d26(void)

longlong FUN_1490e5d26(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1490e61e0(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xb0 + *param_1;
  FUN_1490e617a(lVar2,1);
  return lVar2;
}



// FUNCTION 1490e5d69 FUN_1490e5d69 body=41 status=ok
// SIG undefined FUN_1490e5d69(void)

void FUN_1490e5d69(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1490e5e02(param_1);
    param_1 = param_1 + 0xb0;
  }
  return;
}



// FUNCTION 1490e5d92 FUN_1490e5d92 body=112 status=ok
// SIG undefined FUN_1490e5d92(void)

void FUN_1490e5d92(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb0,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xb0)) {
      uVar2 = uVar1 / 0xb0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xb0,8);
  }
  return;
}



// FUNCTION 1490e5e02 FUN_1490e5e02 body=90 status=ok
// SIG undefined FUN_1490e5e02(void)

void FUN_1490e5e02(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_145cbd7c2(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490e5e5c FUN_1490e5e5c body=129 status=ok
// SIG undefined FUN_1490e5e5c(void)

longlong FUN_1490e5e5c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1490e5edd();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_140b74bcc(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1490e5edd FUN_1490e5edd body=668 status=ok
// SIG undefined FUN_1490e5edd(void)

longlong * FUN_1490e5edd(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
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
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar7 = local_70._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_74 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_74,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_74);
      }
    }
    else {
      local_74 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_68 = param_2 + 2;
    local_70 = (undefined8 *)&DAT_100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_98 = local_70;
    local_90 = local_68;
    local_88 = local_60;
    uVar8 = local_88;
    local_80 = local_58;
    local_7c = local_54;
    local_88._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_a0 = param_2;
    if (local_88._4_4_ < (int)local_68[3]) {
      iVar9 = local_88._4_4_;
      local_88 = uVar8;
      do {
        lVar5 = *local_a0;
        FUN_14021219d(param_1,lVar5 + (longlong)iVar9 * 0x28);
        (**(code **)(*param_1 + 0x158))(param_1,lVar5 + (longlong)iVar9 * 0x28 + 0x10);
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar9 = local_88._4_4_;
        uVar8 = local_88;
      } while (local_88._4_4_ < (int)local_90[3]);
    }
  }
  else {
    local_70 = (undefined8 *)((ulonglong)local_70._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_70,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_70);
      }
    }
    else {
      local_70 = (undefined8 *)CONCAT44(uVar7,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_141521b8e(param_2,(ulonglong)local_70 & 0xffffffff);
    uVar8 = local_88;
    if (0 < (int)local_70) {
      iVar9 = 0;
      do {
        FUN_140b747ec(param_2,&local_a0);
        puVar6 = local_98;
        puVar3 = local_98 + 2;
        *local_98 = 0;
        local_98[1] = 0;
        FUN_144a5dc74(puVar3);
        *(undefined4 *)(puVar6 + 4) = 0xffffffff;
        FUN_14021219d(param_1,puVar6);
        (**(code **)(*param_1 + 0x158))(param_1,puVar3);
        iVar9 = iVar9 + 1;
        uVar8 = local_88;
      } while (iVar9 < (int)local_70);
    }
  }
  local_88 = uVar8;
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1490e617a FUN_1490e617a body=101 status=ok
// SIG undefined FUN_1490e617a(void)

void FUN_1490e617a(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0xa8);
    do {
      *(undefined8 *)(puVar1 + -10) = 0;
      puVar1[-8] = 0;
      *(undefined8 *)(puVar1 + -0x18) = 0;
      *(undefined8 *)(puVar1 + -0x16) = 0;
      *(undefined1 *)(puVar1 + -0x14) = 0;
      *(undefined8 *)(puVar1 + -0x12) = 0;
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *(undefined8 *)(puVar1 + -0x2a) = 0;
      *(undefined8 *)(puVar1 + -0x28) = 0;
      *(undefined8 *)(puVar1 + -0x26) = 0;
      *(undefined8 *)(puVar1 + -0x24) = 0;
      *(undefined8 *)(puVar1 + -0x22) = 0;
      *(undefined8 *)(puVar1 + -0x20) = 0;
      *(undefined8 *)(puVar1 + -0x1e) = 0;
      *(undefined8 *)(puVar1 + -0x1c) = 0;
      *(undefined2 *)(puVar1 + -0x1a) = 0;
      *(undefined8 *)(puVar1 + -7) = 0xffffffff00000080;
      puVar1[-5] = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x2c;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1490e61e0 FUN_1490e61e0 body=146 status=ok
// SIG undefined FUN_1490e61e0(void)

void FUN_1490e61e0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xb0,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1490e6274 FUN_1490e6274 body=131 status=ok
// SIG undefined FUN_1490e6274(void)

longlong FUN_1490e6274(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1490e62f7();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_1490e689e(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1490e62f7 FUN_1490e62f7 body=794 status=ok
// SIG undefined FUN_1490e62f7(void)

longlong * FUN_1490e62f7(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x60,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x60);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar7 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar9 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar4 = *local_90;
        FUN_1490e53b4(param_1,lVar4 + (longlong)iVar9 * 0x60);
        puVar8 = (undefined4 *)(lVar4 + (longlong)iVar9 * 0x60 + 0x50);
        puVar5 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar8,4);
          }
          else {
            thunk_FUN_14572512c(param_1);
          }
        }
        else {
          *puVar8 = *puVar5;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar9 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar3 = (ulonglong *)param_1[1];
    puVar5 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar5) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar5;
    }
    FUN_1490e6612(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar9 = 0;
      do {
        FUN_1490e6772(param_2,&local_90);
        puVar2 = local_88 + 10;
        local_88[8] = 0;
        local_88[9] = 0;
        local_88[6] = 0;
        local_88[7] = 0;
        local_88[4] = 0;
        local_88[5] = 0;
        local_88[2] = 0;
        local_88[3] = 0;
        *local_88 = 0;
        local_88[1] = 0;
        *(undefined4 *)(local_88 + 10) = 0;
        *(undefined4 *)(local_88 + 0xb) = 0xffffffff;
        FUN_1490e53b4(param_1);
        puVar5 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar5 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar2,4);
          }
          else {
            thunk_FUN_14572512c(param_1,puVar2);
          }
        }
        else {
          *(undefined4 *)puVar2 = *puVar5;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        iVar9 = iVar9 + 1;
        uVar7 = local_78;
      } while (iVar9 < (int)local_60);
    }
  }
  local_78 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1490e6612 FUN_1490e6612 body=350 status=ok
// SIG undefined FUN_1490e6612(void)

void FUN_1490e6612(longlong *param_1,int param_2)

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
      FUN_1490e6860((longlong)iStack_54 * 0x60 + *local_70);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (-1 < param_2) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_2) {
      FUN_1448fc38a(param_1,param_2);
    }
    param_1[6] = 0xffffffff;
    uVar3 = param_2 + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar3 || 0x80 < *(int *)((longlong)param_1 + 0x2c)
       ) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(plVar1,0);
    }
    if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1490e6772 FUN_1490e6772 body=238 status=ok
// SIG undefined FUN_1490e6772(void)

int * FUN_1490e6772(longlong *param_1,int *param_2)

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



// FUNCTION 1490e6860 FUN_1490e6860 body=62 status=ok
// SIG undefined FUN_1490e6860(void)

void FUN_1490e6860(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490e689e FUN_1490e689e body=445 status=ok
// SIG undefined FUN_1490e689e(void)

void FUN_1490e689e(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar4 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar5 = local_70._4_4_;
      local_70 = uVar4;
      do {
        lVar3 = *local_88;
        lVar10 = (longlong)iVar5 * 0x60;
        iVar6 = FUN_1490e6a5c(lVar3 + lVar10);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x5c + lVar10) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar10) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar4 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490e6a5c FUN_1490e6a5c body=171 status=ok
// SIG undefined FUN_1490e6a5c(void)

undefined4 FUN_1490e6a5c(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14475cc44(param_1 + 0x30,&local_38);
  puVar7 = &DAT_149dfb77a;
  puVar5 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar5 = local_38;
  }
  iVar6 = 0;
  iVar4 = local_30 + -1;
  if (local_30 == 0) {
    iVar4 = iVar6;
  }
  uVar1 = FUN_144a49b4a(iVar4,puVar5);
  puVar3 = (undefined8 *)FUN_1490df370(param_1);
  if (*(int *)(puVar3 + 1) != 0) {
    puVar7 = (undefined2 *)*puVar3;
    iVar6 = *(int *)(puVar3 + 1) + -1;
  }
  uVar2 = FUN_144a49b4a(iVar6,puVar7);
  uVar1 = FUN_144a78877(uVar2,uVar1);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e6b08 FUN_1490e6b08 body=370 status=ok
// SIG undefined FUN_1490e6b08(void)

longlong * FUN_1490e6b08(longlong *param_1,longlong *param_2)

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
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1490e6cc0(param_2,0);
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
      FUN_1490e6d31(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x30;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_1490e6cc0(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1490e6c7c(param_2);
        FUN_1490e6d31(param_1,uVar3);
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



// FUNCTION 1490e6c7c FUN_1490e6c7c body=68 status=ok
// SIG undefined FUN_1490e6c7c(void)

longlong FUN_1490e6c7c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1466843f6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x30 + *param_1;
  FUN_1490e6f64(lVar2,1);
  return lVar2;
}



// FUNCTION 1490e6cc0 FUN_1490e6cc0 body=113 status=ok
// SIG undefined FUN_1490e6cc0(void)

void FUN_1490e6cc0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
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



// FUNCTION 1490e6d31 FUN_1490e6d31 body=562 status=ok
// SIG undefined FUN_1490e6d31(void)

longlong * FUN_1490e6d31(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x160))();
  (**(code **)(*param_1 + 0x160))(param_1,param_2 + 0x10);
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    if ((*(byte *)(param_1 + 5) & 1) == 0) goto LAB_1490e6dcb;
    local_38 = 0;
    uStack_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    (**(code **)(*param_1 + 0x128))(param_1,&local_48);
    uVar3 = FUN_140007850(&local_48);
    *(undefined8 *)(param_2 + 0x18) = uVar3;
  }
  else {
    FUN_1400bbfc4(&local_48,*(undefined8 *)(param_2 + 0x18));
    (**(code **)(*param_1 + 0x128))(param_1,&local_48);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_1490e6dcb:
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_48 = CONCAT44(local_48._4_4_,(uint)*(byte *)(param_2 + 0x20));
    (**(code **)(*param_1 + 0x170))(param_1,&local_48,4);
    if (1 < (uint)local_48) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x20) = (uint)local_48 != 0;
  }
  else {
    *(bool *)(param_2 + 0x20) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_48 = CONCAT44(local_48._4_4_,(uint)*(byte *)(param_2 + 0x21));
    (**(code **)(*param_1 + 0x170))(param_1,&local_48,4);
    if (1 < (uint)local_48) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x21) = (uint)local_48 != 0;
  }
  else {
    *(bool *)(param_2 + 0x21) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_48 = CONCAT44(local_48._4_4_,(uint)*(byte *)(param_2 + 0x22));
    (**(code **)(*param_1 + 0x170))(param_1,&local_48,4);
    if (1 < (uint)local_48) {
      FUN_14572541c(param_1);
    }
    *(bool *)(param_2 + 0x22) = (uint)local_48 != 0;
  }
  else {
    *(bool *)(param_2 + 0x22) = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar4 = (undefined4 *)(param_2 + 0x24);
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar4,4);
    }
    else {
      thunk_FUN_14572512c(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e6f64 FUN_1490e6f64 body=22 status=ok
// SIG undefined FUN_1490e6f64(void)

void FUN_1490e6f64(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 * 0x30);
    return;
  }
  return;
}



// FUNCTION 1490e6f7a FUN_1490e6f7a body=38 status=ok
// SIG undefined FUN_1490e6f7a(void)

void FUN_1490e6f7a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1490e6fda(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 1490e6fa0 FUN_1490e6fa0 body=57 status=ok
// SIG undefined FUN_1490e6fa0(void)

void FUN_1490e6fa0(undefined8 *param_1,int param_2)

{
  FUN_1490e6f7a(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1490e7016(param_1,param_2);
  return;
}



// FUNCTION 1490e6fda FUN_1490e6fda body=59 status=ok
// SIG undefined FUN_1490e6fda(void)

void FUN_1490e6fda(longlong *param_1)

{
  FUN_1447a1747(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490e7016 FUN_1490e7016 body=113 status=ok
// SIG undefined FUN_1490e7016(void)

void FUN_1490e7016(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 1490e7088 FUN_1490e7088 body=77 status=ok
// SIG undefined FUN_1490e7088(void)

void FUN_1490e7088(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_141158dd0();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_1490e7de8();
      return;
    }
  }
  return;
}



// FUNCTION 1490e70d6 FUN_1490e70d6 body=515 status=ok
// SIG undefined FUN_1490e70d6(void)

longlong * FUN_1490e70d6(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x50,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x50);
  local_44 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_44 = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_44,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_44);
    }
  }
  else {
    local_44 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_44 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_1490e2dd6(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1490e7364(param_2,0);
      }
    }
  }
  else if ((((int)local_44 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x33333 < local_44 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_44;
    lVar5 = 0x40;
    lVar6 = 0;
    do {
      lVar3 = *param_2;
      (**(code **)(*param_1 + 0x160))(param_1,lVar3 + lVar5 + -0x40);
      FUN_14021219d(param_1,lVar3 + lVar5 + -0x38);
      (**(code **)(*param_1 + 0x130))(param_1,lVar3 + lVar5 + -0x28);
      FUN_14021219d(param_1,lVar3 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x50;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1490e72da(param_2);
    if (0 < (int)local_44) {
      iVar4 = 0;
      do {
        lVar5 = FUN_1490e7320(param_2);
        (**(code **)(*param_1 + 0x160))(param_1,lVar5);
        FUN_14021219d(param_1,lVar5 + 8);
        (**(code **)(*param_1 + 0x130))(param_1,lVar5 + 0x18);
        FUN_14021219d(param_1,lVar5 + 0x40);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_44);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1490e72da FUN_1490e72da body=68 status=ok
// SIG undefined FUN_1490e72da(void)

void FUN_1490e72da(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1490e2dd6(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1490e7364(param_1,param_2);
  return;
}



// FUNCTION 1490e7320 FUN_1490e7320 body=68 status=ok
// SIG undefined FUN_1490e7320(void)

longlong FUN_1490e7320(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1490e73f8(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x50 + *param_1;
  FUN_1490e73d5(lVar2,1);
  return lVar2;
}



// FUNCTION 1490e7364 FUN_1490e7364 body=113 status=ok
// SIG undefined FUN_1490e7364(void)

void FUN_1490e7364(longlong param_1,int param_2)

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



// FUNCTION 1490e73d5 FUN_1490e73d5 body=35 status=ok
// SIG undefined FUN_1490e73d5(void)

void FUN_1490e73d5(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
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
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 1490e73f8 FUN_1490e73f8 body=147 status=ok
// SIG undefined FUN_1490e73f8(void)

void FUN_1490e73f8(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
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



// FUNCTION 1490e748c FUN_1490e748c body=357 status=ok
// SIG undefined FUN_1490e748c(void)

longlong * FUN_1490e748c(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
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
      FUN_1490e2d99(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1490e76f4(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x66666 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1490e7637(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x28;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1490e75f2(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1490e76b0(param_2);
        FUN_1490e7637(param_1,uVar3);
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



// FUNCTION 1490e75f2 FUN_1490e75f2 body=68 status=ok
// SIG undefined FUN_1490e75f2(void)

void FUN_1490e75f2(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1490e2d99(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1490e76f4(param_1,param_2);
  return;
}



// FUNCTION 1490e7637 FUN_1490e7637 body=120 status=ok
// SIG undefined FUN_1490e7637(void)

longlong * FUN_1490e7637(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_14021219d(param_1,param_2 + 2);
  FUN_14021219d(param_1,param_2 + 6);
  return param_1;
}



// FUNCTION 1490e76b0 FUN_1490e76b0 body=68 status=ok
// SIG undefined FUN_1490e76b0(void)

longlong FUN_1490e76b0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1490e7784(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x28 + *param_1;
  FUN_1490e7765(lVar2,1);
  return lVar2;
}



// FUNCTION 1490e76f4 FUN_1490e76f4 body=113 status=ok
// SIG undefined FUN_1490e76f4(void)

void FUN_1490e76f4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 1490e7765 FUN_1490e7765 body=30 status=ok
// SIG undefined FUN_1490e7765(void)

void FUN_1490e7765(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0xffffffff;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 1490e7784 FUN_1490e7784 body=147 status=ok
// SIG undefined FUN_1490e7784(void)

void FUN_1490e7784(longlong param_1,int param_2)

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



// FUNCTION 1490e7818 FUN_1490e7818 body=131 status=ok
// SIG undefined FUN_1490e7818(void)

longlong FUN_1490e7818(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1490e789b();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_1490e7c0a(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1490e789b FUN_1490e789b body=648 status=ok
// SIG undefined FUN_1490e789b(void)

longlong * FUN_1490e789b(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
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
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_74,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_74);
      }
    }
    else {
      local_74 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_68 = param_2 + 2;
    local_70 = (undefined8 *)&DAT_100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_98 = local_70;
    local_90 = local_68;
    local_88 = local_60;
    uVar7 = local_88;
    local_80 = local_58;
    local_7c = local_54;
    local_88._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_a0 = param_2;
    if (local_88._4_4_ < (int)local_68[3]) {
      iVar8 = local_88._4_4_;
      local_88 = uVar7;
      do {
        lVar5 = *local_a0;
        FUN_14021219d(param_1,lVar5 + (longlong)iVar8 * 0x20);
        FUN_141158ce6(lVar5 + (longlong)iVar8 * 0x20 + 0x10,param_1);
        local_88 = CONCAT44(local_88._4_4_,(uint)local_88 & ~local_98._4_4_);
        FUN_1449c0562(&local_98);
        iVar8 = local_88._4_4_;
        uVar7 = local_88;
      } while (local_88._4_4_ < (int)local_90[3]);
    }
  }
  else {
    local_70 = (undefined8 *)((ulonglong)local_70._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_70,4);
      }
      else {
        thunk_FUN_14572512c(param_1,&local_70);
      }
    }
    else {
      local_70 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_1490e2c34(param_2,(ulonglong)local_70 & 0xffffffff);
    uVar7 = local_88;
    if (0 < (int)local_70) {
      iVar8 = 0;
      do {
        FUN_1490e7b24(param_2,&local_a0);
        puVar3 = local_98 + 2;
        *local_98 = 0;
        local_98[1] = 0;
        *(undefined1 *)(local_98 + 2) = 0;
        *(undefined4 *)((longlong)local_98 + 0x12) = 0xffffffff;
        *(undefined4 *)(local_98 + 3) = 0xffffffff;
        FUN_14021219d(param_1);
        FUN_141158ce6(puVar3,param_1);
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



// FUNCTION 1490e7b24 FUN_1490e7b24 body=229 status=ok
// SIG undefined FUN_1490e7b24(void)

int * FUN_1490e7b24(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1490e7c0a FUN_1490e7c0a body=476 status=ok
// SIG undefined FUN_1490e7c0a(void)

void FUN_1490e7c0a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e7de8 FUN_1490e7de8 body=63 status=ok
// SIG undefined FUN_1490e7de8(void)

void FUN_1490e7de8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1490e7e28(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,6,2);
  }
  return;
}



// FUNCTION 1490e7e28 FUN_1490e7e28 body=115 status=ok
// SIG undefined FUN_1490e7e28(void)

ulonglong FUN_1490e7e28(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 6) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 6,2);
      uVar1 = uVar1 / 6;
    }
  }
  return uVar1;
}



// FUNCTION 1490e7e9c FUN_1490e7e9c body=411 status=ok
// SIG undefined FUN_1490e7e9c(void)

undefined4 *
FUN_1490e7e9c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1490e8038(param_1,local_58);
  puVar2 = (undefined4 *)*param_3;
  puVar3 = (undefined8 *)param_3[1];
  *(undefined2 *)(local_50 + 1) = *(undefined2 *)(puVar2 + 1);
  *local_50 = *puVar2;
  *(undefined8 *)(local_50 + 2) = 0;
  iVar9 = *(int *)(puVar3 + 1);
  _Src = (void *)*puVar3;
  local_50[4] = iVar9;
  if ((longlong)iVar9 == 0) {
    local_50[5] = 0;
  }
  else {
    FUN_1490e39e4(local_50 + 2,iVar9,0);
    memcpy(*(void **)(local_50 + 2),_Src,(longlong)iVar9 * 6);
  }
  local_50[6] = 0xffffffff;
  local_5c = local_58[0];
  uVar1 = *(undefined2 *)(local_50 + 1);
  uVar5 = FUN_144a78877(*(undefined1 *)local_50,*(undefined2 *)((longlong)local_50 + 2));
  uVar6 = FUN_144a78877(uVar5,uVar1);
  local_68 = param_4;
  cVar4 = FUN_1490e811e(param_1,uVar6,local_50,&local_5c);
  if (cVar4 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar8) {
      uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      local_50[7] = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_50[6] = *(undefined4 *)
                     (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
      ;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_5c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1490e82a0(param_1);
    }
  }
  *param_2 = local_5c;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e8038 FUN_1490e8038 body=229 status=ok
// SIG undefined FUN_1490e8038(void)

int * FUN_1490e8038(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1490e811e FUN_1490e811e body=141 status=ok
// SIG undefined FUN_1490e811e(void)

void FUN_1490e811e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar7 = FUN_1490e81ac();
    if (iVar7 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar7 * 0x20) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_1490e8216(param_1,*param_4,1);
      *param_4 = iVar7;
      uVar6 = 1;
      goto LAB_1490e813f;
    }
  }
  uVar6 = 0;
LAB_1490e813f:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 1490e81ac FUN_1490e81ac body=105 status=ok
// SIG undefined FUN_1490e81ac(void)

int FUN_1490e81ac(longlong *param_1,uint param_2,char *param_3)

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
        lVar4 = (longlong)iVar1 * 0x20;
        if (((*(char *)(lVar2 + lVar4) == *param_3) &&
            (*(short *)(lVar2 + lVar4 + 2) == *(short *)(param_3 + 2))) &&
           (*(short *)(lVar2 + lVar4 + 4) == *(short *)(param_3 + 4))) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1490e8216 FUN_1490e8216 body=138 status=ok
// SIG undefined FUN_1490e8216(void)

void FUN_1490e8216(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1490e82a0 FUN_1490e82a0 body=466 status=ok
// SIG undefined FUN_1490e82a0(void)

void FUN_1490e82a0(longlong *param_1)

{
  longlong *plVar1;
  undefined2 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar5 = local_70;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar3 != uVar11);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar4 = *local_88;
        lVar12 = (longlong)iVar6 * 0x20;
        uVar2 = *(undefined2 *)(lVar4 + 4 + lVar12);
        uVar7 = FUN_144a78877(*(undefined1 *)(lVar4 + lVar12),*(undefined2 *)(lVar4 + 2 + lVar12));
        iVar8 = FUN_144a78877(uVar7,uVar2);
        uVar9 = (longlong)iVar8 & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar4 + 0x1c + lVar12) = iVar8;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar4 + 0x18 + lVar12) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490e8473 FUN_1490e8473 body=73 status=ok
// SIG undefined FUN_1490e8473(void)

void FUN_1490e8473(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1490def54(param_1);
    FUN_1490e8550(param_1 + 0x1f8);
    *(undefined8 *)(param_1 + 0x430) = 0;
    *(undefined8 *)(param_1 + 0x438) = 0;
    param_1 = param_1 + 0x440;
  }
  return;
}



// FUNCTION 1490e84bc FUN_1490e84bc body=146 status=ok
// SIG undefined FUN_1490e84bc(void)

void FUN_1490e84bc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x440,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x440)) {
      uVar5 = uVar4 / 0x440 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x440,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1490e8550 FUN_1490e8550 body=281 status=ok
// SIG undefined FUN_1490e8550(void)

undefined8 * FUN_1490e8550(undefined8 *param_1)

{
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 0x15) = 0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  memset(param_1 + 0x16,0,0xa0);
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  return param_1;
}



// FUNCTION 1490e86ca FUN_1490e86ca body=54 status=ok
// SIG undefined FUN_1490e86ca(void)

undefined1 FUN_1490e86ca(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1490e87e2(param_2,param_3);
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return 1;
}



// FUNCTION 1490e8728 FUN_1490e8728 body=59 status=ok
// SIG undefined FUN_1490e8728(void)

undefined8 FUN_1490e8728(longlong *param_1)

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



// FUNCTION 1490e876e FUN_1490e876e body=38 status=ok
// SIG undefined FUN_1490e876e(void)

void FUN_1490e876e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1490e87e2 FUN_1490e87e2 body=84 status=ok
// SIG undefined FUN_1490e87e2(void)

undefined4 * FUN_1490e87e2(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_144a787a6(param_1 + 4,param_2 + 4);
  lVar4 = *(longlong *)(param_2 + 8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 8);
    }
  }
  *(longlong *)(param_1 + 8) = lVar4;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  return param_1;
}



// FUNCTION 1490e8838 FUN_1490e8838 body=108 status=ok
// SIG undefined FUN_1490e8838(void)

undefined4 * FUN_1490e8838(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141157eea(&local_30,param_1,*(undefined1 *)(param_1 + 0xa8));
  *param_2 = local_28;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  param_2[1] = *(undefined4 *)(param_1 + 0xc);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e88a6 FUN_1490e88a6 body=115 status=ok
// SIG undefined FUN_1490e88a6(void)

void FUN_1490e88a6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,4);
    iVar2 = (int)(uVar1 / 0x18);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x18,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1490e891a FUN_1490e891a body=62 status=ok
// SIG undefined FUN_1490e891a(void)

void FUN_1490e891a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1490e8958(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x14,4);
  }
  return;
}



// FUNCTION 1490e8958 FUN_1490e8958 body=112 status=ok
// SIG undefined FUN_1490e8958(void)

ulonglong FUN_1490e8958(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x14) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1490e8992;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x14,4);
      param_2 = param_2 / 0x14;
    }
  }
LAB_1490e8992:
  return param_2 & 0xffffffff;
}



// FUNCTION 1490e8a8a FUN_1490e8a8a body=59 status=ok
// SIG undefined FUN_1490e8a8a(void)

undefined8 FUN_1490e8a8a(longlong *param_1)

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



// FUNCTION 1490e8b90 FUN_1490e8b90 body=65 status=ok
// SIG undefined FUN_1490e8b90(void)

undefined1 FUN_1490e8b90(longlong *param_1,undefined1 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e8cc2 FUN_1490e8cc2 body=85 status=ok
// SIG undefined FUN_1490e8cc2(void)

void FUN_1490e8cc2(longlong *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = FUN_144a78877(*(undefined2 *)(param_2 + 2),*(undefined2 *)(param_2 + 4));
  FUN_144a78877(*param_2,uVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e8dfa FUN_1490e8dfa body=100 status=ok
// SIG undefined FUN_1490e8dfa(void)

void FUN_1490e8dfa(longlong *param_1,undefined1 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_28);
  uVar1 = *(undefined2 *)(param_2 + 6);
  uVar2 = FUN_144a78877(param_2[2],*(undefined2 *)(param_2 + 4));
  uVar2 = FUN_144a78877(uVar2,uVar1);
  FUN_144a78877(*param_2,uVar2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e8f5c FUN_1490e8f5c body=70 status=ok
// SIG undefined FUN_1490e8f5c(void)

void FUN_1490e8f5c(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1490ddeb0(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e90ac FUN_1490e90ac body=70 status=ok
// SIG undefined FUN_1490e90ac(void)

void FUN_1490e90ac(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1490ddf0c(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e920a FUN_1490e920a body=70 status=ok
// SIG undefined FUN_1490e920a(void)

void FUN_1490e920a(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1490ddf8d(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e9374 FUN_1490e9374 body=70 status=ok
// SIG undefined FUN_1490e9374(void)

void FUN_1490e9374(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1490e9421(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e9421 FUN_1490e9421 body=203 status=ok
// SIG undefined FUN_1490e9421(void)

void FUN_1490e9421(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *param_1;
  uVar2 = *(undefined2 *)(param_1 + 6);
  uVar3 = FUN_144a78877(param_1[2],*(undefined2 *)(param_1 + 4));
  uVar3 = FUN_144a78877(uVar3,uVar2);
  uVar3 = FUN_144a78877(uVar1,uVar3);
  uVar2 = *(undefined2 *)(param_1 + 0xc);
  uVar4 = FUN_144a78877(param_1[8],*(undefined2 *)(param_1 + 10));
  uVar4 = FUN_144a78877(uVar4,uVar2);
  uVar3 = FUN_144a78877(uVar3,uVar4);
  uVar2 = *(undefined2 *)(param_1 + 0x12);
  uVar4 = FUN_144a78877(param_1[0xe],*(undefined2 *)(param_1 + 0x10));
  uVar4 = FUN_144a78877(uVar4,uVar2);
  uVar3 = FUN_144a78877(uVar3,uVar4);
  uVar2 = *(undefined2 *)(param_1 + 0x18);
  uVar4 = FUN_144a78877(param_1[0x14],*(undefined2 *)(param_1 + 0x16));
  uVar4 = FUN_144a78877(uVar4,uVar2);
  uVar3 = FUN_144a78877(uVar3,uVar4);
  uVar2 = *(undefined2 *)(param_1 + 0x1e);
  uVar4 = FUN_144a78877(param_1[0x1a],*(undefined2 *)(param_1 + 0x1c));
  uVar4 = FUN_144a78877(uVar4,uVar2);
  FUN_144a78877(uVar3,uVar4);
  return;
}



// FUNCTION 1490e95be FUN_1490e95be body=70 status=ok
// SIG undefined FUN_1490e95be(void)

void FUN_1490e95be(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1490de033(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e9718 FUN_1490e9718 body=70 status=ok
// SIG undefined FUN_1490e9718(void)

void FUN_1490e9718(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1490ddd8b(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e9868 FUN_1490e9868 body=70 status=ok
// SIG undefined FUN_1490e9868(void)

void FUN_1490e9868(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1490ddde7(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e998a FUN_1490e998a body=73 status=ok
// SIG undefined FUN_1490e998a(void)

void FUN_1490e998a(longlong *param_1,undefined1 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_144a78877(*param_2,*(undefined4 *)(param_2 + 4));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e9abe FUN_1490e9abe body=70 status=ok
// SIG undefined FUN_1490e9abe(void)

void FUN_1490e9abe(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1490dde68(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e9be6 FUN_1490e9be6 body=100 status=ok
// SIG undefined FUN_1490e9be6(void)

void FUN_1490e9be6(longlong *param_1,undefined1 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_28);
  uVar1 = *(undefined2 *)(param_2 + 6);
  uVar2 = FUN_144a78877(param_2[2],*(undefined2 *)(param_2 + 4));
  uVar2 = FUN_144a78877(uVar2,uVar1);
  FUN_144a78877(*param_2,uVar2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e9d2e FUN_1490e9d2e body=70 status=ok
// SIG undefined FUN_1490e9d2e(void)

void FUN_1490e9d2e(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1490de123(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e9e60 FUN_1490e9e60 body=73 status=ok
// SIG undefined FUN_1490e9e60(void)

void FUN_1490e9e60(longlong *param_1,undefined1 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_144a78877(*param_2,*(undefined4 *)(param_2 + 8));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490e9f9c FUN_1490e9f9c body=83 status=ok
// SIG undefined FUN_1490e9f9c(void)

void FUN_1490e9f9c(longlong *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = FUN_144a78877(*param_2,*(undefined4 *)(param_2 + 8));
  FUN_144a78877(uVar1,*(undefined4 *)(param_2 + 0xc));
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490ea0d2 FUN_1490ea0d2 body=100 status=ok
// SIG undefined FUN_1490ea0d2(void)

void FUN_1490ea0d2(longlong *param_1,undefined1 *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_28);
  uVar1 = *(undefined2 *)(param_2 + 6);
  uVar2 = FUN_144a78877(param_2[2],*(undefined2 *)(param_2 + 4));
  uVar2 = FUN_144a78877(uVar2,uVar1);
  FUN_144a78877(*param_2,uVar2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490ea216 FUN_1490ea216 body=59 status=ok
// SIG undefined FUN_1490ea216(void)

undefined8 FUN_1490ea216(longlong *param_1)

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



// FUNCTION 1490ea2ec FUN_1490ea2ec body=54 status=ok
// SIG undefined FUN_1490ea2ec(void)

undefined1 FUN_1490ea2ec(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1490ea404(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1490ea34a FUN_1490ea34a body=59 status=ok
// SIG undefined FUN_1490ea34a(void)

undefined8 FUN_1490ea34a(longlong *param_1)

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



// FUNCTION 1490ea390 FUN_1490ea390 body=37 status=ok
// SIG undefined FUN_1490ea390(void)

void FUN_1490ea390(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1490ea404 FUN_1490ea404 body=88 status=ok
// SIG undefined FUN_1490ea404(void)

undefined8 * FUN_1490ea404(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1490ea45c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1490ea45c FUN_1490ea45c body=98 status=ok
// SIG undefined FUN_1490ea45c(void)

void FUN_1490ea45c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}


