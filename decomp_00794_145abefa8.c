// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145abefa8 FUN_145abefa8 body=216 status=ok
// SIG undefined FUN_145abefa8(void)

undefined8 * FUN_145abefa8(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145abf082 FUN_145abf082 body=40 status=ok
// SIG undefined FUN_145abf082(void)

undefined8 FUN_145abf082(undefined8 param_1,int param_2)

{
  FUN_145abf0aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145abf0aa FUN_145abf0aa body=197 status=ok
// SIG undefined FUN_145abf0aa(void)

void FUN_145abf0aa(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b879170;
  FUN_145abf16f(param_1[0x2e],*(undefined4 *)(param_1 + 0x2f));
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  FUN_145abf16f(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_145abf16f(param_1[0x2a],*(undefined4 *)(param_1 + 0x2b));
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_145abf16f(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x13c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x13c) = 0;
  }
  FUN_140ee3dc0(param_1);
  return;
}



// FUNCTION 145abf16f FUN_145abf16f body=77 status=ok
// SIG undefined FUN_145abf16f(void)

void FUN_145abf16f(longlong param_1,int param_2)

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



// FUNCTION 145abf1bc FUN_145abf1bc body=1313 status=ok
// SIG undefined FUN_145abf1bc(void)

void FUN_145abf1bc(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = (**(code **)(param_1[0x1cd] + 0x10))(param_1 + 0x1cd);
  *(undefined1 *)(lVar7 + 0x81) = 0;
  puVar3 = (undefined8 *)param_1[0x799];
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0x799] = 0;
    (**(code **)*puVar3)(puVar3,1);
  }
  puVar3 = (undefined8 *)param_1[0x79a];
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0x79a] = 0;
    (**(code **)*puVar3)(puVar3,1);
  }
  if (param_1[0x442] != 0) {
    FUN_145ac048a();
    param_1[0x442] = 0;
    plVar10 = (longlong *)param_1[0x443];
    if (plVar10 != (longlong *)0x0) {
      param_1[0x443] = 0;
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
  if (param_1[0x440] != 0) {
    FUN_145ac0b44();
  }
  param_1[0x440] = 0;
  plVar10 = (longlong *)param_1[0x441];
  if (plVar10 != (longlong *)0x0) {
    param_1[0x441] = 0;
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
  FUN_140790e84(param_1 + 0x767);
  FUN_145abf7b2(param_1);
  FUN_145ac069c(param_1);
  FUN_145abf7f8(param_1 + 0x5b8);
  if ((char)param_1[0x2f] == '\x03') {
    uVar8 = FUN_1447210f0(param_1);
    FUN_145ac00ca(&local_30,uVar8);
    if (local_28 != (longlong *)0x0) {
      iVar6 = (int)local_28[1];
      do {
        if (iVar6 == 0) {
          plVar10 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_28[1];
        bVar11 = iVar6 == iVar4;
        if (bVar11) {
          *(int *)(local_28 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
        plVar10 = local_28;
      } while (!bVar11);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar10 != (longlong *)0x0) {
        if (local_30 != 0) {
          FUN_145ac1a14(local_30,param_1);
        }
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
  }
  lVar7 = param_1[0x141];
  if (lVar7 != 0) {
    lVar9 = FUN_144a2f878();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30)) goto LAB_145abf355;
  }
  lVar7 = 0;
LAB_145abf355:
  FUN_1459794c0(lVar7,1);
  lVar7 = FUN_1403ca102(param_1);
  if ((lVar7 != 0) && (param_1[0x4ae] != 0)) {
    FUN_14480f766(lVar7 + 0x2a8);
  }
  cVar5 = (**(code **)(*param_1 + 0x6c8))(param_1);
  if (cVar5 != '\0') {
    FUN_140457ffc(param_1 + 0x1c4,param_1);
    lVar7 = (**(code **)(param_1[0x1c3] + 0x30))(param_1 + 0x1c3);
    if (lVar7 != 0) {
      FUN_140457ffc(lVar7,param_1);
    }
    FUN_140457ffc(param_1 + 0x724,param_1);
    FUN_140457ffc(param_1 + 0x727,param_1);
  }
  FUN_1458c4350(param_1 + 0x722,0);
  FUN_145abfdbe(param_1,param_2);
  FUN_145abfa6e(param_1 + 0x1b6);
  FUN_140457ffc(&DAT_14cb89d98,param_1);
  FUN_145abf6f2(param_1);
  FUN_145abf732(param_1 + 0x69e);
  if (((param_1[0x1e0] != 0) && (param_1[0x1e1] != 0)) && (0 < *(int *)(param_1[0x1e1] + 8))) {
    FUN_1401cb356();
    local_40 = param_1[0x1e0];
    local_38 = param_1[0x1e1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 0xc) = *(int *)(local_38 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_40);
    plVar10 = (longlong *)param_1[0x1e1];
    param_1[0x1e0] = 0;
    param_1[0x1e1] = 0;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))();
      }
    }
  }
  cVar5 = FUN_144904448(param_1 + 0x45e);
  if (cVar5 != '\0') {
    FUN_14072d42a(param_1 + 0x45e,0);
  }
  cVar5 = FUN_144904448(param_1 + 0x461);
  if (cVar5 != '\0') {
    FUN_14072d42a(param_1 + 0x461,0);
  }
  if ((char)param_1[0x477] == '\x01') {
    uVar8 = FUN_140cb9f34();
    lVar7 = FUN_1414adc80(uVar8,param_1 + 0x474);
    lVar7 = FUN_1402d1dc0(lVar7 + 0x50);
    if (lVar7 != 0) {
      (**(code **)(param_1[300] + 0x98))(param_1 + 300,lVar7,0,0);
    }
  }
  if ((param_1[0x478] != 0) && ((int)param_1[0x479] - 1U < 0xfffffffe)) {
    uVar8 = FUN_1447210f0(param_1);
    FUN_1410d53f0(&local_30,uVar8);
    if (local_28 != (longlong *)0x0) {
      iVar6 = (int)local_28[1];
      do {
        if (iVar6 == 0) {
          plVar10 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_28[1];
        bVar11 = iVar6 == iVar4;
        if (bVar11) {
          *(int *)(local_28 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
        plVar10 = local_28;
      } while (!bVar11);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar10 != (longlong *)0x0) {
        if (local_30 != 0) {
          FUN_145a05fbc(local_30,param_1,param_1 + 0x478,0);
          FUN_145ac041a(param_1);
        }
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
  }
  (**(code **)(*param_1 + 0x14c8))(param_1,0);
  if ((longlong *)param_1[0x662] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x662] + 0x2a8))();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145abf6de FUN_145abf6de body=9 status=ok
// SIG undefined FUN_145abf6de(void)

void FUN_145abf6de(longlong param_1)

{
  FUN_141495c9e(param_1 + 0x10);
  return;
}



// FUNCTION 145abf6e8 FUN_145abf6e8 body=9 status=ok
// SIG undefined FUN_145abf6e8(void)

void FUN_145abf6e8(longlong param_1)

{
  FUN_145ac0550(param_1 + 0x10);
  return;
}



// FUNCTION 145abf6f2 FUN_145abf6f2 body=63 status=ok
// SIG undefined FUN_145abf6f2(void)

void FUN_145abf6f2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14497e828();
  if ((lVar1 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    lVar1 = FUN_140704886(lVar1);
    if (lVar1 != 0) {
      FUN_145ac1c02(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145abf732 FUN_145abf732 body=91 status=ok
// SIG undefined FUN_145abf732(void)

void FUN_145abf732(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      cVar3 = (**(code **)(*(longlong *)*plVar1 + 0x30))();
      if (((cVar3 != '\0') && (*(int *)(param_1 + 0x10) != 0)) &&
         (puVar2 = (undefined8 *)*plVar1, puVar2 != (undefined8 *)0x0)) {
        (**(code **)*puVar2)(puVar2,0);
        FUN_1446efa72(plVar1,0,0,0x10);
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
  }
  return;
}



// FUNCTION 145abf792 FUN_145abf792 body=31 status=ok
// SIG undefined FUN_145abf792(void)

undefined8 FUN_145abf792(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145abf7b2 FUN_145abf7b2 body=69 status=ok
// SIG undefined FUN_145abf7b2(void)

void FUN_145abf7b2(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14497e828();
  if (lVar1 != 0) {
    lVar1 = FUN_1458485da(lVar1);
    if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x48), lVar1 != 0)) {
      FUN_145abf858(lVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 145abf7f8 FUN_145abf7f8 body=96 status=ok
// SIG undefined FUN_145abf7f8(void)

void FUN_145abf7f8(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x168) != 0) {
    lVar1 = FUN_141283ace(DAT_14cb0d2b0);
    if (lVar1 != 0) {
      if (*(longlong *)(param_1 + 0x168) != 0) {
        FUN_14480f766(lVar1 + 0x1f8);
      }
      *(undefined8 *)(param_1 + 0x168) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0x180) = 0;
  FUN_145abfc80(param_1);
  return;
}



// FUNCTION 145abf858 FUN_145abf858 body=98 status=ok
// SIG undefined FUN_145abf858(void)

void FUN_145abf858(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_14122506a();
  if (plVar2 != (longlong *)0x0) {
    if (*plVar2 != 0) {
      FUN_145abfb9a(param_1,param_2);
      (**(code **)(*(longlong *)*plVar2 + 0x420))((longlong *)*plVar2,0);
    }
    uVar1 = FUN_145abfc10(param_1,param_2);
    FUN_145abf9de(param_1 + 0x18,uVar1);
    return;
  }
  return;
}



// FUNCTION 145abf8ba FUN_145abf8ba body=83 status=ok
// SIG undefined FUN_145abf8ba(void)

void FUN_145abf8ba(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = FUN_14011c349();
  local_18 = *(undefined8 *)(lVar1 + 0x48);
  FUN_140254f32(param_1 + -0xe18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145abf90e FUN_145abf90e body=108 status=ok
// SIG undefined FUN_145abf90e(void)

longlong FUN_145abf90e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x13b8);
  if (lVar2 == 0) {
    lVar2 = FUN_14001cc68(0x88,0x10);
    FUN_145abf97a(lVar2,param_1 + -0xe68);
    plVar1 = *(longlong **)(param_1 + 0x13b8);
    *(longlong *)(param_1 + 0x13b8) = lVar2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
      lVar2 = *(longlong *)(param_1 + 0x13b8);
    }
  }
  return lVar2;
}



// FUNCTION 145abf97a FUN_145abf97a body=99 status=ok
// SIG undefined FUN_145abf97a(void)

undefined8 * FUN_145abf97a(undefined8 *param_1,undefined8 param_2)

{
  FUN_1409e1656();
  *param_1 = &PTR_FUN_14b966e40;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 2;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  param_1[6] = 2;
  param_1[7] = 0;
  FUN_14485c47a(param_1 + 7,param_2);
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined2 *)(param_1 + 0x10) = 1;
  return param_1;
}



// FUNCTION 145abf9de FUN_145abf9de body=81 status=ok
// SIG undefined FUN_145abf9de(void)

void FUN_145abf9de(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0x70 + *param_1);
  FUN_145bf81dc(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0x70),(longlong)(int)(~param_2 + iVar1) * 0x70);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_145abfa30(param_1);
  return;
}



// FUNCTION 145abfa30 FUN_145abfa30 body=62 status=ok
// SIG undefined FUN_145abfa30(void)

void FUN_145abfa30(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145abfb32(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x70,8);
  }
  return;
}



// FUNCTION 145abfa6e FUN_145abfa6e body=144 status=ok
// SIG undefined FUN_145abfa6e(void)

void FUN_145abfa6e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  
  plVar3 = (longlong *)param_1[1];
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145abfab3;
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
    lVar4 = *param_1;
    if (lVar4 != 0) {
      uVar7 = FUN_145abfafe(param_1);
      FUN_145ac0328(lVar4,uVar7);
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
LAB_145abfab3:
    plVar3 = (longlong *)param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 145abfafe FUN_145abfafe body=51 status=ok
// SIG undefined FUN_145abfafe(void)

undefined8 FUN_145abfafe(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x10);
  if (lVar1 != 0) {
    uVar2 = FUN_1413dc03c();
    uVar2 = FUN_144718840(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 145abfb32 FUN_145abfb32 body=103 status=ok
// SIG undefined FUN_145abfb32(void)

ulonglong FUN_145abfb32(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((ulonglong)((longlong)(int)(param_2 - param_1) * 0x70) < 0x4000) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x70,8);
      uVar1 = uVar1 / 0x70;
    }
  }
  return uVar1;
}



// FUNCTION 145abfb9a FUN_145abfb9a body=118 status=ok
// SIG undefined FUN_145abfb9a(void)

void FUN_145abfb9a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 != (longlong *)0x0) {
    plVar2 = (longlong *)FUN_14122506a();
    if ((plVar2 != (longlong *)0x0) && (plVar1 = (longlong *)*plVar2, plVar1 != (longlong *)0x0)) {
      lVar3 = FUN_1407f4df8();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        (**(code **)(*plVar1 + 0x4a8))(plVar1,param_2);
      }
                    /* WARNING: Could not recover jumptable at 0x000145abfc04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0xce8))(param_2,*plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145abfc10 FUN_145abfc10 body=112 status=ok
// SIG undefined FUN_145abfc10(void)

int FUN_145abfc10(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (((param_2 != 0) && (lVar3 = FUN_144a7ba4c(param_2), lVar3 != 0)) &&
     (iVar1 = *(int *)(param_1 + 0x20), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    uVar5 = 0;
    do {
      lVar4 = FUN_140059518(lVar2 + 8 + uVar5);
      if (lVar4 == lVar3) {
        return (int)(uVar5 >> 4) * -0x49249249;
      }
      uVar5 = uVar5 + 0x70;
    } while ((longlong)iVar1 * 0x70 - uVar5 != 0);
  }
  return -1;
}



// FUNCTION 145abfc80 FUN_145abfc80 body=206 status=ok
// SIG undefined FUN_145abfc80(void)

void FUN_145abfc80(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_141495bf6(param_1 + 0x1d0);
  FUN_141495bf6(param_1 + 0x1e0);
  FUN_141495bf6(param_1 + 0x1f0);
  FUN_141495bf6(param_1 + 0x200);
  FUN_141495bf6(param_1 + 0x210);
  if (0 < *(int *)(param_1 + 0x138)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      plVar1 = (longlong *)FUN_14479d2ce(*(longlong *)(param_1 + 0x130) + lVar2);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x420))(plVar1,0);
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 8;
    } while (lVar3 < *(int *)(param_1 + 0x138));
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(int *)(param_1 + 0x13c) != 0) {
    FUN_145abfd8e((longlong *)(param_1 + 0x130));
  }
  FUN_140585aac(param_1);
  FUN_145abfd4e(param_1 + 800);
  return;
}



// FUNCTION 145abfd4e FUN_145abfd4e body=63 status=ok
// SIG undefined FUN_145abfd4e(void)

void FUN_145abfd4e(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145ac01b0(param_1);
    FUN_145a46cda(param_1);
    return;
  }
  FUN_145a46cda(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_145722246(param_1);
  return;
}



// FUNCTION 145abfd8e FUN_145abfd8e body=48 status=ok
// SIG undefined FUN_145abfd8e(void)

void FUN_145abfd8e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 145abfdbe FUN_145abfdbe body=178 status=ok
// SIG undefined FUN_145abfdbe(void)

void FUN_145abfdbe(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1[0x86] != 0) {
    lVar2 = FUN_1449db7f2();
    lVar3 = param_1[0x86];
    if (lVar3 != 0) {
      lVar4 = 0;
      if ((lVar2 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0)) goto LAB_145abfe18;
      if (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30) {
          lVar4 = lVar3;
        }
        goto LAB_145abfe18;
      }
    }
  }
  lVar4 = 0;
LAB_145abfe18:
  lVar3 = FUN_140e94db6(lVar4);
  if (lVar3 != 0) {
    FUN_140457ffc(lVar3 + 0x30,param_1);
  }
  FUN_145abfe70(param_1);
  if (param_1[0x186] != 0) {
    FUN_14581bc26(param_1[0x186],2);
  }
  FUN_145abffda(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000145abfe65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1020))(param_1);
  return;
}



// FUNCTION 145abfe70 FUN_145abfe70 body=127 status=ok
// SIG undefined FUN_145abfe70(void)

void FUN_145abfe70(longlong *param_1)

{
  FUN_145abfef0();
  if (*(int *)((longlong)param_1 + 0xb94) < 0) {
    *(undefined4 *)(param_1 + 0x172) = 0;
    FUN_1487ca194(param_1 + 0x169,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x172) = 0;
  }
  if (param_1[0x162] == 0) {
    return;
  }
  param_1[0x162] = 0;
  FUN_1447715ec(param_1 + 0x163,&DAT_14c9485f0);
                    /* WARNING: Could not recover jumptable at 0x000145abfeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1038))(param_1,0);
  return;
}



// FUNCTION 145abfef0 FUN_145abfef0 body=234 status=ok
// SIG undefined FUN_145abfef0(void)

void FUN_145abfef0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  bool bVar8;
  
  if ((*(char *)(param_1 + 0x178) == '\x03') &&
     (plVar2 = *(longlong **)(param_1 + 0xb08), plVar2 != (longlong *)0x0)) {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) {
        return;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar7 = *(longlong *)(param_1 + 0xb00);
    if (lVar7 != 0) {
      FUN_140457ffc(lVar7 + 0x10,param_1);
      if ((*(int *)(lVar7 + 0x78) != 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
        if ((longlong)*(int *)(param_1 + 0xb90) < 1) {
          puVar6 = (undefined8 *)(param_1 + 0xb40);
        }
        else {
          lVar7 = param_1 + 0xb48;
          if (*(longlong *)(param_1 + 0xb88) != 0) {
            lVar7 = *(longlong *)(param_1 + 0xb88);
          }
          puVar6 = (undefined8 *)((longlong)*(int *)(param_1 + 0xb90) * 0x10 + lVar7 + -0x10);
        }
        FUN_14125aa0e(param_1,*puVar6);
      }
      plVar3 = *(longlong **)(param_1 + 0xb08);
      *(undefined8 *)(param_1 + 0xb00) = 0;
      *(undefined8 *)(param_1 + 0xb08) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000145abffcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145abffda FUN_145abffda body=238 status=ok
// SIG undefined FUN_145abffda(void)

void FUN_145abffda(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0x86] != 0) {
    lVar3 = FUN_1449db7f2();
    lVar1 = param_1[0x86];
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      if (param_1[0xe1] != 0) {
        (**(code **)(*param_1 + 0xca0))(param_1,0);
      }
      if (DAT_14c98e618 != 0) {
        plVar4 = (longlong *)(**(code **)(*DAT_14c968088 + 0xe0))();
        if (plVar4 != (longlong *)0x0) {
          local_38 = 0;
          uStack_30 = 0;
          (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined4 *)(lVar1 + 0xe0));
        }
      }
    }
  }
  if (param_1[0x9f] != 0) {
    FUN_145ac02f8();
  }
  FUN_1403d8a98(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac00ca FUN_145ac00ca body=228 status=ok
// SIG undefined FUN_145ac00ca(void)

longlong * FUN_145ac00ca(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 != 0) {
    FUN_144747626(&local_28,DAT_14cbcfbb0,param_2);
    plVar1 = local_20;
    if (local_28 != 0) {
      if (local_20 == (longlong *)0x0) {
        *param_1 = local_28;
      }
      else {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
        *param_1 = local_28;
        if ((longlong *)param_1[1] != local_20) {
          LOCK();
          *(int *)((longlong)local_20 + 0xc) = *(int *)((longlong)local_20 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac01b0 FUN_145ac01b0 body=327 status=ok
// SIG undefined FUN_145ac01b0(void)

void FUN_145ac01b0(longlong *param_1)

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



// FUNCTION 145ac02f8 FUN_145ac02f8 body=47 status=ok
// SIG undefined FUN_145ac02f8(void)

void FUN_145ac02f8(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cacfb48);
                    /* WARNING: Could not recover jumptable at 0x000145ac0324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 145ac0328 FUN_145ac0328 body=241 status=ok
// SIG undefined FUN_145ac0328(void)

void FUN_145ac0328(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  FUN_145bf004c(param_1 + 0x1ac8);
  if (*(int *)(param_1 + 0x1b90) != *(int *)(param_1 + 0x1bb4)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar2 = param_1 + 0x1bb8;
    if (*(longlong *)(param_1 + 0x1bc0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x1bc0);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x1bc8) - 1U & (uVar1 >> 0x10 ^ uVar1))
                             * 4);
    if (iVar3 != -1) {
      lVar2 = param_1 + 0x1b28;
      if (*(longlong *)(param_1 + 0x1b88) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x1b88);
      }
      do {
        if (*(ulonglong *)(lVar2 + (longlong)iVar3 * 0x18) == param_2) {
          FUN_145beffcc(param_1 + 0x1af8,&local_20);
          break;
        }
        iVar3 = *(int *)(lVar2 + (longlong)iVar3 * 0x18 + 0x10);
      } while (iVar3 != -1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ac041a FUN_145ac041a body=111 status=ok
// SIG undefined FUN_145ac041a(void)

void FUN_145ac041a(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x23c0) != 0) {
    *(undefined8 *)(param_1 + 0x23d0) = 0;
  }
  *(undefined8 *)(param_1 + 0x23c0) = 0;
  local_18 = *(undefined4 *)(param_1 + 0x23c8);
  local_20 = 0;
  local_10 = 0;
  FUN_145a06040(param_1 + 0x2250);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac048a FUN_145ac048a body=197 status=ok
// SIG undefined FUN_145ac048a(void)

void FUN_145ac048a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14143b896(param_1,0);
  FUN_1459dd0f6(param_1);
  uVar3 = FUN_14479d2ce(param_1 + 0x48);
  uVar3 = FUN_1447210f0(uVar3);
  FUN_14154b34a(&local_28,uVar3);
  if ((local_28 != 0) && (*(longlong *)(param_1 + 0x128) != 0)) {
    FUN_14480f766(local_28 + 0x10);
  }
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
  *(undefined8 *)(param_1 + 0x128) = 0;
  FUN_140457ffc(&DAT_14cb7bd50,param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac0550 FUN_145ac0550 body=220 status=ok
// SIG undefined FUN_145ac0550(void)

void FUN_145ac0550(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b968c30;
  *(undefined4 *)(param_1 + 0xb7) = 0;
  if (param_1[0xb6] != 0) {
    FUN_1400020a8();
  }
  FUN_1458fc99a(param_1 + 0xae);
  param_1[0xa2] = &PTR_FUN_14b968cd0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (param_1[0xab] != 0) {
    FUN_1400020a8();
  }
  FUN_145ac0664(param_1 + 0xa3);
  param_1[0x96] = &PTR_FUN_14b968cf0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (param_1[0x9f] != 0) {
    FUN_1400020a8();
  }
  FUN_145ac062c(param_1 + 0x97);
  plVar2 = (longlong *)param_1[0x94];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_141496bb4(param_1);
  return;
}



// FUNCTION 145ac062c FUN_145ac062c body=55 status=ok
// SIG undefined FUN_145ac062c(void)

void FUN_145ac062c(longlong *param_1)

{
  FUN_145ac152c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ac0664 FUN_145ac0664 body=55 status=ok
// SIG undefined FUN_145ac0664(void)

void FUN_145ac0664(longlong *param_1)

{
  FUN_145ac16ce(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ac069c FUN_145ac069c body=715 status=ok
// SIG undefined FUN_145ac069c(void)

void FUN_145ac069c(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_39;
  undefined1 *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = (**(code **)(*param_1 + 0x6c8))();
  if (((cVar1 != '\0') && ((int)param_1[0x1b3] != 0)) && (param_1[0x1b4] != 0)) {
    local_30 = &local_39;
    local_38 = &LAB_1441f5aa4;
    FUN_145ac099e(param_1);
    uVar2 = FUN_144a7ba4c(param_1);
    lVar3 = FUN_1404960a8(uVar2);
    if (lVar3 != 0) {
      FUN_1446ddc76(&local_48,"FOakUIEvent_CinematicSkip",1);
      FUN_1401cd85c(lVar3,local_48,param_1 + 0x796);
      FUN_1446ddc76(&local_50,"PauseGame_Start",1);
      FUN_1401cd85c(lVar3,local_50,param_1 + 0x792);
      FUN_1446ddc76(&local_58,"PauseGame_End",1);
      FUN_1401cd85c(lVar3,local_58,param_1 + 0x793);
      if (param_1[0x794] != 0) {
        FUN_14480f766(&DAT_14cadbeb0);
      }
      if (param_1[0x721] != 0) {
        FUN_1446ddc76(&local_60,"FOakUIEvent_WidgetDeactivated",1);
        FUN_1401cd85c(lVar3,local_60,param_1 + 0x721);
      }
      FUN_1446ddc76(&local_68,"ExpandedTutorial_PauseGame_Start",1);
      FUN_1401cd85c(lVar3,local_68,param_1 + 0x797);
      FUN_1446ddc76(&local_70,"ExpandedTutorial_PauseGame_End",1);
      FUN_1401cd85c(lVar3,local_70,param_1 + 0x798);
      FUN_145ac0a34(param_1);
    }
    lVar3 = FUN_144a7ba4c(param_1);
    if (lVar3 != 0) {
      lVar4 = FUN_1403ca91c(lVar3);
      if (lVar4 != 0) {
        FUN_145ac0968(lVar4);
      }
      uVar2 = FUN_1447210f0(param_1);
      lVar4 = FUN_14094c996(uVar2);
      if (lVar4 != 0) {
        FUN_145ac0972(lVar4,*(undefined4 *)(lVar3 + 0xe0));
      }
    }
    lVar3 = FUN_1447210f0(param_1);
    if (lVar3 != 0) {
      if (param_1[0x4fa] != 0) {
        FUN_14480f766(lVar3 + 0x800);
        param_1[0x4fa] = 0;
      }
      lVar3 = *(longlong *)(lVar3 + 0x178);
      if (lVar3 != 0) {
        lVar4 = FUN_140cbc144();
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) && (param_1[0x4fb] != 0)) {
          FUN_14480f766(lVar3 + 0x410);
          param_1[0x4fb] = 0;
        }
      }
    }
    FUN_141495d94(param_1 + 0x1b3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac0968 FUN_145ac0968 body=9 status=ok
// SIG undefined FUN_145ac0968(void)

void FUN_145ac0968(longlong param_1)

{
  FUN_1447f69b6(param_1 + 0x48);
  return;
}



// FUNCTION 145ac0972 FUN_145ac0972 body=43 status=ok
// SIG undefined FUN_145ac0972(void)

void FUN_145ac0972(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (((*(char *)(param_1 + 0xdc) == '\x01') && (*(int *)(param_1 + 0xd8) == param_2)) &&
     (lVar2 = *(longlong *)(DAT_14cb98ab0 + 0x28), lVar2 != 0)) {
    plVar1 = *(longlong **)(lVar2 + 0x188);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x130))(plVar1,0);
      (**(code **)(**(longlong **)(lVar2 + 0x188) + 0x148))();
    }
    FUN_14571a8e6(lVar2,0);
    if (*(longlong **)(lVar2 + 0x198) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 0x198) + 0x98))();
    }
    *(undefined1 *)(lVar2 + 0x176) = 0;
    return;
  }
  return;
}



// FUNCTION 145ac099e FUN_145ac099e body=148 status=ok
// SIG undefined FUN_145ac099e(void)

void FUN_145ac099e(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = FUN_141027864();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  local_40 = *param_2;
  local_28 = &local_40;
  local_38 = param_2[1];
  local_30 = FUN_140dc5090;
  FUN_1406d0d76(param_1 + 0x3b38,&local_30,&local_20);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac0a34 FUN_145ac0a34 body=271 status=ok
// SIG undefined FUN_145ac0a34(void)

void FUN_145ac0a34(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_144a7ba4c();
  lVar2 = FUN_1404960a8(uVar1);
  if (lVar2 != 0) {
    FUN_1446ddc76(&local_30,"FGbxUIEvent_CSP_Trigger",1);
    FUN_1401cd85c(lVar2,local_30,param_1 + 0x27e0);
    FUN_1446ddc76(&local_38,"FGbxUIEvent_CSP_RegisterWidget",1);
    FUN_1401cd85c(lVar2,local_38,param_1 + 0x27e8);
    FUN_1446ddc76(&local_40,"FGbxUIEvent_CSP_UnregisterWidget",1);
    FUN_1401cd85c(lVar2,local_40,param_1 + 0x27f0);
  }
  if (*(int *)(param_1 + 0x2804) < 0) {
    *(undefined4 *)(param_1 + 0x2800) = 0;
    FUN_148dbf890(param_1 + 0x27f8);
  }
  else {
    *(undefined4 *)(param_1 + 0x2800) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac0b44 FUN_145ac0b44 body=457 status=ok
// SIG undefined FUN_145ac0b44(void)

void FUN_145ac0b44(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1447f69b6(param_1 + 0x108);
  if (*(longlong *)(param_1 + 0x3a0) != 0) {
    FUN_14480f766(&DAT_14cb7bac0);
  }
  if (*(longlong *)(param_1 + 0x3a8) != 0) {
    FUN_14480f766(&DAT_14cb7bad8);
  }
  *(undefined1 *)(param_1 + 0x38c) = 0;
  if (*(longlong *)(param_1 + 1000) != 0) {
    FUN_14480f766(&DAT_14cb7bd50);
    *(undefined8 *)(param_1 + 1000) = 0;
  }
  local_38 = 0;
  FUN_145ac0ecc(param_1);
  if ((*(longlong *)(param_1 + 0x430) != 0) || (*(longlong *)(param_1 + 0x438) != 0)) {
    local_38 = 0;
    FUN_14027af1c(param_1,&local_38,0,0);
  }
  iVar1 = *(int *)(param_1 + 0x150);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x148);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_145ac0d0e();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if ((*(longlong **)(param_1 + 0x1c0) != (longlong *)0x0) &&
     ((**(code **)(**(longlong **)(param_1 + 0x1c0) + 0x2a8))(), *(longlong *)(param_1 + 0x1c0) != 0
     )) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x3f0);
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x3f0) = 0;
    FUN_145ac0dae(lVar2);
    FUN_1400020a8(lVar2);
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  FUN_1448a8284(param_1 + 0xf0);
  FUN_1448a8284(param_1 + 0x108);
  *(undefined1 *)(param_1 + 0x16a) = 0;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ac0d0e FUN_145ac0d0e body=83 status=ok
// SIG undefined FUN_145ac0d0e(void)

void FUN_145ac0d0e(longlong *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x2a8))();
  param_1[6] = 0;
  iVar1 = *(int *)((longlong)param_1 + 0x54);
  FUN_14117d09f(param_1[9],(int)param_1[10]);
  *(undefined4 *)(param_1 + 10) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0x54) != 0)) {
    FUN_14882c5b8(param_1 + 9);
    return;
  }
  return;
}



// FUNCTION 145ac0d62 FUN_145ac0d62 body=75 status=ok
// SIG undefined FUN_145ac0d62(void)

void FUN_145ac0d62(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0xffffffff;
  puVar1 = (undefined8 *)(param_1 + 0x58);
  cVar2 = FUN_144729dda(puVar1);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(puVar1);
    FUN_140457ffc(lVar3 + 0x28,param_1);
  }
  *puVar1 = 0;
  return;
}



// FUNCTION 145ac0dae FUN_145ac0dae body=231 status=ok
// SIG undefined FUN_145ac0dae(void)

void FUN_145ac0dae(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x108) == '\x01') {
    FUN_140526ea2(param_1 + 0x98);
    *(undefined1 *)(param_1 + 0x108) = 0;
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_145ac0e96(param_1 + 8);
  return;
}



// FUNCTION 145ac0e96 FUN_145ac0e96 body=53 status=ok
// SIG undefined FUN_145ac0e96(void)

void FUN_145ac0e96(longlong *param_1)

{
  FUN_145ac13d4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ac0ecc FUN_145ac0ecc body=530 status=ok
// SIG undefined FUN_145ac0ecc(void)

void FUN_145ac0ecc(longlong param_1,longlong *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  byte bVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(longlong *)(param_1 + 0x158) = *param_2;
  uVar6 = FUN_14067bc2a();
  *(undefined8 *)(param_1 + 0x160) = uVar6;
  if (*(longlong *)(param_1 + 0x138) == 0) {
    bVar9 = false;
  }
  else {
    cVar5 = FUN_144729dda();
    bVar9 = false;
    if ((cVar5 != '\0') && (*param_2 != 0)) {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))();
      FUN_141495e41(&local_40,uVar6);
      bVar9 = local_40 == *param_2;
    }
  }
  *(byte *)(param_1 + 0x168) = bVar9;
  iVar2 = *(int *)(param_1 + 0x150);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x148);
    lVar8 = 0;
    do {
      plVar7 = *(longlong **)(lVar3 + lVar8);
      if (plVar7 != (longlong *)0x0) {
        plVar7[5] = *(longlong *)(param_1 + 0x158);
        (**(code **)(*plVar7 + 0x2b0))(plVar7,(longlong *)(param_1 + 0x158));
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
    bVar9 = *(byte *)(param_1 + 0x168);
  }
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  if (((bVar9 & 1) == 0) || (*(int *)(param_1 + 0x120) != 3)) {
    plVar7 = *(longlong **)(param_1 + 0x1c0);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x2b8))(plVar7,*(undefined8 *)(param_1 + 0x160));
    }
    goto LAB_145ac0fdd;
  }
  if (*(longlong *)(param_1 + 0x138) == 0) {
LAB_145ac10ce:
    plVar7 = (longlong *)0x0;
  }
  else {
    cVar5 = FUN_144729dda(param_1 + 0x130);
    if (cVar5 == '\0') goto LAB_145ac10ce;
    plVar7 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x28))();
    lVar3 = *plVar7;
    plVar7 = (longlong *)plVar7[1];
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0x168) == '\x01') {
        cVar5 = FUN_144729dda(lVar3 + 0x1c8);
        if (cVar5 == '\0') goto LAB_145ac106e;
        uVar6 = FUN_14479d2ce(lVar3 + 0x1c8);
      }
      else {
LAB_145ac106e:
        uVar6 = *(undefined8 *)(lVar3 + 0x1c0);
      }
      FUN_14485c47a(param_1 + 0x1c8,uVar6);
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x1c0);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x2b8))(plVar4,0);
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_145ac0fdd:
  FUN_141496108(param_1);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac10e0 FUN_145ac10e0 body=655 status=ok
// SIG undefined FUN_145ac10e0(void)

void FUN_145ac10e0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined8 uVar6;
  double dVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  double local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_141495f50();
  param_1[0xe] = param_2;
  if (param_2 != 0) {
    cVar5 = FUN_144729dda(param_1 + 0xb);
    if (cVar5 != '\0') {
      FUN_145ac1370(param_2,&local_58);
      *(undefined4 *)((longlong)param_1 + 0xcc) = uStack_50._4_4_;
      *(undefined4 *)(param_1 + 0x1a) = (undefined4)local_48;
      *(undefined4 *)((longlong)param_1 + 0xd4) = local_48._4_4_;
      *(undefined4 *)(param_1 + 0x1b) = local_40;
      *(undefined4 *)(param_1 + 0x18) = (undefined4)local_58;
      *(undefined4 *)((longlong)param_1 + 0xc4) = local_58._4_4_;
      *(undefined4 *)(param_1 + 0x19) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)param_1 + 0xcc) = uStack_50._4_4_;
      param_1[0x15] = *(longlong *)((longlong)param_1 + 0xd4);
      FUN_145ac22e8(param_2,&local_58);
      param_1[0xf] = (longlong)local_58;
      param_1[0x10] = (longlong)uStack_50;
      local_58 = (double)CONCAT44(uStack_3c,local_40) - local_58;
      param_1[0x11] = (longlong)local_58;
      param_1[0x12] = (longlong)(local_38 - uStack_50);
      dVar7 = 0.0;
      if ((int)param_1[0x15] < 1) {
        local_58 = 0.0;
      }
      else {
        local_58 = local_58 / (double)(int)param_1[0x15];
      }
      param_1[0x13] = (longlong)local_58;
      if (0 < *(int *)((longlong)param_1 + 0xac)) {
        dVar7 = (local_38 - uStack_50) / (double)*(int *)((longlong)param_1 + 0xac);
      }
      param_1[0x14] = (longlong)dVar7;
      cVar5 = FUN_145c71662(param_1);
      if (cVar5 == '\0') {
        *(undefined4 *)(param_1 + 0x17) = 0;
        if (*(int *)((longlong)param_1 + 0xbc) < 0) {
          FUN_144893a1c(param_1 + 0x16,0);
        }
        FUN_1401211f6(param_1 + 0x16,*(int *)((longlong)param_1 + 0xac) * (int)param_1[0x15],1);
      }
      goto LAB_145ac1182;
    }
  }
  param_1[0x15] = 0;
  lVar1 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  param_1[0xf] = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  param_1[0x10] = lVar1;
  lVar1 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
  param_1[0x11] = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
  param_1[0x12] = lVar1;
  uVar4 = DAT_14c8463f8._4_4_;
  uVar3 = (undefined4)DAT_14c8463f8;
  uVar2 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x13) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar4;
  if (*(int *)((longlong)param_1 + 0xbc) < 0) {
    *(undefined4 *)(param_1 + 0x17) = 0;
    FUN_144893a1c(param_1 + 0x16,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x17) = 0;
  }
  param_1[0x18] = 0x55000000469c4000;
  param_1[0x19] = 0x55000000469c4000;
  param_1[0x1a] = 0x1003f000000;
  *(undefined4 *)(param_1 + 0x1b) = 0x100;
LAB_145ac1182:
  local_48 = param_1 + 0x15;
  local_58 = 0.0;
  uStack_50 = 0.0;
  if ((0 < (int)param_1[0x15]) && (0 < *(int *)((longlong)param_1 + 0xac))) {
    uStack_50 = (double)CONCAT44(*(int *)((longlong)param_1 + 0xac) + -1,(int)param_1[0x15] + -1);
  }
  if (*(int *)((longlong)param_1 + 0x11c) != -1) {
    if (param_1[0x22] != 0) {
      FUN_1400020a8();
    }
    param_1[0x22] = 0;
    param_1[0x23] = -0x100000000;
  }
  uVar6 = (**(code **)(*param_1 + 0x2c0))(param_1);
  FUN_141495eae(uVar6,&local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac1370 FUN_145ac1370 body=100 status=ok
// SIG undefined FUN_145ac1370(void)

undefined8 * FUN_145ac1370(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (*(char *)(param_1 + 0x221) == '\x01') {
    uVar2 = *(undefined4 *)(param_1 + 0x224);
    uVar3 = *(undefined4 *)(param_1 + 0x228);
    uVar4 = *(undefined4 *)(param_1 + 0x22c);
    uVar5 = *(undefined4 *)(param_1 + 0x230);
    uVar6 = *(undefined4 *)(param_1 + 0x230);
    uVar7 = *(undefined4 *)(param_1 + 0x234);
    uVar8 = *(undefined4 *)(param_1 + 0x238);
    uVar9 = *(undefined4 *)(param_1 + 0x23c);
  }
  else {
    lVar1 = FUN_145ac1870();
    if (lVar1 == 0) {
      *param_2 = 0x55000000469c4000;
      param_2[1] = 0x55000000469c4000;
      param_2[2] = 0x1003f000000;
      *(undefined4 *)(param_2 + 3) = 0x100;
      return param_2;
    }
    uVar2 = *(undefined4 *)(lVar1 + 0x18);
    uVar3 = *(undefined4 *)(lVar1 + 0x1c);
    uVar4 = *(undefined4 *)(lVar1 + 0x20);
    uVar5 = *(undefined4 *)(lVar1 + 0x24);
    uVar6 = *(undefined4 *)(lVar1 + 0x24);
    uVar7 = *(undefined4 *)(lVar1 + 0x28);
    uVar8 = *(undefined4 *)(lVar1 + 0x2c);
    uVar9 = *(undefined4 *)(lVar1 + 0x30);
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar6;
  *(undefined4 *)(param_2 + 2) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar8;
  *(undefined4 *)(param_2 + 3) = uVar9;
  *(undefined4 *)param_2 = uVar2;
  *(undefined4 *)((longlong)param_2 + 4) = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
  return param_2;
}



// FUNCTION 145ac13d4 FUN_145ac13d4 body=342 status=ok
// SIG undefined FUN_145ac13d4(void)

void FUN_145ac13d4(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
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
      lVar2 = *local_70 + (longlong)iStack_54 * 0x90;
      FUN_1449db362(lVar2 + 0x78);
      if (*(longlong *)(lVar2 + 0x68) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140d97c6c(param_1,0);
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



// FUNCTION 145ac152c FUN_145ac152c body=416 status=ok
// SIG undefined FUN_145ac152c(void)

void FUN_145ac152c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
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
      plVar4 = *(longlong **)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
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
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar6 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar5 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ac16ce FUN_145ac16ce body=416 status=ok
// SIG undefined FUN_145ac16ce(void)

void FUN_145ac16ce(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
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
      plVar4 = *(longlong **)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
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
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar6 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar5 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ac1870 FUN_145ac1870 body=420 status=ok
// SIG undefined FUN_145ac1870(void)

void FUN_145ac1870(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x40);
  if (lVar5 == 0) {
    uVar4 = FUN_145d8269a();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x40) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x48) == 0) {
    if ((lVar5 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x48) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(param_1 + 0x48) = lVar5;
        if (lVar5 != 0) {
          lVar5 = *(longlong *)(param_1 + 0x40);
          goto LAB_145ac18df;
        }
      }
    }
    lVar6 = FUN_14073fae1();
    lVar5 = *(longlong *)(lVar6 + 0x28);
    if (lVar5 == 0) {
      uVar4 = FUN_145d8269a();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(lVar6 + 0x28) = lVar5;
    }
    if (*(longlong *)(lVar6 + 0x30) != 0) {
      return;
    }
    if (lVar5 == 0) {
      return;
    }
    if (*(longlong *)(lVar6 + 0x20) != 0) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
        uVar4 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        uVar4 = FUN_144aff482(uVar4,(longlong *)(lVar6 + 0x20));
      }
      *(undefined8 *)(lVar6 + 0x30) = uVar4;
      return;
    }
    return;
  }
LAB_145ac18df:
  if (lVar5 != 0) {
    return;
  }
  uVar4 = FUN_145d8269a();
  lVar5 = FUN_14477b664(uVar4);
  *(longlong *)(param_1 + 0x40) = lVar5;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    return;
  }
  if (lVar5 == 0) {
    return;
  }
  if (*plVar1 != 0) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      uVar4 = FUN_144aff482(uVar4,plVar1);
    }
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    return;
  }
  return;
}



// FUNCTION 145ac1a14 FUN_145ac1a14 body=333 status=ok
// SIG undefined FUN_145ac1a14(void)

void FUN_145ac1a14(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = 0;
  FUN_14485c47a(&local_50);
  iVar3 = FUN_145ac1b62(param_1 + 0x20,&local_50);
  if (iVar3 != 0) {
    FUN_140457ffc(param_2 + 0xcf8,param_1);
    local_58 = 0;
    FUN_14485c47a(&local_58,param_2);
    if (0 < (longlong)*(int *)(param_1 + 0x38)) {
      lVar6 = (longlong)*(int *)(param_1 + 0x38);
      do {
        if (lVar6 <= *(int *)(param_1 + 0x38)) {
          lVar7 = (lVar6 + -1) * 0x150;
          cVar2 = FUN_144729dda(*(longlong *)(param_1 + 0x30) + lVar7);
          if (cVar2 != '\0') {
            lVar4 = *(longlong *)(param_1 + 0x30) + lVar7;
            local_50 = local_58;
            lVar8 = *(longlong *)(lVar4 + 200);
            if (*(longlong *)(lVar4 + 200) == 0) {
              lVar8 = lVar4 + 0x68;
            }
            if ((longlong)*(int *)(lVar4 + 0xd0) != 0) {
              lVar4 = (longlong)*(int *)(lVar4 + 0xd0) * 0x18;
              do {
                cVar2 = FUN_140e27ebc(lVar8,&local_50);
                if (cVar2 != '\0') {
                  if (lVar8 != 0) {
                    uVar5 = FUN_14479d2ce(lVar7 + *(longlong *)(param_1 + 0x30));
                    FUN_145c34e64(param_1,uVar5,2,&local_58);
                  }
                  break;
                }
                lVar8 = lVar8 + 0x18;
                lVar4 = lVar4 + -0x18;
              } while (lVar4 != 0);
            }
          }
        }
        bVar1 = 1 < lVar6;
        lVar6 = lVar6 + -1;
      } while (bVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ac1b62 FUN_145ac1b62 body=159 status=ok
// SIG undefined FUN_145ac1b62(void)

undefined8 FUN_145ac1b62(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = *param_1;
    lVar5 = (longlong)(int)param_1[1] << 3;
    iVar3 = 1;
    lVar4 = 0;
    do {
      cVar1 = FUN_140e27ebc(lVar2,param_2);
      if (cVar1 != '\0') {
        if (iVar3 == 0) {
          return 0;
        }
        memmove((void *)(*param_1 + (lVar4 >> 0x20) * 8),
                (void *)(*param_1 + (lVar4 >> 0x20) * 8 + 8),
                (longlong)((int)param_1[1] - iVar3) << 3);
        *(int *)(param_1 + 1) = (int)param_1[1] + -1;
        return 1;
      }
      lVar2 = lVar2 + 8;
      lVar4 = lVar4 + 0x100000000;
      iVar3 = iVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return 0;
}



// FUNCTION 145ac1c02 FUN_145ac1c02 body=1012 status=ok
// SIG undefined FUN_145ac1c02(void)

void FUN_145ac1c02(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_128 [36];
  int local_104;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  longlong **local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x150);
    lVar8 = param_1 + 0x160;
    local_98 = (longlong **)&DAT_100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    iVar5 = 0;
    lStack_90 = lVar8;
    if (*(int *)(param_1 + 0x178) != 0) {
      FUN_1449c0562(&local_98);
      iVar5 = *(int *)(param_1 + 0x178);
    }
    local_b0 = local_88;
    uVar2 = local_b0;
    local_a8 = local_80;
    local_a4 = local_7c;
    local_c0 = local_98;
    local_b8 = lStack_90;
    local_b0._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    iVar4 = local_b0._4_4_;
    local_c8 = plVar1;
    if ((local_b0._4_4_ != iVar5) || (local_b0 = uVar2, lStack_90 != lVar8)) {
      do {
        local_b0 = uVar2;
        lVar9 = (longlong)iVar4 * 0x60 + *local_c8;
        cVar3 = FUN_144729dda(lVar9);
        if (cVar3 != '\0') {
          local_78 = 0;
          local_70 = 0;
          local_98 = (longlong **)0x0;
          lStack_90 = 0;
          local_6c = 0xffffffff00000080;
          local_64 = 0;
          local_58 = 0;
          local_50 = 0;
          local_104 = iVar5;
          local_100 = lVar8;
          lVar8 = FUN_14479d2ce(lVar9);
          FUN_145830af2(&local_98,lVar8 + 0x2808);
          local_d0 = 0;
          FUN_14485c47a(&local_d0,param_2);
          local_a0 = local_d0;
          iVar5 = FUN_1412ea6f2(&local_98,(uint)((ulonglong)local_d0 >> 0x20) ^ (uint)local_d0);
          if (iVar5 != -1) {
            local_d8 = 0;
            FUN_14485c47a(&local_d8,param_2);
            local_a0 = local_d8;
            iVar5 = FUN_1412ea6f2(&local_98,(uint)((ulonglong)local_d8 >> 0x20) ^ (uint)local_d8);
            pplVar7 = local_98 + (longlong)iVar5 * 3;
            if (iVar5 == -1) {
              pplVar7 = (longlong **)0x0;
            }
            cVar3 = FUN_144729dda(pplVar7 + 1);
            if (cVar3 != '\0') {
              local_e0 = 0;
              FUN_14485c47a(&local_e0,param_2);
              local_a0 = local_e0;
              iVar5 = FUN_1412ea6f2(&local_98,(uint)((ulonglong)local_e0 >> 0x20) ^ (uint)local_e0);
              pplVar7 = local_98 + (longlong)iVar5 * 3;
              if (iVar5 == -1) {
                pplVar7 = (longlong **)0x0;
              }
              plVar6 = (longlong *)FUN_14479d2ce(pplVar7 + 1);
              (**(code **)(*plVar6 + 0x5c8))(plVar6,0);
            }
            local_e8 = 0;
            FUN_14485c47a(&local_e8,param_2);
            FUN_148f11de2(&local_98,local_e8);
          }
          local_f0 = 0;
          FUN_14485c47a(&local_f0,param_2);
          local_a0 = local_f0;
          iVar5 = FUN_1411b8176(lVar9 + 8,(uint)((ulonglong)local_f0 >> 0x20) ^ (uint)local_f0);
          if (iVar5 != -1) {
            local_f8 = 0;
            FUN_14485c47a(&local_f8,param_2);
            FUN_145ac2122(lVar9 + 8,local_f8);
          }
          iVar5 = local_104;
          local_50 = 0;
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          FUN_1411b79ea(&local_98);
          lVar8 = local_100;
        }
        local_b0 = CONCAT44(local_b0._4_4_,(uint)local_b0 & ~local_c0._4_4_);
        FUN_1449c0562(&local_c0);
        iVar4 = local_b0._4_4_;
        uVar2 = local_b0;
      } while (((local_b0._4_4_ != iVar5) || (local_b8 != lVar8)) || (local_c8 != plVar1));
    }
    if ((longlong)*(int *)(param_1 + 0x1f8) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x1f0);
      lVar9 = (longlong)*(int *)(param_1 + 0x1f8) << 3;
      do {
        cVar3 = FUN_14088ccfe(lVar8,param_2);
        if (cVar3 != '\0') {
          local_c8 = (longlong *)0x0;
          FUN_14485c47a(&local_c8,param_2);
          local_98 = &local_c8;
          FUN_145ac1ff8(param_1 + 0x1f0);
          break;
        }
        lVar8 = lVar8 + 8;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ac1ff8 FUN_145ac1ff8 body=298 status=ok
// SIG undefined FUN_145ac1ff8(void)

int FUN_145ac1ff8(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  
  iVar7 = (int)param_1[1];
  lVar8 = (longlong)iVar7;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    lVar1 = *param_1;
    bVar4 = FUN_140e27ebc(lVar1,*param_2);
    iVar10 = 0;
    iVar11 = 0;
    do {
      lVar9 = (longlong)iVar11;
      iVar2 = iVar11 + 1;
      if (iVar11 + 1 < iVar7) {
        iVar2 = iVar7;
      }
      lVar13 = lVar1 + 8 + lVar9 * 8;
      lVar6 = lVar9;
      iVar12 = iVar11;
      do {
        lVar6 = lVar6 + 1;
        iVar3 = iVar2;
        if (lVar8 <= lVar6) break;
        bVar5 = FUN_140e27ebc(lVar13,*param_2);
        iVar12 = iVar12 + 1;
        lVar13 = lVar13 + 8;
        iVar3 = iVar12;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (iVar10 != iVar11) {
          memmove((void *)(lVar1 + (longlong)iVar10 * 8),(void *)(lVar1 + lVar9 * 8),
                  (longlong)(iVar3 - iVar11) << 3);
        }
        iVar10 = iVar10 + (iVar3 - iVar11);
      }
      iVar11 = iVar3;
      bVar4 = bVar4 ^ 1;
    } while (lVar6 < lVar8);
    *(int *)(param_1 + 1) = iVar10;
    iVar7 = iVar7 - iVar10;
  }
  return iVar7;
}



// FUNCTION 145ac2122 FUN_145ac2122 body=254 status=ok
// SIG undefined FUN_145ac2122(void)

void FUN_145ac2122(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar5 + uVar6 * 4);
    if (lVar4 != -1) {
      lVar2 = *param_1;
      local_40 = *(undefined8 *)(lVar2 + lVar4 * 0x18);
      local_48 = param_2;
      cVar3 = FUN_1407052fc();
      if (cVar3 == '\0') {
        puVar1 = (undefined8 *)(lVar2 + lVar4 * 0x18);
        do {
          puVar7 = puVar1;
          lVar4 = (longlong)*(int *)(puVar7 + 2);
          if (lVar4 == -1) goto LAB_145ac21f6;
          puVar1 = (undefined8 *)(*param_1 + lVar4 * 0x18);
          local_40 = *puVar1;
          local_48 = param_2;
          cVar3 = FUN_1407052fc(&local_40,&local_48);
        } while (cVar3 == '\0');
        puVar7 = puVar7 + 2;
      }
      else {
        puVar7 = (undefined8 *)((longlong)plVar5 + uVar6 * 4);
      }
      FUN_145ac2222(param_1,*(undefined4 *)puVar7);
    }
  }
LAB_145ac21f6:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac2222 FUN_145ac2222 body=85 status=ok
// SIG undefined FUN_145ac2222(void)

void FUN_145ac2222(longlong *param_1,int param_2)

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
  FUN_145ac2278();
  return;
}



// FUNCTION 145ac2278 FUN_145ac2278 body=112 status=ok
// SIG undefined FUN_145ac2278(void)

void FUN_145ac2278(longlong *param_1,int param_2)

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



// FUNCTION 145ac22e8 FUN_145ac22e8 body=631 status=ok
// SIG undefined FUN_145ac22e8(void)

double * FUN_145ac22e8(longlong param_1,double *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double *pdVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  double dVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  
  uVar24 = (undefined4)*(undefined8 *)(param_1 + 0x58);
  uVar25 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x58) >> 0x20);
  uVar22 = (undefined4)*(undefined8 *)(param_1 + 0x60);
  uVar23 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
  uVar20 = (undefined4)*(undefined8 *)(param_1 + 0x68);
  uVar21 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
  uVar28 = (undefined4)*(undefined8 *)(param_1 + 0x70);
  uVar29 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
  uVar26 = (undefined4)*(undefined8 *)(param_1 + 0x78);
  uVar27 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
  uVar18 = (undefined4)*(undefined8 *)(param_1 + 0x80);
  uVar19 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
  dVar10 = *(double *)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x50) == 2) {
    lVar6 = FUN_141496644(param_1 + 0x18);
    if (lVar6 == 0) goto LAB_145ac23cc;
    puVar8 = (undefined8 *)(lVar6 + 0x98);
    puVar9 = (undefined8 *)(lVar6 + 0xa0);
    puVar11 = (undefined8 *)(lVar6 + 0xa8);
    puVar12 = (undefined8 *)(lVar6 + 0xb0);
    puVar13 = (undefined8 *)(lVar6 + 0xb8);
    puVar14 = (undefined8 *)(lVar6 + 0xc0);
    pdVar7 = (double *)(lVar6 + 200);
  }
  else {
    if (*(int *)(param_1 + 0x50) != 1) goto LAB_145ac23cc;
    lVar6 = FUN_141496644(param_1 + 0x18);
    if (lVar6 == 0) goto LAB_145ac23cc;
    puVar8 = (undefined8 *)(lVar6 + 0x28);
    puVar9 = (undefined8 *)(lVar6 + 0x30);
    puVar11 = (undefined8 *)(lVar6 + 0x38);
    puVar12 = (undefined8 *)(lVar6 + 0x40);
    puVar13 = (undefined8 *)(lVar6 + 0x48);
    puVar14 = (undefined8 *)(lVar6 + 0x50);
    pdVar7 = (double *)(lVar6 + 0x58);
  }
  uVar18 = (undefined4)*puVar14;
  uVar19 = (undefined4)((ulonglong)*puVar14 >> 0x20);
  uVar26 = (undefined4)*puVar13;
  uVar27 = (undefined4)((ulonglong)*puVar13 >> 0x20);
  uVar28 = (undefined4)*puVar12;
  uVar29 = (undefined4)((ulonglong)*puVar12 >> 0x20);
  uVar20 = (undefined4)*puVar11;
  uVar21 = (undefined4)((ulonglong)*puVar11 >> 0x20);
  uVar22 = (undefined4)*puVar9;
  uVar23 = (undefined4)((ulonglong)*puVar9 >> 0x20);
  uVar24 = (undefined4)*puVar8;
  uVar25 = (undefined4)((ulonglong)*puVar8 >> 0x20);
  dVar10 = *pdVar7;
LAB_145ac23cc:
  dVar16 = ((double)CONCAT44(uVar27,uVar26) - (double)CONCAT44(uVar23,uVar22)) *
           (double)*(float *)(param_1 + 0x90) * 0.5;
  dVar5 = ((double)CONCAT44(uVar29,uVar28) - (double)CONCAT44(uVar25,uVar24)) *
          (double)*(float *)(param_1 + 0x90) * 0.5;
  dVar4 = (double)CONCAT44(uVar25,uVar24) - dVar5;
  dVar3 = (double)CONCAT44(uVar23,uVar22) - dVar16;
  dVar5 = dVar5 + (double)CONCAT44(uVar29,uVar28);
  dVar16 = dVar16 + (double)CONCAT44(uVar27,uVar26);
  lVar6 = FUN_14073fae1();
  fVar1 = *(float *)(lVar6 + 0x174);
  lVar6 = FUN_14073fae1();
  fVar2 = *(float *)(lVar6 + 0x17c);
  if (*(char *)(param_1 + 0x94) == '\x01') {
    dVar15 = (dVar3 + dVar16) * 0.5;
    dVar17 = (dVar4 + dVar5) * 0.5;
    dVar10 = dVar5 - dVar4;
    if (dVar5 - dVar4 <= dVar16 - dVar3) {
      dVar10 = dVar16 - dVar3;
    }
    dVar10 = dVar10 * 0.5;
    dVar3 = dVar15 - dVar10;
    dVar4 = dVar17 - dVar10;
    dVar16 = dVar15 + dVar10;
    dVar5 = dVar10 + dVar17;
    *(undefined1 *)(param_2 + 6) = 1;
  }
  else {
    param_2[6] = dVar10;
  }
  dVar10 = (double)CONCAT44(uVar19,uVar18);
  if ((double)CONCAT44(uVar19,uVar18) <= (double)fVar2) {
    dVar10 = (double)fVar2;
  }
  dVar15 = (double)CONCAT44(uVar21,uVar20);
  if ((double)fVar1 <= (double)CONCAT44(uVar21,uVar20)) {
    dVar15 = (double)fVar1;
  }
  *param_2 = dVar4;
  param_2[1] = dVar3;
  param_2[2] = dVar15;
  param_2[3] = dVar5;
  param_2[4] = dVar16;
  param_2[5] = dVar10;
  return param_2;
}



// FUNCTION 145ac256a FUN_145ac256a body=153 status=ok
// SIG undefined FUN_145ac256a(void)

undefined8 * FUN_145ac256a(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140edf546();
  *param_1 = &PTR_FUN_14b1e7aa0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  FUN_145ac2604(&local_20);
  param_1[8] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac2604 FUN_145ac2604 body=118 status=ok
// SIG undefined FUN_145ac2604(void)

undefined8 * FUN_145ac2604(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8dbb0) {
    FUN_144b3d300(&DAT_14cb8dbb0);
    if (DAT_14cb8dbb0 == -1) {
      FUN_1446f470e(&DAT_14cb8dba8,L"PlayerProfileChannel",1);
      _Init_thread_footer(&DAT_14cb8dbb0);
    }
  }
  *param_1 = DAT_14cb8dba8;
  return param_1;
}



// FUNCTION 145ac267a FUN_145ac267a body=24 status=ok
// SIG undefined FUN_145ac267a(void)

void FUN_145ac267a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ac268e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 145ac2692 FUN_145ac2692 body=39 status=ok
// SIG undefined FUN_145ac2692(void)

undefined8 * FUN_145ac2692(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149ec7c10;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac26c2 FUN_145ac26c2 body=55 status=ok
// SIG undefined FUN_145ac26c2(void)

undefined8 * FUN_145ac26c2(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_149f907d0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0xffffffffffffffff;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf8;
  return param_1;
}



// FUNCTION 145ac2706 FUN_145ac2706 body=52 status=ok
// SIG undefined FUN_145ac2706(void)

void FUN_145ac2706(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = &PTR_FUN_149fcb870;
  puVar1[1] = &PTR_LAB_149fcb8c0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



// FUNCTION 145ac273a FUN_145ac273a body=40 status=ok
// SIG undefined FUN_145ac273a(void)

undefined8 FUN_145ac273a(undefined8 param_1,int param_2)

{
  FUN_145ac2762();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac2762 FUN_145ac2762 body=197 status=ok
// SIG undefined FUN_145ac2762(void)

void FUN_145ac2762(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a1c3c30;
  FUN_145ac288d(param_1[0x55],*(undefined4 *)(param_1 + 0x56));
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x228;
  do {
    FUN_145ac2828((longlong)param_1 + lVar1);
    lVar1 = lVar1 + -0x80;
  } while (lVar1 != 0xa8);
  FUN_145ac2828(param_1 + 0x15);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1408bd9f2(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1449e6b18((longlong)param_1 + 0x2c);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ac2828 FUN_145ac2828 body=101 status=ok
// SIG undefined FUN_145ac2828(void)

void FUN_145ac2828(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408bd9f2(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1449e6b18(param_1 + 4);
  return;
}



// FUNCTION 145ac288d FUN_145ac288d body=40 status=ok
// SIG undefined FUN_145ac288d(void)

void FUN_145ac288d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145ac2828(param_1);
    param_1 = param_1 + 0x80;
  }
  return;
}



// FUNCTION 145ac28b6 FUN_145ac28b6 body=81 status=ok
// SIG undefined FUN_145ac28b6(void)

void FUN_145ac28b6(longlong param_1)

{
  FUN_144a88358(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    FUN_145ac2908(param_1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_14480809c(param_1 + 0x28,0);
    return;
  }
  return;
}



// FUNCTION 145ac2908 FUN_145ac2908 body=48 status=ok
// SIG undefined FUN_145ac2908(void)

void FUN_145ac2908(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 145ac2944 FUN_145ac2944 body=52 status=ok
// SIG undefined FUN_145ac2944(void)

undefined8 * FUN_145ac2944(undefined8 *param_1)

{
  FUN_14077009c();
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xff000000;
  *param_1 = &PTR_FUN_14a6166f0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 145ac2984 FUN_145ac2984 body=52 status=ok
// SIG undefined FUN_145ac2984(void)

undefined8 * FUN_145ac2984(undefined8 *param_1)

{
  FUN_145c9acdc();
  *param_1 = &PTR_FUN_14a64f360;
  memset(param_1 + 0x28,0,0xa0);
  return param_1;
}



// FUNCTION 145ac29c4 FUN_145ac29c4 body=52 status=ok
// SIG undefined FUN_145ac29c4(void)

undefined8 * FUN_145ac29c4(undefined8 *param_1)

{
  FUN_14587747c();
  *param_1 = &PTR_FUN_14a6ec850;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffff8 | 3;
  param_1[7] = &DAT_41200000;
  return param_1;
}



// FUNCTION 145ac2a04 FUN_145ac2a04 body=52 status=ok
// SIG undefined FUN_145ac2a04(void)

undefined8 * FUN_145ac2a04(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14a75a8a0;
  param_1[5] = 0;
  param_1[7] = 0x41c00000;
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 145ac2a40 FUN_145ac2a40 body=127 status=ok
// SIG undefined FUN_145ac2a40(void)

void FUN_145ac2a40(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_144837e54(param_2,0);
  lVar2 = *(longlong *)(param_2 + 0x30);
  if (lVar2 == 0) {
    uVar1 = (**(code **)(*param_1 + 0x470))(param_1);
    *(undefined8 *)(param_2 + 0x30) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x480))(param_1);
    *(undefined8 *)(param_2 + 0x38) = uVar1;
    FUN_1400f0d6e(param_1,param_2,0);
    lVar2 = *(longlong *)(param_2 + 0x30);
  }
  if (*(int *)(param_2 + 0x40) != *(int *)(param_2 + 0x44)) {
    uVar1 = FUN_145ac2ac0();
    FUN_1446e7478(param_2 + 0x48,lVar2,uVar1,1);
    *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_2 + 0x44);
  }
  return;
}



// FUNCTION 145ac2ac0 FUN_145ac2ac0 body=55 status=ok
// SIG undefined FUN_145ac2ac0(void)

void FUN_145ac2ac0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb257b8 == 0) {
    uVar1 = FUN_140cd185c();
    DAT_14cb257b8 = FUN_140002ddd(FUN_146447ca7,uVar1,L"WwiseTriggerDef");
  }
  return;
}



// FUNCTION 145ac2af8 FUN_145ac2af8 body=40 status=ok
// SIG undefined FUN_145ac2af8(void)

undefined8 FUN_145ac2af8(undefined8 param_1,int param_2)

{
  FUN_145ac2b20();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac2b20 FUN_145ac2b20 body=86 status=ok
// SIG undefined FUN_145ac2b20(void)

void FUN_145ac2b20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acfe9b0;
  if (param_1[299] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ac2b84 FUN_145ac2b84 body=40 status=ok
// SIG undefined FUN_145ac2b84(void)

undefined8 FUN_145ac2b84(undefined8 param_1,int param_2)

{
  FUN_145ac2bac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac2bac FUN_145ac2bac body=135 status=ok
// SIG undefined FUN_145ac2bac(void)

void FUN_145ac2bac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b92da80;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 0x11);
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 5);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 145ac2c34 FUN_145ac2c34 body=25 status=ok
// SIG undefined FUN_145ac2c34(void)

void FUN_145ac2c34(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ac2c49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 145ac2c4e FUN_145ac2c4e body=38 status=ok
// SIG undefined FUN_145ac2c4e(void)

undefined8 FUN_145ac2c4e(undefined8 param_1,int param_2)

{
  FUN_145a3b896();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac2c74 FUN_145ac2c74 body=54 status=ok
// SIG undefined FUN_145ac2c74(void)

undefined8 * FUN_145ac2c74(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ba40600;
  FUN_145ac2caa(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac2caa FUN_145ac2caa body=72 status=ok
// SIG undefined FUN_145ac2caa(void)

void FUN_145ac2caa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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
                    /* WARNING: Could not recover jumptable at 0x000145ac2cee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145ac2cfe FUN_145ac2cfe body=52 status=ok
// SIG undefined FUN_145ac2cfe(void)

void FUN_145ac2cfe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = &PTR_FUN_14bcdd930;
  puVar1[1] = &PTR_FUN_14bcdd970;
  puVar1[2] = 0;
  puVar1[3] = 0;
  return;
}



// FUNCTION 145ac2d3c FUN_145ac2d3c body=72 status=ok
// SIG undefined FUN_145ac2d3c(void)

void FUN_145ac2d3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1dcf60;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  FUN_145ac2d84(param_1 + 0x61);
  FUN_14060fc84(param_1);
  return;
}



// FUNCTION 145ac2d84 FUN_145ac2d84 body=55 status=ok
// SIG undefined FUN_145ac2d84(void)

void FUN_145ac2d84(longlong *param_1)

{
  FUN_145ac2dbc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ac2dbc FUN_145ac2dbc body=367 status=ok
// SIG undefined FUN_145ac2dbc(void)

void FUN_145ac2dbc(longlong *param_1,int param_2)

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
      FUN_144a61ac8(*local_70 + (longlong)iStack_54 * 0x50 + 8);
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
    FUN_140e9549c(param_1,param_2);
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



// FUNCTION 145ac2f2e FUN_145ac2f2e body=162 status=ok
// SIG undefined FUN_145ac2f2e(void)

undefined8 * FUN_145ac2f2e(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_145ac2fd2(&local_38,param_3);
  FUN_145ac3050(param_1 + 0x338,local_40,&local_38);
  FUN_1449db362(&local_38);
  if (((int)param_3[1] == 0) || (param_3 = (longlong *)*param_3, param_3 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*param_3 + 0x38))(param_3,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac2fd2 FUN_145ac2fd2 body=124 status=ok
// SIG undefined FUN_145ac2fd2(void)

void FUN_145ac2fd2(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac3050 FUN_145ac3050 body=216 status=ok
// SIG undefined FUN_145ac3050(void)

undefined8 * FUN_145ac3050(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145ac3134 FUN_145ac3134 body=210 status=ok
// SIG undefined FUN_145ac3134(void)

undefined8 * FUN_145ac3134(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a8e0eb0;
  param_1[5] = &PTR_FUN_14a8e14a0;
  param_1[6] = &PTR_LAB_14a8e14e0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  *(undefined1 *)(param_1 + 9) = 4;
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 8;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 0x80;
  *(undefined4 *)(param_1 + 0x55) = 0x43960000;
  *(undefined4 *)(param_1 + 0x5c) = 0x41400000;
  *(undefined1 *)((longlong)param_1 + 0x2e4) = 4;
  uVar1 = DAT_14c8463d8;
  param_1[0x70] = DAT_14c8463d0;
  param_1[0x71] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_1[0x72] = DAT_14c8463e0;
  param_1[0x73] = uVar1;
  *(uint *)(param_1 + 0x5d) = *(uint *)(param_1 + 0x5d) & 0xffffff60 | 0x9d;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0x4120000041200000;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0x3c888889;
  *(byte *)((longlong)param_1 + 0x2fc) = *(byte *)((longlong)param_1 + 0x2fc) & 0xfe;
  uVar1 = DAT_14c8464e8;
  param_1[0x61] = DAT_14c8464e0;
  param_1[0x62] = uVar1;
  param_1[99] = DAT_14c8464f0;
  return param_1;
}



// FUNCTION 145ac320e FUN_145ac320e body=520 status=ok
// SIG undefined FUN_145ac320e(void)

undefined8 * FUN_145ac320e(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14b431ac0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 2;
  param_1[0x86] = 0;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xf7;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xf8 | 3;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_1446f470e(&local_30,L"Scene",1);
  uVar1 = FUN_144a799b0();
  local_40 = 0;
  local_48 = 1;
  plVar2 = (longlong *)FUN_14048696c(param_1,local_30,uVar1,uVar1);
  if ((plVar2 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[0x77] = plVar2;
    if (plVar2 != (longlong *)0x0) goto LAB_145ac330e;
  }
  else {
    FUN_1456cec3c(plVar2);
    param_1[0x77] = plVar2;
LAB_145ac330e:
    (**(code **)(*plVar2 + 0x588))(plVar2,0);
    FUN_14092e51e(param_1,param_1[0x77]);
  }
  FUN_1446f470e(&local_38,L"ViewSceneCapture",1);
  uVar1 = FUN_145ac3418();
  local_40 = 0;
  local_48 = 1;
  lVar3 = FUN_14048696c(param_1,local_38,uVar1,uVar1);
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x78] = lVar3;
    if (lVar3 == 0) goto LAB_145ac33d0;
  }
  else {
    FUN_1456cec3c(lVar3);
    param_1[0x78] = lVar3;
  }
  *(undefined1 *)(lVar3 + 0x2a9) = 2;
  *(undefined1 *)(param_1[0x78] + 0x2a8) = 1;
  *(byte *)(param_1[0x78] + 0x9e) = *(byte *)(param_1[0x78] + 0x9e) & 0xf7;
  FUN_140486fc4(param_1[0x78],param_1[0x77],0);
  *(undefined1 *)(param_1[0x78] + 0xd7a) = 1;
LAB_145ac33d0:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac3418 FUN_145ac3418 body=228 status=ok
// SIG undefined FUN_145ac3418(void)

longlong FUN_145ac3418(void)

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
  if (DAT_14cb63060 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1417bf14c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146392960;
    local_38 = &LAB_1486ed423;
    local_40 = FUN_145902c19;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xdb0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSceneViewerSceneCaptureComponent",&DAT_14cb63060,
                  &DAT_1486ed422);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb63060;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac34fe FUN_145ac34fe body=230 status=ok
// SIG undefined FUN_145ac34fe(void)

undefined8 * FUN_145ac34fe(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446ddc76(&local_30,"root_only",1);
  FUN_145ac35e6(param_1,param_2,local_30);
  *param_1 = &PTR_FUN_14b3e7b10;
  *(undefined2 *)(param_1 + 10) = param_3;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac35e6 FUN_145ac35e6 body=147 status=ok
// SIG undefined FUN_145ac35e6(void)

undefined8 * FUN_145ac35e6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_LAB_14b424db0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = param_3;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  param_1[5] = DAT_14cb8a6f8;
  DAT_14cb8a6f8 = param_1;
  FUN_1446ddc76(&local_20,param_2,1);
  param_1[2] = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac367a FUN_145ac367a body=349 status=ok
// SIG undefined FUN_145ac367a(void)

void FUN_145ac367a(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((DAT_14cb96cf0 != 0) && (DAT_14cb96cf8 != (longlong *)0x0)) && (0 < (int)DAT_14cb96cf8[1])) {
    FUN_1401cb356();
    local_18 = DAT_14cb96cf0;
    local_10 = DAT_14cb96cf8;
    if (DAT_14cb96cf8 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)DAT_14cb96cf8 + 0xc) = *(int *)((longlong)DAT_14cb96cf8 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_18);
    plVar2 = DAT_14cb96cf8;
    DAT_14cb96cf0 = 0;
    DAT_14cb96cf8 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  FUN_145ac37d8(&DAT_14cb96d18);
  if (DAT_14cb96d08 != 0) {
    FUN_1400020a8();
  }
  plVar2 = DAT_14cb96cf8;
  if (DAT_14cb96cf8 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_14cb96cf8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_1449db362(&DAT_14cb96ce0);
  FUN_1449db362(&DAT_14cb96cd0);
  FUN_1449db362(&DAT_14cb96cc0);
  FUN_1449db362(&DAT_14cb96cb0);
  FUN_1449db362(&DAT_14cb96ca0);
  FUN_1449db362(&DAT_14cb96c90);
  FUN_144760e21(DAT_14cb96c78,DAT_14cb96c80);
  if (DAT_14cb96c78 != 0) {
    FUN_1400020a8();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac37d8 FUN_145ac37d8 body=142 status=ok
// SIG undefined FUN_145ac37d8(void)

void FUN_145ac37d8(longlong *param_1)

{
  FUN_145ac3866(param_1[0x13],(int)param_1[0x14]);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 4);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ac3866 FUN_145ac3866 body=45 status=ok
// SIG undefined FUN_145ac3866(void)

void FUN_145ac3866(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 145ac3894 FUN_145ac3894 body=28 status=ok
// SIG undefined FUN_145ac3894(void)

void FUN_145ac3894(undefined8 param_1)

{
  FUN_145ac38b0(param_1,0);
  FUN_141497d7e(param_1);
  return;
}



// FUNCTION 145ac38b0 FUN_145ac38b0 body=189 status=ok
// SIG undefined FUN_145ac38b0(void)

void FUN_145ac38b0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  ushort *puVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  char cVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  cVar5 = (char)param_2;
  if (lVar1 != 0) {
    *(char *)(lVar1 + 0x101) = cVar5;
    FUN_145ac396e(param_1,param_2);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  if ((cVar5 == '\0') || ((*(byte *)(param_1 + 0x8c) & 0x80) != 0)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar3 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"ShowFlag.HDRCalibration",1);
    if (plVar3 != (longlong *)0x0) {
      puVar4 = &DAT_149e25dfc;
      if (cVar5 != '\0') {
        puVar4 = &DAT_149e0209e;
      }
                    /* WARNING: Could not recover jumptable at 0x000145ac394b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x98))(plVar3,puVar4,0xe000000,0);
      return;
    }
  }
  return;
}



// FUNCTION 145ac396e FUN_145ac396e body=84 status=ok
// SIG undefined FUN_145ac396e(void)

void FUN_145ac396e(longlong param_1,char param_2)

{
  longlong lVar1;
  ushort *puVar2;
  wchar_t *pwVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x288);
  if (lVar1 != 0) {
    pwVar3 = L"FTCAdjustBrightness";
    if (param_2 != '\0') {
      pwVar3 = L"FTCAdjustBrightnessAltText";
    }
    FUN_14020fad6(lVar1 + 0xf0,pwVar3);
    puVar2 = *(ushort **)(lVar1 + 0x80);
    if (puVar2 != (ushort *)0x0) {
      *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
    }
  }
  return;
}



// FUNCTION 145ac39cc FUN_145ac39cc body=70 status=ok
// SIG undefined FUN_145ac39cc(void)

void FUN_145ac39cc(longlong *param_1)

{
  FUN_145b054d5(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_140dd8e91(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145ac3a1c FUN_145ac3a1c body=70 status=ok
// SIG undefined FUN_145ac3a1c(void)

void FUN_145ac3a1c(longlong *param_1)

{
  FUN_1458b964b(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_1458b964b(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145ac3a62 FUN_145ac3a62 body=239 status=ok
// SIG undefined FUN_145ac3a62(void)

undefined8 FUN_145ac3a62(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14b972d50;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14b971f00;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_1461abe20;
  FUN_145ac3b52(&DAT_14cbd0b00,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac3b52 FUN_145ac3b52 body=214 status=ok
// SIG undefined FUN_145ac3b52(void)

undefined8 * FUN_145ac3b52(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145ac3c36 FUN_145ac3c36 body=24 status=ok
// SIG undefined FUN_145ac3c36(void)

bool FUN_145ac3c36(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145ac3c4e FUN_145ac3c4e body=37 status=ok
// SIG undefined FUN_145ac3c4e(void)

void FUN_145ac3c4e(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0xe0);
  FUN_145ac3c74(param_2);
  return;
}



// FUNCTION 145ac3c74 FUN_145ac3c74 body=215 status=ok
// SIG undefined FUN_145ac3c74(void)

undefined8 * FUN_145ac3c74(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14b624470;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1447325ac(&DAT_14cb790d0,&local_38,1);
  param_1[4] = local_38;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x3f800000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xf00000d0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xf00000d0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac3d4c FUN_145ac3d4c body=38 status=ok
// SIG undefined FUN_145ac3d4c(void)

undefined8 FUN_145ac3d4c(undefined8 param_1,int param_2)

{
  FUN_145ac3d72();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac3d72 FUN_145ac3d72 body=114 status=ok
// SIG undefined FUN_145ac3d72(void)

void FUN_145ac3d72(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8b6ee0;
  FUN_140fe7f98(param_1 + 0x43);
  FUN_145ac3de4(param_1 + 0x38);
  FUN_140d4710a(param_1 + 0x28);
  FUN_140d4710a(param_1 + 0x18);
  FUN_141282492(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145ac3de4 FUN_145ac3de4 body=101 status=ok
// SIG undefined FUN_145ac3de4(void)

void FUN_145ac3de4(longlong *param_1)

{
  FUN_141282505(param_1[8],(int)param_1[9]);
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



// FUNCTION 145ac3e4a FUN_145ac3e4a body=440 status=ok
// SIG undefined FUN_145ac3e4a(void)

void FUN_145ac3e4a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ac4032();
  FUN_145ac4bca(param_1 + 0x2dc0,param_1);
  FUN_145ac4004(param_1 + 0x21e8,param_1);
  FUN_141498044(param_1 + 0x3910,param_1);
  lVar2 = FUN_1403ca102(param_1);
  if (lVar2 == 0) {
LAB_145ac3fe6:
    *(undefined8 *)(param_1 + 0x3208) = 0;
  }
  else {
    local_38 = FUN_1459ae076;
    local_30 = 0;
    FUN_145ac4550(lVar2 + 0x2a8,&local_28,param_1);
    *(undefined8 *)(param_1 + 0x2570) = local_28;
    lVar2 = *(longlong *)(lVar2 + 0x48);
    if (lVar2 == 0) goto LAB_145ac3fe6;
    lVar3 = FUN_140b6d0be();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_145ac3fe6;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0x3208) = lVar2;
    local_38 = FUN_146630bc2;
    local_30 = 0;
    FUN_141202804(lVar2 + 0x1e0,&local_28,param_1);
    *(undefined8 *)(param_1 + 0x27c0) = local_28;
  }
  FUN_145ac4942(param_1,0,0);
  lVar2 = FUN_1447210f0(param_1);
  if (lVar2 != 0) {
    local_28 = *(undefined8 *)(lVar2 + 0x18);
    FUN_1400021e4(&local_28,&local_38);
    cVar1 = FUN_145ac4158(&local_38);
    if (local_38 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (cVar1 != '\0') goto LAB_145ac3fbf;
  }
  FUN_145bd0d64(param_1);
LAB_145ac3fbf:
  FUN_145ac410a(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac4004 FUN_145ac4004 body=46 status=ok
// SIG undefined FUN_145ac4004(void)

void FUN_145ac4004(longlong *param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *param_1 = param_2;
  return;
}



// FUNCTION 145ac4032 FUN_145ac4032 body=59 status=ok
// SIG undefined FUN_145ac4032(void)

void FUN_145ac4032(longlong param_1)

{
  FUN_145ac420c();
  if (*(char *)(param_1 + 0xc28) == '\x01') {
    FUN_145ac406e(param_1);
  }
  if (*(char *)(param_1 + 0xd58) == '\x01') {
    FUN_145ac40bc(param_1);
    return;
  }
  return;
}



// FUNCTION 145ac406e FUN_145ac406e body=77 status=ok
// SIG undefined FUN_145ac406e(void)

void FUN_145ac406e(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0xc30) == 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    lVar1 = FUN_145ac43ec(param_1);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xc30) = lVar1;
  }
  return;
}



// FUNCTION 145ac40bc FUN_145ac40bc body=77 status=ok
// SIG undefined FUN_145ac40bc(void)

void FUN_145ac40bc(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0xd60) == 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    lVar1 = FUN_145ac449e(param_1);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0xd60) = lVar1;
  }
  return;
}



// FUNCTION 145ac410a FUN_145ac410a body=77 status=ok
// SIG undefined FUN_145ac410a(void)

void FUN_145ac410a(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x3db8) == 0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    lVar1 = FUN_145ac4355(param_1);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x3db8) = lVar1;
  }
  return;
}



// FUNCTION 145ac4158 FUN_145ac4158 body=180 status=ok
// SIG undefined FUN_145ac4158(void)

undefined8 FUN_145ac4158(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined7 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ushort uVar6;
  ulonglong uVar7;
  ushort uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if (*(int *)(param_1 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_1;
  }
  lVar5 = 0;
  while( true ) {
    uVar6 = *(ushort *)((longlong)puVar1 + lVar5);
    uVar7 = (ulonglong)uVar6;
    uVar8 = *(ushort *)((longlong)L"Loader" + lVar5);
    uVar2 = (undefined7)((ulonglong)puVar1 >> 8);
    if (uVar6 != uVar8) break;
    if (uVar6 == 0) goto LAB_145ac4201;
LAB_145ac418f:
    lVar5 = lVar5 + 2;
  }
  if ((uVar8 | uVar6) < 0x80) {
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    uVar10 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar10]) goto LAB_145ac418f;
  }
  if (uVar6 != uVar8) {
    lVar5 = 0;
    goto LAB_145ac41c5;
  }
LAB_145ac4201:
  return CONCAT71(uVar2,1);
LAB_145ac41c5:
  uVar6 = *(ushort *)((longlong)puVar1 + lVar5);
  uVar3 = (uint)uVar6;
  uVar8 = *(ushort *)((longlong)L"Entry_P" + lVar5);
  uVar9 = (uint)uVar8;
  if (uVar6 != uVar8) {
    if ((uVar8 | uVar6) < 0x80) {
      uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar6];
      uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar8];
      if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_145ac41d9;
    }
    iVar4 = uVar3 - uVar9;
    goto LAB_145ac4206;
  }
  if (uVar6 == 0) {
    iVar4 = 0;
LAB_145ac4206:
    return CONCAT71(uVar2,iVar4 == 0);
  }
LAB_145ac41d9:
  lVar5 = lVar5 + 2;
  goto LAB_145ac41c5;
}



// FUNCTION 145ac420c FUN_145ac420c body=171 status=ok
// SIG undefined FUN_145ac420c(void)

void FUN_145ac420c(longlong *param_1)

{
  int iVar1;
  
  FUN_145ac42b8();
  if ((param_1 != (longlong *)0x0) && ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) {
    iVar1 = FUN_14487fd02(param_1);
    if (iVar1 != 3) {
      (**(code **)(*param_1 + 0x708))(param_1);
    }
  }
  (**(code **)(*param_1 + 0xd60))(param_1);
  (**(code **)(*param_1 + 0xec8))(param_1);
  iVar1 = FUN_14487fd02(param_1);
  if (iVar1 == 3) {
    (**(code **)(*param_1 + 0xdc8))(param_1);
  }
  (**(code **)(*param_1 + 0xdc0))(param_1,0);
  *(byte *)(param_1 + 0xb4) = *(byte *)(param_1 + 0xb4) | 0x10;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  param_1[0x79] = (ulonglong)DAT_14c893048;
  return;
}



// FUNCTION 145ac42b8 FUN_145ac42b8 body=156 status=ok
// SIG undefined FUN_145ac42b8(void)

void FUN_145ac42b8(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_141348dd0();
  if ((param_1 != (longlong *)0x0) && ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) {
    uVar2 = FUN_1447210f0(param_1);
    FUN_145ac4650(uVar2,param_1);
    lVar1 = param_1[0x39];
    if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x1f8) & 8) != 0)) {
      (**(code **)(*param_1 + 0x680))(param_1,local_38);
      local_48 = 0;
      FUN_14020f670(lVar1,local_38,0,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac4355 FUN_145ac4355 body=150 status=ok
// SIG undefined FUN_145ac4355(void)

undefined8 FUN_145ac4355(undefined8 param_1)

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
  uVar1 = FUN_1459110c2();
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



// FUNCTION 145ac43ec FUN_145ac43ec body=177 status=ok
// SIG undefined FUN_145ac43ec(void)

undefined8 FUN_145ac43ec(undefined8 param_1)

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
  local_b8 = FUN_14588b01c();
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



// FUNCTION 145ac449e FUN_145ac449e body=177 status=ok
// SIG undefined FUN_145ac449e(void)

undefined8 FUN_145ac449e(undefined8 param_1)

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
  local_b8 = FUN_145905a76();
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



// FUNCTION 145ac4550 FUN_145ac4550 body=254 status=ok
// SIG undefined FUN_145ac4550(void)

undefined8
FUN_145ac4550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3e62a0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b994c30;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_141285884(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac4650 FUN_145ac4650 body=291 status=ok
// SIG undefined FUN_145ac4650(void)

void FUN_145ac4650(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30);
  FUN_145ac47be(param_1 + 0x220,&local_30);
  if (param_2 != 0) {
    lVar3 = FUN_144a75eb4();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
         ) == lVar3 + 0x30)) {
      if ((longlong)*(int *)(param_1 + 0x238) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x230);
        lVar4 = (longlong)*(int *)(param_1 + 0x238) << 3;
        do {
          cVar2 = FUN_141280818(lVar3,param_2);
          if (cVar2 != '\0') goto LAB_145ac4764;
          lVar3 = lVar3 + 8;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
      local_30 = 0;
      FUN_14485c47a(&local_30,param_2);
      iVar1 = *(int *)(param_1 + 0x238);
      *(uint *)(param_1 + 0x238) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x23c) < iVar1 + 1U) {
        FUN_145ac483a((longlong *)(param_1 + 0x230),iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x230) + (longlong)iVar1 * 8) = local_30;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
LAB_145ac4764:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ac47be FUN_145ac47be body=124 status=ok
// SIG undefined FUN_145ac47be(void)

void FUN_145ac47be(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    uVar5 = 0;
    do {
      cVar4 = FUN_145a00f34(lVar2 + uVar5,param_2);
      if (cVar4 != '\0') {
        if ((int)(~uVar5 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar5 = uVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != uVar5);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145ac48be(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
  return;
}



// FUNCTION 145ac483a FUN_145ac483a body=132 status=ok
// SIG undefined FUN_145ac483a(void)

void FUN_145ac483a(longlong param_1,int param_2)

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



// FUNCTION 145ac48be FUN_145ac48be body=132 status=ok
// SIG undefined FUN_145ac48be(void)

void FUN_145ac48be(longlong param_1,int param_2)

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



// FUNCTION 145ac4942 FUN_145ac4942 body=363 status=ok
// SIG undefined FUN_145ac4942(void)

void FUN_145ac4942(longlong param_1,undefined4 param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined1 local_6c [36];
  float local_48;
  char local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = FUN_140d27b16();
  if ((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) {
    lVar2 = FUN_1447210f0(param_1);
    if (lVar2 != 0) {
      *(undefined4 *)(param_1 + 0x3198) = param_2;
      *(float *)(param_1 + 0x319c) = (float)*(double *)(lVar2 + 0x6d0);
    }
    FUN_140d27b72(lVar1,&local_48,DAT_14cbcfa88);
    if ((local_44 != '\x01') || (1e-08 < ABS(local_48 + -1.0))) {
      if (1e-08 < ABS(param_3)) {
        local_7c = DAT_14c758c60;
        local_78 = DAT_14c758c60;
        local_74 = DAT_14c758c60;
        local_70 = 0x3f800000;
        FUN_1460147d0(local_6c,param_3,0xff);
      }
      else {
        FUN_145ac4aae(local_6c,0xff);
      }
      FUN_140fa871e(lVar1,&DAT_14cbcfa88,local_6c);
      lVar1 = FUN_140083894();
      *(undefined1 *)(lVar1 + 0x58) = 1;
    }
    FUN_140d275b2(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ac4aae FUN_145ac4aae body=63 status=ok
// SIG undefined FUN_145ac4aae(void)

void FUN_145ac4aae(undefined1 *param_1,undefined1 param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_14c758c60;
  *(undefined2 *)(param_1 + 0x20) = 0x100;
  *param_1 = param_2;
  *(undefined1 **)(param_1 + 4) = &DAT_3f8000003f800000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  return;
}



// FUNCTION 145ac4aee FUN_145ac4aee body=84 status=ok
// SIG undefined FUN_145ac4aee(void)

void FUN_145ac4aee(longlong *param_1)

{
  ulonglong uVar1;
  
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (param_1[0x89] == 0) {
    uVar1 = (ulonglong)DAT_14c892e70;
  }
  else {
    uVar1 = *(ulonglong *)(param_1[0x89] + 0x3a0);
  }
                    /* WARNING: Could not recover jumptable at 0x000145ac4b37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xec0))(param_1,uVar1);
  return;
}



// FUNCTION 145ac4b42 FUN_145ac4b42 body=134 status=ok
// SIG undefined FUN_145ac4b42(void)

void FUN_145ac4b42(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[0x89] != 0) {
    *(undefined8 *)(param_1[0x89] + 0x3a0) = param_2;
  }
  iVar1 = FUN_14487fd02(param_1);
  if (iVar1 == 1) {
    local_28 = param_2;
    uVar2 = FUN_14477b072(param_1,DAT_14caf9758);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac4bca FUN_145ac4bca body=818 status=ok
// SIG undefined FUN_145ac4bca(void)

void FUN_145ac4bca(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 0x180) = param_2;
  iVar6 = FUN_14487fd02(param_2);
  *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x17d) & 0xfe | iVar6 != 3;
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x6c8))();
  bVar1 = *(byte *)(param_1 + 0x17d);
  bVar9 = bVar1 & 0xfd | cVar5 * '\x02';
  *(byte *)(param_1 + 0x17d) = bVar9;
  if ((cVar5 != '\0') && ((bVar1 & 0x10) == 0)) {
    *(byte *)(param_1 + 0x17d) = bVar9 | 0x10;
    FUN_144958d50(param_1);
    FUN_1458d7606(param_1,1);
  }
  lVar7 = FUN_1405831b2();
  FUN_145ac4efe(param_1 + 0x220,*(undefined4 *)(lVar7 + 0x4b8));
  lVar7 = *(longlong *)(param_1 + 0x180);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14b3e9ef0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_50[2] = lVar8;
  *local_50 = &PTR_FUN_14b996f90;
  local_50[3] = 0;
  FUN_14485c47a(local_50 + 3,lVar7);
  puVar3[4] = param_1;
  FUN_1403524de(lVar7 + 0xcf8,&local_58,&local_50);
  FUN_1449db362(&local_50);
  lVar7 = *(longlong *)(param_1 + 0x180);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar3 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14b3e9ef0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_50[2] = lVar8;
  *local_50 = &PTR_FUN_14b997000;
  local_50[3] = 0;
  FUN_14485c47a(local_50 + 3,lVar7);
  puVar3[4] = param_1;
  FUN_1403524de(lVar7 + 0xd40,&local_58,&local_50);
  FUN_1449db362(&local_50);
  if ((*(byte *)(param_1 + 0x17d) & 2) != 0) {
    lVar7 = FUN_141283ace(DAT_14cb0d2b0);
    if (lVar7 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x180);
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,3,0x10);
      puVar3 = local_50;
      local_48 = 3;
      *local_50 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_50[2] = lVar8;
      *local_50 = &PTR_FUN_14b997070;
      local_50[3] = 0;
      FUN_14485c47a(local_50 + 3,uVar2);
      puVar3[4] = param_1;
      FUN_1448b6402(lVar7 + 0x1f8,&local_58,&local_50);
      FUN_1449db362(&local_50);
      *(undefined8 *)(param_1 + 0x168) = local_58;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac4efe FUN_145ac4efe body=128 status=ok
// SIG undefined FUN_145ac4efe(void)

void FUN_145ac4efe(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_145ac4f80(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_148dc437c(param_1,param_2,iVar1 - param_2);
    FUN_148dc43d6(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 145ac4f80 FUN_145ac4f80 body=132 status=ok
// SIG undefined FUN_145ac4f80(void)

void FUN_145ac4f80(longlong param_1,int param_2)

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



// FUNCTION 145ac5004 FUN_145ac5004 body=70 status=ok
// SIG undefined FUN_145ac5004(void)

undefined1 FUN_145ac5004(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      FUN_145ac504a(param_2,param_3);
      param_3 = param_3 + 0x80;
      param_2 = param_2 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 145ac504a FUN_145ac504a body=144 status=ok
// SIG undefined FUN_145ac504a(void)

longlong FUN_145ac504a(longlong param_1,longlong param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafb1a0);
  FUN_145ac51f2(param_1,param_2);
  FUN_145ac50da(param_1 + 0x10,param_2 + 0x10);
  FUN_145ac50da(param_1 + 0x20,param_2 + 0x20);
  FUN_145ac5250(param_1 + 0x30,param_2 + 0x30);
  FUN_145ac5132(param_1 + 0x40,param_2 + 0x40);
  FUN_145ac5132(param_1 + 0x50,param_2 + 0x50);
  FUN_145ac52ae(param_1 + 0x60,param_2 + 0x60);
  *(undefined1 *)(param_1 + 0x70) = *(undefined1 *)(param_2 + 0x70);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafb1a0);
  return param_1;
}



// FUNCTION 145ac50da FUN_145ac50da body=88 status=ok
// SIG undefined FUN_145ac50da(void)

undefined8 * FUN_145ac50da(undefined8 *param_1,undefined8 *param_2)

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
      FUN_145ac5190(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 145ac5132 FUN_145ac5132 body=93 status=ok
// SIG undefined FUN_145ac5132(void)

undefined8 * FUN_145ac5132(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140b3acda(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145ac53d0(param_1,iVar1);
      FUN_1414982bc(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145ac5190 FUN_145ac5190 body=98 status=ok
// SIG undefined FUN_145ac5190(void)

void FUN_145ac5190(longlong param_1,int param_2,int param_3)

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



// FUNCTION 145ac51f2 FUN_145ac51f2 body=93 status=ok
// SIG undefined FUN_145ac51f2(void)

undefined8 * FUN_145ac51f2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140b3ad34(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145ac530c(param_1,iVar1);
      FUN_1414984b4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145ac5250 FUN_145ac5250 body=93 status=ok
// SIG undefined FUN_145ac5250(void)

undefined8 * FUN_145ac5250(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140b3ad09(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145ac536e(param_1,iVar1);
      FUN_145ac5443(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145ac52ae FUN_145ac52ae body=93 status=ok
// SIG undefined FUN_145ac52ae(void)

undefined8 * FUN_145ac52ae(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140abf09f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145ac551a(param_1,iVar1);
      FUN_140ac06a5(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145ac530c FUN_145ac530c body=98 status=ok
// SIG undefined FUN_145ac530c(void)

void FUN_145ac530c(longlong param_1,int param_2,int param_3)

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



// FUNCTION 145ac536e FUN_145ac536e body=98 status=ok
// SIG undefined FUN_145ac536e(void)

void FUN_145ac536e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 145ac53d0 FUN_145ac53d0 body=115 status=ok
// SIG undefined FUN_145ac53d0(void)

void FUN_145ac53d0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 145ac5443 FUN_145ac5443 body=117 status=ok
// SIG undefined FUN_145ac5443(void)

void FUN_145ac5443(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_145ac54b8(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 145ac54b8 FUN_145ac54b8 body=98 status=ok
// SIG undefined FUN_145ac54b8(void)

void FUN_145ac54b8(longlong param_1,int param_2,int param_3)

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



// FUNCTION 145ac551a FUN_145ac551a body=98 status=ok
// SIG undefined FUN_145ac551a(void)

void FUN_145ac551a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 145ac557c FUN_145ac557c body=311 status=ok
// SIG undefined FUN_145ac557c(void)

longlong * FUN_145ac557c(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar4 = DAT_14c75f144;
  *(int *)(param_1 + 5) = DAT_14c75f144;
  param_1[6] = 0;
  param_1[7] = 0;
  if (iVar4 < 1) {
    uVar2 = 0;
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    do {
      puVar3 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
      puVar3[0xe] = 0;
      *(undefined4 *)(puVar3 + 0xf) = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      puVar3[0xb] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x7c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar3 + 0x84) = 0;
      puVar3[0x12] = 0;
      *(undefined4 *)(puVar3 + 0x13) = 0;
      puVar3[0x14] = param_1;
      *(int *)(puVar3 + 0x15) = iVar4;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_145ac56b4(param_1,iVar1);
      }
      *(undefined8 **)(*param_1 + (longlong)iVar1 * 8) = puVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)param_1[5]);
    iVar4 = (int)param_1[7];
    uVar2 = *(uint *)((longlong)param_1 + 0x3c);
  }
  *(uint *)(param_1 + 7) = iVar4 + 1U;
  if (uVar2 < iVar4 + 1U) {
    FUN_14475e4ac(param_1 + 6,iVar4);
  }
  *(undefined4 *)(param_1[6] + (longlong)iVar4 * 4) = 0;
  iVar4 = (int)param_1[7];
  *(uint *)(param_1 + 7) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0x3c) < iVar4 + 1U) {
    FUN_14475e4ac(param_1 + 6,iVar4);
  }
  *(undefined4 *)(param_1[6] + (longlong)iVar4 * 4) = DAT_14c75f140;
  return param_1;
}



// FUNCTION 145ac56b4 FUN_145ac56b4 body=132 status=ok
// SIG undefined FUN_145ac56b4(void)

void FUN_145ac56b4(longlong param_1,int param_2)

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



// FUNCTION 145ac5738 FUN_145ac5738 body=40 status=ok
// SIG undefined FUN_145ac5738(void)

undefined8 FUN_145ac5738(undefined8 param_1,int param_2)

{
  FUN_145ac5760();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac5760 FUN_145ac5760 body=107 status=ok
// SIG undefined FUN_145ac5760(void)

void FUN_145ac5760(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aea7710;
  param_1[5] = &PTR_FUN_14aea79b0;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_14589e6fa(param_1);
  return;
}



// FUNCTION 145ac57d8 FUN_145ac57d8 body=31 status=ok
// SIG undefined FUN_145ac57d8(void)

undefined8 FUN_145ac57d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac57f8 FUN_145ac57f8 body=40 status=ok
// SIG undefined FUN_145ac57f8(void)

undefined8 FUN_145ac57f8(undefined8 param_1,int param_2)

{
  FUN_145ac5820();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac5820 FUN_145ac5820 body=107 status=ok
// SIG undefined FUN_145ac5820(void)

void FUN_145ac5820(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14aea83a0;
  param_1[5] = &PTR_FUN_14aea8640;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_14589e6fa(param_1);
  return;
}



// FUNCTION 145ac5898 FUN_145ac5898 body=31 status=ok
// SIG undefined FUN_145ac5898(void)

undefined8 FUN_145ac5898(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac58b8 FUN_145ac58b8 body=40 status=ok
// SIG undefined FUN_145ac58b8(void)

undefined8 FUN_145ac58b8(undefined8 param_1,int param_2)

{
  FUN_145ac58e0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac58e0 FUN_145ac58e0 body=150 status=ok
// SIG undefined FUN_145ac58e0(void)

void FUN_145ac58e0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b44a690;
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  FUN_144a76fd2(param_1 + 0x76);
  plVar3 = (longlong *)param_1[0x75];
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
  plVar3 = (longlong *)param_1[0x73];
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
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 145ac5984 FUN_145ac5984 body=40 status=ok
// SIG undefined FUN_145ac5984(void)

undefined8 FUN_145ac5984(undefined8 param_1,int param_2)

{
  FUN_14149872c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac59b2 FUN_145ac59b2 body=86 status=ok
// SIG undefined FUN_145ac59b2(void)

void FUN_145ac59b2(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145ac5b3e();
  FUN_14485c47a(param_1 + 0x30,uVar1);
  uVar1 = FUN_1414987b4(param_1);
  FUN_14485c47a(param_1 + 0x68,uVar1);
  uVar1 = FUN_145ac5a08(param_1);
  FUN_14485c47a(param_1 + 0x78,uVar1);
  FUN_141498992(param_1);
  FUN_145ac5b92(param_1);
  return;
}



// FUNCTION 145ac5a08 FUN_145ac5a08 body=293 status=ok
// SIG undefined FUN_145ac5a08(void)

longlong FUN_145ac5a08(longlong param_1)

{
  void *_Src;
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [48];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_144729dda(param_1 + 0x78);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
  }
  lVar2 = FUN_145ac5b3e(param_1);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    local_48 = *(undefined4 *)(lVar2 + 0x60);
    uStack_44 = *(undefined4 *)(lVar2 + 100);
    uStack_40 = *(undefined4 *)(lVar2 + 0x68);
    uStack_3c = *(undefined4 *)(lVar2 + 0x6c);
    local_38 = (void *)0x0;
    local_30 = *(int *)(lVar2 + 0x78);
    lVar4 = (longlong)local_30;
    _Src = *(void **)(lVar2 + 0x70);
    if (lVar4 == 0) {
      local_2c = 0;
    }
    else {
      FUN_1446dd670(&local_38,local_30,0);
      memcpy(local_38,_Src,lVar4 * 2);
    }
    lVar2 = FUN_14050fd64();
    lVar4 = FUN_141498c8a(lVar2 + 0x1e8,&local_48,1,0);
    lVar2 = 0;
    if (lVar4 != 0) {
      lVar3 = FUN_1400d1e14();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (lVar2 = lVar4,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         != lVar3 + 0x30)) {
        lVar2 = 0;
      }
    }
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac5b3e FUN_145ac5b3e body=84 status=ok
// SIG undefined FUN_145ac5b3e(void)

longlong FUN_145ac5b3e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 0x30);
    return lVar2;
  }
  plVar3 = (longlong *)FUN_1459992a2();
  lVar2 = plVar3[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar2 = plVar3[0x22];
  }
  return lVar2;
}



// FUNCTION 145ac5b92 FUN_145ac5b92 body=403 status=ok
// SIG undefined FUN_145ac5b92(void)

void FUN_145ac5b92(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_145ac5b3e();
  if (0 < *(int *)(lVar3 + 0x2d0)) {
    lVar5 = 0x20;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + 0x2c8);
      puVar1 = (undefined4 *)(lVar4 + -0x18 + lVar5);
      local_68 = *puVar1;
      uStack_64 = puVar1[1];
      uStack_60 = puVar1[2];
      uStack_5c = puVar1[3];
      local_58 = (void *)0x0;
      local_50 = *(int *)(lVar4 + lVar5);
      lVar6 = (longlong)local_50;
      _Src = *(void **)(lVar4 + -8 + lVar5);
      if (lVar6 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar6 * 2);
      }
      lVar4 = FUN_14050fd64();
      lVar4 = FUN_141498c8a(lVar4 + 0x1e8,&local_68,1,0);
      if (lVar4 != 0) {
        lVar6 = FUN_14018aba8();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) {
          lVar4 = 0;
        }
        local_70 = 0;
        FUN_14485c47a(&local_70,lVar4);
        iVar2 = *(int *)(param_1 + 0x98);
        *(uint *)(param_1 + 0x98) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x9c) < iVar2 + 1U) {
          FUN_145ac5d26((longlong *)(param_1 + 0x90),iVar2);
        }
        *(undefined8 *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar2 * 8) = local_70;
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x28;
    } while (lVar7 < *(int *)(lVar3 + 0x2d0));
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac5d26 FUN_145ac5d26 body=132 status=ok
// SIG undefined FUN_145ac5d26(void)

void FUN_145ac5d26(longlong param_1,int param_2)

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



// FUNCTION 145ac5dac FUN_145ac5dac body=132 status=ok
// SIG undefined FUN_145ac5dac(void)

void FUN_145ac5dac(longlong param_1,int param_2)

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



// FUNCTION 145ac5e3c FUN_145ac5e3c body=290 status=ok
// SIG undefined FUN_145ac5e3c(void)

undefined8 * FUN_145ac5e3c(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a6156a0;
  param_1[5] = &PTR_FUN_14a615c80;
  param_1[6] = &PTR_LAB_14a615cc0;
  *(undefined8 *)((longlong)param_1 + 700) = 0x3e4ccccd;
  param_1[0x5f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0x3f2353f83ee4dd2f;
  *(undefined1 **)((longlong)param_1 + 0x2cc) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0x3f80000000000000;
  *(undefined1 **)((longlong)param_1 + 0x2e4) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x2ec) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0x461c400040800000;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0x3e8000003e800000;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0x3f8000003e000000;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0x3f80000000000000;
  *(undefined1 **)((longlong)param_1 + 0x304) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_1 + 0x30c) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0x447a000047c35000;
  *(undefined4 *)(param_1 + 0x55) = 0x3ca3d70a;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0x3e4ccccd;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0;
  *(byte *)((longlong)param_1 + 0x385) = *(byte *)((longlong)param_1 + 0x385) & 0xfc | 2;
  param_1[0x6b] = 0xffffffff3e4ccccd;
  param_1[0x6e] = 0x45bb80003f800000;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  return param_1;
}



// FUNCTION 145ac5f5e FUN_145ac5f5e body=183 status=ok
// SIG undefined FUN_145ac5f5e(void)

void FUN_145ac5f5e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_30;
  uStack_64 = uStack_2c;
  uStack_60 = uStack_28;
  uStack_5c = uStack_24;
  local_58 = local_20;
  FUN_145ac6016(&local_50);
  param_3[4] = local_40;
  param_3[5] = uStack_3c;
  param_3[6] = uStack_38;
  param_3[7] = uStack_34;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac6016 FUN_145ac6016 body=22 status=ok
// SIG undefined FUN_145ac6016(void)

void FUN_145ac6016(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 1;
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 8) = *param_2;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = param_2[2];
  return;
}



// FUNCTION 145ac602c FUN_145ac602c body=118 status=ok
// SIG undefined FUN_145ac602c(void)

void FUN_145ac602c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141498e96(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b9285e0;
  puVar1[0x79] = &PTR_FUN_14b928c50;
  puVar1[0x7a] = &PTR_FUN_14b928c70;
  puVar1[0x7b] = &PTR_FUN_14b928d10;
  puVar1[0x7c] = &PTR_FUN_14b928d60;
  *(undefined1 *)(puVar1 + 0xc3) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x61c) = 1;
  puVar1[0xc4] = 0;
  puVar1[0xc5] = 0;
  return;
}



// FUNCTION 145ac60a2 FUN_145ac60a2 body=81 status=ok
// SIG undefined FUN_145ac60a2(void)

void FUN_145ac60a2(longlong param_1,int param_2)

{
  if ((param_2 == 0 && *(int *)(param_1 + 0x958) != -1) && (*(longlong *)(param_1 + 0x940) != 0)) {
    (**(code **)(*(longlong *)(param_1 + 0x8c0) + 0x18))(param_1 + 0x8c0);
  }
  FUN_140f0695c(param_1,param_2);
  return;
}



// FUNCTION 145ac60f4 FUN_145ac60f4 body=295 status=ok
// SIG undefined FUN_145ac60f4(void)

void FUN_145ac60f4(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(int *)(param_1 + 0x98) == param_3) &&
     (*(undefined4 *)(param_1 + 0x98) = 0xffffffff, *(longlong *)(param_1 + 0x80) != 0)) {
    FUN_145cc0f48(param_1);
    if (*(char *)(param_1 + -0x748) == '\x03') {
      FUN_145ac6756(param_1 + -0x8c0,0);
      lVar3 = *(longlong *)(param_1 + 0x80);
      if (((lVar3 != 0) &&
          (lVar3 = (**(code **)(*(longlong *)(lVar3 + 0x3a40) + 0x10))(lVar3 + 0x3a40), lVar3 != 0))
         && ((longlong)*(int *)(param_1 + 0x68) != 0)) {
        lVar4 = *(longlong *)(param_1 + 0x60);
        lVar5 = (longlong)*(int *)(param_1 + 0x68) * 0x90;
        do {
          FUN_141498eee(lVar4,lVar3);
          lVar4 = lVar4 + 0x90;
          lVar5 = lVar5 + -0x90;
        } while (lVar5 != 0);
      }
      FUN_145ac6356(param_1 + -0x8c0);
      if (0 < *(int *)(param_1 + 0x40)) {
        FUN_14053d8da(param_1 + 0x38,1);
      }
      if (*(longlong *)(param_1 + 0x70) != 0) {
        FUN_145ac621c(param_1 + 0x10);
      }
      iVar1 = *(int *)(param_1 + 0x20);
      if ((longlong)iVar1 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x18);
        lVar4 = 0;
        do {
          plVar2 = *(longlong **)(lVar3 + lVar4);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x20))(plVar2,*(undefined8 *)(param_1 + 0x80));
          }
          lVar4 = lVar4 + 8;
        } while ((longlong)iVar1 * 8 != lVar4);
      }
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return;
}



// FUNCTION 145ac621c FUN_145ac621c body=242 status=ok
// SIG undefined FUN_145ac621c(void)

void FUN_145ac621c(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = (**(code **)(*param_1 + 0x38))();
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    uVar3 = (**(code **)(*param_1 + 0x28))(param_1);
    FUN_1446dcdd4(local_50,uVar3);
    if (DAT_14cbcb7a8 == 0) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar4 = FUN_144837462(DAT_14cbcb7a8,local_50);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if ((lVar4 != 0) && (lVar2 != 0)) {
        puVar5 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar4 + 8) != (undefined4 *)0x0) {
          puVar5 = *(undefined4 **)(lVar4 + 8);
        }
        FUN_1447325ac(puVar5,local_50,1);
        cVar1 = FUN_145ac6310(lVar2,local_50);
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x30))(param_1,0);
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



// FUNCTION 145ac6310 FUN_145ac6310 body=69 status=ok
// SIG undefined FUN_145ac6310(void)

undefined8 FUN_145ac6310(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x30);
    uVar1 = FUN_145ac63e2(param_1 + 0x6090,param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 145ac6356 FUN_145ac6356 body=140 status=ok
// SIG undefined FUN_145ac6356(void)

void FUN_145ac6356(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)(param_1 + 0x948);
  if (0 < *(int *)(param_1 + 0x950)) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(*plVar1 + lVar3 * 8);
      if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
        lVar2 = FUN_1412cc39e();
        if (lVar2 != 0) {
          FUN_1412ec3f2(lVar2,*(undefined8 *)(*(longlong *)(*plVar1 + lVar3 * 8) + 0xa8));
        }
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x950));
  }
  *(undefined4 *)(param_1 + 0x950) = 0;
  if (-1 < *(int *)(param_1 + 0x954)) {
    return;
  }
  FUN_140cfc87a(plVar1,0);
  return;
}



// FUNCTION 145ac63e2 FUN_145ac63e2 body=444 status=ok
// SIG undefined FUN_145ac63e2(void)

ulonglong FUN_145ac63e2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_98 [40];
  longlong local_70 [3];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = param_1 + 0x50;
  cVar2 = FUN_144729dda(lVar4);
  if ((cVar2 != '\0') && (lVar3 = FUN_14479d2ce(lVar4), *(char *)(lVar3 + 0x178) == '\x03')) {
    FUN_1446dcdd4(local_70,param_2);
    if (DAT_14cbcb7a8 == 0) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar3 = FUN_144837462(DAT_14cbcb7a8,local_70);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if ((lVar3 != 0) && (0 < *(int *)(param_1 + 0x38))) {
        plVar1 = (longlong *)(param_1 + 0x30);
        lVar8 = 0;
        uVar9 = 0;
        do {
          FUN_1447325ac(*plVar1 + lVar8,local_70);
          if (local_70[0] == *param_2) {
            lVar5 = *plVar1;
            cVar2 = *(char *)(lVar5 + 0x28 + lVar8);
            uVar6 = CONCAT71((int7)((ulonglong)local_70 >> 8),cVar2);
            if ((int)*(uint *)(lVar3 + 0x40) < 1) goto LAB_145ac6528;
            lVar7 = 0;
            goto LAB_145ac64dd;
          }
          uVar9 = uVar9 + 1;
          lVar8 = lVar8 + 0x30;
        } while ((longlong)uVar9 < (longlong)*(int *)(param_1 + 0x38));
      }
    }
  }
LAB_145ac6594:
  uVar6 = 0;
  goto LAB_145ac6556;
  while (lVar7 = lVar7 + 0x30, (ulonglong)*(uint *)(lVar3 + 0x40) * 0x30 != lVar7) {
LAB_145ac64dd:
    if (*(char *)(*(longlong *)(lVar3 + 0x38) + 0x28 + lVar7) == cVar2) {
      lVar4 = FUN_14479d2ce(lVar4);
      FUN_14615ce02(local_70,param_2,uVar6 & 0xffffffff);
      cVar2 = FUN_145ac65a0(lVar4 + 0x3ad8,local_70);
      if (cVar2 == '\0') goto LAB_145ac6594;
      lVar5 = *plVar1;
      uVar6 = (ulonglong)*(byte *)(lVar5 + 0x28 + lVar8);
      break;
    }
  }
LAB_145ac6528:
  *(char *)(lVar5 + 0x28 + lVar8) = (char)uVar6 + -1;
  FUN_141165eb6(param_1 + 0x18,param_2);
  uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if (*(char *)(*(longlong *)(param_1 + 0x30) + 0x28 + lVar8) == '\0') {
    FUN_145ac663c(plVar1,uVar9 & 0xffffffff);
  }
LAB_145ac6556:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 145ac65a0 FUN_145ac65a0 body=155 status=ok
// SIG undefined FUN_145ac65a0(void)

undefined8 FUN_145ac65a0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  lVar4 = (**(code **)(*param_1 + 0x18))();
  if (lVar4 != 0) {
    lVar5 = FUN_144a2f878();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      plVar6 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1);
      bVar3 = (char)plVar6[1] - 1;
      if (-1 < (char)bVar3) {
        uVar7 = 0;
        uVar8 = (ulonglong)bVar3;
        do {
          plVar1 = *(longlong **)(*plVar6 + uVar8 * 8);
          if (plVar1[0x59] == *param_2) {
            (**(code **)(*plVar1 + 0x20))(plVar1,lVar4);
            FUN_1458cb582(plVar6,uVar8 & 0xffffffff);
            uVar7 = 1;
          }
          bVar2 = 0 < (longlong)uVar8;
          uVar8 = uVar8 - 1;
        } while (bVar2);
        return uVar7;
      }
    }
  }
  return 0;
}



// FUNCTION 145ac663c FUN_145ac663c body=107 status=ok
// SIG undefined FUN_145ac663c(void)

void FUN_145ac663c(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x18 + (longlong)(int)param_2 * 0x30) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x30);
    memmove(_Dst,(void *)((longlong)_Dst + 0x30),(longlong)(int)(~param_2 + iVar2) * 0x30);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_145ac66a8(param_1);
  return;
}



// FUNCTION 145ac66a8 FUN_145ac66a8 body=62 status=ok
// SIG undefined FUN_145ac66a8(void)

void FUN_145ac66a8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_145ac66e6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 145ac66e6 FUN_145ac66e6 body=111 status=ok
// SIG undefined FUN_145ac66e6(void)

ulonglong FUN_145ac66e6(uint param_1,uint param_2)

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



// FUNCTION 145ac6756 FUN_145ac6756 body=255 status=ok
// SIG undefined FUN_145ac6756(void)

void FUN_145ac6756(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 0x940) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x918), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x910);
    lVar6 = 0;
    do {
      uVar5 = (**(code **)(*(longlong *)(&DAT_00003a80 + *(longlong *)(param_1 + 0x940)) + 0x10))
                        (&DAT_00003a80 + *(longlong *)(param_1 + 0x940));
      iVar2 = *(int *)(lVar3 + 0x10 + lVar6);
      iVar4 = -iVar2;
      if (param_2 != '\0') {
        iVar4 = iVar2;
      }
      local_6c = 0xffffffff;
      local_68 = *(undefined8 *)(lVar3 + 8 + lVar6);
      local_90 = *(undefined8 *)(lVar3 + lVar6);
      local_98 = 0;
      local_78 = 0;
      local_88 = 0;
      uStack_80 = 0;
      FUN_145ac6856(uVar5,&local_98,&local_6c,iVar4);
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac6856 FUN_145ac6856 body=106 status=ok
// SIG undefined FUN_145ac6856(void)

undefined8
FUN_145ac6856(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_141498ff6(param_2,param_1);
  if (lVar3 != 0) {
    cVar1 = FUN_140a30c40(lVar3);
    if (cVar1 != '\0') {
      uVar2 = FUN_141498f32(param_3,param_1,param_2);
      uVar4 = FUN_145ac68c0(lVar3,uVar2,param_4);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 145ac68c0 FUN_145ac68c0 body=136 status=ok
// SIG undefined FUN_145ac68c0(void)

int FUN_145ac68c0(longlong param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  if ((((*(byte *)(param_1 + 0x181) & 8) != 0) && (-1 < (int)param_2)) &&
     ((int)param_2 < *(int *)(param_1 + 0x140))) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x138) + 0x50 + (ulonglong)param_2 * 0xa8);
    if ((lVar3 == 0) || (iVar2 = 0, *(char *)(lVar3 + 0x10) == '\0')) {
      lVar3 = *(longlong *)(param_1 + 0x138) + (ulonglong)param_2 * 0xa8;
      FUN_14128cbda(lVar3,lVar3 + 0x98,*(int *)(lVar3 + 0x98) + param_3,0);
      cVar1 = FUN_140e58abc(param_1);
      iVar2 = param_3;
      if (cVar1 == '\0') {
        FUN_1486e0728(param_1,param_2,param_3);
      }
    }
  }
  return iVar2;
}



// FUNCTION 145ac6950 FUN_145ac6950 body=420 status=ok
// SIG undefined FUN_145ac6950(void)

undefined8 * FUN_145ac6950(undefined8 *param_1)

{
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14b334230;
  param_1[0x72] = &PTR_FUN_14b3348a0;
  param_1[0x73] = &PTR_FUN_14b3348f0;
  param_1[0x74] = &PTR_FUN_14b3349b0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  FUN_141067f4a(param_1 + 0x93);
  param_1[0x93] = &PTR_FUN_14b3349d0;
  *(byte *)((longlong)param_1 + 0x4a2) = *(byte *)((longlong)param_1 + 0x4a2) | 6;
  *(undefined1 *)(param_1 + 0x94) = 6;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x9b));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x9b),4000);
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  *(undefined2 *)(param_1 + 0xac) = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 6;
  *(undefined1 *)(param_1 + 7) = 1;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
  FUN_141067f36(param_1,0);
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  FUN_1403121a6(param_1,0);
  *(undefined4 *)(param_1 + 0x34) = 0x41200000;
  FUN_1405e4918(param_1,0x41f00000);
  FUN_141067f40(param_1,0x41f00000);
  *(undefined8 *)((longlong)param_1 + 0x4cc) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x77) = 0xffffffff;
  return param_1;
}



// FUNCTION 145ac6af4 FUN_145ac6af4 body=29 status=ok
// SIG undefined FUN_145ac6af4(void)

void FUN_145ac6af4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))();
  FUN_145ac6b12(&DAT_14c96b458,*puVar1);
  return;
}



// FUNCTION 145ac6b12 FUN_145ac6b12 body=155 status=ok
// SIG undefined FUN_145ac6b12(void)

undefined8 FUN_145ac6b12(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_145ac6bae(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 145ac6bae FUN_145ac6bae body=85 status=ok
// SIG undefined FUN_145ac6bae(void)

void FUN_145ac6bae(longlong *param_1,int param_2)

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
  FUN_145ac6c04();
  return;
}



// FUNCTION 145ac6c04 FUN_145ac6c04 body=112 status=ok
// SIG undefined FUN_145ac6c04(void)

void FUN_145ac6c04(longlong *param_1,int param_2)

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



// FUNCTION 145ac6c74 FUN_145ac6c74 body=40 status=ok
// SIG undefined FUN_145ac6c74(void)

undefined8 FUN_145ac6c74(undefined8 param_1,int param_2)

{
  FUN_145ac6c9c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac6c9c FUN_145ac6c9c body=87 status=ok
// SIG undefined FUN_145ac6c9c(void)

void FUN_145ac6c9c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1c2a30;
  FUN_140bd4e4b(param_1[0x6a],*(undefined4 *)(param_1 + 0x6b));
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  FUN_1406d02ae(param_1);
  return;
}



// FUNCTION 145ac6cfe FUN_145ac6cfe body=116 status=ok
// SIG undefined FUN_145ac6cfe(void)

undefined8 * FUN_145ac6cfe(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14a531b80;
  param_1[5] = &PTR_FUN_14a531e80;
  FUN_140ca8f8e(param_1 + 0x2e);
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 3;
  *(undefined2 *)((longlong)param_1 + 0x16c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x16e) = 1;
  lVar1 = FUN_140bcc93a();
  FUN_140f13d9e(param_1 + 0x2e,lVar1 + 0x4530);
  return param_1;
}



// FUNCTION 145ac6d72 FUN_145ac6d72 body=40 status=ok
// SIG undefined FUN_145ac6d72(void)

undefined8 FUN_145ac6d72(undefined8 param_1,int param_2)

{
  FUN_145ac6d9a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac6d9a FUN_145ac6d9a body=87 status=ok
// SIG undefined FUN_145ac6d9a(void)

void FUN_145ac6d9a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a51e670;
  param_1[5] = &PTR_FUN_14a51e970;
  plVar3 = (longlong *)param_1[0x2e];
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
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 145ac6df2 FUN_145ac6df2 body=40 status=ok
// SIG undefined FUN_145ac6df2(void)

undefined8 FUN_145ac6df2(undefined8 param_1,int param_2)

{
  FUN_145ac6e1a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac6e1a FUN_145ac6e1a body=87 status=ok
// SIG undefined FUN_145ac6e1a(void)

void FUN_145ac6e1a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a548360;
  param_1[5] = &PTR_FUN_14a548680;
  plVar3 = (longlong *)param_1[0x32];
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
  FUN_140f861ce(param_1);
  return;
}



// FUNCTION 145ac6e72 FUN_145ac6e72 body=40 status=ok
// SIG undefined FUN_145ac6e72(void)

undefined8 FUN_145ac6e72(undefined8 param_1,int param_2)

{
  FUN_145ac6e9a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac6e9a FUN_145ac6e9a body=87 status=ok
// SIG undefined FUN_145ac6e9a(void)

void FUN_145ac6e9a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a5492c0;
  param_1[5] = &PTR_FUN_14a5495e0;
  plVar3 = (longlong *)param_1[0x34];
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
  FUN_14110c0da(param_1);
  return;
}



// FUNCTION 145ac6ef2 FUN_145ac6ef2 body=56 status=ok
// SIG undefined FUN_145ac6ef2(void)

void FUN_145ac6ef2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    FUN_140414380(*(longlong *)(param_1 + 0x3d0),0);
  }
  FUN_1400fb146(param_1 + 0x3c0,0);
  FUN_145ac6f2a(param_1);
  return;
}



// FUNCTION 145ac6f2a FUN_145ac6f2a body=71 status=ok
// SIG undefined FUN_145ac6f2a(void)

void FUN_145ac6f2a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1400f7f98();
  lVar1 = param_1;
  while( true ) {
    if (lVar1 == 0) {
      FUN_144a61b4f();
      uVar2 = FUN_140c61bfa();
      FUN_140457ffc(uVar2,param_1);
      return;
    }
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) break;
    lVar1 = *(longlong *)(lVar1 + 0x20);
  }
  return;
}



// FUNCTION 145ac6f72 FUN_145ac6f72 body=40 status=ok
// SIG undefined FUN_145ac6f72(void)

undefined8 FUN_145ac6f72(undefined8 param_1,int param_2)

{
  FUN_145ac6f9a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac6f9a FUN_145ac6f9a body=87 status=ok
// SIG undefined FUN_145ac6f9a(void)

void FUN_145ac6f9a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae5ff00;
  param_1[5] = &PTR_FUN_14ae60220;
  plVar3 = (longlong *)param_1[0x3a];
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
  FUN_145851c42(param_1);
  return;
}



// FUNCTION 145ac6ff2 FUN_145ac6ff2 body=104 status=ok
// SIG undefined FUN_145ac6ff2(void)

undefined8 FUN_145ac6ff2(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_145ac705c(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac705c FUN_145ac705c body=22 status=ok
// SIG undefined FUN_145ac705c(void)

undefined8 FUN_145ac705c(int *param_1)

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
  
  plVar4 = DAT_14cb85860;
  if (DAT_14cb85860 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb85860 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb85860 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb85860[0x3a] <= *(int *)((longlong)DAT_14cb85860 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb85860 + 0x300))(DAT_14cb85860);
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



// FUNCTION 145ac7072 FUN_145ac7072 body=104 status=ok
// SIG undefined FUN_145ac7072(void)

undefined8 FUN_145ac7072(undefined8 param_1,undefined8 *param_2)

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
  uVar1 = FUN_145ac70dc(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac70dc FUN_145ac70dc body=22 status=ok
// SIG undefined FUN_145ac70dc(void)

undefined8 FUN_145ac70dc(int *param_1)

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
  
  plVar4 = DAT_14cbcce70;
  if (DAT_14cbcce70 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cbcce70 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cbcce70 + 0x154) & 1) == 0) ||
       ((int)DAT_14cbcce70[0x3a] <= *(int *)((longlong)DAT_14cbcce70 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cbcce70 + 0x300))(DAT_14cbcce70);
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



// FUNCTION 145ac70f2 FUN_145ac70f2 body=127 status=ok
// SIG undefined FUN_145ac70f2(void)

void FUN_145ac70f2(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x88);
  *param_2 = 0;
  *(undefined2 *)(param_2 + 4) = 4;
  *(undefined4 *)(param_2 + 1) = 1;
  *(undefined1 *)(param_2 + 5) = 1;
  *(bool *)(param_2 + 6) = (DAT_14c9a8634 & 0x20) == 0;
  param_2[7] = 0;
  *(undefined2 *)(param_2 + 0xb) = 4;
  *(undefined4 *)(param_2 + 8) = 0x3f800000;
  *(undefined1 *)(param_2 + 0xc) = 3;
  *(char *)(param_2 + 0xd) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  return;
}



// FUNCTION 145ac7172 FUN_145ac7172 body=40 status=ok
// SIG undefined FUN_145ac7172(void)

undefined8 FUN_145ac7172(undefined8 param_1,int param_2)

{
  FUN_145ac719a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac719a FUN_145ac719a body=158 status=ok
// SIG undefined FUN_145ac719a(void)

void FUN_145ac719a(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14b823a70;
  param_1[6] = &PTR_FUN_14b823d60;
  param_1[7] = &PTR_FUN_14b823df0;
  lVar1 = param_1[0x15];
  if (lVar1 != 0) {
    FUN_14127b218(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_145ac7238(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140e3eae6(param_1);
  return;
}



// FUNCTION 145ac7238 FUN_145ac7238 body=56 status=ok
// SIG undefined FUN_145ac7238(void)

void FUN_145ac7238(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x58;
    do {
      FUN_1449db362(param_1 + 0x18);
      FUN_1449db362(param_1);
      param_1 = param_1 + 0x88;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ac7270 FUN_145ac7270 body=31 status=ok
// SIG undefined FUN_145ac7270(void)

void FUN_145ac7270(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x2c0,0x10);
  FUN_145ac7290(uVar1);
  return;
}



// FUNCTION 145ac7290 FUN_145ac7290 body=96 status=ok
// SIG undefined FUN_145ac7290(void)

undefined8 * FUN_145ac7290(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  FUN_140e8cffc();
  *param_1 = &PTR_FUN_14b9c1bd0;
  *(undefined4 *)(param_1 + 0x53) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 0x40000000;
  *(undefined4 *)(param_1 + 0x55) = 0;
  plVar2 = (longlong *)FUN_140e82300();
  plVar1 = (longlong *)*plVar2;
  param_1[0x56] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x57) = (int)plVar2[1];
  return param_1;
}



// FUNCTION 145ac72f0 FUN_145ac72f0 body=214 status=ok
// SIG undefined FUN_145ac72f0(void)

undefined8 * FUN_145ac72f0(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145ac73f0 FUN_145ac73f0 body=200 status=ok
// SIG undefined FUN_145ac73f0(void)

void FUN_145ac73f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  bool bVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar3 = (undefined8 *)FUN_14001cc68(0xd0);
  *puVar3 = FUN_145a27e63;
  memset(puVar3 + 1,0,0xc0);
  FUN_145ac74ba(puVar3 + 2);
  puVar3[5] = 0;
  FUN_145ac7588(puVar3 + 6);
  lVar2 = *(longlong *)(param_1 + 0x30);
  *(undefined8 **)(param_1 + 0x30) = puVar3 + 2;
  if (lVar2 != 0) {
    (**(code **)(lVar2 + -0x10))(lVar2 + -0x10);
  }
  FUN_145ac74ea();
  if ((DAT_14cc287e0 != -1) &&
     (iVar1 = DAT_14cc287e0 + 1, bVar4 = DAT_14cc287e0 == 0, DAT_14cc287e0 = iVar1, bVar4)) {
    FUN_145ac762c(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_145ac77da(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac74ba FUN_145ac74ba body=47 status=ok
// SIG undefined FUN_145ac74ba(void)

void FUN_145ac74ba(longlong param_1)

{
  FUN_145a27ed6();
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    return;
  }
  FUN_1447ab16c(param_1,0);
  return;
}



// FUNCTION 145ac74ea FUN_145ac74ea body=158 status=ok
// SIG undefined FUN_145ac74ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ac74ea(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc28838) {
    FUN_144b3d300(&DAT_14cc28838);
    if (DAT_14cc28838 == -1) {
      DAT_14cc287e0 = 0;
      DAT_14cc28808 = 0;
      DAT_14cc28810 = 0;
      DAT_14cc287e8 = 0;
      _DAT_14cc287f0 = 0;
      _DAT_14cc28814 = 0xffffffff00000080;
      _DAT_14cc2881c = 0;
      DAT_14cc28828 = 0;
      _DAT_14cc28830 = 0;
      atexit(FUN_1446468e8);
      _Init_thread_footer(&DAT_14cc28838);
      return;
    }
  }
  return;
}



// FUNCTION 145ac7588 FUN_145ac7588 body=163 status=ok
// SIG undefined FUN_145ac7588(void)

undefined8 * FUN_145ac7588(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14be90410;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xb),4000);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14be901d0;
  puVar1[2] = 0;
  param_1[0x12] = puVar1;
  return param_1;
}



// FUNCTION 145ac762c FUN_145ac762c body=179 status=ok
// SIG undefined FUN_145ac762c(void)

undefined8 FUN_145ac762c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_14a79ccd0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14be90160;
  puVar1[3] = &DAT_14cc287e0;
  puVar1[4] = FUN_14019f85e;
  FUN_145ac76e0(param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac76e0 FUN_145ac76e0 body=233 status=ok
// SIG undefined FUN_145ac76e0(void)

undefined8 * FUN_145ac76e0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  if (((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(&DAT_14cae3a10,1);
      uVar5 = 0;
      if (((int)param_2[1] != 0) && (plVar1 = (longlong *)*param_2, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x38))(plVar1,&local_28);
        uVar5 = local_28;
      }
      *param_1 = uVar5;
      uVar3 = DAT_14cae3a18;
      lVar6 = (longlong)(int)DAT_14cae3a18;
      DAT_14cae3a18 = DAT_14cae3a18 + 1;
      if (DAT_14cae3a1c < DAT_14cae3a18) {
        FUN_1447a71f6(&DAT_14cae3a10,uVar3);
      }
      lVar2 = DAT_14cae3a10;
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(DAT_14cae3a10 + lVar6) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar6) = 0;
      *(longlong *)(lVar2 + lVar6) = *param_2;
      *param_2 = 0;
      *(int *)(lVar2 + 8 + lVar6) = (int)param_2[1];
      *(undefined4 *)(param_2 + 1) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac77da FUN_145ac77da body=318 status=ok
// SIG undefined FUN_145ac77da(void)

void FUN_145ac77da(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = FUN_144a126be();
  if (lVar3 != 0) {
    uVar4 = FUN_144a88394(lVar3);
    uVar1 = DAT_14c7679f4;
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    FUN_1446efa72(&local_a8,0,3,0x10);
    puVar2 = local_a8;
    local_a0 = 3;
    *local_a8 = &PTR_LAB_14a1c8830;
    uVar5 = FUN_144a3f946();
    puVar2[2] = uVar5;
    *puVar2 = &PTR_FUN_14be903a0;
    puVar2[3] = 0;
    FUN_14485c47a(puVar2 + 3,param_1);
    puVar2[4] = FUN_140eb3a80;
    local_98 = 0;
    local_90 = 0;
    FUN_14487d8d8(&local_98,&local_a8);
    local_58 = 1;
    local_b8 = 1;
    local_b0 = 0xbf800000;
    FUN_1406f3fee(uVar4,param_1 + 0x90,&local_98,uVar1);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
    FUN_1449db362(&local_a8);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac791a FUN_145ac791a body=210 status=ok
// SIG undefined FUN_145ac791a(void)

void FUN_145ac791a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined ***pppuVar2;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  undefined8 local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_74 = param_3;
  local_70 = param_4;
  if ((*(char *)(param_1 + -0xce8) == '\x03') && (*(longlong *)(param_1 + 0x13a0) != 0)) {
    cVar1 = FUN_1402799c0();
    if (cVar1 != '\0') {
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14b9951e0;
      local_38 = &local_74;
      local_30 = &local_70;
      local_68[0] = &LAB_1441f6766;
      local_40 = param_2;
      FUN_141499582(param_1 + -0xe60,local_68);
      if (local_68[0] != (undefined1 *)0x0) {
        pppuVar2 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar2 = &local_48;
        }
        (*(code *)(*pppuVar2)[2])();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac79ee FUN_145ac79ee body=66 status=ok
// SIG undefined FUN_145ac79ee(void)

void FUN_145ac79ee(undefined8 param_1,longlong param_2)

{
  FUN_14149a548();
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbe7058,0);
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbe7060,0);
  return;
}



// FUNCTION 145ac7a3c FUN_145ac7a3c body=499 status=ok
// SIG undefined FUN_145ac7a3c(void)

undefined8 * FUN_145ac7a3c(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14149a6f4();
  *param_1 = &PTR_FUN_14abda400;
  param_1[0x72] = &PTR_FUN_14abdac50;
  param_1[0x85] = &PTR_FUN_14abdacb0;
  param_1[0x86] = &PTR_FUN_14abdacd0;
  param_1[0x87] = &PTR_FUN_14abdad20;
  param_1[0x88] = &PTR_FUN_14abdad50;
  *(undefined2 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined1 *)(param_1 + 0x96) = 0xff;
  *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) | 0x40;
  FUN_1446f470e(&local_28,L"PathFollowingComponent",1);
  uVar1 = FUN_14585dbdc();
  local_50 = 0;
  local_58 = 0;
  lVar2 = FUN_14048696c(param_1,local_28,uVar1,uVar1);
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x8d] = lVar2;
    if (lVar2 == 0) goto LAB_145ac7b81;
  }
  else {
    FUN_1456cec3c(lVar2);
    param_1[0x8d] = lVar2;
  }
  local_40 = &LAB_147ea2eba;
  local_38 = 0;
  FUN_145ac7c30(lVar2 + 0x130,local_30,param_1);
LAB_145ac7b81:
  FUN_1446f470e(&local_48,L"ActionsComp",1);
  uVar1 = FUN_14587dd72();
  local_50 = 0;
  local_58 = 0;
  lVar2 = FUN_14048696c(param_1,local_48,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x90] = lVar2;
  *(undefined1 *)(param_1 + 0x96) = DAT_14cb1f000;
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xffffffd4 | 10;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac7c30 FUN_145ac7c30 body=218 status=ok
// SIG undefined FUN_145ac7c30(void)

undefined8
FUN_145ac7c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_4;
  uVar1 = *(undefined4 *)(param_4 + 1);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_14abe5a90;
  uVar4 = FUN_144a3f946();
  puVar3[2] = uVar4;
  *puVar3 = &PTR_FUN_14abe5650;
  puVar3[3] = 0;
  FUN_14485c47a(puVar3 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145ac7d0c(param_1,param_2,&local_58);
  FUN_1449db362(&local_58);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ac7d0c FUN_145ac7d0c body=216 status=ok
// SIG undefined FUN_145ac7d0c(void)

undefined8 * FUN_145ac7d0c(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145ac7df2 FUN_145ac7df2 body=24 status=ok
// SIG undefined FUN_145ac7df2(void)

bool FUN_145ac7df2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 145ac7e0a FUN_145ac7e0a body=160 status=ok
// SIG undefined FUN_145ac7e0a(void)

void FUN_145ac7e0a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar3 = DAT_14cb98640;
  lVar5 = (longlong)(int)DAT_14cb98640;
  DAT_14cb98640 = DAT_14cb98640 + 1;
  if (DAT_14cb98644 < DAT_14cb98640) {
    FUN_145ac7eee(iVar3);
  }
  lVar2 = DAT_14cb98638;
  lVar5 = lVar5 * 0x50;
  *(undefined8 *)(DAT_14cb98638 + lVar5) = param_1;
  lVar1 = *param_2;
  *(longlong *)(lVar2 + 0x10 + lVar5) = lVar1;
  *(undefined8 *)(lVar2 + 0x20 + lVar5) = 0;
  if (lVar1 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    (**(code **)*plVar4)(plVar4,lVar2 + lVar5 + 0x20);
  }
  if (*param_2 != 0) {
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000145ac7e9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x10))(plVar4);
    return;
  }
  return;
}



// FUNCTION 145ac7eb6 FUN_145ac7eb6 body=31 status=ok
// SIG undefined FUN_145ac7eb6(void)

undefined8 FUN_145ac7eb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac7eee FUN_145ac7eee body=155 status=ok
// SIG undefined FUN_145ac7eee(void)

void FUN_145ac7eee(int param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = DAT_14cb98640;
  if (param_1 <= (int)DAT_14cb98640) {
    if (DAT_14cb98644 == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb98640) {
        uVar2 = DAT_14cb98640;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14cb98640 * 3) >> 3) + (longlong)(int)DAT_14cb98640 +
              0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x50,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    DAT_14cb98644 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb98638,param_1,uVar5,0x50,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145ac7f8a FUN_145ac7f8a body=22 status=ok
// SIG undefined FUN_145ac7f8a(void)

void FUN_145ac7f8a(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  FUN_14149a916(uVar1);
  return;
}



// FUNCTION 145ac7fa0 FUN_145ac7fa0 body=505 status=ok
// SIG undefined FUN_145ac7fa0(void)

void FUN_145ac7fa0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  bool bVar9;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98;
  undefined4 local_90;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined8 local_60;
  longlong *plStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x149) == '\0') {
    *(undefined1 *)(param_1 + 0x149) = 1;
    cVar5 = FUN_1405bb4f2(*(undefined8 *)(param_1 + 0x38));
    if (cVar5 == '\0') {
      plVar3 = *(longlong **)(param_1 + 0x10);
      if (plVar3 == (longlong *)0x0) {
LAB_145ac8125:
        local_60 = 0;
        plStack_58 = (longlong *)0x0;
        bVar9 = true;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_145ac8125;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar9 = iVar6 == iVar4;
          if (bVar9) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar9);
        uVar7 = *(undefined8 *)(param_1 + 8);
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
        bVar9 = false;
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        local_60 = uVar7;
        plStack_58 = plVar3;
      }
      plVar3 = plStack_58;
      local_68 = &PTR_LAB_14b432c90;
      local_78 = (undefined ***)0x0;
      local_88[0] = FUN_143e53f9a;
      uVar7 = *(undefined8 *)(param_1 + 0x38);
      local_98 = 0;
      local_90 = 0;
      FUN_1446efa72(&local_98,0,6,0x10);
      local_90 = 6;
      FUN_14149ab7e(local_98,uVar7,local_88);
      uVar7 = FUN_1447210f0(uVar7);
      local_a8 = &local_98;
      cVar5 = FUN_140d5f492(uVar7,2,2,&DAT_14cb8ce70);
      FUN_1449db362(&local_98);
      if (local_88[0] != (code *)0x0) {
        pppuVar8 = &local_68;
        if (local_78 != (undefined ***)0x0) {
          pppuVar8 = local_78;
        }
        (*(code *)(*pppuVar8)[2])(pppuVar8);
      }
      if (!bVar9) {
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
      if (cVar5 == '\0') {
        FUN_14656242c(param_1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145ac81a4 FUN_145ac81a4 body=214 status=ok
// SIG undefined FUN_145ac81a4(void)

void FUN_145ac81a4(longlong *param_1)

{
  FUN_140368b56(param_1 + 0x22);
  FUN_1447a1747(param_1[0x1a],(int)param_1[0x1b]);
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_145ac827a(param_1[0x14],(int)param_1[0x15]);
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_145d24fc7(param_1[7],(int)param_1[8]);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145ac8246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 145ac827a FUN_145ac827a body=64 status=ok
// SIG undefined FUN_145ac827a(void)

void FUN_145ac827a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if ((longlong *)plVar1[-2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-2] + 0x10))();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145ac82ba FUN_145ac82ba body=308 status=ok
// SIG undefined FUN_145ac82ba(void)

wchar_t * FUN_145ac82ba(int param_1)

{
  if (param_1 == 0x10de) {
    return L"NVIDIA";
  }
  if (param_1 < 0x14e4) {
    if (param_1 < 0x106b) {
      if (param_1 == 0) {
        return L"Not Queried";
      }
      if (param_1 == 0x1002) {
        return L"AMD";
      }
      if (param_1 == 0x1010) {
        return L"ImgTec";
      }
    }
    else if (param_1 < 0x1414) {
      if (param_1 == 0x106b) {
        return L"Apple";
      }
      if (param_1 == 0x13b5) {
        return L"ARM";
      }
    }
    else {
      if (param_1 == 0x1414) {
        return L"Microsoft";
      }
      if (param_1 == 0x144d) {
        return L"SamsungAMD";
      }
    }
  }
  else if (param_1 < 0x8086) {
    if (param_1 < 0x5143) {
      if (param_1 == 0x14e4) {
        return L"Broadcom";
      }
      if (param_1 == 0x1eb1) {
        return L"VeriSilicon";
      }
    }
    else {
      if (param_1 == 0x5143) {
        return L"Qualcomm";
      }
      if (param_1 == 0x7a05) {
        return L"Vivante";
      }
    }
  }
  else if (param_1 < 0x10004) {
    if (param_1 == 0x8086) {
      return L"Intel";
    }
    if (param_1 == 0x10003) {
      return L"Kazan";
    }
  }
  else {
    if (param_1 == 0x10004) {
      return L"Codeplay";
    }
    if (param_1 == 0x10005) {
      return L"Mesa";
    }
  }
  return L"Unknown";
}



// FUNCTION 145ac83ee FUN_145ac83ee body=38 status=ok
// SIG undefined FUN_145ac83ee(void)

undefined8 FUN_145ac83ee(undefined8 param_1,int param_2)

{
  FUN_145ac8414();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac8414 FUN_145ac8414 body=197 status=ok
// SIG undefined FUN_145ac8414(void)

void FUN_145ac8414(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8cc500;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_145ac84d9(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_140fe7f26(param_1);
  return;
}



// FUNCTION 145ac84d9 FUN_145ac84d9 body=38 status=ok
// SIG undefined FUN_145ac84d9(void)

void FUN_145ac84d9(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145ac8500(param_1);
    param_1 = param_1 + 0x50;
  }
  return;
}



// FUNCTION 145ac8500 FUN_145ac8500 body=78 status=ok
// SIG undefined FUN_145ac8500(void)

void FUN_145ac8500(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145ac855a FUN_145ac855a body=356 status=ok
// SIG undefined FUN_145ac855a(void)

undefined8 * FUN_145ac855a(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a892670;
  param_1[5] = &PTR_FUN_14a892c50;
  param_1[6] = &PTR_LAB_14a892c90;
  param_1[0x55] = 0x4120000040a00000;
  param_1[0x56] = 0x43af0000;
  *(undefined1 *)(param_1 + 0x57) = 0;
  *(undefined8 *)((longlong)param_1 + 700) = 0x45c6c00042480000;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0xffaaaaaa;
  param_1[0x59] = 0;
  *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0x3f8000003f000000;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0x3e19999a3f800000;
  *(undefined1 **)((longlong)param_1 + 0x2e4) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x2ec) = 0x3e99999a3f800000;
  *(undefined8 *)((longlong)param_1 + 0x2f4) = 0x417000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0x3ba3d70a;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xfc | 2;
  param_1[99] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad38d0) {
    FUN_144b3d300(&DAT_14cad38d0);
    if (DAT_14cad38d0 == -1) {
      FUN_1458531b6(&DAT_14cad38b8,
                    L"/Engine/EngineSky/VolumetricClouds/m_SimpleVolumetricCloud_Inst.m_SimpleVolumetricCloud_Inst"
                    ,0);
      atexit(FUN_1434a0125);
      _Init_thread_footer(&DAT_14cad38d0);
    }
  }
  lVar1 = DAT_14cad38c8;
  if (DAT_14c950c29 == '\x01') {
    if (DAT_14cad38c8 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = DAT_14cad38c8;
    }
  }
  param_1[0x59] = lVar1;
  return param_1;
}



// FUNCTION 145ac86be FUN_145ac86be body=40 status=ok
// SIG undefined FUN_145ac86be(void)

undefined8 FUN_145ac86be(undefined8 param_1,int param_2)

{
  FUN_145ac86e6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145ac86e6 FUN_145ac86e6 body=200 status=ok
// SIG undefined FUN_145ac86e6(void)

void FUN_145ac86e6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ae3c8c0;
  if (*(char *)((longlong)param_1 + 0xf1) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xf1) = 0;
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_145ac87ae(param_1 + 0x14);
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xc];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[10];
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
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 145ac87ae FUN_145ac87ae body=53 status=ok
// SIG undefined FUN_145ac87ae(void)

void FUN_145ac87ae(longlong *param_1)

{
  FUN_145ac87e4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145ac87e4 FUN_145ac87e4 body=90 status=ok
// SIG undefined FUN_145ac87e4(void)

void FUN_145ac87e4(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 145ac883e FUN_145ac883e body=167 status=ok
// SIG undefined FUN_145ac883e(void)

bool FUN_145ac883e(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


