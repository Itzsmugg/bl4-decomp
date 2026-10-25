// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14290544c FUN_14290544c body=99 status=ok
// SIG undefined FUN_14290544c(void)

void FUN_14290544c(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1429054b0 FUN_1429054b0 body=450 status=ok
// SIG undefined FUN_1429054b0(void)

void FUN_1429054b0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,4);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1429055cb:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_142905608:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 4;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_142905506;
LAB_1429054fb:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_142905506:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x3fea) goto code_r0x000142905532;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142905588:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142905608;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1429055cb;
code_r0x000142905532:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_142905588;
    }
  }
  goto LAB_1429054fb;
}



// FUNCTION 142905672 FUN_142905672 body=450 status=ok
// SIG undefined FUN_142905672(void)

void FUN_142905672(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,4);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_14290578d:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1429057ca:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 4;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1429056c8;
LAB_1429056bd:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1429056c8:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x3fea) goto code_r0x0001429056f4;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_14290574a:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1429057ca;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_14290578d;
code_r0x0001429056f4:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_14290574a;
    }
  }
  goto LAB_1429056bd;
}



// FUNCTION 142905834 FUN_142905834 body=99 status=ok
// SIG undefined FUN_142905834(void)

void FUN_142905834(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 142905898 FUN_142905898 body=14 status=ok
// SIG undefined FUN_142905898(void)

void FUN_142905898(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  *(int *)(param_1 + 0xc) = param_2;
  FUN_1429058a6();
  return;
}



// FUNCTION 1429058a6 FUN_1429058a6 body=453 status=ok
// SIG undefined FUN_1429058a6(void)

void FUN_1429058a6(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x18);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1429059c4:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_142905a01:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x18;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1429058ff;
LAB_1429058f4:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1429058ff:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xaa7) goto code_r0x00014290592b;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 6 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_142905981:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_142905a01;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1429059c4;
code_r0x00014290592b:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_142905981;
    }
  }
  goto LAB_1429058f4;
}



// FUNCTION 142905a6c FUN_142905a6c body=85 status=ok
// SIG undefined FUN_142905a6c(void)

void FUN_142905a6c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_1429058a6();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 142905ac2 FUN_142905ac2 body=95 status=ok
// SIG undefined FUN_142905ac2(void)

void FUN_142905ac2(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    uVar3 = *param_3;
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) {
        return;
      }
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    param_1 = (longlong *)*param_1;
    if (param_1 != (longlong *)0x0) {
      (**(code **)(*param_1 + 0x240))(param_1,uVar3);
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
                    /* WARNING: Could not recover jumptable at 0x000142905b16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142905b5e FUN_142905b5e body=64 status=ok
// SIG undefined FUN_142905b5e(void)

undefined8 * FUN_142905b5e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_149f19d90;
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 142905b9e FUN_142905b9e body=429 status=ok
// SIG undefined FUN_142905b9e(void)

void FUN_142905b9e(longlong *param_1,undefined8 param_2,int *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  
  plVar4 = (longlong *)param_1[1];
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  iVar3 = *param_3;
  iVar9 = (int)plVar4[1];
  do {
    if (iVar9 == 0) {
      return;
    }
    LOCK();
    iVar6 = (int)plVar4[1];
    bVar11 = iVar9 == iVar6;
    if (bVar11) {
      *(int *)(plVar4 + 1) = iVar9 + 1;
      iVar6 = iVar9;
    }
    iVar9 = iVar6;
    UNLOCK();
  } while (!bVar11);
  param_1 = (longlong *)*param_1;
  if (param_1 == (longlong *)0x0) goto LAB_142905ce1;
  plVar2 = param_1 + 0x3d;
  if (((int)param_1[0x3e] == 0) || ((longlong *)*plVar2 == (longlong *)0x0)) {
LAB_142905c35:
    iVar9 = (int)param_1[0x3c];
    if (iVar3 <= iVar9) {
      if ((int)param_1[0x3e] == 0) {
        *(int *)(param_1 + 0x3c) = iVar9 + 1;
        *(undefined1 *)((longlong)param_1 + 0x1e4) = 1;
LAB_142905cb6:
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if ((longlong *)*plVar2 != (longlong *)0x0) {
          cVar7 = (**(code **)(*(longlong *)*plVar2 + 0x30))();
          if (cVar7 == '\0') {
            iVar9 = (int)param_1[0x3c];
          }
          else {
            if ((int)param_1[0x3e] == 0) {
              plVar10 = (longlong *)0x0;
            }
            else {
              plVar10 = (longlong *)*plVar2;
            }
            iVar9 = (**(code **)(*plVar10 + 0x58))();
          }
          *(int *)(param_1 + 0x3c) = iVar9 + 1;
          *(undefined1 *)((longlong)param_1 + 0x1e4) = 1;
          if ((int)param_1[0x3e] != 0) {
            puVar5 = (undefined8 *)*plVar2;
            if (puVar5 == (undefined8 *)0x0) goto LAB_142905cbe;
            (**(code **)*puVar5)(puVar5,0);
            FUN_1446efa72(plVar2,0,0,0x10);
            *(undefined4 *)(param_1 + 0x3e) = 0;
          }
          goto LAB_142905cb6;
        }
        *(int *)(param_1 + 0x3c) = iVar9 + 1;
        *(undefined1 *)((longlong)param_1 + 0x1e4) = 1;
      }
LAB_142905cbe:
      param_1[0x3d] = 0;
      *(undefined4 *)(param_1 + 0x3e) = 0;
    }
  }
  else {
    cVar7 = (**(code **)(*(longlong *)*plVar2 + 0x30))();
    if (cVar7 == '\0') {
      if ((((int)param_1[0x3e] != 0) && ((longlong *)*plVar2 != (longlong *)0x0)) &&
         (cVar7 = (**(code **)(*(longlong *)*plVar2 + 0x30))(), cVar7 != '\0')) {
        if ((int)param_1[0x3e] == 0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)*plVar2;
        }
        uVar8 = (**(code **)(*plVar10 + 0x58))();
        *(undefined4 *)(param_1 + 0x3c) = uVar8;
      }
      goto LAB_142905c35;
    }
  }
  (**(code **)(*param_1 + 0x240))(param_1,iVar3);
LAB_142905ce1:
  LOCK();
  plVar2 = plVar4 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000142905d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x10))(plVar4);
      return;
    }
  }
  return;
}



// FUNCTION 142905d88 FUN_142905d88 body=64 status=ok
// SIG undefined FUN_142905d88(void)

undefined8 * FUN_142905d88(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_149f19db0;
  plVar2 = (longlong *)param_1[2];
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



// FUNCTION 142905dd8 FUN_142905dd8 body=1732 status=ok
// SIG undefined FUN_142905dd8(void)

void FUN_142905dd8(longlong *param_1,longlong param_2,double *param_3)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  undefined1 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  float *pfVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  float *local_170;
  longlong local_168;
  float local_158;
  float fStack_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 local_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  longlong local_100;
  longlong *local_f8;
  undefined4 local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  char local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_198;
  dVar3 = param_3[2];
  dVar4 = param_3[3];
  fVar19 = 0.0;
  dVar14 = dVar3;
  if (*(int *)(*param_1 + 0x224) == 0) {
    if (*(int *)((longlong)param_3 + 0x24) == 0) {
      *(undefined4 *)param_1[1] = 0;
    }
    iVar6 = *(int *)param_1[2];
    if (iVar6 == 0) {
      dVar14 = (double)(float)((double)*(float *)param_1[3] *
                              (dVar3 / (double)*(float *)(param_3 + 4)));
      fVar19 = (float)(dVar14 - dVar3);
    }
    else {
      if (iVar6 == 2) {
        puVar9 = (undefined4 *)param_1[1];
        fVar13 = (*(float *)param_1[3] - *(float *)(param_3 + 4)) * 0.5;
      }
      else {
        if (iVar6 != 3) goto LAB_142905ef2;
        puVar9 = (undefined4 *)param_1[1];
        fVar13 = *(float *)param_1[3] - *(float *)(param_3 + 4);
      }
      auVar15 = roundps(ZEXT416((uint)fVar13),ZEXT416((uint)fVar13),1);
      *puVar9 = auVar15._0_4_;
    }
  }
LAB_142905ef2:
  fVar13 = *(float *)(param_2 + 0x28);
  fVar17 = *(float *)(param_2 + 0x30);
  fVar16 = (float)dVar14;
  iVar6 = *(int *)(param_2 + 0x38);
  fVar18 = fVar16 - (fVar13 + fVar17);
  if (iVar6 == 0) {
LAB_142905f63:
    local_158 = fVar18;
    if (fVar18 <= 0.0) {
      local_158 = 0.0;
    }
  }
  else {
    pfVar10 = (float *)&DAT_14c84635c;
    if ((*(byte *)(*(longlong *)(param_2 + 0x10) + 0x31) & 0x20) != 0) {
      pfVar10 = (float *)(*(longlong *)(param_2 + 0x10) + 0x168);
    }
    local_158 = *pfVar10;
    if (fVar18 <= *pfVar10) {
      local_158 = fVar18;
    }
    if (local_158 <= 0.0) {
      local_158 = 0.0;
    }
    if (iVar6 != 1) {
      if (iVar6 == 3) {
        fVar13 = (fVar16 - local_158) - fVar17;
      }
      else {
        if (iVar6 != 2) goto LAB_142905f63;
        fVar13 = (fVar13 + (fVar16 - local_158) * 0.5) - fVar17;
      }
    }
  }
  fVar17 = *(float *)(param_2 + 0x2c);
  fVar16 = *(float *)(param_2 + 0x34);
  fVar18 = (float)dVar4;
  iVar6 = *(int *)(param_2 + 0x3c);
  if (iVar6 == 0) {
    fStack_154 = fVar18 - (fVar17 + fVar16);
    if (fStack_154 <= 0.0) {
      fStack_154 = 0.0;
    }
    local_100 = *(longlong *)(param_2 + 0x10);
  }
  else {
    local_100 = *(longlong *)(param_2 + 0x10);
    puVar12 = &DAT_14c84635c;
    if ((*(byte *)(local_100 + 0x31) & 0x20) != 0) {
      puVar12 = (undefined8 *)(local_100 + 0x168);
    }
    fVar20 = fVar18 - (fVar17 + fVar16);
    fStack_154 = *(float *)((longlong)puVar12 + 4);
    if (fVar20 <= *(float *)((longlong)puVar12 + 4)) {
      fStack_154 = fVar20;
    }
    if (fStack_154 <= 0.0) {
      fStack_154 = 0.0;
    }
    if (iVar6 != 1) {
      if (iVar6 == 3) {
        fVar17 = (fVar18 - fStack_154) - fVar16;
      }
      else if (iVar6 == 2) {
        fVar17 = (fVar17 + (fVar18 - fStack_154) * 0.5) - fVar16;
      }
      else {
        fStack_154 = fVar20;
        if (fVar20 <= 0.0) {
          fStack_154 = 0.0;
        }
      }
    }
  }
  lVar7 = param_1[4];
  lVar8 = param_1[3];
  fStack_120 = (float)((double)fVar17 + param_3[1] + 0.0);
  fStack_124 = (float)((double)*(float *)param_1[1] + (double)fVar13 + *param_3);
  local_14c = 0x3f800000;
  local_148 = CONCAT44(fStack_120,fStack_124);
  local_a0 = *(char *)(local_100 + 0x198);
  if (DAT_14c96b1e0 == '\0') {
    if (local_a0 != '\0') {
      local_a8 = *(ulonglong *)(local_100 + 400);
      local_b8 = *(undefined8 *)(local_100 + 0x180);
      uStack_b0 = *(undefined8 *)(local_100 + 0x188);
      goto LAB_14290637e;
    }
LAB_1429060ef:
    uVar5 = *(undefined1 *)(lVar8 + 0x34);
    fStack_130 = *(float *)(lVar8 + 8);
    fStack_11c = *(float *)(lVar8 + 0x1c);
    fVar13 = *(float *)(lVar8 + 0x20);
    fVar17 = *(float *)(lVar8 + 0x28);
    fVar16 = *(float *)(lVar8 + 0x24);
    fVar18 = fStack_124 * fVar13 + fVar17 * fStack_120 + *(float *)(lVar8 + 0x30);
    fVar20 = fStack_124 * fStack_11c + fVar16 * fStack_120 + *(float *)(lVar8 + 0x2c);
    fVar21 = fVar13 * 0.0 + fVar17;
    fVar22 = fStack_11c * 0.0 + fVar16;
    fVar13 = fVar17 * 0.0 + fVar13;
    fStack_11c = fVar16 * 0.0 + fStack_11c;
    local_128 = fStack_120 * fStack_130 + *(float *)(lVar8 + 0x10);
    fStack_12c = fStack_124 * fStack_130 + *(float *)(lVar8 + 0xc);
    plVar11 = *(longlong **)(param_2 + 0x18);
    local_138 = local_158;
    fStack_134 = fStack_154;
    if (plVar11 == (longlong *)0x0) {
      local_118 = CONCAT44(fVar22,fVar13);
      uStack_110 = CONCAT44(fVar20,fVar21);
      local_108 = CONCAT35(local_108._5_3_,CONCAT14(uVar5,fVar18)) & 0xffffff01ffffffff;
LAB_1429062a8:
      local_f8 = (longlong *)0x0;
      goto LAB_1429062bc;
    }
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    local_118 = CONCAT44(fVar22,fVar13);
    uStack_110 = CONCAT44(fVar20,fVar21);
    local_108 = CONCAT17(local_f0._2_1_,CONCAT25((undefined2)local_f0,CONCAT14(uVar5,fVar18))) &
                0xffffff01ffffffff;
  }
  else {
    if (local_a0 == '\0') goto LAB_1429060ef;
    local_b8 = *(undefined8 *)(local_100 + 0x180);
    uStack_b0 = *(undefined8 *)(local_100 + 0x188);
    local_a8 = *(ulonglong *)(local_100 + 400) ^ 0x80000000;
LAB_14290637e:
    fVar13 = (float)*(double *)(local_100 + 0x170);
    if (DAT_14c96b1e0 != '\0') {
      fVar13 = (0.5 - fVar13) + 0.5;
    }
    local_140 = CONCAT44((float)*(double *)(local_100 + 0x178),fVar13);
    local_178 = &local_140;
    local_168 = lVar8 + 0x1c;
    local_138 = *(float *)(lVar8 + 8);
    local_170 = &local_138;
    fStack_134 = (float)*(undefined8 *)(lVar8 + 0xc);
    fStack_130 = (float)((ulonglong)*(undefined8 *)(lVar8 + 0xc) >> 0x20);
    FUN_146978c22(&local_f0,&local_158,&local_14c,&local_b8);
    local_100 = *(longlong *)(param_2 + 0x10);
    plVar11 = *(longlong **)(param_2 + 0x18);
    local_138 = local_f0;
    fStack_134 = fStack_ec;
    if (plVar11 == (longlong *)0x0) {
      local_108 = local_c0;
      fStack_130 = fStack_e8;
      fStack_12c = fStack_e4;
      local_118 = local_d0;
      uStack_110 = uStack_c8;
      local_128 = local_e0;
      fStack_124 = fStack_dc;
      fStack_120 = fStack_d8;
      fStack_11c = fStack_d4;
      goto LAB_1429062a8;
    }
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    local_108 = local_c0;
    fStack_130 = fStack_e8;
    fStack_12c = fStack_e4;
    local_128 = local_e0;
    fStack_124 = fStack_dc;
    fStack_120 = fStack_d8;
    fStack_11c = fStack_d4;
    local_118 = local_d0;
    uStack_110 = uStack_c8;
  }
  LOCK();
  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  UNLOCK();
  LOCK();
  plVar1 = plVar11 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  local_f8 = plVar11;
  if ((int)*plVar1 == 0) {
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar2 = (int *)((longlong)plVar11 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
LAB_1429062bc:
  FUN_1402018be(lVar7,&local_138);
  plVar11 = local_f8;
  if (local_f8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_f8)(local_f8);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  *(float *)param_1[1] = fVar19 + *(float *)param_1[1];
  if ((local_90 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429064d6 FUN_1429064d6 body=66 status=ok
// SIG undefined FUN_1429064d6(void)

void FUN_1429064d6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f150c0;
  FUN_146aa7741(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 142906518 FUN_142906518 body=724 status=ok
// SIG undefined FUN_142906518(void)

void FUN_142906518(void)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146281b26();
  lVar2 = 0;
  local_38 = 0;
  FUN_14153156c(&DAT_14c98f0c8,L"Slate.Spinbox.MouseMoveOptimization",&DAT_14c75ef58,&DAT_149dfb77a)
  ;
  atexit(FUN_142901f98);
  local_38 = 0;
  FUN_141471170(&DAT_14c98f0f0,L"Slate.AllowBackgroundBlurWidgets",&DAT_14c75ef5c,
                L"If 0, no background blur widgets will be rendered");
  atexit(FUN_1429021d8);
  local_38 = 0;
  FUN_141471170(&DAT_14c98f100,L"Slate.BackgroundBlurMaxKernelSize",&DAT_14c75ef60,
                L"The maximum allowed kernel size.  Note: Very large numbers can cause a huge decrease in performance"
               );
  atexit(FUN_14290221d);
  local_38 = 1;
  FUN_141471170(&DAT_14c98f110,L"Slate.BackgroundBlurDownsample",&DAT_14c75ef64,&DAT_149dfb77a);
  atexit(FUN_142902262);
  local_38 = 0x40;
  FUN_141471170(&DAT_14c98f120,L"Slate.ForceBackgroundBlurLowQualityOverride",&DAT_14c98f130,
                L"Whether or not to force a slate brush to be used instead of actually blurring the background"
               );
  atexit(FUN_1429022a7);
  FUN_145b26214();
  local_30 = "SBorder";
  local_28 = 7;
  local_24 = 0;
  uVar1 = FUN_14001a6c0(&local_30,1);
  DAT_14c98f138 = (ulonglong)uVar1;
  FUN_140eb2e18();
  FUN_140a17f84();
  FUN_1410e286a();
  FUN_145a5ea32();
  FUN_146011df4();
  local_38 = 0;
  FUN_1415c789c(&DAT_14c98f148,L"SafeZone.Scale",&DAT_14c75ef68,L"The safezone scale.");
  atexit(FUN_142902c49);
  local_38 = 0;
  FUN_14153156c(&DAT_14c98f160,L"SafeZone.EnableScale",&DAT_14c98f158,
                L"IS the safe zone scale enabled?");
  atexit(FUN_142902c8e);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_149f15760 + lVar2),L"/Script/Slate",
                  *(undefined8 *)((longlong)&PTR_u_EStretchDirection_149f15768 + lVar2),
                  *(undefined8 *)((longlong)&PTR_DAT_149f15770 + lVar2));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x40);
  FUN_1458fe812();
  local_38 = 0;
  FUN_14627302a(&DAT_14c98f1e0,L"Slate.OverrideScissorRect",1,
                L"Whether to allow Slate to apply a scissor clip to UI elements to prevent certain artifacts.  You might need to disable this if you are drawing UI over a mirror backbuffer while in VR."
               );
  atexit(FUN_142902d5d);
  FUN_140d8d6ec();
  FUN_146281bdc();
  DAT_14c98f1f0 = 0;
  DAT_14c98f1f8 = 0;
  atexit(FUN_14290392d);
  FUN_140ca8d78(&DAT_14c98f200);
  atexit((_func_5014 *)&LAB_142903988);
  FUN_140ca8d78(&DAT_14c98f570);
  atexit((_func_5014 *)&LAB_142903994);
  FUN_140ca8d78(&DAT_14c98f8e0);
  atexit((_func_5014 *)&LAB_1429039a0);
  FUN_140ca8d78(&DAT_14c98fc50);
  atexit((_func_5014 *)&LAB_1429039ac);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_146281c8c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429067f0 FUN_1429067f0 body=55 status=ok
// SIG undefined FUN_1429067f0(void)

void FUN_1429067f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9902a8 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c9902a8 = FUN_14171c317(FUN_146281f36,uVar1,L"EProgressBarFillType");
  }
  return;
}



// FUNCTION 142906827 FUN_142906827 body=55 status=ok
// SIG undefined FUN_142906827(void)

void FUN_142906827(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9902c0 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c9902c0 = FUN_14171c317(FUN_146281f65,uVar1,L"EProgressBarFillStyle");
  }
  return;
}



// FUNCTION 142906878 FUN_142906878 body=69 status=ok
// SIG undefined FUN_142906878(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142906878(void)

{
  _DAT_14c9902d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429068ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9902d8,1);
  return;
}



// FUNCTION 1429068be FUN_1429068be body=19 status=ok
// SIG undefined FUN_1429068be(void)

void FUN_1429068be(longlong param_1,longlong param_2)

{
  FUN_140a58896(param_1 + 0x1e0,param_2 + 0x1a8);
  return;
}



// FUNCTION 1429068d2 FUN_1429068d2 body=213 status=ok
// SIG undefined FUN_1429068d2(void)

void FUN_1429068d2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f1bf60;
  param_1[0x4d] = &PTR_FUN_149f1c1a0;
  FUN_14032aaf4(param_1 + 0x4d,0);
  if (DAT_14c968098 != 0) {
    FUN_140457ffc(DAT_14c968098 + 0xf0,param_1);
  }
  if (*(char *)(param_1 + 0x67) == '\x01') {
    if (*(char *)((longlong)param_1 + 0x32c) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x32c) = 0;
    }
    if (param_1[0x5f] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x67) = 0;
  }
  plVar3 = (longlong *)param_1[0x5e];
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
  FUN_1402bc654(param_1 + 0x4d);
  *param_1 = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x3f);
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 1429069a8 FUN_1429069a8 body=670 status=ok
// SIG undefined FUN_1429069a8(void)

void FUN_1429069a8(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined8 local_f0;
  char local_da;
  undefined1 local_d9;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8 [2];
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80;
  undefined1 local_7f;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_d9 = param_8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined1 *)(param_1 + 0x39d) = 1;
  if ((*(char *)(param_1 + 0x39c) != '\x01') || (cVar6 = DAT_14c75ef70, DAT_14c979cd2 != '\0')) {
    cVar6 = '\0';
  }
  if (*(char *)(param_1 + 0x39e) != cVar6) {
    FUN_14032aaf4(param_1 + 0x268,0);
    *(char *)(param_1 + 0x39e) = cVar6;
  }
  if (cVar6 != '\0') {
    lVar3 = *param_2;
    local_b8 = *(undefined8 *)(lVar3 + 0xd0);
    local_78 = *(longlong *)(lVar3 + 0xd8);
    local_c8[0] = *(undefined8 *)(lVar3 + 200);
    local_da = FUN_14020e8f6(*(undefined8 *)(param_1 + 0x2e8),local_c8,&local_78);
    *(longlong *)(*(longlong *)(param_1 + 0x2e8) + 0xa8) = param_1;
    lVar3 = *(longlong *)(param_1 + 0x2e8);
    uVar4 = param_4[1];
    *(undefined8 *)(lVar3 + 0xb0) = *param_4;
    *(undefined8 *)(lVar3 + 0xb8) = uVar4;
    local_70 = *(longlong *)(param_1 + 0x2e8);
    local_50 = (undefined4)param_2[5];
    local_58 = param_2[4];
    local_68 = (undefined4)param_2[2];
    uStack_64 = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_60 = (undefined4)param_2[3];
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_78 = *param_2;
    local_4c = 1;
    *(undefined4 *)(local_70 + 0xe0) = *(undefined4 *)(local_78 + 0xe0);
    local_f0 = param_7;
    local_f8 = param_6;
    cVar6 = FUN_146ad6c58(param_1,param_5,param_3,param_4);
    if ((local_da != '\0') || (cVar6 != '\0')) {
      FUN_140163244(*(undefined8 *)(param_1 + 0x2b8),0x80);
      *(undefined1 *)(param_1 + 0x2e0) = 1;
    }
    local_a8 = 0;
    local_98 = param_7;
    local_90 = param_5;
    local_80 = local_d9;
    local_7f = 1;
    if ((*(byte *)(param_1 + 0x31) & 0x40) == 0) {
      local_88 = 0x3f800000;
    }
    else {
      local_88 = *(undefined4 *)(param_1 + 0x3c);
    }
    local_84 = param_6;
    local_b8 = *param_4;
    uStack_b0 = *(undefined4 *)(param_4 + 1);
    uStack_ac = *(undefined4 *)((longlong)param_4 + 0xc);
    local_a0 = &local_78;
    FUN_14020eb82(param_1 + 0x268,local_c8);
    if (((*(byte *)((longlong)param_2 + 0x2c) & 1) != 0) &&
       ((*(byte *)(param_1 + 0x39) & 0x10) != 0)) {
      lVar3 = param_2[1];
      local_d8 = *(undefined8 *)(param_1 + 0x2e8);
      local_d0 = *(longlong **)(param_1 + 0x2f0);
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
        UNLOCK();
      }
      FUN_1469482d6(lVar3,&local_d8);
      plVar5 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_d0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_d0)(local_d0);
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
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1400c0302(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 142906c5d FUN_142906c5d body=69 status=ok
// SIG undefined FUN_142906c5d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142906c5d(void)

{
  _DAT_14c9902e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142906c9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9902e8,1);
  return;
}



// FUNCTION 142906ca2 FUN_142906ca2 body=2511 status=ok
// SIG undefined FUN_142906ca2(void)

undefined4
FUN_142906ca2(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
             ulonglong param_5,int param_6,longlong param_7,char param_8)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong *plVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  char cVar14;
  uint uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  undefined7 uVar21;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_218 [32];
  ulonglong local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  byte local_1e0;
  undefined4 local_1d4;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [16];
  longlong *local_198;
  longlong *local_188;
  longlong *local_178;
  int local_170;
  longlong *local_168;
  longlong *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  undefined **local_108;
  undefined2 local_100;
  undefined1 uStack_fe;
  undefined1 uStack_fd;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  float local_f4;
  float fStack_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  undefined4 uStack_d4;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined7 local_a0;
  undefined4 uStack_99;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (param_8 == '\0') {
    local_1e0 = 0;
  }
  else {
    local_1e0 = *(byte *)(param_1 + 0x3a);
  }
  bVar12 = ((local_1e0 ^ 1) & *(byte *)(param_1 + 0x298)) << 5;
  bVar13 = bVar12 | 0x40;
  if (*(char *)(param_1 + 0x2c5) == '\0') {
    bVar13 = bVar12;
  }
  bVar12 = bVar13 + 4;
  if (*(char *)(param_1 + 0x2c1) != '\0') {
    bVar12 = bVar13;
  }
  bVar13 = bVar12 | 0x80;
  if (*(char *)(param_1 + 0x2c2) == '\0') {
    bVar13 = bVar12;
  }
  if (*(char *)(param_1 + 0x2c3) == '\0') {
    bVar12 = bVar13 | 1;
  }
  else {
    bVar12 = bVar13 | 2;
    if (*(char *)(param_1 + 0x2c6) == '\0') {
      bVar12 = bVar13;
    }
  }
  uVar17 = 0;
  plVar22 = *(longlong **)(param_1 + 0x270);
  local_1d0 = param_2;
  if (plVar22 == (longlong *)0x0) {
LAB_142906e12:
    if (*(char *)(param_1 + 0x2c0) == '\x01') {
      local_1e8 = param_7;
      local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,param_6);
      local_1f8 = param_5;
      uVar16 = FUN_1400c0302(param_1,param_2,param_3);
      plVar22 = (longlong *)0x0;
      uVar23 = 1;
      goto LAB_14290743b;
    }
    uVar21 = (undefined7)(uVar17 >> 8);
    local_1d4 = (undefined4)CONCAT71(uVar21,1);
    local_1c0 = (longlong *)0x0;
    plVar22 = (longlong *)0x0;
    local_1c8 = CONCAT71(uVar21,1);
LAB_142906e6a:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9903b0) && (FUN_144b3d300(&DAT_14c9903b0), DAT_14c9903b0 == -1)) {
      FUN_14627c888(&DAT_14c990300,&DAT_149e1e2f4);
      atexit(FUN_142907672);
      _Init_thread_footer(&DAT_14c9903b0);
    }
    if (DAT_14c990318 == '\0') {
      puVar18 = (undefined8 *)&DAT_14c990308;
    }
    else if (DAT_14c990318 == '\x01') {
      puVar18 = (undefined8 *)FUN_1400c06fe(&DAT_14c990308);
    }
    else if (DAT_14c990318 == '\x03') {
      puVar18 = (undefined8 *)(param_7 + 0x20);
    }
    else {
      puVar18 = (undefined8 *)(param_7 + 0x10);
    }
    local_158 = *puVar18;
    uStack_150 = puVar18[1];
    local_1f0 = &local_158;
    local_108 = *(undefined ***)((longlong)param_3 + 0xc);
    uVar16 = *(undefined4 *)(param_3 + 1);
    local_100 = (undefined2)uVar16;
    uStack_fe = (undefined1)((uint)uVar16 >> 0x10);
    uStack_fd = (undefined1)((uint)uVar16 >> 0x18);
    uStack_fc = 0;
    uStack_f8 = 0;
    local_f4 = (float)*param_3;
    fStack_f0 = (float)((ulonglong)*param_3 >> 0x20);
    fStack_ec = *(float *)((longlong)param_3 + 0x1c);
    uStack_e8 = (undefined **)param_3[4];
    fStack_e0 = *(float *)(param_3 + 5);
    fStack_dc = (float)*(undefined8 *)((longlong)param_3 + 0x2c);
    local_d8 = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x2c) >> 0x20);
    uStack_d4 = CONCAT31(uStack_d4._1_3_,
                         (byte)uStack_d4 & 0xfc | *(char *)((longlong)param_3 + 0x34) * '\x02' & 2U)
    ;
    local_1f8 = CONCAT71(local_1f8._1_7_,bVar12);
    FUN_140239bd2(param_5,param_6,&local_108,&DAT_14c990300);
    param_2 = local_1d0;
    local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,param_6);
    local_1f8 = param_5;
    local_1e8 = param_7;
    uVar16 = FUN_1400c0302(param_1,local_1d0,param_3,param_4);
    uVar23 = local_1c8;
    if ((char)local_1d4 != '\0') goto LAB_14290743b;
  }
  else {
    uVar17 = (ulonglong)*(uint *)(plVar22 + 1);
    do {
      uVar15 = (uint)uVar17;
      if (uVar15 == 0) goto LAB_142906e12;
      LOCK();
      uVar3 = *(uint *)(plVar22 + 1);
      if (uVar15 == uVar3) {
        *(uint *)(plVar22 + 1) = uVar15 + 1;
      }
      else {
        uVar17 = (ulonglong)uVar3;
      }
      UNLOCK();
    } while (uVar15 != uVar3);
    plVar9 = *(longlong **)(param_1 + 0x268);
    if (plVar9 == (longlong *)0x0) {
      if (*(char *)(param_1 + 0x2c0) != '\0') {
        local_1e8 = param_7;
        local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,param_6);
        local_1f8 = param_5;
        uVar16 = FUN_1400c0302(param_1,param_2,param_3);
        uVar23 = 0;
        goto LAB_14290743b;
      }
      local_1d4 = (undefined4)CONCAT71((int7)(uVar17 >> 8),1);
      local_1c0 = (longlong *)0x0;
      local_1c8 = 0;
      goto LAB_142906e6a;
    }
    local_1e8 = CONCAT71(local_1e8._1_7_,param_8);
    local_1f0 = (undefined8 *)param_7;
    local_1f8 = CONCAT44(local_1f8._4_4_,param_6);
    (**(code **)(*plVar9 + 8))(plVar9,param_3,param_4,param_5);
    local_1c0 = plVar9;
    if (*(char *)(param_1 + 0x2c0) == '\x01') {
    }
    else {
      lVar20 = (**(code **)(*plVar9 + 0x18))(plVar9);
      if (lVar20 == 0) {
        local_1d4 = 0;
        local_1c8 = 0;
        goto LAB_142906e6a;
      }
      LOCK();
      *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
      UNLOCK();
      local_108 = *(undefined ***)((longlong)param_3 + 0xc);
      uVar16 = *(undefined4 *)(param_3 + 1);
      local_100 = (undefined2)uVar16;
      uStack_fe = (undefined1)((uint)uVar16 >> 0x10);
      uStack_fd = (undefined1)((uint)uVar16 >> 0x18);
      uStack_fc = 0;
      uStack_f8 = 0;
      local_f4 = (float)*param_3;
      fStack_f0 = (float)((ulonglong)*param_3 >> 0x20);
      fStack_ec = *(float *)((longlong)param_3 + 0x1c);
      uStack_e8 = (undefined **)param_3[4];
      fStack_e0 = *(float *)(param_3 + 5);
      fStack_dc = (float)*(undefined8 *)((longlong)param_3 + 0x2c);
      local_d8 = (float)((ulonglong)*(undefined8 *)((longlong)param_3 + 0x2c) >> 0x20);
      uStack_d4 = CONCAT31(uStack_d4._1_3_,
                           (byte)uStack_d4 & 0xfc |
                           *(char *)((longlong)param_3 + 0x34) * '\x02' & 2U);
      local_1f0 = (undefined8 *)param_7;
      local_1f8 = CONCAT71(local_1f8._1_7_,bVar12);
      local_168 = plVar9;
      local_160 = plVar22;
      FUN_1407f1d36(param_5,param_6);
    }
    param_2 = local_1d0;
    local_1e8 = param_7;
    local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,param_6);
    local_1f8 = param_5;
    uVar16 = FUN_1400c0302(param_1,local_1d0,param_3,param_4);
    uVar23 = 0;
  }
  plVar9 = local_1c0;
  cVar14 = (**(code **)(*local_1c0 + 0x70))(local_1c0);
  if (cVar14 != '\0') {
    local_1d4 = uVar16;
    (**(code **)(*DAT_14c98e618 + 0x68))(DAT_14c98e618,&local_108);
    uStack_e8 = local_108;
    local_d0 = &local_158;
    local_138 = 0;
    local_130 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_12c = 0xffffffff00000080;
    local_124 = 0;
    local_118 = 0;
    local_110 = 0;
    local_100 = 0;
    uStack_fe = 0;
    uStack_fc = 0;
    uStack_f8 = 0;
    fStack_f0 = 0.0;
    fStack_ec = 0.0;
    local_108 = &PTR_FUN_149eda650;
    fStack_e0 = SUB84(uStack_e8,0);
    fStack_dc = (float)((ulonglong)uStack_e8 >> 0x20);
    local_d8 = (float)DAT_14c84635c;
    uStack_d4 = (undefined4)((ulonglong)DAT_14c84635c >> 0x20);
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = (longlong *)0x0;
    local_b0 = 10;
    local_a8 = 0x3f800000;
    local_a4 = 0;
    local_a0 = 0;
    uStack_99 = 0;
    (**(code **)(*plVar9 + 0x60))(plVar9,local_1a8,param_3,&local_108);
    plVar19 = local_b8;
    local_108 = &PTR_FUN_149eda650;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)plVar19 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
    local_110 = 0;
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    FUN_1405535a6(&local_158);
    plVar19 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar19 == (longlong *)0x0) {
      plVar19 = DAT_14c96b350;
    }
    FUN_1446f470e(&local_1b0,L"SoftwareCursor_Grab",1);
    lVar20 = (**(code **)(*plVar19 + 0x50))(plVar19,local_1b0,0,0);
    local_1c8 = uVar23;
    if (local_170 == 7) {
      plVar19 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
      if (plVar19 == (longlong *)0x0) {
        plVar19 = DAT_14c96b350;
      }
      FUN_1446f470e(&local_1b8,L"SoftwareCursor_CardinalCross",1);
      lVar20 = (**(code **)(*plVar19 + 0x50))(plVar19,local_1b8,0,0);
    }
    fVar27 = *(float *)(lVar20 + 0x24) * (1.0 / *(float *)(param_3 + 1));
    fVar26 = (1.0 / *(float *)(param_3 + 1)) * *(float *)(lVar20 + 0x20);
    (**(code **)(*plVar9 + 0x78))(plVar9,&local_108);
    fVar4 = *(float *)(param_3 + 1);
    fVar24 = (float)(double)CONCAT44(uStack_fc,CONCAT13(uStack_fd,CONCAT12(uStack_fe,local_100))) *
             (1.0 / fVar4) - fVar27 * 0.5;
    fVar25 = (1.0 / fVar4) * (float)(double)local_108 - fVar26 * 0.5;
    local_108 = (undefined **)
                CONCAT44(fVar4 * fVar24 + *(float *)(param_3 + 2),
                         fVar4 * fVar25 + *(float *)((longlong)param_3 + 0xc));
    fVar5 = *(float *)((longlong)param_3 + 0x1c);
    fVar6 = *(float *)(param_3 + 4);
    fVar7 = *(float *)(param_3 + 5);
    fVar8 = *(float *)((longlong)param_3 + 0x24);
    local_d8 = fVar25 * fVar6 + fVar24 * fVar7 + *(float *)(param_3 + 6);
    fStack_dc = fVar25 * fVar5 + fVar24 * fVar8 + *(float *)((longlong)param_3 + 0x2c);
    fStack_e0 = fVar6 * 0.0 + fVar7;
    fStack_ec = fVar8 * 0.0 + fVar5;
    local_100 = SUB42(fVar4,0);
    uStack_fe = (undefined1)((uint)fVar4 >> 0x10);
    uStack_fd = (undefined1)((uint)fVar4 >> 0x18);
    uStack_fc = 0;
    uStack_f8 = 0;
    uStack_e8 = (undefined **)CONCAT44(fVar5 * 0.0 + fVar8,fVar7 * 0.0 + fVar6);
    uStack_d4 = CONCAT31(uStack_d4._1_3_,
                         (byte)uStack_d4 & 0xfc | *(char *)((longlong)param_3 + 0x34) * '\x02' & 2U)
    ;
    local_1f0 = &DAT_149e1e2f8;
    local_1f8 = local_1f8 & 0xffffffffffffff00;
    local_f4 = fVar26;
    fStack_f0 = fVar27;
    FUN_140239bd2(param_5,param_6 + 1,&local_108,lVar20);
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_178 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar2 = (int *)((longlong)local_178 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_178 + 0x10))(local_178);
        }
      }
    }
    uVar23 = local_1c8;
    param_2 = local_1d0;
    uVar16 = local_1d4;
    if (local_188 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_188 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_188)(local_188);
        LOCK();
        piVar2 = (int *)((longlong)local_188 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_188 + 0x10))(local_188);
        }
      }
    }
    if (local_198 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_198 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_198)(local_198);
        LOCK();
        piVar2 = (int *)((longlong)local_198 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_198 + 0x10))(local_198);
        }
      }
    }
  }
LAB_14290743b:
  ppuVar10 = *(undefined ***)(param_1 + 0x2b0);
  if (ppuVar10 != (undefined **)0x0) {
    uVar11 = *(undefined8 *)(param_2 + 8);
    cVar14 = FUN_146948b5a(uVar11,param_1);
    if (cVar14 != '\0') {
      plVar9 = *(longlong **)(param_1 + 0x2b8);
      local_100 = SUB82(plVar9,0);
      uStack_fe = (undefined1)((ulonglong)plVar9 >> 0x10);
      uStack_fd = (undefined1)((ulonglong)plVar9 >> 0x18);
      uStack_fc = (undefined4)((ulonglong)plVar9 >> 0x20);
      local_108 = ppuVar10;
      if (plVar9 == (longlong *)0x0) {
        FUN_146948bde(uVar11,param_1,&local_108);
      }
      else {
        LOCK();
        *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
        UNLOCK();
        FUN_146948bde(uVar11,param_1);
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar19 = plVar9 + 1;
          *(int *)plVar19 = (int)*plVar19 + -1;
          UNLOCK();
          if ((int)*plVar19 == 0) {
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
      }
    }
  }
  if ((char)uVar23 == '\0') {
    LOCK();
    plVar9 = plVar22 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar2 = (int *)((longlong)plVar22 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16;
}



// FUNCTION 142907672 FUN_142907672 body=73 status=ok
// SIG undefined FUN_142907672(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142907672(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c9903a0;
  _DAT_14c990300 = &PTR_FUN_149ed05f0;
  if (DAT_14c9903a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c9903a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001429076b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1429076bc FUN_1429076bc body=129 status=ok
// SIG undefined FUN_1429076bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429076bc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x270), plVar3 != (longlong *)0x0)) && (0 < (int)plVar3[1])
     ) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014290773a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(_DAT_00000000 + 0x48))(0);
        return;
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
    (**(code **)(**(longlong **)(param_1 + 0x268) + 0x48))();
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
                    /* WARNING: Could not recover jumptable at 0x00014290771c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14290773e FUN_14290773e body=154 status=ok
// SIG undefined FUN_14290773e(void)

undefined1 * FUN_14290773e(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
     ) {
    *param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined4 *)(param_2 + 0x38) = 1;
  }
  else {
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_14290777f;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_14290777f:
    (**(code **)(*plVar4 + 0x60))(plVar4,param_2);
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
  return param_2;
}



// FUNCTION 1429077d8 FUN_1429077d8 body=135 status=ok
// SIG undefined FUN_1429077d8(void)

undefined8 * FUN_1429077d8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
     ) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_142907819;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_142907819:
    (**(code **)(*plVar4 + 0x68))(plVar4,param_2);
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
  return param_2;
}



// FUNCTION 142907860 FUN_142907860 body=182 status=ok
// SIG undefined FUN_142907860(void)

undefined1 * FUN_142907860(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
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
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_1429078a1;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_1429078a1:
    (**(code **)(*plVar4 + 0x80))(plVar4,param_2);
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
  return param_2;
}



// FUNCTION 142907916 FUN_142907916 body=182 status=ok
// SIG undefined FUN_142907916(void)

undefined1 * FUN_142907916(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
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
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_142907957;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_142907957:
    (**(code **)(*plVar4 + 0x88))(plVar4,param_2);
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
  return param_2;
}



// FUNCTION 1429079cc FUN_1429079cc body=182 status=ok
// SIG undefined FUN_1429079cc(void)

undefined1 * FUN_1429079cc(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
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
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_142907a0d;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_142907a0d:
    (**(code **)(*plVar4 + 0xa0))(plVar4,param_2);
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
  return param_2;
}



// FUNCTION 142907a82 FUN_142907a82 body=182 status=ok
// SIG undefined FUN_142907a82(void)

undefined1 * FUN_142907a82(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
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
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_142907ac3;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_142907ac3:
    (**(code **)(*plVar4 + 0xb8))(plVar4,param_2);
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
  return param_2;
}



// FUNCTION 142907b38 FUN_142907b38 body=182 status=ok
// SIG undefined FUN_142907b38(void)

undefined1 * FUN_142907b38(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
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
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_142907b79;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_142907b79:
    (**(code **)(*plVar4 + 0xc0))(plVar4,param_2);
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
  return param_2;
}



// FUNCTION 142907bee FUN_142907bee body=182 status=ok
// SIG undefined FUN_142907bee(void)

undefined1 * FUN_142907bee(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
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
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_142907c2f;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_142907c2f:
    (**(code **)(*plVar4 + 200))(plVar4,param_2);
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
  return param_2;
}



// FUNCTION 142907ca4 FUN_142907ca4 body=182 status=ok
// SIG undefined FUN_142907ca4(void)

undefined1 * FUN_142907ca4(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
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
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_142907ce5;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_142907ce5:
    (**(code **)(*plVar4 + 0xd0))(plVar4,param_2);
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
  return param_2;
}



// FUNCTION 142907d5a FUN_142907d5a body=185 status=ok
// SIG undefined FUN_142907d5a(void)

undefined1 *
FUN_142907d5a(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
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
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_142907d9e;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_142907d9e:
    (**(code **)(*plVar4 + 0xd8))(plVar4,param_2,param_4);
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
  return param_2;
}



// FUNCTION 142907e14 FUN_142907e14 body=136 status=ok
// SIG undefined FUN_142907e14(void)

longlong FUN_142907e14(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
     ) {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  else {
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_142907e55;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_142907e55:
    (**(code **)(*plVar4 + 0x118))(plVar4,param_2);
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
  return param_2;
}



// FUNCTION 142907e9c FUN_142907e9c body=96 status=ok
// SIG undefined FUN_142907e9c(void)

void FUN_142907e9c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x270);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
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
    if (*(longlong **)(param_1 + 0x268) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x268) + 0x120))();
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
                    /* WARNING: Could not recover jumptable at 0x000142907ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142907efc FUN_142907efc body=150 status=ok
// SIG undefined FUN_142907efc(void)

undefined8 * FUN_142907efc(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x268) == 0) ||
      (plVar5 = *(longlong **)(param_1 + 0x270), plVar5 == (longlong *)0x0)) || ((int)plVar5[1] < 1)
     ) {
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 6) = 3;
  }
  else {
    iVar3 = (int)plVar5[1];
    plVar4 = (longlong *)0x0;
    do {
      if (iVar3 == 0) {
        plVar5 = (longlong *)0x0;
        goto LAB_142907f3d;
      }
      LOCK();
      iVar2 = (int)plVar5[1];
      bVar6 = iVar3 == iVar2;
      if (bVar6) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar6);
    plVar4 = *(longlong **)(param_1 + 0x268);
LAB_142907f3d:
    (**(code **)(*plVar4 + 0x130))(plVar4,param_2);
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
  return param_2;
}



// FUNCTION 142907fc2 FUN_142907fc2 body=939 status=ok
// SIG undefined FUN_142907fc2(void)

int FUN_142907fc2(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 ulonglong param_5,undefined4 param_6,undefined8 *param_7,char param_8)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined8 *local_120;
  undefined4 *local_118;
  undefined1 local_110;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  float local_d0;
  float local_cc;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float fStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  byte local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar7 = param_1[0x3d];
  puVar5 = (undefined8 *)(lVar7 + 200);
  cVar3 = *(char *)(lVar7 + 0xd8);
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      puVar5 = (undefined8 *)FUN_1400c06fe(puVar5);
      lVar7 = param_1[0x3d];
    }
    else if (cVar3 == '\x03') {
      puVar5 = param_7 + 4;
    }
    else {
      puVar5 = param_7 + 2;
    }
  }
  local_e0 = *(float *)(puVar5 + 1);
  local_e8 = *puVar5;
  local_dc = *(float *)((longlong)puVar5 + 0xc);
  local_f8 = *(undefined4 *)param_7;
  uStack_f4 = *(undefined4 *)((longlong)param_7 + 4);
  local_b8 = *param_7;
  fStack_f0 = *(float *)(param_7 + 1);
  uStack_ec = *(undefined4 *)((longlong)param_7 + 0xc);
  uStack_a8 = (undefined4)local_e8;
  fStack_a4 = (float)((ulonglong)local_e8 >> 0x20);
  local_cc = local_dc * 0.6;
  local_d8 = local_e8;
  local_d0 = local_e0;
  local_c8 = local_e8;
  local_c0 = local_e0;
  fStack_b0 = fStack_f0;
  uStack_ac = uStack_ec;
  local_a0 = local_e0;
  cVar3 = FUN_146ade9c0(lVar7);
  lVar7 = param_1[0x3d];
  if (cVar3 != '\0') {
    fVar1 = *(float *)(*(longlong *)(lVar7 + 0x48) + 0x98);
    if ((fVar1 == 0.0) && (!NAN(fVar1))) {
      if ((*(byte *)((longlong)param_1 + 0x31) & 0x40) == 0) {
        uVar8 = 0x3f800000;
      }
      else {
        uVar8 = *(undefined4 *)((longlong)param_1 + 0x3c);
      }
      (**(code **)(*param_1 + 0x168))(param_1,uVar8);
      lVar7 = param_1[0x3d];
    }
  }
  if (param_8 == '\0') {
    local_110 = 0;
  }
  else {
    local_110 = *(undefined1 *)((longlong)param_1 + 0x3a);
  }
  local_118 = &local_f8;
  local_120 = (undefined8 *)CONCAT44(local_120._4_4_,param_6);
  local_128 = param_5;
  iVar4 = FUN_146ae3ca4(lVar7,param_2,param_3,param_4);
  if (*(char *)((longlong)param_1 + 0x36c) == '\x01') {
    plVar6 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
    if (plVar6 == (longlong *)0x0) {
      plVar6 = DAT_14c96b350;
    }
    FUN_1446f470e(&local_100,L"SoftwareCursor_Grab",1);
    lVar7 = (**(code **)(*plVar6 + 0x50))(plVar6,local_100,0,0);
    fStack_b0 = *(float *)(param_3 + 8);
    local_a0 = *(float *)(lVar7 + 0x24) * (1.0 / fStack_b0);
    fStack_a4 = (1.0 / fStack_b0) * *(float *)(lVar7 + 0x20);
    fVar9 = *(float *)(param_1 + 0x6e) - fStack_a4 * 0.5;
    fVar10 = *(float *)((longlong)param_1 + 0x374) - local_a0 * 0.5;
    local_b8 = CONCAT44(fStack_b0 * fVar10 + *(float *)(param_3 + 0x10),
                        fStack_b0 * fVar9 + *(float *)(param_3 + 0xc));
    local_9c = *(float *)(param_3 + 0x1c);
    local_98 = *(float *)(param_3 + 0x20);
    fVar1 = *(float *)(param_3 + 0x28);
    fVar2 = *(float *)(param_3 + 0x24);
    local_88 = fVar9 * local_98 + fVar10 * fVar1 + *(float *)(param_3 + 0x30);
    local_8c = fVar9 * local_9c + fVar10 * fVar2 + *(float *)(param_3 + 0x2c);
    local_90 = local_98 * 0.0 + fVar1;
    local_94 = local_9c * 0.0 + fVar2;
    local_98 = fVar1 * 0.0 + local_98;
    local_9c = fVar2 * 0.0 + local_9c;
    uStack_ac = 0;
    uStack_a8 = 0;
    local_84 = local_84 & 0xfc | *(char *)(param_3 + 0x34) * '\x02' & 2U;
    iVar4 = iVar4 + 1;
    local_120 = &DAT_149e1e2f8;
    local_128 = local_128 & 0xffffffffffffff00;
    FUN_140239bd2(param_5,iVar4,&local_b8,lVar7);
  }
  if ((local_80 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142908392 FUN_142908392 body=1986 status=ok
// SIG undefined FUN_142908392(void)

int FUN_142908392(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 longlong *param_5,int param_6,float *param_7,char param_8)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  float *pfVar9;
  longlong *plVar10;
  longlong *plVar11;
  char cVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_1d8 [32];
  longlong *local_1b8;
  int local_1b0;
  float *local_1a8;
  undefined1 local_1a0;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  longlong local_168;
  longlong local_160;
  undefined4 uStack_158;
  undefined2 uStack_154;
  char cStack_152;
  longlong local_150;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  longlong *local_130;
  longlong lStack_128;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined8 uStack_114;
  undefined8 local_108;
  float local_100;
  undefined8 local_fc;
  undefined8 local_f4;
  float local_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined8 local_dc;
  byte local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (*(char *)(param_1 + 0x5de) == '\x01') {
    uVar4 = *(ushort *)(param_1 + 0x5dc);
    pfVar9 = (float *)(param_1 + 0x570);
    if ((uVar4 & 0x20) == 0) {
      pfVar9 = (float *)(param_1 + 0x284);
    }
    if ((uVar4 & 0x10) == 0) {
      fVar14 = *(float *)(param_1 + 0x27c);
      fVar15 = *(float *)(param_1 + 0x280);
    }
    else {
      fVar14 = (float)*(double *)(param_1 + 0x560);
      fVar15 = (float)*(double *)(param_1 + 0x568);
    }
    fVar16 = pfVar9[3];
    cVar12 = ' ';
    if (param_8 != '\0') {
      cVar12 = (*(byte *)(param_1 + 0x3a) ^ 1) << 5;
    }
    fVar13 = *pfVar9;
    fVar2 = pfVar9[1];
    fVar3 = pfVar9[2];
    plVar10 = (longlong *)(param_1 + 0x4e0);
    if ((uVar4 & 2) == 0) {
      plVar10 = (longlong *)(param_1 + 0x208);
    }
    local_168 = *plVar10;
    if ((DAT_14c950c29 == 1) && (*plVar10 != 0)) {
      FUN_1456cec3c();
    }
    local_160 = plVar10[1];
    if (((DAT_14c950c29 & 1) != 0) && (plVar10[1] != 0)) {
      FUN_1456cec3c();
    }
    uStack_154 = (undefined2)((uint)*(undefined4 *)((longlong)plVar10 + 0x13) >> 8);
    cStack_152 = (char)((uint)*(undefined4 *)((longlong)plVar10 + 0x13) >> 0x18);
    uStack_158 = (int)plVar10[2];
    local_150 = plVar10[3];
    if (((DAT_14c950c29 & 1) != 0) && (plVar10[3] != 0)) {
      FUN_1456cec3c();
    }
    uVar7 = uStack_158;
    local_148 = plVar10[4];
    lStack_140 = plVar10[5];
    local_138 = plVar10[6];
    local_130 = (longlong *)plVar10[7];
    if (local_130 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_130 + 1) = (int)local_130[1] + 1;
      UNLOCK();
    }
    uStack_118 = (undefined4)((ulonglong)*(undefined8 *)((longlong)plVar10 + 0x4c) >> 0x20);
    uStack_114 = *(undefined8 *)((longlong)plVar10 + 0x54);
    lStack_128 = plVar10[8];
    uStack_120 = (undefined4)plVar10[9];
    local_11c = (undefined4)((ulonglong)plVar10[9] >> 0x20);
    if (0.0 < fVar16 && 0.0 < fVar14 * fVar14 + fVar15 * fVar15) {
      if (cStack_152 == '\0') {
        uStack_158 = 0;
      }
      fStack_18c = fVar16 * param_7[3];
      fStack_190 = fVar3 * param_7[2];
      fStack_194 = fVar2 * param_7[1];
      local_198 = fVar13 * *param_7;
      local_f4 = *param_3;
      local_100 = *(float *)(param_3 + 1);
      local_108 = CONCAT44(fVar15 * local_100 + *(float *)(param_3 + 2),
                           fVar14 * local_100 + *(float *)((longlong)param_3 + 0xc));
      fVar16 = *(float *)(param_3 + 4);
      fVar13 = *(float *)(param_3 + 5);
      fVar2 = *(float *)((longlong)param_3 + 0x1c);
      fVar3 = *(float *)((longlong)param_3 + 0x24);
      fStack_e0 = fVar16 * 0.0 + fVar13;
      fStack_e4 = fVar2 * 0.0 + fVar3;
      fStack_e8 = fVar13 * 0.0 + fVar16;
      local_ec = fVar3 * 0.0 + fVar2;
      local_fc = 0;
      local_dc = CONCAT44(fVar14 * fVar16 + fVar15 * fVar13 + *(float *)(param_3 + 6),
                          fVar14 * fVar2 + fVar15 * fVar3 + *(float *)((longlong)param_3 + 0x2c));
      local_d4 = local_d4 & 0xfc | *(char *)((longlong)param_3 + 0x34) * '\x02' & 2U;
      plVar10 = *(longlong **)(param_1 + 0x1e0);
      if (*(code **)(*plVar10 + 0x50) != FUN_144828418) {
        plVar10 = (longlong *)(**(code **)(*plVar10 + 0x50))();
      }
      FUN_1447a1fc0(plVar10);
      plVar10 = *(longlong **)(param_1 + 0x1e0);
      pcVar6 = *(code **)(*plVar10 + 0x28);
      if (pcVar6 == FUN_14482841c) {
        plVar11 = plVar10 + 3;
        if (plVar10[5] != 0) {
          plVar11 = (longlong *)(plVar10[5] + 8);
        }
      }
      else if (pcVar6 == (code *)&LAB_14010c34c) {
        plVar11 = plVar10 + 2;
      }
      else {
        plVar11 = (longlong *)(*pcVar6)(plVar10);
      }
      local_1a8 = &local_198;
      local_1b0 = CONCAT31(local_1b0._1_3_,cVar12);
      local_1b8 = &local_168;
      FUN_1428695e4(param_5,param_6,&local_108,plVar11);
      uStack_158 = uVar7;
      param_6 = param_6 + 1;
    }
    pfVar9 = (float *)(param_1 + 0x548);
    if ((*(ushort *)(param_1 + 0x5dc) & 8) == 0) {
      pfVar9 = (float *)(param_1 + 0x268);
    }
    local_188 = pfVar9[4];
    local_198 = *pfVar9;
    fStack_194 = pfVar9[1];
    fStack_190 = pfVar9[2];
    fStack_18c = pfVar9[3];
    uVar8 = (uint)pfVar9[4] & 0xff;
    if (uVar8 == 0) {
      pfVar9 = &local_198;
    }
    else if (uVar8 == 1) {
      pfVar9 = (float *)FUN_1400c06fe(&local_198);
    }
    else if (uVar8 == 3) {
      pfVar9 = param_7 + 8;
    }
    else {
      pfVar9 = param_7 + 4;
    }
    local_16c = param_7[3] * pfVar9[3];
    local_170 = param_7[2] * pfVar9[2];
    local_174 = param_7[1] * pfVar9[1];
    local_178 = *param_7 * *pfVar9;
    local_f4 = *param_3;
    local_108 = *(undefined8 *)((longlong)param_3 + 0xc);
    local_100 = *(float *)(param_3 + 1);
    local_fc = 0;
    local_ec = *(float *)((longlong)param_3 + 0x1c);
    fStack_e8 = *(float *)(param_3 + 4);
    fStack_e4 = *(float *)((longlong)param_3 + 0x24);
    fStack_e0 = *(float *)(param_3 + 5);
    local_dc = *(undefined8 *)((longlong)param_3 + 0x2c);
    local_d4 = local_d4 & 0xfc | *(char *)((longlong)param_3 + 0x34) * '\x02' & 2U;
    plVar10 = *(longlong **)(param_1 + 0x1e0);
    if (*(code **)(*plVar10 + 0x50) != FUN_144828418) {
      plVar10 = (longlong *)(**(code **)(*plVar10 + 0x50))();
    }
    FUN_1447a1fc0(plVar10);
    plVar10 = *(longlong **)(param_1 + 0x1e0);
    pcVar6 = *(code **)(*plVar10 + 0x28);
    if (pcVar6 == FUN_14482841c) {
      plVar11 = plVar10 + 3;
      if (plVar10[5] != 0) {
        plVar11 = (longlong *)(plVar10[5] + 8);
      }
    }
    else if (pcVar6 == (code *)&LAB_14010c34c) {
      plVar11 = plVar10 + 2;
    }
    else {
      plVar11 = (longlong *)(*pcVar6)(plVar10);
    }
    local_1a8 = &local_178;
    local_1b0 = CONCAT31(local_1b0._1_3_,cVar12);
    local_1b8 = &local_168;
    FUN_1428695e4(param_5,param_6,&local_108,plVar11);
    plVar10 = local_130;
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_130 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_130)(local_130);
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
  else {
    lVar5 = **(longlong **)(param_1 + 0x1f0);
    fVar14 = *(float *)(lVar5 + 0xc4);
    fVar15 = *(float *)(lVar5 + 0xbc);
    fVar16 = *(float *)(lVar5 + 0x94);
    FUN_1409d0084(param_1);
    if (param_8 == '\0') {
      local_1a0 = 0;
    }
    else {
      local_1a0 = *(undefined1 *)(param_1 + 0x3a);
    }
    local_1a8 = param_7;
    local_1b0 = param_6;
    local_1b8 = param_5;
    param_6 = FUN_140a8ee82(*(undefined8 *)(param_1 + 0x1f0),param_2,param_3,param_4);
    if ((0.0 < *(float *)(param_1 + 0x5a8)) || (*(char *)(param_1 + 0x5ac) != '\0')) {
      lVar5 = **(longlong **)(param_1 + 0x1f0);
      fVar13 = 1.0 / *(float *)(lVar5 + 0x94);
      fVar16 = 1.0 / fVar16;
      if ((0.0001 < ABS(*(float *)(lVar5 + 0xbc) * fVar13 - fVar15 * fVar16)) ||
         (0.0001 < ABS(*(float *)(lVar5 + 0xc4) * fVar13 - fVar14 * fVar16))) {
        FUN_140163244(param_1,1);
      }
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_6;
}



// FUNCTION 142908b56 FUN_142908b56 body=1018 status=ok
// SIG undefined FUN_142908b56(void)

double * FUN_142908b56(longlong param_1,double *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  longlong local_e8;
  longlong local_e0;
  undefined4 uStack_d8;
  undefined3 uStack_d4;
  longlong local_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar3 = *(ushort *)(param_1 + 0x5dc);
  if (*(char *)(param_1 + 0x5de) == '\x01') {
    if ((uVar3 & 0x10) == 0) {
      fVar13 = *(float *)(param_1 + 0x27c);
      fVar12 = *(float *)(param_1 + 0x280);
    }
    else {
      fVar13 = (float)*(double *)(param_1 + 0x560);
      fVar12 = (float)*(double *)(param_1 + 0x568);
    }
    lVar7 = 0x4e0;
    if ((uVar3 & 2) == 0) {
      lVar7 = 0x208;
    }
    if ((DAT_14c950c29 == 1) && (*(longlong *)(param_1 + lVar7) != 0)) {
      FUN_1456cec3c();
    }
    if (((DAT_14c950c29 & 1) != 0) && (*(longlong *)(param_1 + 8 + lVar7) != 0)) {
      FUN_1456cec3c();
    }
    iVar4 = *(int *)(param_1 + 0x10 + lVar7);
    if (((DAT_14c950c29 & 1) != 0) && (*(longlong *)(param_1 + 0x18 + lVar7) != 0)) {
      FUN_1456cec3c();
    }
    plVar8 = *(longlong **)(param_1 + 0x38 + lVar7);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    lVar7 = *(longlong *)(*(longlong *)(DAT_14c98e618 + 0x20) + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x10) {
      uVar9 = *(undefined8 *)(lVar7 + 0x30);
      plVar8 = *(longlong **)(lVar7 + 0x38);
    }
    else {
      uVar9 = *(undefined8 *)(lVar7 + 0x20);
      plVar8 = *(longlong **)(lVar7 + 0x28);
    }
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
    }
    plVar10 = (longlong *)(param_1 + 0x4e0);
    if ((*(ushort *)(param_1 + 0x5dc) & 2) == 0) {
      plVar10 = (longlong *)(param_1 + 0x208);
    }
    local_e8 = *plVar10;
    if ((DAT_14c950c29 == 1) && (local_e8 != 0)) {
      FUN_1456cec3c();
    }
    local_e0 = plVar10[1];
    if (((DAT_14c950c29 & 1) != 0) && (local_e0 != 0)) {
      FUN_1456cec3c();
    }
    fVar14 = (float)iVar4;
    uStack_d8 = (undefined4)plVar10[2];
    uStack_d4 = (undefined3)((uint)*(undefined4 *)((longlong)plVar10 + 0x13) >> 8);
    local_d0 = plVar10[3];
    if (((DAT_14c950c29 & 1) != 0) && (local_d0 != 0)) {
      FUN_1456cec3c();
    }
    local_c8 = plVar10[4];
    lStack_c0 = plVar10[5];
    local_b8 = plVar10[6];
    local_b0 = (longlong *)plVar10[7];
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    uStack_a8 = (undefined4)plVar10[8];
    uStack_a4 = *(undefined4 *)((longlong)plVar10 + 0x44);
    uStack_a0 = (undefined4)plVar10[9];
    local_9c = *(undefined4 *)((longlong)plVar10 + 0x4c);
    uStack_98 = (undefined4)plVar10[10];
    uStack_94 = *(undefined4 *)((longlong)plVar10 + 0x54);
    uStack_90 = (undefined4)plVar10[0xb];
    local_f8 = 0x3f800000;
    FUN_146937f08(uVar9,&local_88,param_1 + 0x1e0,&local_e8);
    plVar10 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    fVar12 = fVar12 + fVar14 + local_84;
    fVar13 = fVar13 + fVar14 + fVar14 + local_88;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    fVar14 = *(float *)(param_1 + 0x5cc);
    if (*(float *)(param_1 + 0x5cc) <= fVar13) {
      fVar14 = fVar13;
    }
    *(float *)(param_1 + 0x5d0) = fVar14;
    *(float *)(param_1 + 0x5d4) = fVar12;
    *(undefined1 *)(param_1 + 0x5d8) = 1;
    dVar5 = (double)fVar12;
    dVar6 = (double)fVar14;
  }
  else {
    *(ushort *)(param_1 + 0x5dc) = uVar3 | 0x800;
    FUN_1409d0084(param_1,param_3);
    lVar7 = **(longlong **)(param_1 + 0x1f0);
    dVar11 = (double)(1.0 / *(float *)(lVar7 + 0x94));
    dVar5 = (double)*(float *)(lVar7 + 0xc4) * dVar11;
    dVar11 = (double)*(float *)(lVar7 + 0xbc) * dVar11;
    dVar6 = (double)*(float *)(param_1 + 0x5cc);
    if ((double)*(float *)(param_1 + 0x5cc) <= dVar11) {
      dVar6 = dVar11;
    }
  }
  *param_2 = dVar6;
  param_2[1] = dVar5;
  if ((local_80 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142908f52 FUN_142908f52 body=697 status=ok
// SIG undefined FUN_142908f52(void)

undefined8 FUN_142908f52(longlong param_1,undefined8 param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  
  if (*(char *)(param_1 + 0x269) == '\x03') {
    if (*(char *)(param_1 + 0x37) != '\0') {
      *(undefined1 *)(param_1 + 0x37) = 0;
      FUN_140163244(param_1,2);
    }
    *(undefined4 *)(param_1 + 0x228) = 0;
    *(undefined1 *)(param_1 + 0x269) = 0;
    *(undefined4 *)(param_1 + 0x274) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x26c) = 0;
    if (*(char *)(param_1 + 0x268) != '\a') {
      *(undefined1 *)(param_1 + 0x268) = 1;
    }
    if ((*(float *)(param_1 + 0x1ac) != 1.0) || (NAN(*(float *)(param_1 + 0x1ac)))) {
      *(undefined4 *)(param_1 + 0x1ac) = 0x3f800000;
      FUN_140163244(param_1,2);
    }
    *(undefined8 *)(param_1 + 0x278) = 0;
    plVar3 = *(longlong **)(param_1 + 0x280);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x280) = 0;
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
  if (*(char *)(param_1 + 0x269) == '\x01') {
    if (*(char *)(param_1 + 0x37) != '\x01') {
      *(undefined1 *)(param_1 + 0x37) = 1;
      FUN_140163244(param_1,2);
    }
    *(undefined4 *)(param_1 + 0x228) = 1;
    *(undefined1 *)(param_1 + 0x269) = 2;
    return 1;
  }
  pfVar5 = (float *)&DAT_14c84635c;
  if ((*(byte *)(*(longlong *)(param_1 + 0x208) + 0x31) & 0x20) != 0) {
    pfVar5 = (float *)(*(longlong *)(param_1 + 0x208) + 0x168);
  }
  fVar7 = *pfVar5;
  fVar6 = *(float *)(param_1 + 0x26c) + param_3;
  *(float *)(param_1 + 0x26c) = fVar6;
  switch(*(undefined1 *)(param_1 + 0x268)) {
  case 0:
    fVar7 = fVar6 / *(float *)(param_1 + 0x294);
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    *(float *)(param_1 + 0x274) = fVar7;
    if (fVar6 < *(float *)(param_1 + 0x294)) goto switchD_1429090a5_default;
    *(undefined4 *)(param_1 + 0x274) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x26c) = 0;
    uVar4 = 1;
    break;
  case 1:
    *(undefined8 *)(param_1 + 0x26c) = 0;
    uVar4 = 2;
    break;
  case 2:
    if (fVar6 < *(float *)(param_1 + 0x28c)) goto switchD_1429090a5_default;
    *(undefined8 *)(param_1 + 0x26c) = 0;
    uVar4 = 3;
    break;
  case 3:
    fVar6 = param_3 * *(float *)(param_1 + 0x288) + *(float *)(param_1 + 0x270);
    *(float *)(param_1 + 0x270) = fVar6;
    if (fVar6 + *(float *)(param_1 + 0xd0) < fVar7) goto switchD_1429090a5_default;
    *(undefined4 *)(param_1 + 0x26c) = 0;
    uVar4 = 4;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x26c) = 0;
    uVar4 = 5;
    break;
  case 5:
    if (fVar6 < *(float *)(param_1 + 0x290)) goto switchD_1429090a5_default;
    *(undefined4 *)(param_1 + 0x26c) = 0;
    uVar4 = 6;
    break;
  case 6:
    fVar7 = fVar6 / *(float *)(param_1 + 0x298);
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    *(float *)(param_1 + 0x274) = 1.0 - fVar7;
    if (fVar6 < *(float *)(param_1 + 0x298)) goto switchD_1429090a5_default;
    *(undefined4 *)(param_1 + 0x274) = 0;
    *(undefined8 *)(param_1 + 0x26c) = 0;
    uVar4 = 0;
    break;
  default:
    goto switchD_1429090a5_default;
  }
  *(undefined1 *)(param_1 + 0x268) = uVar4;
switchD_1429090a5_default:
  fVar7 = *(float *)(param_1 + 0x274);
  if ((*(float *)(param_1 + 0x1ac) != fVar7) || (NAN(*(float *)(param_1 + 0x1ac)) || NAN(fVar7))) {
    *(float *)(param_1 + 0x1ac) = fVar7;
    FUN_140163244(param_1,2);
  }
  FUN_140163244(param_1,2);
  return 1;
}



// FUNCTION 14290920b FUN_14290920b body=69 status=ok
// SIG undefined FUN_14290920b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14290920b(void)

{
  _DAT_14c9903f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014290924d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c990400,1);
  return;
}



// FUNCTION 142909250 FUN_142909250 body=55 status=ok
// SIG undefined FUN_142909250(void)

void FUN_142909250(void)

{
  undefined8 uVar1;
  
  if (DAT_14c990418 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c990418 = FUN_14171c317(FUN_1462821a0,uVar1,L"EListItemAlignment");
  }
  return;
}



// FUNCTION 142909287 FUN_142909287 body=55 status=ok
// SIG undefined FUN_142909287(void)

void FUN_142909287(void)

{
  undefined8 uVar1;
  
  if (DAT_14c990430 == 0) {
    uVar1 = FUN_1410766cb();
    DAT_14c990430 = FUN_14171c317(FUN_1462821cf,uVar1,L"EScrollIntoViewAlignment");
  }
  return;
}



// FUNCTION 1429092be FUN_1429092be body=9416 status=ok
// SIG undefined FUN_1429092be(void)

void FUN_1429092be(longlong param_1,int *param_2,undefined4 *param_3,undefined8 *param_4,
                  longlong *param_5,longlong *param_6,undefined4 param_7,undefined8 param_8,
                  longlong param_9,undefined1 param_10)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  code *pcVar8;
  longlong *plVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  float fVar18;
  undefined1 auStack_c48 [32];
  undefined1 *local_c28;
  undefined8 *local_c18;
  longlong *local_c10;
  undefined8 *local_c08;
  undefined8 *local_c00;
  int *local_bf8;
  undefined4 *local_bf0;
  undefined4 local_be8;
  undefined1 local_be4;
  undefined8 local_be0;
  undefined8 uStack_bd8;
  float local_bd0;
  undefined1 local_bcc;
  undefined8 *local_bc8;
  ulonglong uStack_bc0;
  undefined4 local_bb8;
  undefined4 uStack_bb4;
  undefined4 uStack_bb0;
  undefined4 uStack_bac;
  undefined1 local_ba8;
  undefined8 *local_ba0;
  ulonglong local_b98;
  undefined4 local_b90;
  undefined1 local_b8c;
  undefined8 local_b88;
  undefined8 uStack_b80;
  undefined4 local_b78;
  undefined1 local_b74;
  undefined8 local_b70;
  undefined8 uStack_b68;
  undefined1 local_b59;
  undefined1 local_b58 [8];
  longlong *local_b50;
  undefined1 local_b39;
  undefined1 local_b38 [8];
  longlong *local_b30;
  float local_b20;
  undefined1 local_b1c;
  undefined8 *local_b18;
  ulonglong uStack_b10;
  undefined8 local_b08;
  longlong *local_b00;
  undefined8 local_af8;
  longlong *local_af0;
  undefined4 local_ae8;
  undefined4 uStack_ae4;
  undefined4 uStack_ae0;
  undefined4 uStack_adc;
  undefined1 local_ad8;
  undefined8 *local_ad0;
  ulonglong local_ac8;
  undefined1 local_ab9;
  undefined8 *local_ab8;
  longlong *local_ab0;
  undefined8 local_aa0;
  longlong *local_a98;
  undefined4 local_a90;
  undefined1 local_a8c;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  longlong *local_a70;
  undefined8 local_a68;
  longlong *local_a60;
  undefined8 local_a58;
  longlong *local_a50;
  undefined4 local_a48;
  undefined1 local_a44;
  undefined8 local_a40;
  undefined8 uStack_a38;
  undefined8 *local_a30;
  longlong *local_a28;
  undefined2 local_a20;
  undefined8 *local_a18;
  ulonglong uStack_a10;
  undefined2 local_a08;
  undefined8 *local_a00;
  int local_9f8;
  undefined4 local_9f0;
  undefined1 local_9ec;
  undefined8 *local_9e8;
  int local_9e0;
  int local_9d8;
  undefined1 local_9d4;
  undefined8 *local_9d0;
  int local_9c8;
  undefined2 local_9c0;
  undefined8 *local_9b8;
  int local_9b0;
  undefined4 local_9a8;
  undefined1 local_9a4;
  undefined8 *local_9a0;
  int local_998;
  int local_990;
  undefined1 local_98c;
  undefined8 *local_988;
  int local_980;
  undefined8 *local_978;
  undefined8 local_970;
  undefined2 local_908;
  undefined8 *local_900;
  int local_8f8;
  undefined1 local_8d6;
  longlong local_7d0;
  code *local_7c8;
  int local_7c0;
  undefined1 local_7bc;
  undefined8 *local_7b8;
  int local_7b0;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined8 *local_7a0;
  undefined8 local_798;
  float local_790;
  undefined1 local_78c;
  undefined8 *local_788;
  int local_780;
  float local_778;
  undefined1 local_774;
  undefined8 *local_770;
  int local_768;
  undefined4 local_760;
  longlong local_6d0;
  longlong *local_6c8;
  undefined8 local_610;
  longlong *local_608;
  undefined8 local_550;
  longlong *local_548;
  code *local_490;
  undefined4 local_488;
  undefined4 uStack_484;
  longlong local_2e8;
  undefined4 local_2e0;
  undefined1 local_2d8 [8];
  longlong *local_2d0;
  code *local_218;
  int local_210;
  uint uStack_20c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c48;
  *(undefined1 *)(param_1 + 0x4ca) = 1;
  lVar11 = *param_5;
  lVar5 = param_5[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar17 = *(longlong **)(param_1 + 0x3b0);
  *(longlong *)(param_1 + 0x3a8) = lVar11;
  *(longlong *)(param_1 + 0x3b0) = lVar5;
  local_c18 = param_4;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar17 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
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
  FUN_146b03e12(param_1 + 0x2b8,param_8);
  uVar10 = 1;
  if (*param_5 == 0) {
    uVar10 = param_7;
  }
  *(undefined4 *)(param_1 + 0x3ec) = uVar10;
  FUN_146af3bca(&local_978);
  local_8d6 = *(undefined1 *)(param_1 + 0x35);
  local_98c = (undefined1)param_2[1];
  local_990 = *param_2;
  local_bf8 = param_2 + 2;
  local_988 = (undefined8 *)0x0;
  local_980 = 0;
  FUN_140a52b3c(&local_988);
  iVar4 = local_980;
  puVar15 = local_988;
  local_7bc = local_98c;
  local_7c0 = local_990;
  local_988 = (undefined8 *)0x0;
  local_980 = 0;
  if (local_7b0 == 0) {
LAB_1429093fa:
    if (local_7b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_7b8 != (undefined8 *)0x0) {
    (**(code **)*local_7b8)(local_7b8,0);
    FUN_1446efa72(&local_7b8,0,0,0x10);
    local_7b0 = 0;
    goto LAB_1429093fa;
  }
  local_7b8 = puVar15;
  local_7b0 = iVar4;
  if (local_980 == 0) {
LAB_14290945e:
    if (local_988 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_988 != (undefined8 *)0x0) {
    (**(code **)*local_988)(local_988,0);
    FUN_1446efa72(&local_988,0,0,0x10);
    local_980 = 0;
    goto LAB_14290945e;
  }
  local_9a4 = *(undefined1 *)(param_3 + 1);
  local_9a8 = *param_3;
  local_bf0 = param_3 + 2;
  local_9a0 = (undefined8 *)0x0;
  local_998 = 0;
  FUN_140a52b3c(&local_9a0);
  iVar4 = local_998;
  puVar15 = local_9a0;
  local_7a4 = CONCAT31(local_7a4._1_3_,local_9a4);
  local_7a8 = local_9a8;
  local_9a0 = (undefined8 *)0x0;
  local_998 = 0;
  if ((int)local_798 == 0) {
LAB_1429094ca:
    if (local_7a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_7a0 != (undefined8 *)0x0) {
    (**(code **)*local_7a0)(local_7a0,0);
    FUN_1446efa72(&local_7a0,0,0,0x10);
    local_798 = (longlong *)((ulonglong)local_798._4_4_ << 0x20);
    goto LAB_1429094ca;
  }
  local_7a0 = puVar15;
  local_798 = (longlong *)CONCAT44(local_798._4_4_,iVar4);
  if (local_998 == 0) {
LAB_14290952e:
    if (local_9a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_9a0 != (undefined8 *)0x0) {
    (**(code **)*local_9a0)(local_9a0,0);
    FUN_1446efa72(&local_9a0,0,0,0x10);
    local_998 = 0;
    goto LAB_14290952e;
  }
  local_218 = (code *)&LAB_146af3d56;
  local_210 = 0;
  FUN_146af3ca6(&local_978,param_1);
  local_9c0 = *(undefined2 *)local_c18;
  local_c00 = local_c18 + 1;
  local_9b8 = (undefined8 *)0x0;
  local_9b0 = 0;
  FUN_146af7e0a(&local_9b8);
  iVar4 = local_9b0;
  puVar15 = local_9b8;
  local_778 = (float)CONCAT22(local_778._2_2_,local_9c0);
  local_9b8 = (undefined8 *)0x0;
  local_9b0 = 0;
  if (local_768 == 0) {
LAB_1429095c0:
    if (local_770 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_770 != (undefined8 *)0x0) {
    (**(code **)*local_770)(local_770,0);
    FUN_1446efa72(&local_770,0,0,0x10);
    local_768 = 0;
    goto LAB_1429095c0;
  }
  local_770 = puVar15;
  local_768 = iVar4;
  if (local_9b0 == 0) {
LAB_142909625:
    if (local_9b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_9b8 != (undefined8 *)0x0) {
    (**(code **)*local_9b8)(local_9b8,0);
    FUN_1446efa72(&local_9b8,0,0,0x10);
    local_9b0 = 0;
    goto LAB_142909625;
  }
  local_760 = *(undefined4 *)(param_1 + 0x3ec);
  FUN_146b03e96(&local_218,0x4b,local_2d8);
  FUN_146af3d64(&local_218,&local_490,&local_978);
  plVar17 = (longlong *)CONCAT44(uStack_484,local_488);
  if (plVar17 == (longlong *)0x0) {
    local_c08 = (undefined8 *)(param_1 + 0x278);
    *(code **)(param_1 + 0x278) = local_490;
    local_c10 = (longlong *)(param_1 + 0x280);
    plVar16 = *(longlong **)(param_1 + 0x280);
    if (plVar16 != (longlong *)0x0) {
      *local_c10 = 0;
LAB_142909706:
      local_c08 = (undefined8 *)(param_1 + 0x278);
      local_c10 = (longlong *)(param_1 + 0x280);
      LOCK();
      plVar17 = plVar16 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
joined_r0x0001429096fa:
        if (iVar4 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    local_c08 = (undefined8 *)(param_1 + 0x278);
    *(code **)(param_1 + 0x278) = local_490;
    local_c10 = (longlong *)(param_1 + 0x280);
    plVar16 = *(longlong **)(param_1 + 0x280);
    if (plVar17 == plVar16) {
      LOCK();
      plVar16 = plVar17 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
        plVar16 = plVar17;
        goto joined_r0x0001429096fa;
      }
    }
    else {
      *local_c10 = (longlong)plVar17;
      if (plVar16 != (longlong *)0x0) goto LAB_142909706;
    }
  }
  plVar17 = (longlong *)CONCAT44(uStack_484,local_488);
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar17 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
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
  plVar17 = (longlong *)CONCAT44(uStack_20c,local_210);
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar17 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
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
  FUN_146af3dd8(&local_978);
  FUN_146af3bca(&local_978);
  local_8d6 = *(undefined1 *)(param_1 + 0x35);
  local_9d4 = (undefined1)param_2[1];
  local_9d8 = *param_2;
  local_9d0 = (undefined8 *)0x0;
  local_9c8 = 0;
  FUN_140a52b3c(&local_9d0,local_bf8);
  iVar4 = local_9c8;
  puVar15 = local_9d0;
  local_7bc = local_9d4;
  local_7c0 = local_9d8;
  local_9d0 = (undefined8 *)0x0;
  local_9c8 = 0;
  if (local_7b0 == 0) {
LAB_1429097f9:
    if (local_7b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_7b8 != (undefined8 *)0x0) {
    (**(code **)*local_7b8)(local_7b8,0);
    FUN_1446efa72(&local_7b8,0,0,0x10);
    local_7b0 = 0;
    goto LAB_1429097f9;
  }
  local_7b8 = puVar15;
  local_7b0 = iVar4;
  if (local_9c8 == 0) {
LAB_14290985e:
    if (local_9d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_9d0 != (undefined8 *)0x0) {
    (**(code **)*local_9d0)(local_9d0,0);
    FUN_1446efa72(&local_9d0,0,0,0x10);
    local_9c8 = 0;
    goto LAB_14290985e;
  }
  local_9ec = *(undefined1 *)(param_3 + 1);
  local_9f0 = *param_3;
  local_9e8 = (undefined8 *)0x0;
  local_9e0 = 0;
  FUN_140a52b3c(&local_9e8,local_bf0);
  iVar4 = local_9e0;
  puVar15 = local_9e8;
  local_7a4 = CONCAT31(local_7a4._1_3_,local_9ec);
  local_7a8 = local_9f0;
  local_9e8 = (undefined8 *)0x0;
  local_9e0 = 0;
  if ((int)local_798 == 0) {
LAB_1429098c3:
    if (local_7a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_7a0 != (undefined8 *)0x0) {
    (**(code **)*local_7a0)(local_7a0,0);
    FUN_1446efa72(&local_7a0,0,0,0x10);
    local_798 = (longlong *)((ulonglong)local_798 & 0xffffffff00000000);
    goto LAB_1429098c3;
  }
  local_7a0 = puVar15;
  local_798 = (longlong *)CONCAT44(local_798._4_4_,iVar4);
  if (local_9e0 == 0) {
LAB_142909927:
    if (local_9e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_9e8 != (undefined8 *)0x0) {
    (**(code **)*local_9e8)(local_9e8,0);
    FUN_1446efa72(&local_9e8,0,0,0x10);
    local_9e0 = 0;
    goto LAB_142909927;
  }
  local_218 = FUN_146af3e40;
  local_210 = 0;
  FUN_146af3ca6(&local_978,param_1);
  local_a08 = *(undefined2 *)local_c18;
  local_a00 = (undefined8 *)0x0;
  local_9f8 = 0;
  FUN_146af7e0a(&local_a00,local_c00);
  iVar4 = local_9f8;
  puVar15 = local_a00;
  local_778 = (float)CONCAT22(local_778._2_2_,local_a08);
  local_a00 = (undefined8 *)0x0;
  local_9f8 = 0;
  if (local_768 == 0) {
LAB_1429099a9:
    if (local_770 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_770 != (undefined8 *)0x0) {
    (**(code **)*local_770)(local_770,0);
    FUN_1446efa72(&local_770,0,0,0x10);
    local_768 = 0;
    goto LAB_1429099a9;
  }
  local_770 = puVar15;
  local_768 = iVar4;
  if (local_9f8 == 0) {
LAB_142909a0d:
    if (local_a00 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a00 != (undefined8 *)0x0) {
    (**(code **)*local_a00)(local_a00,0);
    FUN_1446efa72(&local_a00,0,0,0x10);
    local_9f8 = 0;
    goto LAB_142909a0d;
  }
  local_760 = *(undefined4 *)(param_1 + 0x3ec);
  local_a20 = CONCAT11(1,DAT_14c96b1e1);
  local_908 = local_a20;
  local_a18 = (undefined8 *)0x0;
  uStack_a10 = 0;
  if (local_8f8 == 0) {
LAB_142909a61:
    if (local_900 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_900 != (undefined8 *)0x0) {
    (**(code **)*local_900)(local_900,0);
    FUN_1446efa72(&local_900,0,0,0x10);
    local_8f8 = 0;
    goto LAB_142909a61;
  }
  local_900 = (undefined8 *)0x0;
  local_8f8 = 0;
  if ((int)uStack_a10 == 0) {
LAB_142909acc:
    if (local_a18 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a18 != (undefined8 *)0x0) {
    (**(code **)*local_a18)(local_a18,0);
    FUN_1446efa72(&local_a18,0,0,0x10);
    uStack_a10 = uStack_a10 & 0xffffffff00000000;
    goto LAB_142909acc;
  }
  FUN_146b03e96(&local_218,0x53,local_2d8);
  FUN_146af3d64(&local_218,&local_490,&local_978);
  plVar17 = (longlong *)CONCAT44(uStack_484,local_488);
  if (plVar17 == (longlong *)0x0) {
    *(code **)(param_1 + 0x288) = local_490;
    plVar16 = *(longlong **)(param_1 + 0x290);
    if (plVar16 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x290) = 0;
LAB_142909b8c:
      LOCK();
      plVar17 = plVar16 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
joined_r0x000142909b80:
        if (iVar4 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    *(code **)(param_1 + 0x288) = local_490;
    plVar16 = *(longlong **)(param_1 + 0x290);
    if (plVar17 == plVar16) {
      LOCK();
      plVar16 = plVar17 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar4 = *piVar1;
        UNLOCK();
        plVar16 = plVar17;
        goto joined_r0x000142909b80;
      }
    }
    else {
      *(longlong **)(param_1 + 0x290) = plVar17;
      if (plVar16 != (longlong *)0x0) goto LAB_142909b8c;
    }
  }
  plVar17 = (longlong *)CONCAT44(uStack_484,local_488);
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar17 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
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
  plVar17 = (longlong *)CONCAT44(uStack_20c,local_210);
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar17 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
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
  FUN_146af3dd8(&local_978);
  lVar11 = *param_6;
  if (lVar11 == 0) {
    FUN_146a6ef34(&local_978);
    local_490 = FUN_146af3fe4;
    local_488 = 0;
    FUN_146af3e62(&local_218,param_1);
    iVar4 = local_210;
    pcVar8 = local_218;
    local_218 = (code *)0x0;
    local_210 = 0;
    if (local_7c0 == 0) {
LAB_142909c7c:
      if (local_7c8 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_7c8 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_7c8)(local_7c8,0);
      FUN_1446efa72(&local_7c8,0,0,0x10);
      local_7c0 = 0;
      goto LAB_142909c7c;
    }
    local_7c8 = pcVar8;
    local_7c0 = iVar4;
    if (local_210 == 0) {
LAB_142909e04:
      if (local_218 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_218 != (code *)0x0) {
      (*(code *)**(undefined8 **)local_218)(local_218,0);
      FUN_1446efa72(&local_218,0,0,0x10);
      local_210 = 0;
      goto LAB_142909e04;
    }
    local_7a4 = *(undefined4 *)(param_1 + 0x3ec);
    local_7d0 = param_9;
    if (param_9 == 0) {
      lVar11 = FUN_140a2b044(&DAT_14c96b348);
      if (lVar11 == 0) {
        lVar11 = DAT_14c96b350;
      }
      local_218 = (code *)0x149edb750;
      local_210 = 9;
      uStack_20c = uStack_20c & 0xffffff00;
      uVar10 = FUN_14001a6c0(&local_218,1);
      local_7d0 = FUN_145817968(lVar11,uVar10,0,0);
    }
    local_7a8 = CONCAT13(param_10,(undefined3)local_7a8);
    local_c28 = local_2d8;
    FUN_146a7fc04(&local_218,"SScrollBar",
                  ".\\Runtime/Slate/Private/Widgets/Views/STableViewBase.cpp",0x67);
    FUN_146a6f02a(&local_218,&local_490,&local_978);
    plVar17 = (longlong *)CONCAT44(uStack_484,local_488);
    if (plVar17 == (longlong *)0x0) {
      local_c18 = (undefined8 *)(param_1 + 0x298);
      *(code **)(param_1 + 0x298) = local_490;
      plVar16 = *(longlong **)(param_1 + 0x2a0);
      if (plVar16 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x2a0) = 0;
LAB_142909f83:
        local_c18 = (undefined8 *)(param_1 + 0x298);
        LOCK();
        plVar17 = plVar16 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
joined_r0x000142909f50:
          if (iVar4 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      local_c18 = (undefined8 *)(param_1 + 0x298);
      *(code **)(param_1 + 0x298) = local_490;
      plVar16 = *(longlong **)(param_1 + 0x2a0);
      if (plVar17 == plVar16) {
        LOCK();
        plVar16 = plVar17 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar4 = *piVar1;
          UNLOCK();
          plVar16 = plVar17;
          goto joined_r0x000142909f50;
        }
      }
      else {
        *(longlong **)(param_1 + 0x2a0) = plVar17;
        if (plVar16 != (longlong *)0x0) goto LAB_142909f83;
      }
    }
    plVar17 = (longlong *)CONCAT44(uStack_484,local_488);
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar17 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
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
    plVar17 = (longlong *)CONCAT44(uStack_20c,local_210);
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar17 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
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
    FUN_146a6f09e(&local_978);
    if (param_9 == 0) {
      fVar18 = 16.0;
    }
    else {
      fVar18 = *(float *)(param_9 + 0x640) + 4.0;
    }
    *(undefined8 *)(param_1 + 0x4d0) = 0;
    if (*(int *)(param_1 + 0x3ec) == 1) {
      FUN_140a5296a();
      FUN_140a50426(local_2d8);
      local_a48 = 0x3f800000;
      local_a44 = 1;
      local_a40 = 0;
      uStack_a38 = 0;
      uVar12 = FUN_140a5475a(local_2d8);
      FUN_1407679b0(&local_490);
      FUN_145aafb3e(&local_550);
      uVar13 = FUN_145aaf900(&local_550);
      local_a78 = *(undefined8 *)(param_1 + 0x288);
      plVar17 = *(longlong **)(param_1 + 0x290);
      if (plVar17 == (longlong *)0x0) {
        local_a70 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
        local_a70 = plVar17;
      }
      uVar13 = FUN_145aaf878(uVar13,&local_a78);
      uVar13 = FUN_145aaf822(&local_490,uVar13);
      FUN_145aafb3e(&local_610);
      local_a90 = 0x3f800000;
      local_a8c = 1;
      local_a88 = 0;
      uStack_a80 = 0;
      uVar14 = FUN_140767d84(&local_610);
      local_aa0 = *local_c08;
      plVar16 = (longlong *)*local_c10;
      if (plVar16 == (longlong *)0x0) {
        local_a98 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        local_a98 = plVar16;
      }
      uVar14 = FUN_145aaf878(uVar14,&local_aa0);
      uVar13 = FUN_145aaf822(uVar13,uVar14);
      local_c28 = &local_ab9;
      FUN_14076837c(&local_ab8,"SVerticalBox",
                    ".\\Runtime/Slate/Private/Widgets/Views/STableViewBase.cpp",0x76);
      FUN_14076784c(&local_ab8,&local_a68,uVar13);
      local_a58 = local_a68;
      local_a50 = local_a60;
      if (local_a60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_a60 + 1) = (int)local_a60[1] + 1;
        UNLOCK();
      }
      uVar12 = FUN_140a4fe8e(uVar12,&local_a58);
      uVar12 = FUN_140a52392(&local_218,uVar12);
      FUN_140a50426(&local_6d0);
      puVar15 = (undefined8 *)FUN_140a52578();
      local_ae8 = *(undefined4 *)(param_1 + 0x2a8);
      uStack_ae4 = *(undefined4 *)(param_1 + 0x2ac);
      uStack_ae0 = *(undefined4 *)(param_1 + 0x2b0);
      uStack_adc = *(undefined4 *)(param_1 + 0x2b4);
      local_ad8 = 1;
      local_ac8 = 0;
      *(undefined4 *)(puVar15 + 3) = local_ae8;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_ae4;
      *(undefined4 *)(puVar15 + 4) = uStack_ae0;
      *(undefined4 *)((longlong)puVar15 + 0x24) = uStack_adc;
      *(undefined1 *)(puVar15 + 5) = 1;
      plVar6 = puVar15 + 6;
      local_ad0 = (undefined8 *)0x0;
      if (*(int *)(puVar15 + 7) == 0) {
LAB_14290a3ab:
        if (*plVar6 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar7 = (undefined8 *)*plVar6;
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)(puVar7,0);
          FUN_1446efa72(plVar6,0,0,0x10);
          *(undefined4 *)(puVar15 + 7) = 0;
          goto LAB_14290a3ab;
        }
      }
      puVar15[6] = 0;
      *(undefined4 *)(puVar15 + 7) = 0;
      if ((int)local_ac8 == 0) {
LAB_14290a40e:
        if (local_ad0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_ad0 != (undefined8 *)0x0) {
        (**(code **)*local_ad0)(local_ad0,0);
        FUN_1446efa72(&local_ad0,0,0,0x10);
        local_ac8 = local_ac8 & 0xffffffff00000000;
        goto LAB_14290a40e;
      }
      *(undefined8 *)(param_1 + 0x4d0) = *puVar15;
      FUN_140a53a96(&local_978);
      local_b1c = 1;
      local_78c = 1;
      local_b18 = (undefined8 *)0x0;
      uStack_b10 = 0;
      local_b20 = fVar18;
      local_790 = fVar18;
      if (local_780 == 0) {
LAB_14290a474:
        if (local_788 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_788 != (undefined8 *)0x0) {
        (**(code **)*local_788)(local_788,0);
        FUN_1446efa72(&local_788,0,0,0x10);
        local_780 = 0;
        goto LAB_14290a474;
      }
      local_788 = (undefined8 *)0x0;
      local_780 = 0;
      if ((int)uStack_b10 == 0) {
LAB_14290a4e2:
        if (local_b18 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_b18 != (undefined8 *)0x0) {
        (**(code **)*local_b18)(local_b18,0);
        FUN_1446efa72(&local_b18,0,0,0x10);
        uStack_b10 = uStack_b10 & 0xffffffff00000000;
        goto LAB_14290a4e2;
      }
      plVar3 = local_798;
      local_7a0 = (undefined8 *)*local_c18;
      plVar6 = *(longlong **)(param_1 + 0x2a0);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      plVar9 = plVar6;
      if (local_798 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_798 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          puVar7 = (undefined8 *)*local_798;
          local_798 = plVar6;
          (*(code *)*puVar7)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar9 = local_798;
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            plVar9 = local_798;
          }
        }
      }
      local_798 = plVar9;
      local_c28 = &local_b39;
      FUN_140a53d66(local_b38,&DAT_149efe19f,
                    ".\\Runtime/Slate/Private/Widgets/Views/STableViewBase.cpp",0x87);
      FUN_140a50bf4(local_b38,&local_b08,&local_978);
      local_af8 = local_b08;
      local_af0 = local_b00;
      if (local_b00 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b00 + 1) = (int)local_b00[1] + 1;
        UNLOCK();
      }
      uVar13 = FUN_140a4fe8e(puVar15,&local_af8);
      uVar12 = FUN_140a52392(uVar12,uVar13);
      local_c28 = &local_b59;
      FUN_140a541dc(local_b58,"SHorizontalBox",
                    ".\\Runtime/Slate/Private/Widgets/Views/STableViewBase.cpp",0x72);
      FUN_140a50ec6(local_b58,&local_a30,uVar12);
      if (local_a28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_a28 + 1) = (int)local_a28[1] + 1;
        UNLOCK();
        if (local_a28 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_a28 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_a28)(local_a28);
            LOCK();
            piVar1 = (int *)((longlong)local_a28 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_a28 + 0x10))(local_a28);
            }
          }
        }
      }
      if (local_b50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_b50 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_b50)(local_b50);
          LOCK();
          piVar1 = (int *)((longlong)local_b50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b50 + 0x10))(local_b50);
          }
        }
      }
      plVar3 = local_af0;
      if (local_af0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_af0 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_af0)(local_af0);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (local_b00 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_b00 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_b00)(local_b00);
          LOCK();
          piVar1 = (int *)((longlong)local_b00 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b00 + 0x10))(local_b00);
          }
        }
      }
      if (local_b30 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_b30 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_b30)(local_b30);
          LOCK();
          piVar1 = (int *)((longlong)local_b30 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b30 + 0x10))(local_b30);
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      FUN_140a5660c(&local_978);
      FUN_140a509a6(&local_6d0);
      plVar6 = local_a50;
      if (local_a50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_a50 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_a50)(local_a50);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (local_a60 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_a60 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_a60)(local_a60);
          LOCK();
          piVar1 = (int *)((longlong)local_a60 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_a60 + 0x10))(local_a60);
          }
        }
      }
      plVar6 = local_ab0;
      if (local_ab0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_ab0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_ab0)(local_ab0);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      plVar6 = local_a98;
      if (local_a98 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_a98 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_a98)(local_a98);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar16 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      FUN_140767f30(&local_610);
      plVar16 = local_a70;
      if (local_a70 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_a70 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_a70)(local_a70);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar17 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
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
      FUN_140767f30(&local_550);
      FUN_141492598(local_2e8,local_2e0);
      if (local_2e8 != 0) {
        FUN_1400020a8();
      }
      FUN_140a4ff8c(&local_490);
      FUN_140a509a6(local_2d8);
      FUN_140a4fdc8(local_70,local_68);
      puVar15 = local_a30;
      plVar17 = local_a28;
    }
    else {
      FUN_1407679b0(&local_218);
      FUN_145aafb3e(local_2d8);
      local_b78 = 0x3f800000;
      local_b74 = 1;
      local_b70 = 0;
      uStack_b68 = 0;
      uVar12 = FUN_140767d84(local_2d8);
      FUN_1407679b0(&local_490);
      FUN_145aafb3e(&local_550);
      uVar13 = FUN_145aaf900(&local_550);
      local_a78 = *(undefined8 *)(param_1 + 0x288);
      plVar17 = *(longlong **)(param_1 + 0x290);
      if (plVar17 == (longlong *)0x0) {
        local_a70 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
        local_a70 = plVar17;
      }
      uVar13 = FUN_145aaf878(uVar13,&local_a78);
      uVar13 = FUN_145aaf822(&local_490,uVar13);
      FUN_145aafb3e(&local_610);
      local_b90 = 0x3f800000;
      local_b8c = 1;
      local_b88 = 0;
      uStack_b80 = 0;
      uVar14 = FUN_140767d84(&local_610);
      local_aa0 = *local_c08;
      plVar16 = (longlong *)*local_c10;
      if (plVar16 == (longlong *)0x0) {
        local_a98 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        local_a98 = plVar16;
      }
      uVar14 = FUN_145aaf878(uVar14,&local_aa0);
      uVar13 = FUN_145aaf822(uVar13,uVar14);
      local_c28 = &local_ab9;
      FUN_14076837c(&local_ab8,"SVerticalBox",
                    ".\\Runtime/Slate/Private/Widgets/Views/STableViewBase.cpp",0x95);
      FUN_14076784c(&local_ab8,&local_a68,uVar13);
      local_a58 = local_a68;
      local_a50 = local_a60;
      if (local_a60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_a60 + 1) = (int)local_a60[1] + 1;
        UNLOCK();
      }
      uVar12 = FUN_145aaf878(uVar12,&local_a58);
      uVar12 = FUN_145aaf822(&local_218,uVar12);
      FUN_145aafb3e(&local_6d0);
      puVar15 = (undefined8 *)FUN_145aaf900();
      local_bb8 = *(undefined4 *)(param_1 + 0x2a8);
      uStack_bb4 = *(undefined4 *)(param_1 + 0x2ac);
      uStack_bb0 = *(undefined4 *)(param_1 + 0x2b0);
      uStack_bac = *(undefined4 *)(param_1 + 0x2b4);
      local_ba8 = 1;
      local_b98 = 0;
      *(undefined4 *)(puVar15 + 3) = local_bb8;
      *(undefined4 *)((longlong)puVar15 + 0x1c) = uStack_bb4;
      *(undefined4 *)(puVar15 + 4) = uStack_bb0;
      *(undefined4 *)((longlong)puVar15 + 0x24) = uStack_bac;
      *(undefined1 *)(puVar15 + 5) = 1;
      plVar6 = puVar15 + 6;
      local_ba0 = (undefined8 *)0x0;
      if (*(int *)(puVar15 + 7) == 0) {
LAB_14290aa34:
        if (*plVar6 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar7 = (undefined8 *)*plVar6;
        if (puVar7 != (undefined8 *)0x0) {
          (**(code **)*puVar7)(puVar7,0);
          FUN_1446efa72(plVar6,0,0,0x10);
          *(undefined4 *)(puVar15 + 7) = 0;
          goto LAB_14290aa34;
        }
      }
      puVar15[6] = 0;
      *(undefined4 *)(puVar15 + 7) = 0;
      if ((int)local_b98 == 0) {
LAB_14290aa97:
        if (local_ba0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_ba0 != (undefined8 *)0x0) {
        (**(code **)*local_ba0)(local_ba0,0);
        FUN_1446efa72(&local_ba0,0,0,0x10);
        local_b98 = local_b98 & 0xffffffff00000000;
        goto LAB_14290aa97;
      }
      *(undefined8 *)(param_1 + 0x4d0) = *puVar15;
      FUN_140a53a96(&local_978);
      local_bcc = 1;
      local_774 = 1;
      local_bc8 = (undefined8 *)0x0;
      uStack_bc0 = 0;
      local_bd0 = fVar18;
      local_778 = fVar18;
      if (local_768 == 0) {
LAB_14290aaf4:
        if (local_770 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_770 != (undefined8 *)0x0) {
        (**(code **)*local_770)(local_770,0);
        FUN_1446efa72(&local_770,0,0,0x10);
        local_768 = 0;
        goto LAB_14290aaf4;
      }
      local_770 = (undefined8 *)0x0;
      local_768 = 0;
      if ((int)uStack_bc0 == 0) {
LAB_14290ab62:
        if (local_bc8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_bc8 != (undefined8 *)0x0) {
        (**(code **)*local_bc8)(local_bc8,0);
        FUN_1446efa72(&local_bc8,0,0,0x10);
        uStack_bc0 = uStack_bc0 & 0xffffffff00000000;
        goto LAB_14290ab62;
      }
      plVar3 = local_798;
      local_7a0 = (undefined8 *)*local_c18;
      plVar6 = *(longlong **)(param_1 + 0x2a0);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      plVar9 = plVar6;
      if (local_798 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_798 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          puVar7 = (undefined8 *)*local_798;
          local_798 = plVar6;
          (*(code *)*puVar7)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar9 = local_798;
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            plVar9 = local_798;
          }
        }
      }
      local_798 = plVar9;
      local_c28 = &local_b39;
      FUN_140a53d66(local_b38,&DAT_149efe19f,
                    ".\\Runtime/Slate/Private/Widgets/Views/STableViewBase.cpp",0xa6);
      FUN_140a50bf4(local_b38,&local_b08,&local_978);
      local_af8 = local_b08;
      local_af0 = local_b00;
      if (local_b00 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_b00 + 1) = (int)local_b00[1] + 1;
        UNLOCK();
      }
      uVar13 = FUN_145aaf878(puVar15,&local_af8);
      uVar12 = FUN_145aaf822(uVar12,uVar13);
      local_c28 = &local_b59;
      FUN_14076837c(local_b58,"SVerticalBox",
                    ".\\Runtime/Slate/Private/Widgets/Views/STableViewBase.cpp",0x91);
      FUN_14076784c(local_b58,&local_a30,uVar12);
      if (local_a28 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_a28 + 1) = (int)local_a28[1] + 1;
        UNLOCK();
        if (local_a28 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_a28 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_a28)(local_a28);
            LOCK();
            piVar1 = (int *)((longlong)local_a28 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_a28 + 0x10))(local_a28);
            }
          }
        }
      }
      if (local_b50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_b50 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_b50)(local_b50);
          LOCK();
          piVar1 = (int *)((longlong)local_b50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b50 + 0x10))(local_b50);
          }
        }
      }
      plVar3 = local_af0;
      if (local_af0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_af0 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_af0)(local_af0);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (local_b00 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_b00 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_b00)(local_b00);
          LOCK();
          piVar1 = (int *)((longlong)local_b00 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b00 + 0x10))(local_b00);
          }
        }
      }
      if (local_b30 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_b30 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_b30)(local_b30);
          LOCK();
          piVar1 = (int *)((longlong)local_b30 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b30 + 0x10))(local_b30);
          }
        }
      }
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      FUN_140a5660c(&local_978);
      FUN_140767f30(&local_6d0);
      plVar6 = local_a50;
      if (local_a50 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_a50 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_a50)(local_a50);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (local_a60 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_a60 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_a60)(local_a60);
          LOCK();
          piVar1 = (int *)((longlong)local_a60 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_a60 + 0x10))(local_a60);
          }
        }
      }
      plVar6 = local_ab0;
      if (local_ab0 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_ab0 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_ab0)(local_ab0);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      plVar6 = local_a98;
      if (local_a98 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_a98 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_a98)(local_a98);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar16 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      FUN_140767f30(&local_610);
      plVar16 = local_a70;
      if (local_a70 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_a70 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_a70)(local_a70);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar16 = plVar17 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
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
      FUN_140767f30(&local_550);
      FUN_141492598(local_2e8,local_2e0);
      if (local_2e8 != 0) {
        FUN_1400020a8();
      }
      FUN_140a4ff8c(&local_490);
      FUN_140767f30(local_2d8);
      FUN_141492598(local_70,local_68);
      puVar15 = local_a30;
      plVar17 = local_a28;
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    FUN_140a4ff8c(&local_218);
LAB_14290afae:
    lVar11 = *param_5;
    if (lVar11 == 0) {
      local_978 = puVar15;
      local_970 = plVar17;
      if (plVar17 == (longlong *)0x0) {
LAB_14290afd6:
        plVar17 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
      }
      FUN_140a58896(param_1 + 0x1e0,&local_978);
      plVar16 = local_970;
      if (local_970 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_970 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_970)(local_970);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
      }
      goto LAB_14290b541;
    }
  }
  else {
    lVar5 = param_6[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar17 = *(longlong **)(param_1 + 0x2a0);
    *(longlong *)(param_1 + 0x298) = lVar11;
    *(longlong *)(param_1 + 0x2a0) = lVar5;
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar17 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
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
    lVar11 = *(longlong *)(param_1 + 0x298);
    local_218 = FUN_146af3fe4;
    local_210 = 0;
    FUN_146af3e62(&local_978,param_1);
    FUN_140328a42(lVar11 + 0x310,&local_978);
    if ((int)local_970 == 0) {
LAB_142909d92:
      if (local_978 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_978 != (undefined8 *)0x0) {
      (**(code **)*local_978)(local_978,0);
      FUN_1446efa72(&local_978,0,0,0x10);
      local_970 = (longlong *)((ulonglong)local_970._4_4_ << 0x20);
      goto LAB_142909d92;
    }
    puVar15 = (undefined8 *)*local_c08;
    plVar17 = (longlong *)*local_c10;
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      goto LAB_14290afae;
    }
    lVar11 = *param_5;
    if (lVar11 == 0) {
      local_970 = (longlong *)0x0;
      local_978 = puVar15;
      goto LAB_14290afd6;
    }
    plVar17 = (longlong *)0x0;
  }
  if (*param_6 == 0) {
    local_978 = *(undefined8 **)(param_1 + 0x298);
    local_970 = *(longlong **)(param_1 + 0x2a0);
    if (local_970 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_970 + 1) = (int)local_970[1] + 1;
      UNLOCK();
    }
    FUN_146af09f4(lVar11,&local_978);
    plVar16 = local_970;
    if (local_970 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_970 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_970)(local_970);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
  }
  FUN_1407679b0(&local_978);
  FUN_145aafb3e(&local_218);
  uVar12 = FUN_145aaf900(&local_218);
  local_6d0 = *param_5;
  plVar16 = (longlong *)param_5[1];
  if (plVar16 == (longlong *)0x0) {
    local_6c8 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    local_6c8 = plVar16;
  }
  uVar12 = FUN_145aaf878(uVar12,&local_6d0);
  uVar12 = FUN_145aaf822(&local_978,uVar12);
  FUN_145aafb3e(&local_490);
  local_be8 = 0x3f800000;
  local_be4 = 1;
  local_be0 = 0;
  uStack_bd8 = 0;
  uVar13 = FUN_140767d84(&local_490);
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
  }
  local_ab8 = puVar15;
  local_ab0 = plVar17;
  uVar13 = FUN_145aaf878(uVar13,&local_ab8);
  uVar12 = FUN_145aaf822(uVar12,uVar13);
  local_c28 = local_b38;
  FUN_14076837c(local_2d8,"SVerticalBox",".\\Runtime/Slate/Private/Widgets/Views/STableViewBase.cpp"
                ,0xba);
  FUN_14076784c(local_2d8,&local_610,uVar12);
  local_550 = local_610;
  local_548 = local_608;
  if (local_608 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_608 + 1) = (int)local_608[1] + 1;
    UNLOCK();
  }
  FUN_140a58896(param_1 + 0x1e0,&local_550);
  plVar6 = local_548;
  if (local_548 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_548 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_548)(local_548);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_608 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_608 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_608)(local_608);
      LOCK();
      piVar1 = (int *)((longlong)local_608 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_608 + 0x10))(local_608);
      }
    }
  }
  if (local_2d0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_2d0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_2d0)(local_2d0);
      LOCK();
      piVar1 = (int *)((longlong)local_2d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_2d0 + 0x10))(local_2d0);
      }
    }
  }
  plVar6 = local_ab0;
  if (local_ab0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_ab0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_ab0)(local_ab0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_140767f30(&local_490);
  plVar6 = local_6c8;
  if (local_6c8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_6c8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_6c8)(local_6c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar16 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  FUN_140767f30(&local_218);
  FUN_141492598(local_7d0,(ulonglong)local_7c8 & 0xffffffff);
  if (local_7d0 != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(&local_978);
LAB_14290b541:
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar17 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_c48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290b798 FUN_14290b798 body=48 status=ok
// SIG undefined FUN_14290b798(void)

longlong FUN_14290b798(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x268;
  FUN_1429068d2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14290b7da FUN_14290b7da body=75 status=ok
// SIG undefined FUN_14290b7da(void)

undefined8 * FUN_14290b7da(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1c560;
  plVar2 = (longlong *)param_1[0x40];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14290b828 FUN_14290b828 body=68 status=ok
// SIG undefined FUN_14290b828(void)

void FUN_14290b828(void)

{
  if (DAT_14c990480 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c990460,DAT_14c990468);
  if (DAT_14c990460 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14290b88a FUN_14290b88a body=59 status=ok
// SIG undefined FUN_14290b88a(void)

longlong FUN_14290b88a(longlong param_1,int param_2)

{
  FUN_145af29ff(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14290b8c6 FUN_14290b8c6 body=176 status=ok
// SIG undefined FUN_14290b8c6(void)

longlong * FUN_14290b8c6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14290b91e:
    lVar5 = DAT_14c98dec8;
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = lVar5;
  }
  else {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_14290b91e;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      lVar5 = DAT_14c98dec8;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = lVar5;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *param_2 = lVar4;
      param_2[1] = (longlong)plVar3;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      param_2[2] = *param_2;
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



// FUNCTION 14290b982 FUN_14290b982 body=68 status=ok
// SIG undefined FUN_14290b982(void)

void FUN_14290b982(void)

{
  if (DAT_14c9904c0 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c9904a0,DAT_14c9904a8);
  if (DAT_14c9904a0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14290b9c6 FUN_14290b9c6 body=68 status=ok
// SIG undefined FUN_14290b9c6(void)

void FUN_14290b9c6(void)

{
  if (DAT_14c990500 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c9904e0,DAT_14c9904e8);
  if (DAT_14c9904e0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14290ba0a FUN_14290ba0a body=68 status=ok
// SIG undefined FUN_14290ba0a(void)

void FUN_14290ba0a(void)

{
  if (DAT_14c990540 != 0) {
    FUN_1400020a8();
  }
  FUN_140a59604(DAT_14c990520,DAT_14c990528);
  if (DAT_14c990520 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14290ba4e FUN_14290ba4e body=59 status=ok
// SIG undefined FUN_14290ba4e(void)

longlong FUN_14290ba4e(longlong param_1,int param_2)

{
  FUN_146af7dd5(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14290ba9a FUN_14290ba9a body=57 status=ok
// SIG undefined FUN_14290ba9a(void)

void FUN_14290ba9a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149f1feb0;
  plVar2 = *(longlong **)(param_1 + 0x210);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_140c057ec(param_1 + 0x10);
  return;
}



// FUNCTION 14290bad4 FUN_14290bad4 body=75 status=ok
// SIG undefined FUN_14290bad4(void)

undefined8 * FUN_14290bad4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1feb0;
  plVar2 = (longlong *)param_1[0x40];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_140c057ec(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14290bb20 FUN_14290bb20 body=29 status=ok
// SIG undefined FUN_14290bb20(void)

undefined8 FUN_14290bb20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14290bb52 FUN_14290bb52 body=85 status=ok
// SIG undefined FUN_14290bb52(void)

void FUN_14290bb52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f1e680;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1e610;
  return;
}



// FUNCTION 14290bba8 FUN_14290bba8 body=85 status=ok
// SIG undefined FUN_14290bba8(void)

void FUN_14290bba8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f1e680;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1e610;
  return;
}



// FUNCTION 14290bbfe FUN_14290bbfe body=118 status=ok
// SIG undefined FUN_14290bbfe(void)

void FUN_14290bbfe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f1e680;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1e610;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014290bc65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14290bc74 FUN_14290bc74 body=103 status=ok
// SIG undefined FUN_14290bc74(void)

undefined8
FUN_14290bc74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_328 [32];
  undefined1 local_308 [744];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_328;
  FUN_140e9ea3a(local_308,param_4);
  FUN_140a5eee8(param_2,param_3,local_308);
  if ((local_20 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290bcdc FUN_14290bcdc body=142 status=ok
// SIG undefined FUN_14290bcdc(void)

undefined8 FUN_14290bcdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_338 [32];
  undefined1 local_318 [8];
  longlong *local_310;
  undefined1 local_308 [744];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_338;
  FUN_140e9ea3a(local_308,param_3);
  FUN_140a5eee8(local_318,param_2,local_308);
  if (local_310 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_310 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_310)(local_310);
      LOCK();
      piVar2 = (int *)((longlong)local_310 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_310 + 0x10))(local_310);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290bd6c FUN_14290bd6c body=29 status=ok
// SIG undefined FUN_14290bd6c(void)

undefined8 FUN_14290bd6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14290bd9e FUN_14290bd9e body=93 status=ok
// SIG undefined FUN_14290bd9e(void)

void FUN_14290bd9e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1e7d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14290bdfc FUN_14290bdfc body=93 status=ok
// SIG undefined FUN_14290bdfc(void)

void FUN_14290bdfc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1e7d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14290be5a FUN_14290be5a body=126 status=ok
// SIG undefined FUN_14290be5a(void)

void FUN_14290be5a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1e7d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014290bec9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14290bed8 FUN_14290bed8 body=38 status=ok
// SIG undefined FUN_14290bed8(void)

void FUN_14290bed8(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_146ae304e(uVar1);
  FUN_146ae1f82(uVar1);
  FUN_146ae311c(uVar1);
  return;
}



// FUNCTION 14290befe FUN_14290befe body=41 status=ok
// SIG undefined FUN_14290befe(void)

undefined1 FUN_14290befe(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_146ae304e(uVar1);
  FUN_146ae1f82(uVar1);
  FUN_146ae311c(uVar1);
  return 1;
}



// FUNCTION 14290bf28 FUN_14290bf28 body=29 status=ok
// SIG undefined FUN_14290bf28(void)

undefined8 FUN_14290bf28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14290bf5a FUN_14290bf5a body=93 status=ok
// SIG undefined FUN_14290bf5a(void)

void FUN_14290bf5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f134c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1ea00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14290bfb8 FUN_14290bfb8 body=93 status=ok
// SIG undefined FUN_14290bfb8(void)

void FUN_14290bfb8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f134c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1ea00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14290c016 FUN_14290c016 body=126 status=ok
// SIG undefined FUN_14290c016(void)

void FUN_14290c016(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f134c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1ea00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014290c085. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14290c094 FUN_14290c094 body=29 status=ok
// SIG undefined FUN_14290c094(void)

undefined8 FUN_14290c094(longlong param_1,undefined8 param_2)

{
  FUN_1409cf936(param_2,*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 14290c0b2 FUN_14290c0b2 body=80 status=ok
// SIG undefined FUN_14290c0b2(void)

undefined8 FUN_14290c0b2(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1409cf936(local_20,*(undefined8 *)(param_1 + 0x18));
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290c104 FUN_14290c104 body=29 status=ok
// SIG undefined FUN_14290c104(void)

undefined8 FUN_14290c104(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14290c136 FUN_14290c136 body=93 status=ok
// SIG undefined FUN_14290c136(void)

void FUN_14290c136(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1ea70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14290c194 FUN_14290c194 body=93 status=ok
// SIG undefined FUN_14290c194(void)

void FUN_14290c194(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149ed0600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1ea70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14290c1f2 FUN_14290c1f2 body=126 status=ok
// SIG undefined FUN_14290c1f2(void)

void FUN_14290c1f2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149ed0600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1ea70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014290c261. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14290c270 FUN_14290c270 body=84 status=ok
// SIG undefined FUN_14290c270(void)

bool FUN_14290c270(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  cVar3 = (**(code **)(*plVar1 + 0x198))(plVar1);
  bVar4 = true;
  if ((cVar3 == '\0') && (lVar2 = plVar1[0x3d], *(char *)(lVar2 + 0x9b8) == '\0')) {
    if ((*(longlong *)(lVar2 + 0x9c0) == 0) || (*(longlong *)(lVar2 + 0x9c8) == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = 0 < *(int *)(*(longlong *)(lVar2 + 0x9c8) + 8);
    }
  }
  return bVar4;
}



// FUNCTION 14290c2c4 FUN_14290c2c4 body=74 status=ok
// SIG undefined FUN_14290c2c4(void)

undefined8 FUN_14290c2c4(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x198))(*(longlong **)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14290c30e FUN_14290c30e body=29 status=ok
// SIG undefined FUN_14290c30e(void)

undefined8 FUN_14290c30e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14290c340 FUN_14290c340 body=93 status=ok
// SIG undefined FUN_14290c340(void)

void FUN_14290c340(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f134c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1eae0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14290c39e FUN_14290c39e body=93 status=ok
// SIG undefined FUN_14290c39e(void)

void FUN_14290c39e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f134c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1eae0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14290c3fc FUN_14290c3fc body=126 status=ok
// SIG undefined FUN_14290c3fc(void)

void FUN_14290c3fc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f134c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1eae0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014290c46b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14290c47a FUN_14290c47a body=29 status=ok
// SIG undefined FUN_14290c47a(void)

undefined8 FUN_14290c47a(longlong param_1,undefined8 param_2)

{
  FUN_1409cf936(param_2,*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 14290c498 FUN_14290c498 body=80 status=ok
// SIG undefined FUN_14290c498(void)

undefined8 FUN_14290c498(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1409cf936(local_20,*(undefined8 *)(param_1 + 0x18));
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290c4ea FUN_14290c4ea body=31 status=ok
// SIG undefined FUN_14290c4ea(void)

undefined8 FUN_14290c4ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14290c50a FUN_14290c50a body=20 status=ok
// SIG undefined FUN_14290c50a(void)

undefined8 FUN_14290c50a(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 14290c52c FUN_14290c52c body=29 status=ok
// SIG undefined FUN_14290c52c(void)

undefined8 FUN_14290c52c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14290c55e FUN_14290c55e body=93 status=ok
// SIG undefined FUN_14290c55e(void)

void FUN_14290c55e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f134c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1eca0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14290c5bc FUN_14290c5bc body=93 status=ok
// SIG undefined FUN_14290c5bc(void)

void FUN_14290c5bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f134c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1eca0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14290c61a FUN_14290c61a body=126 status=ok
// SIG undefined FUN_14290c61a(void)

void FUN_14290c61a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f134c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1eca0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014290c689. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14290c698 FUN_14290c698 body=29 status=ok
// SIG undefined FUN_14290c698(void)

undefined8 FUN_14290c698(longlong param_1,undefined8 param_2)

{
  FUN_1409cf936(param_2,*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 14290c6b6 FUN_14290c6b6 body=80 status=ok
// SIG undefined FUN_14290c6b6(void)

undefined8 FUN_14290c6b6(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1409cf936(local_20,*(undefined8 *)(param_1 + 0x18));
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290c708 FUN_14290c708 body=64 status=ok
// SIG undefined FUN_14290c708(void)

undefined8 * FUN_14290c708(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1f6f0;
  plVar2 = (longlong *)param_1[5];
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



// FUNCTION 14290c75c FUN_14290c75c body=118 status=ok
// SIG undefined FUN_14290c75c(void)

void FUN_14290c75c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1f6f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14290c7d2 FUN_14290c7d2 body=118 status=ok
// SIG undefined FUN_14290c7d2(void)

void FUN_14290c7d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1f6f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14290c848 FUN_14290c848 body=156 status=ok
// SIG undefined FUN_14290c848(void)

void FUN_14290c848(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1f6f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014290c8d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14290c8e4 FUN_14290c8e4 body=29 status=ok
// SIG undefined FUN_14290c8e4(void)

undefined8 FUN_14290c8e4(longlong param_1,undefined8 param_2)

{
  FUN_14290c95a(param_2,param_1 + 0x18);
  return param_2;
}



// FUNCTION 14290c902 FUN_14290c902 body=87 status=ok
// SIG undefined FUN_14290c902(void)

undefined8 FUN_14290c902(longlong param_1)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [184];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14290c95a(local_c8,param_1 + 0x18);
  FUN_14493db24(local_c8);
  if ((local_10 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290c95a FUN_14290c95a body=354 status=ok
// SIG undefined FUN_14290c95a(void)

undefined1 * FUN_14290c95a(undefined1 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong *local_f0;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar8 = *(longlong **)(param_2 + 0x10);
  bVar4 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_14290ca36:
    plVar8 = (longlong *)0x0;
LAB_14290ca38:
    *param_1 = 0;
    param_1[0x20] = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    memset(param_1 + 0x28,0,0x88);
    *(undefined4 *)(param_1 + 0xb0) = 0x20702;
    param_1[0xb4] = 0;
    if (bVar4) goto LAB_14290ca8b;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_14290ca36;
      LOCK();
      iVar5 = (int)plVar8[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar3 = *(longlong *)(param_2 + 8);
    if (lVar3 == 0) {
      bVar4 = false;
      goto LAB_14290ca38;
    }
    local_e8[0] = 1;
    local_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    memset(local_c0,0,0x88);
    local_38 = 0x20702;
    local_34 = 0;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_f8 = lVar3;
    local_f0 = plVar8;
    uVar7 = FUN_140592a6e(local_e8);
    FUN_1403d4c6e(param_1,uVar7);
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
    FUN_14493db24(local_e8);
  }
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
LAB_14290ca8b:
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14290cabe FUN_14290cabe body=64 status=ok
// SIG undefined FUN_14290cabe(void)

undefined8 * FUN_14290cabe(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1f760;
  plVar2 = (longlong *)param_1[5];
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



// FUNCTION 14290cb12 FUN_14290cb12 body=118 status=ok
// SIG undefined FUN_14290cb12(void)

void FUN_14290cb12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1f760;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14290cb88 FUN_14290cb88 body=118 status=ok
// SIG undefined FUN_14290cb88(void)

void FUN_14290cb88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1f760;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14290cbfe FUN_14290cbfe body=156 status=ok
// SIG undefined FUN_14290cbfe(void)

void FUN_14290cbfe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1f760;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014290cc8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14290cc9a FUN_14290cc9a body=29 status=ok
// SIG undefined FUN_14290cc9a(void)

undefined8 FUN_14290cc9a(longlong param_1,undefined8 param_2)

{
  FUN_14290cd10(param_2,param_1 + 0x18);
  return param_2;
}



// FUNCTION 14290ccb8 FUN_14290ccb8 body=87 status=ok
// SIG undefined FUN_14290ccb8(void)

undefined8 FUN_14290ccb8(longlong param_1)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [184];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14290cd10(local_c8,param_1 + 0x18);
  FUN_14493db24(local_c8);
  if ((local_10 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290cd10 FUN_14290cd10 body=370 status=ok
// SIG undefined FUN_14290cd10(void)

undefined1 * FUN_14290cd10(undefined1 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar7 = *(longlong **)(param_2 + 0x10);
  bVar3 = true;
  if (plVar7 == (longlong *)0x0) {
LAB_14290cdf7:
    plVar7 = (longlong *)0x0;
LAB_14290cdfd:
    *param_1 = 0;
    param_1[0x20] = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    memset(param_1 + 0x28,0,0x88);
    *(undefined4 *)(param_1 + 0xb0) = 0x20702;
    param_1[0xb4] = 0;
    if (bVar3) goto LAB_14290ce50;
  }
  else {
    iVar6 = (int)plVar7[1];
    do {
      if (iVar6 == 0) goto LAB_14290cdf7;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar8 = iVar6 == iVar4;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar8);
    if ((*(longlong *)(param_2 + 8) == 0) || (cVar5 = FUN_140591fd6(), cVar5 == '\0')) {
      bVar3 = false;
      goto LAB_14290cdfd;
    }
    local_f8[0] = 1;
    local_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    memset(local_d0,0,0x88);
    local_48 = 0x20702;
    local_c0 = 0;
    uStack_b8 = 0;
    local_44 = 1;
    *param_1 = 1;
    param_1[0x20] = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    memset(param_1 + 0x28,0,0x88);
    *(undefined4 *)(param_1 + 0xb0) = local_48;
    param_1[0xb4] = local_44;
    FUN_14493db24(local_f8);
  }
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
LAB_14290ce50:
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14290ce84 FUN_14290ce84 body=64 status=ok
// SIG undefined FUN_14290ce84(void)

undefined8 * FUN_14290ce84(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_149f1f7d0;
  plVar2 = (longlong *)param_1[5];
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



// FUNCTION 14290ced8 FUN_14290ced8 body=118 status=ok
// SIG undefined FUN_14290ced8(void)

void FUN_14290ced8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1f7d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14290cf4e FUN_14290cf4e body=118 status=ok
// SIG undefined FUN_14290cf4e(void)

void FUN_14290cf4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05a00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1f7d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14290cfc4 FUN_14290cfc4 body=156 status=ok
// SIG undefined FUN_14290cfc4(void)

void FUN_14290cfc4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05a00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1f7d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014290d050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14290d060 FUN_14290d060 body=32 status=ok
// SIG undefined FUN_14290d060(void)

undefined8 FUN_14290d060(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14290d0d8(param_2,param_1 + 0x18,param_4);
  return param_2;
}



// FUNCTION 14290d080 FUN_14290d080 body=87 status=ok
// SIG undefined FUN_14290d080(void)

undefined8 FUN_14290d080(longlong param_1)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [184];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14290d0d8(local_c8,param_1 + 0x18);
  FUN_14493db24(local_c8);
  if ((local_10 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290d0d8 FUN_14290d0d8 body=330 status=ok
// SIG undefined FUN_14290d0d8(void)

undefined1 * FUN_14290d0d8(undefined1 *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  
  plVar8 = (longlong *)param_2[2];
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
LAB_14290d120:
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar8[1];
    do {
      if (iVar6 == 0) goto LAB_14290d120;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar9 = iVar6 == iVar4;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar9);
    if ((param_2[1] != 0) && (cVar5 = FUN_140591fd6(), cVar5 != '\0')) {
      lVar2 = *param_2;
      if (((*(int *)(lVar2 + 0x90) != 0) && (*(longlong **)(lVar2 + 0x88) != (longlong *)0x0)) &&
         (cVar5 = (**(code **)(**(longlong **)(lVar2 + 0x88) + 0x30))(), cVar5 != '\0')) {
        if (*(int *)(lVar2 + 0x90) == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)(lVar2 + 0x88);
        }
        uVar10 = (**(code **)(*plVar7 + 0x58))();
        *(undefined4 *)(lVar2 + 0x80) = uVar10;
      }
      fVar11 = *(float *)(lVar2 + 0x80) + *(float *)(param_3 + 0x30);
      fVar12 = 20.0;
      if (20.0 <= fVar11) {
        fVar12 = fVar11;
      }
      FUN_146af0464(*param_2,fVar12);
      *param_1 = 1;
      param_1[0x20] = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      memset(param_1 + 0x28,0,0x88);
      *(undefined4 *)(param_1 + 0xb0) = 0x20702;
      param_1[0xb4] = 0;
      goto LAB_14290d156;
    }
    bVar3 = false;
  }
  *param_1 = 0;
  param_1[0x20] = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  memset(param_1 + 0x28,0,0x88);
  *(undefined4 *)(param_1 + 0xb0) = 0x20702;
  param_1[0xb4] = 0;
  if (bVar3) {
    return param_1;
  }
LAB_14290d156:
  LOCK();
  plVar7 = plVar8 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar8)(plVar8);
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return param_1;
}



// FUNCTION 14290d222 FUN_14290d222 body=29 status=ok
// SIG undefined FUN_14290d222(void)

undefined8 FUN_14290d222(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14290d254 FUN_14290d254 body=93 status=ok
// SIG undefined FUN_14290d254(void)

void FUN_14290d254(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f201b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1f840;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14290d2b2 FUN_14290d2b2 body=93 status=ok
// SIG undefined FUN_14290d2b2(void)

void FUN_14290d2b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f201b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1f840;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14290d310 FUN_14290d310 body=126 status=ok
// SIG undefined FUN_14290d310(void)

void FUN_14290d310(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f201b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1f840;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014290d37f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14290d38e FUN_14290d38e body=29 status=ok
// SIG undefined FUN_14290d38e(void)

undefined8 FUN_14290d38e(longlong param_1,undefined8 param_2)

{
  FUN_14290d3ec(param_2,param_1 + 0x18);
  return param_2;
}



// FUNCTION 14290d3ac FUN_14290d3ac body=62 status=ok
// SIG undefined FUN_14290d3ac(void)

undefined8 FUN_14290d3ac(longlong param_1)

{
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_14290d3ec(local_c,param_1 + 0x18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290d3ec FUN_14290d3ec body=109 status=ok
// SIG undefined FUN_14290d3ec(void)

float * FUN_14290d3ec(float *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  lVar1 = *param_2;
  if ((*(int *)(lVar1 + 0x90) != 0) && (*(longlong **)(lVar1 + 0x88) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x88) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(lVar1 + 0x90) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(lVar1 + 0x88);
      }
      uVar4 = (**(code **)(*plVar3 + 0x58))();
      *(undefined4 *)(lVar1 + 0x80) = uVar4;
    }
  }
  *param_1 = *(float *)(lVar1 + 0x80) - *(float *)(param_2 + 1);
  return param_1;
}



// FUNCTION 14290d45a FUN_14290d45a body=29 status=ok
// SIG undefined FUN_14290d45a(void)

undefined8 FUN_14290d45a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14290d48c FUN_14290d48c body=93 status=ok
// SIG undefined FUN_14290d48c(void)

void FUN_14290d48c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f201b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1f8b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14290d4ea FUN_14290d4ea body=93 status=ok
// SIG undefined FUN_14290d4ea(void)

void FUN_14290d4ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f201b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f1f8b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14290d548 FUN_14290d548 body=126 status=ok
// SIG undefined FUN_14290d548(void)

void FUN_14290d548(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f201b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1f8b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014290d5b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14290d5c6 FUN_14290d5c6 body=100 status=ok
// SIG undefined FUN_14290d5c6(void)

undefined4 * FUN_14290d5c6(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((*(int *)(lVar1 + 0x90) != 0) && (*(longlong **)(lVar1 + 0x88) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x88) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(lVar1 + 0x90) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(lVar1 + 0x88);
      }
      uVar4 = (**(code **)(*plVar3 + 0x58))();
      *(undefined4 *)(lVar1 + 0x80) = uVar4;
    }
  }
  *param_2 = *(undefined4 *)(lVar1 + 0x80);
  return param_2;
}



// FUNCTION 14290d62a FUN_14290d62a body=82 status=ok
// SIG undefined FUN_14290d62a(void)

undefined8 FUN_14290d62a(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if ((*(int *)(lVar1 + 0x90) != 0) && (*(longlong **)(lVar1 + 0x88) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(lVar1 + 0x88) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(lVar1 + 0x90) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(lVar1 + 0x88);
      }
      uVar4 = (**(code **)(*plVar3 + 0x58))();
      *(undefined4 *)(lVar1 + 0x80) = uVar4;
    }
  }
  return 1;
}



// FUNCTION 14290d67c FUN_14290d67c body=29 status=ok
// SIG undefined FUN_14290d67c(void)

undefined8 FUN_14290d67c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14290d6ae FUN_14290d6ae body=91 status=ok
// SIG undefined FUN_14290d6ae(void)

void FUN_14290d6ae(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_149f1fb50;
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14290d70a FUN_14290d70a body=91 status=ok
// SIG undefined FUN_14290d70a(void)

void FUN_14290d70a(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_149f1fb50;
  *(undefined1 *)(param_2 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14290d766 FUN_14290d766 body=124 status=ok
// SIG undefined FUN_14290d766(void)

void FUN_14290d766(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined **)p_Var1 = &DAT_149efe500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f1fb50;
  *(undefined1 *)&(p_Var1->ProcessLocksList).Blink = *(undefined1 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014290d7d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14290d7ea FUN_14290d7ea body=66 status=ok
// SIG undefined FUN_14290d7ea(void)

void FUN_14290d7ea(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f1d6d0;
  FUN_146af7dd5(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  FUN_140c057ec(param_1);
  return;
}



// FUNCTION 14290d82c FUN_14290d82c body=585 status=ok
// SIG undefined FUN_14290d82c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14290d82c(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined8 **local_48;
  undefined4 local_40;
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = 0;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_149f1bbf0 + lVar2),L"/Script/Slate",
                  *(undefined8 *)((longlong)&PTR_u_EProgressBarFillType_149f1bbf8 + lVar2),
                  *(undefined8 *)((longlong)&PTR_DAT_149f1bc00 + lVar2));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x40);
  FUN_141309408();
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar1 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar1 == 0) {
    LOCK();
    UNLOCK();
    lVar1 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar1;
  *local_30 = &PTR_FUN_149e17030;
  local_30[3] = &LAB_146ad693c;
  local_40 = 0;
  local_48 = &local_30;
  FUN_14171ec12(&DAT_14c9902d0,L"Slate.EnableInvalidationPanels",&DAT_14c75ef70,
                L"Whether to attempt to cache any widgets through invalidation panels.");
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_14290d95c;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14290d95c:
  atexit(FUN_142906878);
  local_30 = (undefined8 *)CONCAT44(local_30._4_4_,0x447a0000);
  lVar2 = 0;
  local_48 = (undefined8 **)((ulonglong)local_48 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14c9902e0,L"Slate.ToolTipWrapWidth",&local_30,
                L"Width of Slate tool-tips before we wrap the tool-tip text");
  atexit(FUN_142906c5d);
  FUN_1408c09de();
  FUN_1462821fe();
  FUN_1462822ae();
  local_30 = (undefined8 *)CONCAT71(local_30._1_7_,1);
  local_48 = (undefined8 **)((ulonglong)local_48 & 0xffffffff00000000);
  FUN_140bd5914(&DAT_14c9903f8,L"gbx.Slate.ApplyLargeListItemScrollingFix",&local_30,
                L"Whether to use the rewritten list scrolling logic from OAK2-16195 (fixing a bug when a single list item fills the whole list area)"
               );
  atexit(FUN_14290920b);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_149f1dbb0 + lVar2),L"/Script/Slate",
                  *(undefined8 *)((longlong)&PTR_u_EListItemAlignment_149f1dbb8 + lVar2),
                  *(undefined8 *)((longlong)&PTR_DAT_149f1dbc0 + lVar2));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x40);
  DAT_14c990450 = 0;
  _DAT_14c990458 = 0x8000000000;
  atexit((_func_5014 *)&LAB_14290b787);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290da92 FUN_14290da92 body=91 status=ok
// SIG undefined FUN_14290da92(void)

void FUN_14290da92(void)

{
  if (DAT_14c9905d0 != 0) {
    if (DAT_14c9905c8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c9905c8)(DAT_14c9905c8,0);
    FUN_1446efa72(&DAT_14c9905c8,0,0,0x10);
    DAT_14c9905d0 = 0;
  }
  if (DAT_14c9905c8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14290daed FUN_14290daed body=91 status=ok
// SIG undefined FUN_14290daed(void)

void FUN_14290daed(void)

{
  if (DAT_14c9905c0 != 0) {
    if (DAT_14c9905b8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c9905b8)(DAT_14c9905b8,0);
    FUN_1446efa72(&DAT_14c9905b8,0,0,0x10);
    DAT_14c9905c0 = 0;
  }
  if (DAT_14c9905b8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14290dbae FUN_14290dbae body=1754 status=ok
// SIG undefined FUN_14290dbae(void)

void FUN_14290dbae(longlong param_1,float param_2,double param_3,uint param_4)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  float *pfVar4;
  float *pfVar5;
  longlong *plVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  float local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_4 & 0xfffffffd) == 0) {
    pfVar4 = (float *)FUN_146ad64ee(param_1 + 0x408);
    if (*(char *)(pfVar4 + 1) == '\0') {
      fVar9 = -3.4028235e+38;
    }
    else {
      fVar9 = *pfVar4;
    }
    pfVar4 = (float *)FUN_146ad64ee(param_1 + 0x428);
    if (*(char *)(pfVar4 + 1) == '\0') {
      fVar7 = 3.4028235e+38;
    }
    else {
      fVar7 = *pfVar4;
    }
    if (fVar7 <= param_2) {
      param_2 = fVar7;
    }
    if (param_2 <= fVar9) {
      param_2 = fVar9;
    }
    if ((double)fVar7 <= param_3) {
      param_3 = (double)fVar7;
    }
    if (param_3 <= (double)fVar9) {
      param_3 = (double)fVar9;
    }
  }
  pfVar4 = (float *)FUN_146ad64ee(param_1 + 0x3c8);
  if (*(char *)(pfVar4 + 1) == '\0') {
    fVar9 = -3.4028235e+38;
  }
  else {
    fVar9 = *pfVar4;
  }
  pfVar4 = (float *)FUN_146ad64ee(param_1 + 1000);
  if (*(char *)(pfVar4 + 1) == '\0') {
    fVar7 = 3.4028235e+38;
  }
  else {
    fVar7 = *pfVar4;
  }
  if (fVar7 <= param_2) {
    param_2 = fVar7;
  }
  local_64 = param_2;
  if (param_2 <= fVar9) {
    local_64 = fVar9;
  }
  if ((double)fVar7 <= param_3) {
    param_3 = (double)fVar7;
  }
  pfVar4 = (float *)(param_1 + 0x268);
  if (((*(int *)(param_1 + 0x278) == 0) || (*(longlong **)(param_1 + 0x270) == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x30))(), cVar1 == '\0')) {
    FUN_146a8a31c(pfVar4,&local_64);
  }
  if (param_3 <= (double)fVar9) {
    param_3 = (double)fVar9;
  }
  if (param_4 == 0) {
    if (((*(int *)(param_1 + 0x278) != 0) && (*(longlong **)(param_1 + 0x270) != (longlong *)0x0))
       && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x30))(), cVar1 != '\0')) {
      if (*(int *)(param_1 + 0x278) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x270);
      }
      fVar9 = (float)(**(code **)(*plVar6 + 0x58))();
      *pfVar4 = fVar9;
    }
    fVar9 = *(float *)(param_1 + 0x268);
    if ((fVar9 != *(float *)(param_1 + 0x55c)) || (NAN(fVar9) || NAN(*(float *)(param_1 + 0x55c))))
    {
      param_3 = (double)fVar9;
      local_64 = fVar9;
    }
    *(double *)(param_1 + 0x550) = param_3;
    FUN_146b0ae2c(param_1);
LAB_14290dd75:
    if (((*(int *)(param_1 + 0x348) == 0) || (*(longlong **)(param_1 + 0x340) == (longlong *)0x0))
       || (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x340) + 0x30))(), cVar1 == '\0')) {
      fVar9 = *(float *)(param_1 + 0x338);
    }
    else {
      if (*(int *)(param_1 + 0x348) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x340);
      }
      fVar9 = (float)(**(code **)(*plVar6 + 0x58))();
      *(float *)(param_1 + 0x338) = fVar9;
    }
    if ((fVar9 != 0.0) || (NAN(fVar9))) {
      fVar7 = (fVar9 * 0.5 + local_64) / fVar9;
      auVar8 = roundps(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7),1);
      local_64 = auVar8._0_4_ * fVar9;
    }
  }
  else {
    *(double *)(param_1 + 0x550) = param_3;
    bVar2 = FUN_146b0ae2c(param_1);
    if ((param_4 != 2 & (bVar2 ^ 1)) == 0) goto LAB_14290dd75;
  }
  if (((*(int *)(param_1 + 0x4c8) != 0) && (*(longlong **)(param_1 + 0x4c0) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4c0) + 0x30))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x4c8) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x4c0);
    }
    uVar3 = (**(code **)(*plVar6 + 0x58))();
    *(undefined1 *)(param_1 + 0x4b8) = uVar3;
  }
  if (*(char *)(param_1 + 0x4b8) == '\x01') {
    if (((*(int *)(param_1 + 0x278) != 0) && (*(longlong **)(param_1 + 0x270) != (longlong *)0x0))
       && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x30))(), cVar1 != '\0')) {
      if (*(int *)(param_1 + 0x278) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x270);
      }
      fVar9 = (float)(**(code **)(*plVar6 + 0x58))();
      *pfVar4 = fVar9;
    }
    fVar9 = *(float *)(param_1 + 0x268);
    pfVar5 = (float *)FUN_146ad64ee(param_1 + 0x428);
    if (*(char *)(pfVar5 + 1) == '\0') {
      fVar7 = 3.4028235e+38;
    }
    else {
      fVar7 = *pfVar5;
    }
    if (fVar7 < fVar9) {
      if (((*(int *)(param_1 + 0x278) != 0) && (*(longlong **)(param_1 + 0x270) != (longlong *)0x0))
         && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x30))(), cVar1 != '\0')) {
        if (*(int *)(param_1 + 0x278) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(param_1 + 0x270);
        }
        fVar9 = (float)(**(code **)(*plVar6 + 0x58))();
        *pfVar4 = fVar9;
      }
      FUN_146ad64ee(param_1 + 0x428);
      FUN_146b0ae80(param_1);
      goto LAB_14290de85;
    }
  }
  if (((*(int *)(param_1 + 0x4e0) != 0) && (*(longlong **)(param_1 + 0x4d8) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x4d8) + 0x30))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x4e0) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x4d8);
    }
    uVar3 = (**(code **)(*plVar6 + 0x58))();
    *(undefined1 *)(param_1 + 0x4d0) = uVar3;
  }
  if (*(char *)(param_1 + 0x4d0) == '\x01') {
    if (((*(int *)(param_1 + 0x278) != 0) && (*(longlong **)(param_1 + 0x270) != (longlong *)0x0))
       && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x30))(), cVar1 != '\0')) {
      if (*(int *)(param_1 + 0x278) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x270);
      }
      fVar9 = (float)(**(code **)(*plVar6 + 0x58))();
      *pfVar4 = fVar9;
    }
    fVar9 = *(float *)(param_1 + 0x268);
    pfVar5 = (float *)FUN_146ad64ee(param_1 + 0x408);
    if (*(char *)(pfVar5 + 1) == '\0') {
      fVar7 = -3.4028235e+38;
    }
    else {
      fVar7 = *pfVar5;
    }
    if (fVar9 < fVar7) {
      if (((*(int *)(param_1 + 0x278) != 0) && (*(longlong **)(param_1 + 0x270) != (longlong *)0x0))
         && (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x30))(), cVar1 != '\0')) {
        if (*(int *)(param_1 + 0x278) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(param_1 + 0x270);
        }
        fVar9 = (float)(**(code **)(*plVar6 + 0x58))();
        *pfVar4 = fVar9;
      }
      FUN_146ad64ee(param_1 + 0x408);
      FUN_146b0b05a(param_1);
    }
  }
LAB_14290de85:
  if (((param_4 - 1 < 2) && (*(int *)(param_1 + 0x298) != 0)) &&
     (*(longlong **)(param_1 + 0x290) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x290) + 0x60))();
  }
  if ((*(int *)(param_1 + 0x288) != 0) && (*(longlong **)(param_1 + 0x280) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x280) + 0x60))();
  }
  if (((*(int *)(param_1 + 0x278) == 0) || (*(longlong **)(param_1 + 0x270) == (longlong *)0x0)) ||
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x30))(), cVar1 == '\0')) {
    FUN_146a8a31c(pfVar4,&local_64);
  }
  if (((*(int *)(param_1 + 0x278) != 0) && (*(longlong **)(param_1 + 0x270) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x30))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x278) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x270);
    }
    fVar9 = (float)(**(code **)(*plVar6 + 0x58))();
    *pfVar4 = fVar9;
  }
  fVar9 = *(float *)(param_1 + 0x268);
  if (((*(float *)(param_1 + 0x55c) != fVar9) || (NAN(*(float *)(param_1 + 0x55c)) || NAN(fVar9)))
     || (*(char *)(param_1 + 0x570) == '\x01')) {
    if ((*(int *)(param_1 + 0x278) != 0) && (*(longlong **)(param_1 + 0x270) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x270) + 0x30))();
      if (cVar1 == '\0') {
        fVar9 = *pfVar4;
      }
      else {
        if (*(int *)(param_1 + 0x278) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(param_1 + 0x270);
        }
        fVar9 = (float)(**(code **)(*plVar6 + 0x58))();
        *pfVar4 = fVar9;
      }
    }
    *(float *)(param_1 + 0x55c) = fVar9;
    (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x28))
              (*(longlong **)(param_1 + 0x2e0),&local_78,param_1 + 0x55c);
    if ((longlong *)(param_1 + 0x560) == &local_78) {
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x560) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x560) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_1 + 0x568) = local_70;
      *(undefined4 *)(param_1 + 0x56c) = local_6c;
    }
    *(undefined1 *)(param_1 + 0x570) = 0;
  }
  cVar1 = FUN_140591fd6(param_1);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x571) = 0;
    *(undefined4 *)(param_1 + 0x540) = 0xffffffff;
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290e289 FUN_14290e289 body=302 status=ok
// SIG undefined FUN_14290e289(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14290e289(void)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = "AppFramework";
  local_40 = 0xc;
  local_3c = 0;
  uVar1 = FUN_14001a6c0(&local_48,1);
  _DAT_14c990588 = (ulonglong)uVar1;
  local_48 = (char *)0x8000000149f2079e;
  local_34 = 0xc;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_1462823bc(&local_48);
  _DAT_14c990598 = 0x407b900000000000;
  _DAT_14c9905a0 = 0x4080c80000000000;
  _DAT_14c9905a8 = 0;
  DAT_14c9905b0 = 0;
  atexit((_func_5014 *)&LAB_14290da78);
  DAT_14c9905c8 = 0;
  DAT_14c9905d0 = 0;
  atexit(FUN_14290da92);
  DAT_14c9905b8 = 0;
  DAT_14c9905c0 = 0;
  atexit(FUN_14290daed);
  _DAT_14c9905d8 = 0;
  DAT_14c9905e0 = 0;
  atexit((_func_5014 *)&LAB_14290db48);
  _DAT_14c9905e8 = 0;
  DAT_14c9905f0 = 0;
  atexit((_func_5014 *)&LAB_14290db62);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290e3b8 FUN_14290e3b8 body=49 status=ok
// SIG undefined FUN_14290e3b8(void)

void FUN_14290e3b8(void)

{
  FUN_146b0f4bd(DAT_14c9908c0,DAT_14c9908c8);
  if (DAT_14c9908c0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14290e403 FUN_14290e403 body=59 status=ok
// SIG undefined FUN_14290e403(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14290e403(void)

{
  DAT_14c9908c0 = 0;
  _DAT_14c9908c8 = 0;
  atexit(FUN_14290e3b8);
  _DAT_14c9908d0 = 0;
  DAT_14c9908d8 = 0;
  atexit((_func_5014 *)&LAB_14290e3e9);
  return;
}



// FUNCTION 14290e440 FUN_14290e440 body=102 status=ok
// SIG undefined FUN_14290e440(void)

void FUN_14290e440(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x8000000149f213a8;
  local_14 = 9;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146282572(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290e4a8 FUN_14290e4a8 body=986 status=ok
// SIG undefined FUN_14290e4a8(void)

void FUN_14290e4a8(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  size_t sVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined1 *local_80;
  longlong local_78 [2];
  wchar_t *local_68;
  int local_60;
  undefined4 uStack_5c;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_3 = 0;
  local_80 = param_3;
  FUN_140056680(&local_58);
  FUN_1400b22c2(&local_68,L":Asset");
  iVar11 = local_60 + -1;
  pwVar13 = local_68;
  if (local_60 == 0) {
    pwVar13 = L"";
    iVar11 = 0;
  }
  local_90 = 0xffffffff;
  local_98 = 0;
  uVar5 = FUN_1447ee042(&local_58,pwVar13,iVar11,1);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_68,L":Asset");
  iVar11 = local_60 + -1;
  pwVar13 = local_68;
  if (local_60 == 0) {
    pwVar13 = L"";
    iVar11 = 0;
  }
  local_90 = 0xffffffff;
  local_98 = 1;
  uVar6 = FUN_1447ee042(&local_58,pwVar13,iVar11,1);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_68,&DAT_149f215a0);
  pwVar14 = L"";
  pwVar13 = local_68;
  if (local_60 == 0) {
    pwVar13 = L"";
  }
  if (pwVar13 == (wchar_t *)0x0) {
LAB_14290e623:
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (uVar6 == 0xffffffff || uVar5 != uVar6) {
      bVar4 = true;
      pwVar13 = (wchar_t *)0x0;
      goto LAB_14290e6fe;
    }
  }
  else {
    sVar8 = wcslen(pwVar13);
    local_90 = 0xffffffff;
    local_98 = 0;
    iVar11 = FUN_1447ee042(&local_58,pwVar13,sVar8 & 0xffffffff,1);
    if (iVar11 == -1) goto LAB_14290e623;
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar10 = local_58;
  if (local_50 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  uVar5 = local_50 - 1;
  if (local_50 == 0) {
    uVar5 = 0;
  }
  uVar7 = uVar6 + 1;
  if ((int)uVar5 <= (int)(uVar6 + 1)) {
    uVar7 = uVar5;
  }
  uVar9 = (ulonglong)uVar7;
  if ((int)uVar7 < 1) {
    uVar9 = 0;
  }
  FUN_14006620a(&local_68,puVar10 + uVar9,uVar5 - (int)uVar9);
  iVar11 = local_60;
  pwVar13 = local_68;
  uVar5 = local_50 - 1;
  if (local_50 == 0) {
    uVar5 = 0;
  }
  if ((int)uVar5 <= (int)uVar6) {
    uVar6 = uVar5;
  }
  if ((int)uVar6 < 1) {
    uVar6 = 0;
  }
  uVar5 = uVar5 - uVar6;
  if (0 < (int)uVar5) {
    iVar12 = local_50 - (uVar6 + uVar5);
    if (iVar12 != 0) {
      memmove(local_58 + uVar6,local_58 + uVar6 + uVar5,(longlong)iVar12 * 2);
    }
    local_50 = local_50 - uVar5;
  }
  bVar4 = iVar11 < 2;
LAB_14290e6fe:
  FUN_1400b22c2(&local_68,L"[Left Bracket");
  iVar11 = 0;
  if (local_60 != 0) {
    pwVar14 = local_68;
    iVar11 = local_60 + -1;
  }
  FUN_140c540b4(&local_58,pwVar14,iVar11,1);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_68,L"]Right Bracket");
  iVar11 = local_60 + -1;
  pwVar14 = local_68;
  if (local_60 == 0) {
    pwVar14 = L"";
    iVar11 = 0;
  }
  FUN_140b127b8(&local_58,pwVar14,iVar11,1);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x11];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x58))(plVar3,&local_68,&local_58);
    if (local_68 != (wchar_t *)0x0) {
      *local_80 = 1;
      (**(code **)(*(longlong *)local_68 + 0x60))(local_68,local_78);
      (**(code **)(*param_1 + 0x58))(param_1,local_78);
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      if (!bVar4) {
        iVar11 = _wtoi(pwVar13);
        (**(code **)(*param_1 + 0x28))(param_1,iVar11);
      }
    }
    plVar3 = (longlong *)CONCAT44(uStack_5c,local_60);
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
  if (pwVar13 != (wchar_t *)0x0) {
    FUN_1400020a8(pwVar13);
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14290e914 FUN_14290e914 body=111 status=ok
// SIG undefined FUN_14290e914(void)

void FUN_14290e914(longlong *param_1)

{
  byte bVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[0x11] != 0) {
    (**(code **)(*param_1 + 0xa8))(param_1,&local_20);
    bVar1 = FUN_1403f35db(local_20,&DAT_14c9908f8);
    (**(code **)(*param_1 + 0xd8 + (ulonglong)bVar1 * 8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290e984 FUN_14290e984 body=111 status=ok
// SIG undefined FUN_14290e984(void)

void FUN_14290e984(longlong *param_1)

{
  byte bVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[0x11] != 0) {
    (**(code **)(*param_1 + 0xa8))(param_1,&local_20);
    bVar1 = FUN_1403f35db(local_20,&DAT_14c9908f8);
    (**(code **)(*param_1 + 0xe8 + (ulonglong)bVar1 * 8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290e9f4 FUN_14290e9f4 body=111 status=ok
// SIG undefined FUN_14290e9f4(void)

void FUN_14290e9f4(longlong *param_1)

{
  byte bVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[0x11] != 0) {
    (**(code **)(*param_1 + 0xa8))(param_1,&local_20);
    bVar1 = FUN_1403f35db(local_20,&DAT_14c9908f8);
    (**(code **)(*param_1 + 0xf8 + (ulonglong)bVar1 * 8))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290ea64 FUN_14290ea64 body=47 status=ok
// SIG undefined FUN_14290ea64(void)

bool FUN_14290ea64(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  if (*(longlong *)(param_1 + 0x28) == -1) {
    bVar2 = false;
  }
  else {
    iVar1 = Ordinal_3();
    *(undefined8 *)(param_1 + 0x28) = 0xffffffffffffffff;
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}



// FUNCTION 14290ea94 FUN_14290ea94 body=155 status=ok
// SIG undefined FUN_14290ea94(void)

uint FUN_14290ea94(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0xa8))(param_2,&local_28);
  if (local_28 == *(longlong *)(param_1 + 0x20)) {
    uVar1 = (**(code **)(*param_2 + 0x108))(param_2);
    uVar1 = Ordinal_4(*(undefined8 *)(param_1 + 0x28),param_2 + 1,uVar1);
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0xc0))
                      (*(longlong **)(param_1 + 0x40),uVar1);
    if (uVar2 < 9) {
      uVar2 = 0x181 >> ((byte)uVar2 & 0x1f);
      goto LAB_14290eb0f;
    }
  }
  uVar2 = 0;
LAB_14290eb0f:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290eb30 FUN_14290eb30 body=215 status=ok
// SIG undefined FUN_14290eb30(void)

undefined8
FUN_14290eb30(longlong param_1,undefined8 param_2,undefined4 param_3,int *param_4,longlong *param_5)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined4 local_50;
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_5 + 0xa8))(param_5,&local_40);
  if (local_40.QuadPart == *(longlong *)(param_1 + 0x20)) {
    local_50 = (**(code **)(*param_5 + 0x108))(param_5);
    local_58 = param_5 + 1;
    iVar2 = Ordinal_20(*(undefined8 *)(param_1 + 0x28),param_2,param_3,
                       *(undefined4 *)(param_1 + 0x38));
    *param_4 = iVar2;
    if (-1 < iVar2) {
      QueryPerformanceCounter(&local_40);
      LOCK();
      dVar1 = *(double *)(param_1 + 0x30);
      *(double *)(param_1 + 0x30) = (double)local_40.QuadPart * DAT_14c83f420 + 16777216.0;
      UNLOCK();
      uVar3 = CONCAT71((int7)((ulonglong)dVar1 >> 8),1);
      goto LAB_14290ebe3;
    }
  }
  uVar3 = 0;
LAB_14290ebe3:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290ec08 FUN_14290ec08 body=235 status=ok
// SIG undefined FUN_14290ec08(void)

undefined8
FUN_14290ec08(longlong param_1,undefined8 param_2,undefined8 param_3,int *param_4,longlong param_5,
             uint param_6)

{
  double dVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 *local_40;
  undefined4 local_2c;
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_1 + 8);
  local_40 = &local_2c;
  local_2c = 0x80;
  local_48 = param_5 + 8;
  iVar2 = Ordinal_17(*(undefined8 *)(param_1 + 0x28),param_2,param_3,param_6 >> 5 & 8 | param_6 & 2)
  ;
  *param_4 = iVar2;
  if (iVar2 < 0) {
    if (iVar3 == 2) {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0xc0))
                        (*(longlong **)(param_1 + 0x40),iVar2);
      *param_4 = 0;
      if (iVar3 == 7) goto LAB_14290eca7;
    }
    else {
      *param_4 = 0;
    }
  }
  else if ((iVar3 != 2) || (iVar2 != 0)) {
LAB_14290eca7:
    QueryPerformanceCounter(&local_28);
    LOCK();
    dVar1 = *(double *)(param_1 + 0x30);
    *(double *)(param_1 + 0x30) = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
    UNLOCK();
    uVar4 = CONCAT71((int7)((ulonglong)dVar1 >> 8),1);
    goto LAB_14290ec7f;
  }
  uVar4 = 0;
LAB_14290ec7f:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14290ecf4 FUN_14290ecf4 body=72 status=ok
// SIG undefined FUN_14290ecf4(void)

void FUN_14290ecf4(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0x80;
  Ordinal_6(*(undefined8 *)(param_1 + 0x28),param_2 + 8);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290ed3e FUN_14290ed3e body=77 status=ok
// SIG undefined FUN_14290ed3e(void)

bool FUN_14290ed3e(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = 0x80;
  iVar1 = Ordinal_5(*(undefined8 *)(param_1 + 0x28),param_2 + 8);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290ed8c FUN_14290ed8c body=77 status=ok
// SIG undefined FUN_14290ed8c(void)

bool FUN_14290ed8c(longlong param_1,byte param_2)

{
  int iVar1;
  undefined1 auStack_38 [44];
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = (uint)param_2;
  iVar1 = Ordinal_10(*(undefined8 *)(param_1 + 0x28),0x8004667e);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290edda FUN_14290edda body=107 status=ok
// SIG undefined FUN_14290edda(void)

undefined2 FUN_14290edda(longlong param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  undefined1 local_88 [2];
  undefined2 local_86;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_8c = 0x80;
  iVar2 = Ordinal_6(*(undefined8 *)(param_1 + 0x28),local_88);
  uVar1 = 0;
  if (iVar2 == 0) {
    uVar1 = Ordinal_15(local_86);
  }
  if ((local_8 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290ee46 FUN_14290ee46 body=88 status=ok
// SIG undefined FUN_14290ee46(void)

bool FUN_14290ee46(longlong param_1,uint param_2)

{
  int iVar1;
  undefined1 auStack_38 [32];
  undefined4 local_18;
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2 & 0xff;
  local_18 = 4;
  iVar1 = Ordinal_21(*(undefined8 *)(param_1 + 0x28),0,0x13);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return iVar1 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290ee9f FUN_14290ee9f body=69 status=ok
// SIG undefined FUN_14290ee9f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14290ee9f(void)

{
  _DAT_14c990908 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014290eee1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c990910,1);
  return;
}



// FUNCTION 14290eee4 FUN_14290eee4 body=611 status=ok
// SIG undefined FUN_14290eee4(void)

undefined8 * FUN_14290eee4(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  size_t sVar5;
  ulonglong uVar6;
  wchar_t *_Str;
  ushort uVar7;
  bool bVar8;
  undefined1 auStack_178 [40];
  longlong *local_150;
  longlong *local_148;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_b0 = 0;
  if ((longlong)(int)param_3[1] == 0) {
    lVar4 = (longlong)&local_b8 + 4;
    local_b8 = 2;
    _Str = L"";
    uVar7 = 2;
  }
  else {
    _Str = (wchar_t *)*param_3;
    uVar6 = 0;
    do {
      if (*(short *)((longlong)_Str + uVar6) == 0x3a) {
        bVar8 = (uVar6 & 0x1fffffffe) != 0x1fffffffe;
        lVar4 = (ulonglong)bVar8 * 4 + 4;
        uVar7 = 0x17;
        if (!bVar8) {
          uVar7 = 2;
        }
        goto LAB_14290efce;
      }
      uVar6 = uVar6 + 2;
    } while ((longlong)(int)param_3[1] * 2 != uVar6);
    lVar4 = 4;
    uVar7 = 2;
LAB_14290efce:
    lVar4 = (longlong)&local_b8 + lVar4;
    local_b8 = (ulonglong)uVar7;
    local_d0 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_c8 = 0;
      local_c0 = 0;
      goto LAB_14290f036;
    }
  }
  local_d0 = 0;
  sVar5 = wcslen(_Str);
  FUN_1449b853c(&local_150,_Str,sVar5 & 0xffffffff,1);
LAB_14290f036:
  iVar3 = inet_pton(uVar7,local_c8,lVar4);
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  if (iVar3 == 0) {
    (**(code **)(*param_1 + 0xb8))(param_1);
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*param_1 + 0x90))(param_1,&local_150);
    if (local_148 == (longlong *)0x0) {
      (**(code **)(*local_150 + 0xd0))(local_150,&local_b8);
      *param_2 = local_150;
      param_2[1] = 0;
    }
    else {
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
      if (local_148 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_148 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar2 = (int *)((longlong)local_148 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_148 + 0x10))(local_148);
          }
        }
      }
      (**(code **)(*local_150 + 0xd0))(local_150,&local_b8);
      *param_2 = local_150;
      param_2[1] = local_148;
      LOCK();
      *(int *)(local_148 + 1) = (int)local_148[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = local_148 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_148)(local_148);
        LOCK();
        piVar2 = (int *)((longlong)local_148 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_148 + 0x10))(local_148);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290f148 FUN_14290f148 body=249 status=ok
// SIG undefined FUN_14290f148(void)

ulonglong * FUN_14290f148(undefined8 param_1,ulonglong *param_2,int param_3)

{
  ulonglong uVar1;
  size_t sVar2;
  ulonglong uVar3;
  char *_Str;
  char **ppcVar4;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  char *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 2) {
    if ((longlong)DAT_14c9908e8 < 0) {
      _Str = (char *)(DAT_14c9908e8 & 0x7fffffffffffffff);
      if (DAT_14c9908f4 == '\x01') {
        ppcVar4 = &local_30;
        FUN_1446f470e(ppcVar4,_Str,1);
      }
      else {
        local_30 = _Str;
        if (_Str == (char *)0x0) {
          local_28 = 0;
        }
        else {
          sVar2 = strlen(_Str);
          local_28 = (undefined4)sVar2;
        }
        ppcVar4 = &local_20;
        FUN_14001c09c(ppcVar4,&local_30,1);
      }
      uVar1 = (ulonglong)*(uint *)ppcVar4;
      uVar3 = (ulonglong)DAT_14c9908f0 << 0x20;
      DAT_14c9908e8 = uVar1;
    }
    else {
      uVar1 = (ulonglong)DAT_14c9908f0 << 0x20;
      uVar3 = DAT_14c9908e8 & 0xffffffff;
    }
    *param_2 = uVar3 | uVar1;
  }
  else {
    if (param_3 == 0x17) {
      FUN_1446f57c6(&DAT_14c9908f8,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
    *param_2 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290f2de FUN_14290f2de body=1013 status=ok
// SIG undefined FUN_14290f2de(void)

undefined8 *
FUN_14290f2de(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined1 *param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  size_t sVar12;
  ulonglong uVar13;
  undefined8 **ppuVar14;
  undefined1 auStack_c8 [32];
  uint local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  ulonglong local_90;
  undefined8 *local_88;
  ulonglong uStack_80;
  undefined1 local_70 [8];
  undefined8 local_68;
  char local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x90))();
  *param_4 = 0;
  cVar5 = (**(code **)(*param_1 + 0xe8))(param_1,param_2);
  lVar4 = DAT_14c990918;
  if (cVar5 != '\0') goto LAB_14290f553;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar9 = 0;
  }
  else if (iVar2 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar9 = 1;
  }
  if (*(int *)(lVar4 + uVar9 * 4) == 1) {
    if ((longlong)DAT_14c9908e8 < 0) {
      plVar10 = (longlong *)(DAT_14c9908e8 & 0x7fffffffffffffff);
      if (DAT_14c9908f4 == '\x01') {
        ppuVar14 = (undefined8 **)&local_58;
        FUN_1446f470e(ppuVar14,plVar10,1);
      }
      else {
        local_58 = plVar10;
        if (plVar10 == (longlong *)0x0) {
          uVar8 = 0;
        }
        else {
          sVar12 = strlen((char *)plVar10);
          uVar8 = (undefined4)sVar12;
        }
        uStack_50 = (longlong *)CONCAT44(uStack_50._4_4_,uVar8);
        ppuVar14 = &local_88;
        FUN_14001c09c(ppuVar14,&local_58,1);
      }
      uVar9 = (ulonglong)*(uint *)ppuVar14;
      uVar13 = (ulonglong)DAT_14c9908f0 << 0x20;
      DAT_14c9908e8 = uVar9;
    }
    else {
      uVar9 = (ulonglong)DAT_14c9908f0 << 0x20;
      uVar13 = DAT_14c9908e8 & 0xffffffff;
    }
    (**(code **)(*param_1 + 0x88))(param_1,&local_58,uVar13 | uVar9);
  }
  else {
    (**(code **)(*param_1 + 0x90))(param_1,&local_58);
  }
  local_59 = '\0';
  (**(code **)(*local_58 + 0xa8))(local_58,&local_a8);
  cVar5 = FUN_1403f35db(CONCAT44(uStack_a4,local_a8),&DAT_14c9908f8);
  if (cVar5 == '\0') {
    (**(code **)(*local_58 + 0xa8))(local_58,&local_68);
    cVar5 = FUN_1403f35db(local_68,&DAT_14c9908e8);
    if (cVar5 != '\0') {
      (**(code **)(*local_58 + 0x10))(local_58,L"172.31.255.255",&local_59);
    }
  }
  else {
    (**(code **)(*local_58 + 0x10))(local_58,L"::ffff:172.31.255.255",&local_59);
  }
  if (local_59 == '\x01') {
    (**(code **)(*local_58 + 0x28))(local_58,0x100);
    (**(code **)(*local_58 + 0xa8))(local_58,local_70);
    FUN_140056680(&local_88,L"GetLocalHostAddrViaConnect");
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    local_90 = (ulonglong)DAT_14c892fa0;
    plVar10 = (longlong *)(**(code **)(*param_1 + 0x18))(param_1,&local_90,&local_88,local_70);
    if (local_88 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (plVar10 == (longlong *)0x0) goto LAB_14290f523;
    cVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,local_58);
    if (cVar5 != '\0') {
      (**(code **)(*plVar10 + 0x88))(plVar10,*param_2);
      (**(code **)(*(longlong *)*param_2 + 0x28))((longlong *)*param_2,0);
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
    if (param_1 != (longlong *)0x0) {
      (**(code **)(*param_1 + 0x38))(param_1,plVar10);
    }
  }
  else {
LAB_14290f523:
    cVar5 = '\0';
  }
  plVar10 = uStack_50;
  if (uStack_50 != (longlong *)0x0) {
    LOCK();
    plVar3 = uStack_50 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*uStack_50)(uStack_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (cVar5 == '\0') {
    *param_4 = 1;
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    cVar5 = (**(code **)(*param_1 + 200))(param_1);
    if ((cVar5 == '\0') || ((int)uStack_80 == 0)) {
      puVar11 = (undefined1 *)FUN_1400d7a00();
      (**(code **)(*param_3 + 0x10))
                (param_3,L"Could not fetch the local adapter addresses",*puVar11,puVar11 + 4);
      (**(code **)(*(longlong *)*param_2 + 0x68))();
    }
    else if (0 < (int)uStack_80) {
      (**(code **)(*(longlong *)*local_88 + 0xa0))((longlong *)*local_88,&local_a8);
      plVar10 = (longlong *)*param_2;
      plVar3 = (longlong *)param_2[1];
      *param_2 = CONCAT44(uStack_a4,local_a8);
      param_2[1] = CONCAT44(uStack_9c,uStack_a0);
      local_58._0_4_ = (uint)plVar10;
      local_a8 = (uint)local_58;
      local_58._4_4_ = (undefined4)((ulonglong)plVar10 >> 0x20);
      uStack_a4 = local_58._4_4_;
      uStack_50._0_4_ = SUB84(plVar3,0);
      uStack_a0 = (undefined4)uStack_50;
      uStack_50._4_4_ = (undefined4)((ulonglong)plVar3 >> 0x20);
      uStack_9c = uStack_50._4_4_;
      local_58 = plVar10;
      uStack_50 = plVar3;
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
    FUN_146b12a16(local_88,uStack_80 & 0xffffffff);
    if (local_88 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14290f553:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290f6d6 FUN_14290f6d6 body=351 status=ok
// SIG undefined FUN_14290f6d6(void)

undefined4 FUN_14290f6d6(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_118 [40];
  undefined **local_f0 [11];
  longlong *local_98;
  longlong local_78;
  longlong local_48;
  int local_40;
  int local_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_34 = (**(code **)(*param_2 + 0x10))(param_2);
  local_30 = *(undefined4 *)(param_1 + 1);
  local_2c = FUN_1448eb174(*param_1,local_30,0);
  FUN_146866eea(local_f0);
  FUN_146b11920(local_f0,&local_34);
  iVar2 = local_40;
  uVar1 = *(uint *)(param_1 + 1);
  if ((longlong)(int)uVar1 != 0) {
    lVar6 = (longlong)local_40;
    iVar3 = local_40 + uVar1;
    uVar4 = local_3c - local_40;
    local_40 = iVar3;
    if (uVar4 < uVar1) {
      FUN_1447403be(&local_48,iVar2);
    }
    memcpy((void *)(lVar6 + local_48),(void *)*param_1,(longlong)(int)uVar1);
  }
  uVar5 = (**(code **)(*param_2 + 8))(param_2,local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_f0[0] = &PTR__purecall_149e35f70;
  if (local_98 != (longlong *)0x0) {
    if (*local_98 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_98);
  }
  if (local_78 != 0) {
    if (*(longlong *)(local_78 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_78);
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290f836 FUN_14290f836 body=549 status=ok
// SIG undefined FUN_14290f836(void)

ulonglong FUN_14290f836(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_128 [44];
  int local_fc;
  undefined8 local_f8;
  undefined **local_f0 [5];
  byte local_c8;
  byte local_c6;
  longlong *local_98;
  longlong local_78;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0xc;
  uVar5 = 0;
  FUN_1447403be(&local_48,0);
  *(undefined4 *)(local_48 + 1) = 0;
  *local_48 = 0;
  cVar1 = (**(code **)*param_2)(param_2,local_48,0xc);
  if (cVar1 != '\0') {
    uVar5 = 0;
    memset(local_f0,0,0x90);
    FUN_144869430(local_f0);
    local_60 = 0;
    local_f0[0] = &PTR_FUN_149e1e050;
    local_50 = 0x7fffffffffffffff;
    local_c8 = local_c8 | 1;
    local_58 = &local_48;
    FUN_1449c2eca(local_f0,0);
    local_fc = (**(code **)(*param_2 + 0x10))(param_2);
    local_f8 = 0;
    FUN_146b11920(local_f0,&local_fc);
    iVar3 = local_fc;
    iVar2 = (**(code **)(*param_2 + 0x10))(param_2);
    if ((uint)local_f8 != 0 && iVar3 == iVar2) {
      *(byte *)(param_1 + 0x2a) = *(byte *)(param_1 + 0x2a) & 0xfd | local_c6 & 2;
      iVar3 = *(int *)(param_1 + 0xa0);
      lVar4 = (longlong)iVar3;
      *(uint *)(param_1 + 0xa0) = iVar3 + (uint)local_f8;
      if ((uint)(*(int *)(param_1 + 0xa4) - iVar3) < (uint)local_f8) {
        FUN_1447403be((longlong *)(param_1 + 0x98),iVar3);
      }
      *(longlong *)(param_1 + 0x90) = lVar4;
      cVar1 = (**(code **)*param_2)
                        (param_2,*(longlong *)(param_1 + 0x98) + lVar4,local_f8 & 0xffffffff);
      if (cVar1 == '\0') {
        uVar5 = 0;
      }
      else {
        lVar4 = lVar4 + *(longlong *)(param_1 + 0x98);
        iVar3 = FUN_1448eb174(lVar4,local_f8 & 0xffffffff,0);
        uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),local_f8._4_4_ == iVar3);
      }
    }
    local_f0[0] = &PTR__purecall_149e35f70;
    if (local_98 != (longlong *)0x0) {
      if (*local_98 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_98);
    }
    if (local_78 != 0) {
      if (*(longlong *)(local_78 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_78);
    }
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290fa70 FUN_14290fa70 body=260 status=ok
// SIG undefined FUN_14290fa70(void)

void FUN_14290fa70(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = param_3;
  local_38 = param_4;
  plVar1 = (longlong *)FUN_14001cc68(0x90,0x10);
  local_58 = &stack0x00000038;
  local_60 = &stack0x00000030;
  local_68 = &stack0x00000028;
  local_50 = param_2;
  local_48 = param_1;
  FUN_146b11a48(plVar1,&local_48,&local_40,&local_38);
  if (DAT_14c8442c0 == (longlong *)0x0) {
    FUN_146b12e16(plVar1 + 2);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1,1);
    }
  }
  else {
    (**(code **)(*DAT_14c8442c0 + 0x18))(DAT_14c8442c0,plVar1,3);
  }
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14290fb8a FUN_14290fb8a body=421 status=ok
// SIG undefined FUN_14290fb8a(void)

undefined4 FUN_14290fb8a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined2 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0 [2];
  longlong local_90;
  longlong local_80;
  int local_70;
  longlong local_68;
  int local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  uVar6 = (**(code **)(*param_1 + 0x80))();
  if ((char)uVar6 != '\0') {
    puVar8 = local_58;
    if ((int)uStack_50 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    local_a8 = 0;
    local_b0 = 0;
    local_b8 = 0x89;
    (**(code **)(*param_1 + 0x40))(param_1,local_a0,puVar8,0);
    lVar5 = local_68;
    if ((local_70 == 0) && (lVar7 = (longlong)local_60, lVar7 != 0)) {
      lVar9 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar5 + 0x18 + lVar9);
        lVar3 = *(longlong *)(lVar5 + 0x20 + lVar9);
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_146b12f1e(param_2,iVar1);
        }
        lVar4 = *param_2;
        *(undefined8 *)(lVar4 + (longlong)iVar1 * 0x10) = uVar2;
        *(longlong *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = lVar3;
        lVar9 = lVar9 + 0x28;
      } while (lVar7 * 0x28 != lVar9);
    }
    FUN_14135de18(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    if (local_a0[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 14290fd40 FUN_14290fd40 body=691 status=ok
// SIG undefined FUN_14290fd40(void)

ulonglong FUN_14290fd40(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  short *psVar2;
  longlong lVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  undefined4 uVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  longlong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  lVar10 = DAT_14c990918;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_4c = 0;
  iVar6 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_58 = param_1;
  if (((iVar6 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar6 == 2)) {
    uVar14 = 0;
  }
  else if (iVar6 == 1) {
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    uVar14 = (ulonglong)(DVar8 != DVar9);
  }
  else {
    uVar14 = 1;
  }
  uVar4 = (uint)(*(int *)(lVar10 + uVar14 * 4) != 0) * 2;
  local_78 = &local_4c;
  iVar6 = GetAdaptersAddresses(uVar4,0x3e,0,0);
  uVar14 = 0;
  if (iVar6 == 0x6f) {
    lVar10 = FUN_14001cc68(local_4c,0);
    uVar14 = (ulonglong)uVar4;
    local_78 = &local_4c;
    iVar6 = GetAdaptersAddresses(uVar14,0x3e,0,lVar10);
    local_60 = CONCAT71((int7)(uVar14 >> 8),iVar6 == 0);
    local_68 = lVar10;
    if ((lVar10 != 0) && (iVar6 == 0)) {
      do {
        if (((*(int *)(lVar10 + 100) == 0x47) || (*(int *)(lVar10 + 100) == 6)) &&
           ((*(int *)(lVar10 + 0x68) == 1 && (lVar15 = *(longlong *)(lVar10 + 0x18), lVar15 != 0))))
        {
          do {
            if ((*(byte *)(lVar15 + 4) & 1) != 0) {
              psVar2 = *(short **)(lVar15 + 0x10);
              plVar11 = (longlong *)FUN_14001cc68(0x90,0x10);
              FUN_14135dece(plVar11,local_58,0);
              plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
              plVar12[1] = (longlong)&DAT_100000001;
              *plVar12 = (longlong)&PTR_FUN_149f22470;
              plVar12[2] = (longlong)plVar11;
              sVar5 = *psVar2;
              if (sVar5 == 2) {
                (**(code **)(*plVar11 + 0xc0))(plVar11,psVar2 + 2);
                sVar5 = *psVar2;
              }
              if (sVar5 == 0x17) {
                (**(code **)(*plVar11 + 0xb8))(plVar11,psVar2 + 4);
                *(undefined4 *)(plVar11 + 4) = *(undefined4 *)(psVar2 + 0xc);
                sVar5 = *psVar2;
              }
              puVar13 = (undefined4 *)(lVar10 + 0x6c);
              if (sVar5 == 2) {
                puVar13 = (undefined4 *)(lVar10 + 4);
              }
              uVar7 = Ordinal_14(*puVar13);
              (**(code **)(*plVar11 + 0x110))(plVar11,uVar7);
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
                UNLOCK();
              }
              iVar6 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar6 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar6 + 1U) {
                FUN_146b12f1e(param_2,iVar6);
              }
              lVar3 = *param_2;
              *(longlong **)(lVar3 + (longlong)iVar6 * 0x10) = plVar11;
              *(longlong **)(lVar3 + 8 + (longlong)iVar6 * 0x10) = plVar12;
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                plVar11 = plVar12 + 1;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)*plVar11 == 0) {
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
            }
            lVar15 = *(longlong *)(lVar15 + 8);
          } while (lVar15 != 0);
        }
        lVar10 = *(longlong *)(lVar10 + 8);
      } while (lVar10 != 0);
    }
    FUN_1400020a8(local_68);
    uVar14 = local_60;
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffffff;
}



// FUNCTION 14290fff4 FUN_14290fff4 body=76 status=ok
// SIG undefined FUN_14290fff4(void)

bool FUN_14290fff4(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x130);
  if ((iVar1 == 0) && (*(longlong *)(param_1 + 0x140) != 0)) {
    (**(code **)(**(longlong **)(param_1 + 0x138) + 0x20))
              (*(longlong **)(param_1 + 0x138),0xffffffff,0);
    *(undefined8 *)(param_1 + 0x140) = 0;
  }
  return iVar1 == 0;
}



// FUNCTION 142910040 FUN_142910040 body=267 status=ok
// SIG undefined FUN_142910040(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142910040(void)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = CONCAT44(local_38._4_4_,1);
  local_48 = 0;
  FUN_14078dbce(&DAT_14c990908,L"net.DisableIPv6",&local_38,
                L"If true, IPv6 will not resolve and its usage will be avoided when possible");
  atexit(FUN_14290ee9f);
  local_38 = 0x8000000149f218b0;
  local_24 = 7;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_1462829f8(&local_38);
  DAT_14c9908e8 = 0x8000000149f218c0;
  local_38._0_4_ = 4;
  DAT_14c9908f0 = FUN_14577453c(L"IPv4",&local_38);
  DAT_14c9908f4 = 1;
  _DAT_14c9908f8 = 0x8000000149f218ca;
  local_38 = CONCAT44(local_38._4_4_,4);
  _DAT_14c990900 = FUN_14577453c(L"IPv6",&local_38);
  DAT_14c990904 = 1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14291014c FUN_14291014c body=145 status=ok
// SIG undefined FUN_14291014c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14291014c(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  DAT_14c990940 = 0;
  _DAT_14c990944 = 0x7f000001;
  _DAT_14c990948 = 0xffffffff;
  DAT_14c99094c = 0;
  DAT_14c990950 = 0;
  local_28 = 0x8000000149f22968;
  local_14 = 10;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146282b18(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429101e0 FUN_1429101e0 body=267 status=ok
// SIG undefined FUN_1429101e0(void)

undefined8 FUN_1429101e0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar4 = (longlong *)FUN_1467b7aa4();
  cVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
  uVar5 = 0;
  if (cVar3 != '\0') {
    local_40 = 0;
    local_48 = 0;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_38,*(undefined4 *)(param_1 + 8),param_1 + 0x10);
    plVar4 = local_30;
    if ((longlong *)(param_1 + 0x20) != &local_38) {
      *(longlong *)(param_1 + 0x20) = local_38;
      local_38 = 0;
      plVar2 = *(longlong **)(param_1 + 0x28);
      if (local_30 != plVar2) {
        local_30 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x28) = plVar4;
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
      }
    }
    plVar4 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (*(longlong *)(param_1 + 0x20) == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_146b14564(param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429102ec FUN_1429102ec body=696 status=ok
// SIG undefined FUN_1429102ec(void)

ulonglong FUN_1429102ec(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  longlong local_80 [2];
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_5c;
  uint local_58;
  byte local_51;
  longlong *local_50;
  longlong *local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  byte *pbVar10;
  undefined7 uVar11;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_40 = (undefined2 *)0x0;
  plVar4 = (longlong *)FUN_140272950();
  FUN_140056680(&local_40,param_2);
  FUN_140c540b4(&local_40,&DAT_149f22ab0,6,1);
  (**(code **)(*plVar4 + 0x90))(plVar4,&local_50);
  FUN_140056680(&local_70,param_2);
  cVar2 = FUN_146b137c6(&local_70,&local_5c);
  cVar3 = '\x01';
  if (cVar2 == '\0') {
    FUN_140056680(local_80,param_2);
    cVar3 = FUN_146b13880(local_80,&local_5c);
    if (local_80[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (cVar3 == '\0') {
    puVar7 = local_40;
    if (local_38 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    pbVar10 = &local_51;
    (**(code **)(*local_50 + 0x10))(local_50,puVar7,pbVar10);
    (**(code **)(*local_50 + 0x28))(local_50,0xa3ab);
    if ((local_51 & 1) == 0) goto LAB_142910537;
  }
  else {
    (**(code **)(*local_50 + 0x18))(local_50,local_5c);
    uVar6 = 0xa3ab;
    if ((short)local_58 != 0) {
      uVar6 = local_58;
    }
    (**(code **)(*local_50 + 0x28))(local_50,uVar6 & 0xffff);
    local_51 = 1;
  }
  (**(code **)(*local_50 + 0xa8))(local_50,local_80);
  FUN_140056680(&local_70,L"COTF tcp");
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  local_88 = (ulonglong)DAT_14c892fa4;
  pbVar10 = (byte *)&local_70;
  plVar5 = (longlong *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_88,pbVar10,local_80);
  *(longlong **)(param_1 + 8) = plVar5;
  if (local_70 != 0) {
    FUN_1400020a8();
    plVar5 = *(longlong **)(param_1 + 8);
  }
  if (plVar5 == (longlong *)0x0) {
    uVar8 = 0;
LAB_1429104ca:
    (**(code **)(*plVar4 + 0x38))(plVar4,uVar8);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar5 + 0x20))(plVar5,local_50);
    if (cVar2 == '\0') {
      uVar8 = *(undefined8 *)(param_1 + 8);
      goto LAB_1429104ca;
    }
  }
  (**(code **)(*local_50 + 0x80))(local_50,pbVar10,0);
  if ((byte *)(param_1 + 0x18) == pbVar10) {
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x18) = local_70;
    local_70 = 0;
    *(undefined4 *)(param_1 + 0x20) = local_68;
    *(undefined4 *)(param_1 + 0x24) = local_64;
  }
LAB_142910537:
  uVar11 = (undefined7)((ulonglong)pbVar10 >> 8);
  uVar9 = CONCAT71(uVar11,1);
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar9 = CONCAT71(uVar11,*(longlong *)(param_1 + 0x10) != 0);
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1429105a6 FUN_1429105a6 body=557 status=ok
// SIG undefined FUN_1429105a6(void)

undefined8 * FUN_1429105a6(longlong param_1,undefined8 *param_2,uint *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint *puVar7;
  int iVar8;
  undefined1 auStack_158 [40];
  undefined8 local_130;
  uint local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined1 *local_108;
  undefined8 *local_100;
  undefined **local_f8 [11];
  longlong *local_a0;
  longlong local_80;
  longlong local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  LOCK();
  puVar7 = (uint *)(param_1 + 0x120);
  uVar1 = *puVar7;
  *puVar7 = *puVar7 + 1;
  UNLOCK();
  param_3[1] = 1;
  param_3[2] = uVar1;
  FUN_140212f8e(local_f8);
  *(undefined ***)(param_3 + 4) = local_f8[0];
  FUN_146866eea(local_f8);
  iVar8 = param_3[8] + 0x18;
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (local_44 < iVar8) {
    FUN_144893a1c(&local_50);
  }
  FUN_146b13bed(local_f8,param_3);
  FUN_140077068(local_f8,param_3 + 6);
  puVar7 = (uint *)FUN_146b15ab0(param_1,uVar1);
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *puVar7 = *param_3;
  puVar7[1] = uVar3;
  puVar7[2] = uVar4;
  puVar7[3] = uVar5;
  *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(param_3 + 4);
  *(undefined1 *)(puVar7 + 10) = 1;
  *param_2 = *(undefined8 *)(puVar7 + 6);
  lVar2 = *(longlong *)(puVar7 + 8);
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
    EnterCriticalSection(lpCriticalSection);
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))
                      (*(longlong **)(param_1 + 0x30),&local_50);
    if (cVar6 != '\0') {
      if (*(char *)(param_1 + 0x69) == '\x01') {
        local_100 = &local_130;
        local_108 = &LAB_146b15f4c;
        local_130 = param_1;
        local_128 = uVar1;
        FUN_142910836(param_1);
      }
      LeaveCriticalSection(lpCriticalSection);
      goto LAB_1429106e1;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  local_128 = param_3[2];
  local_130 = CONCAT44(2,*param_3 & 0xfffffff0 | 4);
  FUN_146b1549e(*(undefined8 *)(puVar7 + 6));
  FUN_146b15014(param_1,puVar7);
LAB_1429106e1:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  local_f8[0] = &PTR__purecall_149e35f70;
  if (local_a0 != (longlong *)0x0) {
    if (*local_a0 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_a0);
  }
  if (local_80 != 0) {
    if (*(longlong *)(local_80 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_80);
  }
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429107d4 FUN_1429107d4 body=97 status=ok
// SIG undefined FUN_1429107d4(void)

void FUN_1429107d4(longlong param_1,void *param_2,size_t param_3)

{
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x29) & 2) == 0)) {
    if ((longlong)*(int *)(param_1 + 0xa0) < (longlong)(*(longlong *)(param_1 + 0x90) + param_3)) {
      FUN_14572541c(param_1);
      return;
    }
    memcpy(param_2,(void *)((longlong)(int)*(longlong *)(param_1 + 0x90) +
                           *(longlong *)(param_1 + 0x98)),param_3);
    *(longlong *)(param_1 + 0x90) = *(longlong *)(param_1 + 0x90) + param_3;
  }
  return;
}



// FUNCTION 142910836 FUN_142910836 body=877 status=ok
// SIG undefined FUN_142910836(void)

void FUN_142910836(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_1b8 [40];
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  longlong local_150;
  undefined8 uStack_148;
  undefined8 local_138;
  undefined8 uStack_130;
  ulonglong local_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined **local_108 [5];
  byte local_e0;
  byte local_df;
  longlong *local_b0;
  longlong local_90;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_190 = param_1 + 0x48;
  do {
    cVar3 = (*(code *)*param_2)(param_2[1]);
    if (cVar3 == '\0') break;
    memset(local_108,0,0x90);
    FUN_144869430(local_108);
    local_78 = 0;
    lStack_70 = 0;
    local_68 = 0;
    local_108[0] = &PTR_FUN_149f22c90;
    local_e0 = local_e0 | 1;
    local_df = local_df & 0xfe;
    bVar1 = true;
    if ((*(longlong **)(param_1 + 0x30) != (longlong *)0x0) &&
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))(), cVar3 != '\0')) {
      local_120 = 0x100000000;
      uStack_118 = 0;
      local_110 = 0;
      local_138 = 0;
      uStack_130 = 0;
      FUN_146b13bed(local_108,&local_120);
      FUN_140077068(local_108);
      bVar1 = false;
      if ((local_120 & 2) == 0) {
        if ((local_120 & 4) == 0) {
          local_150 = 0;
          uStack_148 = 0;
          local_158 = local_110;
          uStack_160 = CONCAT44(uStack_114,uStack_118);
          local_168 = local_120;
          local_188 = (undefined4)local_138;
          uStack_184 = local_138._4_4_;
          uStack_180 = (undefined4)uStack_130;
          uStack_17c = uStack_130._4_4_;
          local_138 = 0;
          uStack_130 = 0;
          FUN_146b13d3c(&local_168);
          if ((longlong)*(int *)(param_1 + 0x50) != 0) {
            lVar4 = 0;
            do {
              if ((*(int *)(*(longlong *)(param_1 + 0x48) + 8 + lVar4) != 0) &&
                 (*(longlong *)(*(longlong *)(param_1 + 0x48) + lVar4) != 0)) {
                FUN_146b151e8(local_190);
                break;
              }
              lVar4 = lVar4 + 0x10;
            } while ((longlong)*(int *)(param_1 + 0x50) * 0x10 != lVar4);
          }
          if (local_150 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          lVar4 = FUN_146b14f74(param_1);
          bVar1 = true;
          if (lVar4 != 0) {
            local_150 = 0;
            uStack_148 = 0;
            local_158 = local_110;
            uStack_160 = CONCAT44(uStack_114,uStack_118);
            local_168 = local_120;
            local_178 = (undefined4)local_138;
            uStack_174 = local_138._4_4_;
            uStack_170 = (undefined4)uStack_130;
            uStack_16c = uStack_130._4_4_;
            local_138 = 0;
            uStack_130 = 0;
            FUN_146b13d3c(&local_168);
            lVar4 = *(longlong *)(lVar4 + 0x18);
            *(undefined8 *)(lVar4 + 0x90) = local_158;
            *(undefined4 *)(lVar4 + 0x80) = (undefined4)local_168;
            *(undefined4 *)(lVar4 + 0x84) = local_168._4_4_;
            *(undefined4 *)(lVar4 + 0x88) = (undefined4)uStack_160;
            *(undefined4 *)(lVar4 + 0x8c) = uStack_160._4_4_;
            *(longlong *)(lVar4 + 0x98) = local_150;
            local_150 = 0;
            *(undefined4 *)(lVar4 + 0xa0) = (undefined4)uStack_148;
            *(undefined4 *)(lVar4 + 0xa4) = uStack_148._4_4_;
            uStack_148 = 0;
            FUN_140b576f0();
            FUN_146b15014(param_1);
            if (local_150 != 0) {
              FUN_1400020a8();
            }
            bVar1 = false;
          }
        }
      }
      if (local_138 != 0) {
        FUN_1400020a8();
      }
    }
    if (lStack_70 != 0) {
      FUN_1400020a8();
    }
    plVar2 = local_b0;
    local_108[0] = &PTR__purecall_149e35f70;
    if (local_b0 != (longlong *)0x0) {
      if (*local_b0 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar2);
    }
    lVar4 = local_90;
    if (local_90 != 0) {
      if (*(longlong *)(local_90 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar4);
    }
  } while (!bVar1);
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142910ba4 FUN_142910ba4 body=118 status=ok
// SIG undefined FUN_142910ba4(void)

void FUN_142910ba4(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined1 *local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_28;
  local_20 = &LAB_146b15492;
  local_28 = param_1;
  FUN_142910836();
  FUN_146b152de(param_1);
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142910c1c FUN_142910c1c body=74 status=ok
// SIG undefined FUN_142910c1c(void)

bool FUN_142910c1c(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18;
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 1;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                    (*(longlong **)(param_1 + 8),param_2,(longlong)param_3,local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return cVar1 == '\0';
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142910c68 FUN_142910c68 body=26 status=ok
// SIG undefined FUN_142910c68(void)

bool FUN_142910c68(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  
  cVar1 = (**(code **)**(undefined8 **)(param_1 + 8))
                    (*(undefined8 **)(param_1 + 8),param_2,(longlong)param_3);
  return cVar1 == '\0';
}



// FUNCTION 142910c88 FUN_142910c88 body=83 status=ok
// SIG undefined FUN_142910c88(void)

undefined8 * FUN_142910c88(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149f22fe0;
  plVar3 = (longlong *)param_1[2];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142910cdc FUN_142910cdc body=1291 status=ok
// SIG undefined FUN_142910cdc(void)

undefined8 FUN_142910cdc(longlong param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  LPCRITICAL_SECTION p_Var4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong lVar14;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  undefined1 auStack_188 [32];
  longlong local_168;
  uint *local_160;
  LPCRITICAL_SECTION local_158;
  undefined **local_150;
  undefined8 local_148;
  undefined4 local_13c;
  undefined **local_138;
  ulonglong *local_130;
  byte local_10e;
  longlong *local_e0;
  longlong local_c0;
  longlong local_90 [2];
  uint local_7c;
  void *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x68);
  local_168 = param_1 + 0x18;
  puVar18 = (uint *)(param_1 + 0x28);
  local_160 = puVar18;
  local_158 = lpCriticalSection;
  do {
    local_78 = (void *)0x0;
    uStack_70 = 0;
    local_7c = 0;
    EnterCriticalSection(lpCriticalSection);
    p_Var4 = local_158;
    puVar2 = local_160;
    iVar6 = *(int *)(param_1 + 0x40);
    if (iVar6 == 0) {
      uVar19 = 1;
      uVar7 = 0;
      iVar17 = 0;
      iVar9 = 0;
    }
    else {
      puVar12 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar12 = puVar18;
      }
      uVar15 = *puVar12;
      if (uVar15 == 0) {
        iVar9 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar9 = iVar6 + -1;
        }
        uVar7 = 0;
        uVar19 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar19 = uVar7;
        }
        iVar17 = 0;
        do {
          if (uVar19 == uVar7) goto LAB_142910eec;
          iVar17 = iVar17 + 0x20;
          uVar15 = puVar12[uVar7 + 1];
          uVar7 = uVar7 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar7 = 0;
        iVar17 = 0;
      }
      uVar19 = (ulonglong)(-uVar15 & uVar15);
      uVar3 = uVar19 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar9 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar6 <= iVar9) {
        iVar9 = iVar6;
      }
    }
    if (iVar9 < iVar6) {
      puVar12 = *(uint **)(param_1 + 0x38);
      if (*(uint **)(param_1 + 0x38) == (uint *)0x0) {
        puVar12 = puVar18;
      }
      iVar16 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar16 = iVar6 + -1;
      }
      iVar16 = iVar16 >> 5;
      uVar20 = 0xffffffff;
      plVar13 = (longlong *)0x0;
      uVar15 = local_7c;
      do {
        uVar10 = *(uint *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar9 * 0x18);
        if ((plVar13 == (longlong *)0x0) || (uVar10 < uVar15)) {
          plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8 + (longlong)iVar9 * 0x18);
          local_7c = uVar10;
          uVar15 = uVar10;
        }
        uVar20 = uVar20 & ~(uint)uVar19;
        iVar9 = (int)uVar7;
        lVar14 = (longlong)iVar9;
        uVar10 = puVar12[lVar14] & uVar20;
        if (uVar10 == 0) {
          iVar11 = iVar16;
          if (iVar16 < iVar9) {
            iVar11 = iVar9;
          }
          if (iVar16 <= iVar9) break;
          lVar21 = 0;
          while( true ) {
            iVar17 = iVar17 + 0x20;
            uVar10 = puVar12[lVar14 + lVar21 + 1];
            if (uVar10 != 0) break;
            lVar21 = lVar21 + 1;
            if (iVar11 - lVar14 == lVar21) goto LAB_142910eb1;
          }
          uVar7 = (ulonglong)(iVar9 + (int)lVar21 + 1);
          uVar20 = 0xffffffff;
        }
        uVar19 = (ulonglong)(-uVar10 & uVar10);
        uVar3 = uVar19 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar9 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar9 < iVar6);
LAB_142910eb1:
      lpCriticalSection = local_158;
      puVar18 = local_160;
      if (plVar13 == (longlong *)0x0) goto LAB_142910eec;
      uVar15 = *(uint *)(plVar13 + 1);
      uVar20 = 0x1fff8;
      if ((int)uVar15 < 0x1fff8) {
        uVar20 = uVar15;
      }
      if (*(int *)(param_1 + 0xa8) == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)(param_1 + 0xa0);
      }
      cVar5 = (**(code **)(*plVar8 + 0x58))();
      if (cVar5 != '\0') {
        iVar6 = (int)uStack_70;
        uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_70 + uVar20);
        if ((uint)(uStack_70._4_4_ - iVar6) < uVar20) {
          FUN_1447403be(&local_78);
        }
        memcpy(local_78,(void *)*plVar13,(longlong)(int)uVar20);
        if ((int)uVar15 < 0x1fff9) {
          if (*plVar13 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(plVar13);
          FUN_146b16300(local_168);
        }
        else {
          iVar6 = (int)plVar13[1] - uVar20;
          uVar15 = uVar20;
          if (iVar6 != 0) {
            memmove((void *)*plVar13,(void *)((longlong)(int)uVar20 + *plVar13),(longlong)iVar6);
            uVar15 = *(uint *)(plVar13 + 1);
          }
          *(uint *)(plVar13 + 1) = uVar15 - uVar20;
          FUN_140b3f66e(plVar13);
        }
      }
      lVar14 = 0;
      lpCriticalSection = p_Var4;
      puVar18 = puVar2;
    }
    else {
LAB_142910eec:
      lVar14 = FUN_14001cc68(8);
      FUN_1408d7722(lVar14);
      *(longlong *)(param_1 + 0x10) = lVar14;
    }
    LeaveCriticalSection(lpCriticalSection);
    if ((int)uStack_70 == 0) {
LAB_142910fb1:
      iVar6 = 0;
      if (lVar14 != 0) {
        FUN_1407df938(lVar14);
        FUN_1400020a8(lVar14);
      }
    }
    else {
      FUN_146866eea(&local_138);
      local_13c = 0xa692339f;
      puVar1 = (undefined4 *)*local_130 + 1;
      if ((undefined4 *)local_130[1] < puVar1) {
        if ((local_10e & 2) == 0) {
          (*(code *)local_138[0x2e])(&local_138,&local_13c,4);
        }
        else {
          FUN_14572512c(&local_138,&local_13c);
        }
      }
      else {
        local_13c = *(undefined4 *)*local_130;
        *local_130 = (ulonglong)puVar1;
      }
      puVar2 = (uint *)*local_130 + 1;
      if ((uint *)local_130[1] < puVar2) {
        if ((local_10e & 2) == 0) {
          (*(code *)local_138[0x2e])(&local_138,&local_7c,4);
        }
        else {
          FUN_14572512c(&local_138,&local_7c);
        }
      }
      else {
        local_7c = *(uint *)*local_130;
        *local_130 = (ulonglong)puVar2;
      }
      FUN_140077068(&local_138,&local_78);
      local_148 = *(undefined8 *)(param_1 + 0x90);
      local_150 = &PTR_FUN_149f23000;
      cVar5 = FUN_14290f6d6(local_90);
      iVar6 = 3;
      if (cVar5 != '\0') {
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (int)uStack_70;
        UNLOCK();
        iVar6 = 0;
      }
      if (local_90[0] != 0) {
        FUN_1400020a8();
      }
      plVar13 = local_e0;
      local_138 = &PTR__purecall_149e35f70;
      if (local_e0 != (longlong *)0x0) {
        if (*local_e0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar13);
      }
      lVar21 = local_c0;
      if (local_c0 != 0) {
        if (*(longlong *)(local_c0 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(lVar21);
      }
      if (cVar5 != '\0') goto LAB_142910fb1;
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (iVar6 != 0) {
      if ((local_60 ^ (ulonglong)auStack_188) == DAT_14c707940) {
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 1429111e8 FUN_1429111e8 body=612 status=ok
// SIG undefined FUN_1429111e8(void)

undefined8 FUN_1429111e8(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_148 [40];
  undefined4 local_120;
  int local_11c;
  undefined **local_118;
  undefined8 uStack_110;
  undefined **local_108;
  ulonglong *local_100;
  byte local_e0;
  byte local_df;
  byte local_de;
  longlong *local_b0;
  longlong local_90;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  do {
    memset(&local_108,0,0x90);
    FUN_144869430(&local_108);
    local_78 = 0;
    lStack_70 = 0;
    local_68 = 0;
    local_108 = &PTR_FUN_149f22c90;
    local_e0 = local_e0 | 1;
    local_df = local_df & 0xfe;
    uStack_110 = *(undefined8 *)(param_1 + 0x10);
    local_118 = &PTR_FUN_149f23000;
    cVar4 = FUN_14290f836(&local_108);
    iVar6 = 3;
    if (cVar4 != '\0') {
      piVar1 = (int *)*local_100 + 1;
      if ((int *)local_100[1] < piVar1) {
        if ((local_de & 2) == 0) {
          (*(code *)local_108[0x2e])(&local_108,&local_11c,4);
        }
        else {
          FUN_14572512c(&local_108);
        }
      }
      else {
        local_11c = *(int *)*local_100;
        *local_100 = (ulonglong)piVar1;
      }
      iVar6 = 3;
      if (local_11c == -0x596dcc61) {
        puVar2 = (undefined4 *)*local_100 + 1;
        if ((undefined4 *)local_100[1] < puVar2) {
          if ((local_de & 2) == 0) {
            (*(code *)local_108[0x2e])(&local_108,&local_120,4);
          }
          else {
            FUN_14572512c(&local_108,&local_120);
          }
        }
        else {
          local_120 = *(undefined4 *)*local_100;
          *local_100 = (ulonglong)puVar2;
        }
        local_118 = (undefined **)0x0;
        uStack_110 = 0;
        FUN_140077068(&local_108,&local_118);
        if (*(int *)(param_1 + 0x28) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(param_1 + 0x20);
        }
        (**(code **)(*plVar5 + 0x58))(plVar5,&local_118,local_120,(local_de & 2) >> 1);
        LOCK();
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + (int)uStack_110;
        UNLOCK();
        if (local_118 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        iVar6 = 0;
      }
    }
    if (lStack_70 != 0) {
      FUN_1400020a8();
    }
    plVar5 = local_b0;
    local_108 = &PTR__purecall_149e35f70;
    if (local_b0 != (longlong *)0x0) {
      if (*local_b0 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar5);
    }
    lVar3 = local_90;
    if (local_90 != 0) {
      if (*(longlong *)(local_90 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar3);
    }
  } while (iVar6 == 0);
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 14291144d FUN_14291144d body=59 status=ok
// SIG undefined FUN_14291144d(void)

void FUN_14291144d(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14c990970;
  if (DAT_14c990970 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14c990970 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014291147d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142911488 FUN_142911488 body=102 status=ok
// SIG undefined FUN_142911488(void)

void FUN_142911488(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x8000000149f22a30;
  local_14 = 0xc;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146282cb4(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429114f0 FUN_1429114f0 body=55 status=ok
// SIG undefined FUN_1429114f0(void)

void FUN_1429114f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9909d0 == 0) {
    uVar1 = FUN_1413f85cb();
    DAT_14c9909d0 = FUN_14171c317(FUN_146282ecc,uVar1,L"ETwoPlayerSplitScreenType");
  }
  return;
}



// FUNCTION 142911527 FUN_142911527 body=55 status=ok
// SIG undefined FUN_142911527(void)

void FUN_142911527(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9909e8 == 0) {
    uVar1 = FUN_1413f85cb();
    DAT_14c9909e8 = FUN_14171c317(FUN_146282efb,uVar1,L"EThreePlayerSplitScreenType");
  }
  return;
}



// FUNCTION 14291155e FUN_14291155e body=55 status=ok
// SIG undefined FUN_14291155e(void)

void FUN_14291155e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c990a00 == 0) {
    uVar1 = FUN_1413f85cb();
    DAT_14c990a00 = FUN_14171c317(FUN_146282f2a,uVar1,L"EFourPlayerSplitScreenType");
  }
  return;
}



// FUNCTION 142911595 FUN_142911595 body=55 status=ok
// SIG undefined FUN_142911595(void)

void FUN_142911595(void)

{
  undefined8 uVar1;
  
  if (DAT_14c990a30 == 0) {
    uVar1 = FUN_1413f85cb();
    DAT_14c990a30 = FUN_14171c317(FUN_146282fed,uVar1,L"ESubLevelStripMode");
  }
  return;
}



// FUNCTION 1429115cc FUN_1429115cc body=887 status=ok
// SIG undefined FUN_1429115cc(void)

longlong * FUN_1429115cc(longlong *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  ushort uVar12;
  ulonglong uVar13;
  ushort uVar14;
  undefined8 *puVar15;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar4 = (longlong *)FUN_140628716();
  lVar9 = plVar4[0x22];
  if (lVar9 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar9 = plVar4[0x22];
    if (lVar9 != 0) goto LAB_142911625;
  }
  else {
LAB_142911625:
    lVar5 = FUN_140628716();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) goto LAB_142911648;
  }
  lVar9 = 0;
LAB_142911648:
  if ((longlong)*(int *)(lVar9 + 0x118) != 0) {
    plVar4 = *(longlong **)(lVar9 + 0x110);
    plVar6 = plVar4 + (longlong)*(int *)(lVar9 + 0x118) * 6;
    iVar1 = (int)param_2[1];
LAB_142911677:
    if (iVar1 == (int)plVar4[1]) {
      if (1 < iVar1) {
        lVar9 = 0;
        do {
          uVar14 = *(ushort *)(*param_2 + lVar9);
          uVar8 = (ulonglong)uVar14;
          uVar12 = *(ushort *)(*plVar4 + lVar9);
          if (uVar14 == uVar12) {
            if (uVar14 == 0) break;
          }
          else {
            if (0x7f < (uVar12 | uVar14)) goto LAB_1429116cb;
            uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
            uVar13 = (ulonglong)uVar12;
            uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
            if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar13]) goto LAB_1429116cb;
          }
          lVar9 = lVar9 + 2;
        } while( true );
      }
      goto LAB_1429118d2;
    }
    if ((int)plVar4[1] + iVar1 == 1) goto LAB_1429118d2;
    goto LAB_1429116e5;
  }
LAB_1429116ee:
  lVar9 = FUN_140d6a126(DAT_14c872ce0,L"/Script/Engine.GameMode",0,&DAT_14c872af8);
  if (lVar9 != 0) {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_1446f470e(&local_80,L"GameModeClassAliases",1);
    FUN_14105accc(lVar9,local_80,&local_78,0);
    uVar11 = 0;
    if ((longlong)(int)uStack_70 != 0) {
      puVar15 = local_78 + (longlong)(int)uStack_70 * 2;
      puVar10 = local_78;
      do {
        local_98 = 0;
        uStack_90 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        puVar7 = &DAT_149dfb77a;
        if (*(int *)(puVar10 + 1) != 0) {
          puVar7 = (undefined2 *)*puVar10;
        }
        local_a8 = 0;
        cVar3 = FUN_14063337c(puVar7,L"ShortName=",&local_98,1);
        if (cVar3 == '\0') {
LAB_142911839:
          bVar2 = true;
          if (*param_1 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          puVar7 = &DAT_149dfb77a;
          if (*(int *)(puVar10 + 1) != 0) {
            puVar7 = (undefined2 *)*puVar10;
          }
          local_a8 = 0;
          cVar3 = FUN_14063337c(puVar7,L"GameClassName=",param_1,1);
          if (cVar3 == '\0') goto LAB_142911839;
          if ((int)uStack_90 == (int)param_2[1]) {
            if (1 < (int)uStack_90) {
              lVar9 = 0;
              while( true ) {
                uVar14 = *(ushort *)(local_98 + lVar9);
                uVar8 = (ulonglong)uVar14;
                uVar12 = *(ushort *)(*param_2 + lVar9);
                if (uVar14 != uVar12) break;
                if (uVar14 == 0) goto LAB_142911852;
LAB_142911807:
                lVar9 = lVar9 + 2;
              }
              if ((uVar12 | uVar14) < 0x80) {
                uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
                uVar13 = (ulonglong)uVar12;
                uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar13]) goto LAB_142911807;
              }
              if (uVar14 != uVar12) goto LAB_142911839;
            }
          }
          else if ((int)param_2[1] + (int)uStack_90 != 1) goto LAB_142911839;
LAB_142911852:
          bVar2 = false;
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (!bVar2) {
          FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
          if (local_78 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_142911913;
        }
        puVar10 = puVar10 + 2;
        uVar11 = (int)uStack_70;
      } while (puVar10 != puVar15);
    }
    FUN_1447a1747(local_78,uVar11);
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  *param_1 = 0;
  iVar1 = (int)param_2[1];
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
LAB_142911913:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
LAB_1429116cb:
  if (uVar14 == uVar12) {
LAB_1429118d2:
    FUN_14475cc44(plVar4 + 2,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_c8);
  }
LAB_1429116e5:
  plVar4 = plVar4 + 6;
  if (plVar4 == plVar6) goto LAB_1429116ee;
  goto LAB_142911677;
}



// FUNCTION 142911946 FUN_142911946 body=886 status=ok
// SIG undefined FUN_142911946(void)

longlong * FUN_142911946(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ushort uVar10;
  undefined4 uVar11;
  undefined2 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined2 *puVar15;
  longlong lVar16;
  ushort uVar17;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined2 *local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar4 = (longlong *)FUN_140628716();
  lVar16 = plVar4[0x22];
  if (lVar16 == 0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    lVar16 = plVar4[0x22];
    if (lVar16 != 0) goto LAB_14291199f;
  }
  else {
LAB_14291199f:
    lVar5 = FUN_140628716();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) goto LAB_1429119c2;
  }
  lVar16 = 0;
LAB_1429119c2:
  if ((longlong)*(int *)(lVar16 + 0x108) != 0) {
    puVar7 = *(undefined8 **)(lVar16 + 0x100);
    puVar12 = &DAT_149dfb77a;
    if (*(int *)(param_2 + 1) != 0) {
      puVar12 = (undefined2 *)*param_2;
    }
    puVar6 = puVar7 + (longlong)*(int *)(lVar16 + 0x108) * 6;
LAB_142911a01:
    iVar1 = *(int *)(puVar7 + 1);
    uVar8 = iVar1 - 1;
    if (iVar1 == 0) {
      uVar8 = 0;
    }
    if (0 < (int)uVar8) {
      puVar15 = &DAT_149dfb77a;
      if (iVar1 != 0) {
        puVar15 = (undefined2 *)*puVar7;
      }
      uVar9 = (ulonglong)uVar8;
      lVar16 = 0;
      do {
        uVar17 = *(ushort *)((longlong)puVar12 + lVar16);
        uVar13 = (ulonglong)uVar17;
        uVar10 = *(ushort *)((longlong)puVar15 + lVar16);
        if (uVar17 == uVar10) {
          if (uVar17 == 0) goto LAB_142911c69;
        }
        else {
          if (0x7f < (uVar10 | uVar17)) goto LAB_142911a66;
          uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
          uVar14 = (ulonglong)uVar10;
          uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
          if ((&DAT_149e05da0)[uVar13] != (&DAT_149e05da0)[uVar14]) goto LAB_142911a66;
        }
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_142911c69;
        lVar16 = lVar16 + 2;
      } while( true );
    }
    goto LAB_142911a72;
  }
LAB_142911a7b:
  lVar16 = FUN_140d6a126(DAT_14c872ce0,L"/Script/Engine.WorldSettings",0,&DAT_14c872af8);
  if (lVar16 != 0) {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_1446f470e(&local_80,L"DefaultMapPrefixes",1);
    FUN_14105accc(lVar16,local_80,&local_78,0);
    uVar11 = 0;
    if ((longlong)(int)uStack_70 != 0) {
      puVar6 = local_78 + (longlong)(int)uStack_70 * 2;
      puVar7 = local_78;
      do {
        local_98 = (undefined2 *)0x0;
        uStack_90 = 0;
        *param_1 = 0;
        param_1[1] = 0;
        puVar12 = &DAT_149dfb77a;
        if (*(int *)(puVar7 + 1) != 0) {
          puVar12 = (undefined2 *)*puVar7;
        }
        local_a8 = 0;
        cVar3 = FUN_14063337c(puVar12,L"Prefix=",&local_98,1);
        if (cVar3 == '\0') {
LAB_142911bf5:
          bVar2 = true;
          if (*param_1 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          puVar12 = &DAT_149dfb77a;
          if (*(int *)(puVar7 + 1) != 0) {
            puVar12 = (undefined2 *)*puVar7;
          }
          local_a8 = 0;
          cVar3 = FUN_14063337c(puVar12,L"GameMode=",param_1,1);
          if (cVar3 == '\0') goto LAB_142911bf5;
          uVar8 = (int)uStack_90 - 1;
          if ((int)uStack_90 == 0) {
            uVar8 = 0;
          }
          if ((int)uVar8 < 1) goto LAB_142911bf5;
          puVar12 = &DAT_149dfb77a;
          if ((int)uStack_90 != 0) {
            puVar12 = local_98;
          }
          puVar15 = &DAT_149dfb77a;
          if (*(int *)(param_2 + 1) != 0) {
            puVar15 = (undefined2 *)*param_2;
          }
          uVar9 = (ulonglong)uVar8;
          lVar16 = 0;
          while( true ) {
            uVar17 = *(ushort *)((longlong)puVar15 + lVar16);
            uVar13 = (ulonglong)uVar17;
            uVar10 = *(ushort *)((longlong)puVar12 + lVar16);
            if (uVar17 != uVar10) break;
            bVar2 = false;
            if ((uVar17 == 0) || (uVar9 == 1)) goto LAB_142911c05;
LAB_142911bb8:
            uVar9 = uVar9 - 1;
            lVar16 = lVar16 + 2;
          }
          if ((uVar10 | uVar17) < 0x80) {
            uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
            uVar14 = (ulonglong)uVar10;
            uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
            if ((&DAT_149e05da0)[uVar13] != (&DAT_149e05da0)[uVar14]) goto LAB_142911bed;
            if (uVar9 != 1) goto LAB_142911bb8;
          }
          else {
LAB_142911bed:
            if (uVar17 != uVar10) goto LAB_142911bf5;
          }
          bVar2 = false;
        }
LAB_142911c05:
        if (local_98 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (!bVar2) {
          FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
          if (local_78 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_142911c52;
        }
        puVar7 = puVar7 + 2;
        uVar11 = (int)uStack_70;
      } while (puVar7 != puVar6);
    }
    FUN_1447a1747(local_78,uVar11);
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_142911c52:
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_142911a66:
  if (uVar17 == uVar10) {
LAB_142911c69:
    FUN_14475cc44(puVar7 + 2,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_c8);
  }
LAB_142911a72:
  puVar7 = puVar7 + 6;
  if (puVar7 == puVar6) goto LAB_142911a7b;
  goto LAB_142911a01;
}



// FUNCTION 142911d02 FUN_142911d02 body=396 status=ok
// SIG undefined FUN_142911d02(void)

void FUN_142911d02(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/EngineSettings",&PTR_FUN_149f23b20,1,&PTR_FUN_149f23af0);
  ppuStack_60 = &PTR_FUN_149f24c00;
  uStack_58 = 4;
  local_68 = 2;
  FUN_14282b410(L"/Script/EngineSettings",&PTR_FUN_149f24cd0,1,&PTR_FUN_149f24c80);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/EngineSettings",&PTR_FUN_149f25430,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/EngineSettings",&PTR_FUN_149f25890,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/EngineSettings",&PTR_FUN_149f25bf0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/EngineSettings",&PTR_FUN_149f266e0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/EngineSettings",&PTR_FUN_149f26b10,1,0);
  local_48 = 0x8000000149f26c6c;
  local_34 = 0xe;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_1462833e0(&local_48);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142911e90 FUN_142911e90 body=362 status=ok
// SIG undefined FUN_142911e90(void)

undefined8 *
FUN_142911e90(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    lVar1 = *param_3;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    plVar2 = (longlong *)FUN_1402c9134(&DAT_14c874628,lVar1,local_24,0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x40))(plVar2,param_2,param_4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142911ffe FUN_142911ffe body=80 status=ok
// SIG undefined FUN_142911ffe(void)

undefined8 *
FUN_142911ffe(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 *param_5)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  puVar2 = &DAT_149dfb77a;
  puVar1 = &DAT_149dfb77a;
  if (*(int *)(param_5 + 1) != 0) {
    puVar1 = (undefined2 *)*param_5;
  }
  if (*(int *)(param_4 + 1) != 0) {
    puVar2 = (undefined2 *)*param_4;
  }
  FUN_1449da20c(DAT_14c872ce0,puVar2,puVar1,param_2,param_3);
  return param_2;
}



// FUNCTION 142912050 FUN_142912050 body=128 status=ok
// SIG undefined FUN_142912050(void)

void FUN_142912050(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(longlong *)(param_1 + 0x50) = lVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_146b176ca(param_2);
  return;
}



// FUNCTION 1429120d0 FUN_1429120d0 body=30 status=ok
// SIG undefined FUN_1429120d0(void)

void FUN_1429120d0(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x34) = param_2;
  return;
}



// FUNCTION 1429120f0 FUN_1429120f0 body=16 status=ok
// SIG undefined FUN_1429120f0(void)

undefined8 FUN_1429120f0(undefined8 param_1)

{
  return param_1;
}



// FUNCTION 142912100 FUN_142912100 body=168 status=ok
// SIG undefined FUN_142912100(void)

void FUN_142912100(longlong param_1,undefined8 param_2)

{
  DWORD DVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_1;
  local_38 = param_2;
  FUN_1412e3d1e(&local_20);
  *(undefined8 *)(param_1 + 0x10) = local_20;
  *(undefined8 *)(param_1 + 0x18) = local_18;
  FUN_146b17702(param_1 + 0x58,local_38);
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(param_1 + 0x30) = DVar1;
  FUN_140212f8e(&local_28);
  *(undefined8 *)(param_1 + 0x20) = local_28;
  FUN_140212f8e(&local_30);
  *(undefined8 *)(param_1 + 0x28) = local_30;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x40) = 1;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429121b0 FUN_1429121b0 body=16 status=ok
// SIG undefined FUN_1429121b0(void)

ulonglong FUN_1429121b0(longlong param_1)

{
  return CONCAT71((int7)((ulonglong)param_1 >> 8),*(undefined1 *)(param_1 + 0x40)) &
         0xffffffffffffff01;
}



// FUNCTION 1429121c0 FUN_1429121c0 body=2833 status=ok
// SIG undefined FUN_1429121c0(void)

void FUN_1429121c0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_2b8 [32];
  longlong *local_298;
  undefined8 local_290;
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined1 local_250;
  undefined4 local_24c;
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_224;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined1 local_208;
  undefined4 local_204;
  undefined1 local_200 [16];
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined4 local_1bc;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined1 local_180;
  undefined4 local_17c;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined1 local_140;
  undefined4 local_13c;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined1 local_60;
  undefined4 local_5c;
  longlong local_58;
  uint local_50;
  uint local_4c;
  undefined1 local_48 [20];
  undefined4 local_34;
  undefined1 local_30 [8];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_298 = param_1;
  local_290 = param_2;
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    FUN_140212f8e(&local_28);
    param_1[5] = local_28;
    FUN_146b17762(param_1 + 5,local_30,param_1 + 4);
    lVar4 = FUN_146b176bc(local_30);
    param_1[7] = lVar4;
    (**(code **)(*param_1 + 0x20))(param_1,local_290);
    local_34 = 2;
    FUN_140056680(local_48,L"Span");
    local_58 = 0;
    iVar1 = (int)param_1[0xc];
    lVar4 = param_1[0xb];
    local_50 = iVar1;
    if (iVar1 == 0) {
      local_4c = 0;
    }
    else {
      FUN_146b17e8e(&local_58,iVar1,0);
      FUN_146b17f01(local_58,lVar4,iVar1);
    }
    FUN_140056680(local_98,L"SchemaVersion");
    FUN_146b17770(&local_88,local_98,&local_34);
    uVar2 = local_50;
    local_50 = local_50 + 1;
    if (local_4c < local_50) {
      FUN_146b17dba(&local_58,uVar2);
    }
    puVar3 = (undefined8 *)(local_58 + (longlong)(int)uVar2 * 0x30);
    *puVar3 = 0;
    *puVar3 = local_88;
    local_88 = 0;
    *(undefined4 *)(puVar3 + 1) = local_80;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_7c;
    local_80 = 0;
    local_7c = 0;
    puVar3[2] = 0;
    puVar3[2] = local_78;
    local_78 = 0;
    *(undefined4 *)(puVar3 + 3) = local_70;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = local_6c;
    local_70 = 0;
    local_6c = 0;
    puVar3[4] = local_68;
    *(undefined1 *)(puVar3 + 5) = local_60;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = local_5c;
    FUN_146b17324(&local_88);
    FUN_1400021e4(param_1 + 1,local_d8);
    FUN_140056680(local_e8,L"Span_Name");
    FUN_146b17654(&local_c8,local_e8,local_d8);
    uVar2 = local_50;
    local_50 = local_50 + 1;
    if (local_4c < local_50) {
      FUN_146b17dba(&local_58,uVar2);
    }
    puVar3 = (undefined8 *)(local_58 + (longlong)(int)uVar2 * 0x30);
    *puVar3 = 0;
    *puVar3 = local_c8;
    local_c8 = 0;
    *(undefined4 *)(puVar3 + 1) = local_c0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_bc;
    local_c0 = 0;
    local_bc = 0;
    puVar3[2] = 0;
    puVar3[2] = local_b8;
    local_b8 = 0;
    *(undefined4 *)(puVar3 + 3) = local_b0;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = local_ac;
    local_b0 = 0;
    local_ac = 0;
    puVar3[4] = local_a8;
    *(undefined1 *)(puVar3 + 5) = local_a0;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = local_9c;
    FUN_146b17324(&local_c8);
    FUN_1413a3ffc(local_d8);
    FUN_146b177d6(param_1 + 2,local_128);
    FUN_140056680(local_138,L"Span_GUID");
    FUN_146b17654(&local_118,local_138,local_128);
    uVar2 = local_50;
    local_50 = local_50 + 1;
    if (local_4c < local_50) {
      FUN_146b17dba(&local_58,uVar2);
    }
    puVar3 = (undefined8 *)(local_58 + (longlong)(int)uVar2 * 0x30);
    *puVar3 = 0;
    *puVar3 = local_118;
    local_118 = 0;
    *(undefined4 *)(puVar3 + 1) = local_110;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_10c;
    local_110 = 0;
    local_10c = 0;
    puVar3[2] = 0;
    puVar3[2] = local_108;
    local_108 = 0;
    *(undefined4 *)(puVar3 + 3) = local_100;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = local_fc;
    local_100 = 0;
    local_fc = 0;
    puVar3[4] = local_f8;
    *(undefined1 *)(puVar3 + 5) = local_f0;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = local_ec;
    FUN_146b17324(&local_118);
    FUN_1413a3ffc(local_128);
    FUN_140056680(local_178,L"Span_ThreadId");
    FUN_146b17354(&local_168,local_178,param_1 + 6);
    uVar2 = local_50;
    local_50 = local_50 + 1;
    if (local_4c < local_50) {
      FUN_146b17dba(&local_58,uVar2);
    }
    puVar3 = (undefined8 *)(local_58 + (longlong)(int)uVar2 * 0x30);
    *puVar3 = 0;
    *puVar3 = local_168;
    local_168 = 0;
    *(undefined4 *)(puVar3 + 1) = local_160;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_15c;
    local_160 = 0;
    local_15c = 0;
    puVar3[2] = 0;
    puVar3[2] = local_158;
    local_158 = 0;
    *(undefined4 *)(puVar3 + 3) = local_150;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = local_14c;
    local_150 = 0;
    local_14c = 0;
    puVar3[4] = local_148;
    *(undefined1 *)(puVar3 + 5) = local_140;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = local_13c;
    FUN_146b17324(&local_168);
    FUN_140056680(local_1b8,L"Span_Depth");
    FUN_146b17354(&local_1a8,local_1b8,(longlong)param_1 + 0x34);
    uVar2 = local_50;
    local_50 = local_50 + 1;
    if (local_4c < local_50) {
      FUN_146b17dba(&local_58,uVar2);
    }
    puVar3 = (undefined8 *)(local_58 + (longlong)(int)uVar2 * 0x30);
    *puVar3 = 0;
    *puVar3 = local_1a8;
    local_1a8 = 0;
    *(undefined4 *)(puVar3 + 1) = local_1a0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_19c;
    local_1a0 = 0;
    local_19c = 0;
    puVar3[2] = 0;
    puVar3[2] = local_198;
    local_198 = 0;
    *(undefined4 *)(puVar3 + 3) = local_190;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = local_18c;
    local_190 = 0;
    local_18c = 0;
    puVar3[4] = local_188;
    *(undefined1 *)(puVar3 + 5) = local_180;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = local_17c;
    FUN_146b17324(&local_1a8);
    local_1f0 = FUN_146b177f6(param_1 + 4);
    FUN_140056680(local_200,L"Span_StartUTC");
    FUN_146b1786c(&local_1e8,local_200,&local_1f0);
    uVar2 = local_50;
    local_50 = local_50 + 1;
    if (local_4c < local_50) {
      FUN_146b17dba(&local_58,uVar2);
    }
    puVar3 = (undefined8 *)(local_58 + (longlong)(int)uVar2 * 0x30);
    *puVar3 = 0;
    *puVar3 = local_1e8;
    local_1e8 = 0;
    *(undefined4 *)(puVar3 + 1) = local_1e0;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_1dc;
    local_1e0 = 0;
    local_1dc = 0;
    puVar3[2] = 0;
    puVar3[2] = local_1d8;
    local_1d8 = 0;
    *(undefined4 *)(puVar3 + 3) = local_1d0;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = local_1cc;
    local_1d0 = 0;
    local_1cc = 0;
    puVar3[4] = local_1c8;
    *(undefined1 *)(puVar3 + 5) = local_1c0;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = local_1bc;
    FUN_146b17324(&local_1e8);
    local_238 = FUN_146b177f6(param_1 + 5);
    FUN_140056680(local_248,L"Span_EndUTC");
    FUN_146b1786c(&local_230,local_248,&local_238);
    uVar2 = local_50;
    local_50 = local_50 + 1;
    if (local_4c < local_50) {
      FUN_146b17dba(&local_58,uVar2);
    }
    puVar3 = (undefined8 *)(local_58 + (longlong)(int)uVar2 * 0x30);
    *puVar3 = 0;
    *puVar3 = local_230;
    local_230 = 0;
    *(undefined4 *)(puVar3 + 1) = local_228;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_224;
    local_228 = 0;
    local_224 = 0;
    puVar3[2] = 0;
    puVar3[2] = local_220;
    local_220 = 0;
    *(undefined4 *)(puVar3 + 3) = local_218;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = local_214;
    local_218 = 0;
    local_214 = 0;
    puVar3[4] = local_210;
    *(undefined1 *)(puVar3 + 5) = local_208;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = local_204;
    FUN_146b17324(&local_230);
    FUN_140056680(local_288,L"Span_TimeInSec");
    FUN_146b174e6(&local_278,local_288,param_1 + 7);
    uVar2 = local_50;
    local_50 = local_50 + 1;
    if (local_4c < local_50) {
      FUN_146b17dba(&local_58,uVar2);
    }
    puVar3 = (undefined8 *)(local_58 + (longlong)(int)uVar2 * 0x30);
    *puVar3 = 0;
    *puVar3 = local_278;
    local_278 = 0;
    *(undefined4 *)(puVar3 + 1) = local_270;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_26c;
    local_270 = 0;
    local_26c = 0;
    puVar3[2] = 0;
    puVar3[2] = local_268;
    local_268 = 0;
    *(undefined4 *)(puVar3 + 3) = local_260;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = local_25c;
    local_260 = 0;
    local_25c = 0;
    puVar3[4] = local_258;
    *(undefined1 *)(puVar3 + 5) = local_250;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = local_24c;
    FUN_146b17324(&local_278);
    if (param_1[9] != 0) {
      (**(code **)(*(longlong *)param_1[9] + 0x78))((longlong *)param_1[9],local_48,&local_58);
    }
    *(undefined1 *)(param_1 + 8) = 0;
    FUN_146b178cc(&local_58);
    FUN_1413a3ffc(local_48);
  }
  if ((local_20 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142912ce0 FUN_142912ce0 body=39 status=ok
// SIG undefined FUN_142912ce0(void)

void FUN_142912ce0(longlong param_1,undefined8 param_2)

{
  FUN_142912d10(param_1 + 0x58,param_2);
  return;
}



// FUNCTION 142912d10 FUN_142912d10 body=432 status=ok
// SIG undefined FUN_142912d10(void)

void FUN_142912d10(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  longlong local_68;
  longlong local_60;
  
  local_60 = *param_2;
  lVar1 = *param_2;
  lVar4 = param_2[1];
  do {
    if (local_60 == lVar1 + (longlong)(int)lVar4 * 0x30) {
      return;
    }
    bVar3 = false;
    lVar2 = *param_1;
    lVar5 = param_1[1];
    for (local_68 = *param_1; local_68 != lVar2 + (longlong)(int)lVar5 * 0x30;
        local_68 = local_68 + 0x30) {
      puVar7 = (undefined8 *)FUN_146b17cf6(local_60);
      puVar8 = (undefined8 *)FUN_146b17cf6(local_68);
      iVar6 = *(int *)(puVar7 + 1);
      if (iVar6 == *(int *)(puVar8 + 1)) {
        bVar9 = true;
        if (1 < iVar6) {
          iVar6 = FUN_144a80a00(*puVar7,*puVar8);
          bVar9 = iVar6 == 0;
        }
      }
      else {
        bVar9 = iVar6 + *(int *)(puVar8 + 1) == 1;
      }
      if (bVar9) {
        FUN_146b17cfa(local_68,local_60);
        bVar3 = true;
        break;
      }
    }
    if (!bVar3) {
      iVar6 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar6 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
        FUN_146b17dba(param_1,iVar6);
      }
      FUN_146b17d12(*param_1 + (longlong)iVar6 * 0x30,local_60);
    }
    local_60 = local_60 + 0x30;
  } while( true );
}



// FUNCTION 142912ec0 FUN_142912ec0 body=192 status=ok
// SIG undefined FUN_142912ec0(void)

void FUN_142912ec0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    local_30 = 0;
    iVar1 = *(int *)(param_1 + 0x60);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    local_28 = iVar1;
    if (iVar1 == 0) {
      local_24 = 0;
    }
    else {
      FUN_146b17e8e(&local_30,iVar1,0);
      FUN_146b17f01(local_30,uVar2,iVar1);
    }
    FUN_142912d10(&local_30,local_38);
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x78))
              (*(longlong **)(param_1 + 0x48),local_40,&local_30);
    FUN_146b178cc(&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142912f90 FUN_142912f90 body=15 status=ok
// SIG undefined FUN_142912f90(void)

longlong FUN_142912f90(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 142912fa0 FUN_142912fa0 body=40 status=ok
// SIG undefined FUN_142912fa0(void)

void FUN_142912fa0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142912fd0 FUN_142912fd0 body=15 status=ok
// SIG undefined FUN_142912fd0(void)

longlong FUN_142912fd0(longlong param_1)

{
  return param_1 + 0x58;
}



// FUNCTION 142912fe0 FUN_142912fe0 body=14 status=ok
// SIG undefined FUN_142912fe0(void)

undefined4 FUN_142912fe0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



// FUNCTION 142912ff0 FUN_142912ff0 body=128 status=ok
// SIG undefined FUN_142912ff0(void)

void FUN_142912ff0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(longlong *)(param_1 + 0x10) = lVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  FUN_146b176ca(param_2);
  return;
}



// FUNCTION 142913070 FUN_142913070 body=92 status=ok
// SIG undefined FUN_142913070(void)

void FUN_142913070(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar2 = (undefined8 *)
             (*(longlong *)(param_1 + 0x28) + (longlong)(*(int *)(param_1 + 0x30) + -1) * 0x10);
    *param_2 = *puVar2;
    lVar1 = puVar2[1];
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 1429130d0 FUN_1429130d0 body=307 status=ok
// SIG undefined FUN_1429130d0(void)

void FUN_1429130d0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_40 = 0;
  local_38 = 0;
  local_50 = param_1;
  FUN_1446f470e(&local_48,L"Session",1);
  local_58 = &local_30;
  (**(code **)(*param_1 + 0x20))(param_1,&local_20,local_48,&local_40);
  plVar1 = local_18;
  if (param_1 + 3 != &local_20) {
    param_1[3] = local_20;
    local_20 = 0;
    plVar4 = (longlong *)param_1[4];
    if (local_18 != plVar4) {
      local_18 = (longlong *)0x0;
      param_1[4] = (longlong)plVar1;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
  }
  FUN_146b178f8(&local_20);
  FUN_146b178cc(&local_30);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142913210 FUN_142913210 body=704 status=ok
// SIG undefined FUN_142913210(void)

void FUN_142913210(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_70 = param_1;
  FUN_146b17280(local_28,param_1 + 0x1b);
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_48 = param_1[3];
  local_40 = param_1[4];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x28))(param_1,&local_48,&local_38);
  FUN_146b178cc(&local_38);
  local_88 = (longlong *)0x0;
  param_1[3] = 0;
  local_90 = 0;
  plVar4 = (longlong *)param_1[4];
  if (plVar4 != (longlong *)0x0) {
    local_88 = (longlong *)0x0;
    param_1[4] = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  plVar4 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  while ((int)param_1[6] != 0) {
    local_58 = 0;
    local_50 = 0;
    local_4c = 0;
    local_68 = *(undefined8 *)param_1[5];
    local_60 = ((undefined8 *)param_1[5])[1];
    if (local_60 != 0) {
      LOCK();
      *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*param_1 + 0x28))(param_1,&local_68,&local_58);
    FUN_146b178cc(&local_58);
  }
  FUN_146b17930(param_1 + 5);
  local_78 = (longlong *)0x0;
  param_1[1] = 0;
  local_80 = 0;
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    local_78 = (longlong *)0x0;
    param_1[2] = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  plVar4 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_146b1729c(local_28);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429134e0 FUN_1429134e0 body=968 status=ok
// SIG undefined FUN_1429134e0(void)

undefined8 *
FUN_1429134e0(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined1 auStack_118 [40];
  longlong local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined1 local_c0 [16];
  undefined8 **local_b0;
  undefined8 **local_a8;
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 local_50 [8];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  local_38 = (undefined8 *)(DAT_14c707940 ^ (ulonglong)auStack_118);
  local_f0 = param_1;
  local_e8 = param_3;
  local_e0 = param_4;
  local_d8 = param_2;
  FUN_146b17280(local_50,param_1 + 0xd8);
  local_68 = (undefined8 *)FUN_14494321d(0x78);
  *local_68 = SharedPointerInternals::TReferenceControllerBase<1>::vftable;
  *(undefined4 *)(local_68 + 1) = 1;
  *(undefined4 *)((longlong)local_68 + 0xc) = 1;
  *local_68 = &PTR_LAB_149f27650;
  local_70 = local_68 + 2;
  local_68[2] = &PTR_FUN_149f27670;
  local_68[3] = local_e8;
  *(undefined4 *)(local_68 + 4) = 0;
  *(undefined4 *)((longlong)local_68 + 0x24) = 0;
  *(undefined4 *)(local_68 + 5) = 0;
  *(undefined4 *)((longlong)local_68 + 0x2c) = 0;
  local_68[6] = 0;
  local_68[7] = 0;
  *(undefined4 *)(local_68 + 8) = 0;
  *(undefined4 *)((longlong)local_68 + 0x44) = 0;
  local_68[9] = 0;
  *(undefined1 *)(local_68 + 10) = 0;
  local_68[0xb] = 0;
  local_68[0xc] = 0;
  local_68[0xd] = 0;
  *(undefined4 *)(local_68 + 0xe) = 0;
  *(undefined4 *)((longlong)local_68 + 0x74) = 0;
  if (local_68 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = *(int *)(local_68 + 1) + 1;
    UNLOCK();
  }
  local_60 = local_70;
  local_58 = local_68;
  FUN_146b17964(&local_70);
  if (*param_4 != 0) {
    (**(code **)(*(longlong *)*param_4 + 0x60))((longlong *)*param_4,local_80);
    uVar1 = FUN_1447addd0(local_80,0x10);
    iVar2 = FUN_146b18a6c((longlong *)(param_1 + 0x38),uVar1,local_80);
    lVar4 = 0;
    if (iVar2 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x28;
    }
    lVar3 = lVar4 + 0x10;
    if (lVar4 == 0) {
      lVar3 = 0;
    }
    if (lVar3 == 0) {
      local_48 = local_60;
      local_40 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        LOCK();
        *(int *)((longlong)local_58 + 0xc) = *(int *)((longlong)local_58 + 0xc) + 1;
        UNLOCK();
      }
      local_b0 = &local_48;
      local_a8 = &local_38;
      FUN_146b179e4(local_a0,&local_b0);
      (**(code **)(*(longlong *)*param_4 + 0x60))((longlong *)*param_4,local_c0);
      FUN_146b1799c(param_1 + 0x38,local_c0,local_a0);
      FUN_146b17a36(local_a0);
      ppuVar6 = &local_38;
      do {
        ppuVar6 = ppuVar6 + -2;
        FUN_146b17a62(ppuVar6);
      } while (ppuVar6 != &local_48);
    }
    else {
      (**(code **)(*(longlong *)*param_4 + 0x60))((longlong *)*param_4,local_90);
      uVar1 = FUN_1447addd0(local_90,0x10);
      iVar2 = FUN_146b18a6c((longlong *)(param_1 + 0x38),uVar1,local_90);
      lVar4 = 0;
      if (iVar2 != -1) {
        lVar4 = *(longlong *)(param_1 + 0x38) + (longlong)iVar2 * 0x28;
      }
      iVar2 = *(int *)(lVar4 + 0x18);
      *(uint *)(lVar4 + 0x18) = iVar2 + 1U;
      if (*(uint *)(lVar4 + 0x1c) < iVar2 + 1U) {
        FUN_146b18ae0((longlong *)(lVar4 + 0x10),iVar2);
      }
      puVar5 = (undefined8 *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar2 * 0x10);
      *puVar5 = local_60;
      puVar5[1] = local_58;
      if (local_58 != (undefined8 *)0x0) {
        LOCK();
        *(int *)((longlong)local_58 + 0xc) = *(int *)((longlong)local_58 + 0xc) + 1;
        UNLOCK();
      }
    }
  }
  local_d0 = local_60;
  local_c8 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
    UNLOCK();
  }
  FUN_1429138b0(param_1,&local_d0,param_5);
  *param_2 = local_60;
  param_2[1] = local_58;
  if (local_58 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = *(int *)(local_58 + 1) + 1;
    UNLOCK();
  }
  FUN_146b178f8(&local_60);
  FUN_146b1729c(local_50);
  FUN_146b178f8(param_4);
  if (((ulonglong)local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1429138b0 FUN_1429138b0 body=377 status=ok
// SIG undefined FUN_1429138b0(void)

void FUN_1429138b0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x30) == 0) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
  }
  else {
    puVar4 = (undefined8 *)
             (*(longlong *)(param_1 + 0x28) + (longlong)(*(int *)(param_1 + 0x30) + -1) * 0x10);
    local_38 = (longlong *)*puVar4;
    local_30 = puVar4[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
  }
  plVar1 = (longlong *)*param_2;
  local_70 = param_1;
  local_68 = param_3;
  local_60 = param_2;
  if (local_38 == (longlong *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (**(code **)(*local_38 + 0x48))();
    iVar3 = iVar3 + 1;
  }
  (**(code **)(*plVar1 + 0x40))(plVar1,iVar3);
  plVar1 = (longlong *)*param_2;
  local_48 = *(undefined8 *)(param_1 + 8);
  local_40 = *(longlong *)(param_1 + 0x10);
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*plVar1 + 8))(plVar1,&local_48);
  (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,local_68);
  local_58 = *param_2;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  FUN_142913a30(param_1,&local_58);
  iVar3 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar3 + 1U) {
    FUN_146b1973e((longlong *)(param_1 + 0x28),iVar3);
  }
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 0x10);
  *puVar4 = *param_2;
  lVar2 = param_2[1];
  puVar4[1] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  FUN_146b178f8(&local_38);
  FUN_146b178f8(param_2);
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142913a30 FUN_142913a30 body=537 status=ok
// SIG undefined FUN_142913a30(void)

void FUN_142913a30(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined1 auStack_8e8 [36];
  int local_8c4;
  longlong local_8c0;
  undefined8 *local_8b8;
  undefined1 local_8b0 [16];
  undefined2 *local_8a0;
  int local_898;
  undefined2 *local_890;
  int local_888;
  ulonglong local_880;
  undefined8 local_878;
  ulonglong local_870;
  ulonglong local_868;
  undefined1 local_860 [2104];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_8e8;
  local_8c0 = param_1;
  local_8b8 = param_2;
  puVar3 = (ulonglong *)(**(code **)(*(longlong *)*param_2 + 0x30))();
  local_868 = *puVar3;
  local_8c4 = 0;
  while( true ) {
    uVar1 = local_868;
    local_870 = local_868;
    iVar2 = FUN_144a788f7(local_868 & 0xffffffff);
    iVar9 = -1;
    if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
      lVar4 = *(longlong *)(param_1 + 200);
      if (*(longlong *)(param_1 + 200) == 0) {
        lVar4 = param_1 + 0xc0;
      }
      puVar3 = (ulonglong *)
               (lVar4 + (ulonglong)(*(int *)(param_1 + 0xd0) - 1U & iVar2 + (int)(uVar1 >> 0x20)) *
                        4);
      while( true ) {
        iVar2 = (int)*puVar3;
        iVar9 = -1;
        if ((iVar2 == -1) ||
           (puVar3 = (ulonglong *)(*(longlong *)(param_1 + 0x88) + (longlong)iVar2 * 0x20),
           iVar9 = iVar2, *puVar3 == uVar1)) break;
        puVar3 = puVar3 + 3;
      }
    }
    lVar4 = 0;
    if (iVar9 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x88) + (longlong)iVar9 * 0x20;
    }
    lVar7 = lVar4 + 8;
    if (lVar4 == 0) {
      lVar7 = 0;
    }
    if (lVar7 == 0) break;
    puVar5 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x30))();
    local_878 = *puVar5;
    FUN_146b17a7a(local_860,local_878);
    iVar9 = local_8c4 + 1;
    local_8c4 = iVar9;
    uVar6 = (**(code **)(*(longlong *)*param_2 + 0x30))();
    FUN_1400021e4(uVar6,&local_8a0);
    puVar8 = &DAT_149dfb77a;
    if (local_898 != 0) {
      puVar8 = local_8a0;
    }
    FUN_146b17adc(&local_890,puVar8,iVar9);
    puVar8 = &DAT_149dfb77a;
    if (local_888 != 0) {
      puVar8 = local_890;
    }
    FUN_1446f470e(&local_880,puVar8,1);
    local_868 = local_880;
    FUN_1413a3ffc(&local_890);
    FUN_1413a3ffc(&local_8a0);
    FUN_144724f3c(local_860);
  }
  (**(code **)(*(longlong *)*param_2 + 0x60))((longlong *)*param_2,local_8b0);
  FUN_146b17b00(param_1 + 0x88,&local_868,local_8b0);
  FUN_146b178f8(param_2);
  if ((local_28 ^ (ulonglong)auStack_8e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142913c50 FUN_142913c50 body=591 status=ok
// SIG undefined FUN_142913c50(void)

void FUN_142913c50(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  undefined1 auStack_108 [44];
  int local_dc;
  undefined8 *local_d8;
  longlong local_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  longlong *local_a8;
  undefined4 local_a0;
  uint uStack_9c;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  uint uStack_7c;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  uint uStack_5c;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  uint uStack_3c;
  longlong local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_38 = param_1 + 0x98;
  local_40 = 0;
  uStack_3c = 1;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_d0 = param_1;
  local_c8 = param_2;
  if (*(int *)(param_1 + 0xb0) != 0) {
    FUN_1449c0562(&local_40);
  }
  local_a0 = local_40;
  uStack_9c = uStack_3c;
  local_58 = local_38;
  local_90 = local_30;
  iStack_8c = iStack_2c;
  local_88 = CONCAT44(uStack_24,local_28);
  local_78 = local_38;
  local_98 = local_38;
  local_a8 = (longlong *)(param_1 + 0x88);
  local_68 = local_88;
  local_48 = local_88;
  local_70 = local_90;
  iStack_6c = iStack_8c;
  local_50 = local_90;
  iStack_4c = iStack_8c;
  local_80 = local_a0;
  uStack_7c = uStack_9c;
  local_60 = local_a0;
  uStack_5c = uStack_9c;
  do {
    if (*(int *)(local_98 + 0x18) <= iStack_8c) {
      local_dc = 2;
LAB_142913e62:
      if (local_dc == 2) {
        local_dc = 0;
      }
      FUN_146b178f8(param_2);
      if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    (**(code **)(*(longlong *)*param_2 + 0x60))((longlong *)*param_2,local_b8);
    uVar1 = FUN_146b17b48(*local_a8 + (longlong)iStack_8c * 0x20 + 8,local_b8);
    if ((uVar1 & 1) != 0) {
      local_d8 = (undefined8 *)(*local_a8 + (longlong)iStack_8c * 0x20);
      local_c0 = *local_d8;
      FUN_146b19644(param_1 + 0x88,local_c0);
      local_dc = 1;
      goto LAB_142913e62;
    }
    local_90 = (uStack_9c ^ 0xffffffff) & local_90;
    FUN_1449c0562(&local_a0);
  } while( true );
}



// FUNCTION 142913ea0 FUN_142913ea0 body=162 status=ok
// SIG undefined FUN_142913ea0(void)

undefined8 FUN_142913ea0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_1;
  local_40 = param_3;
  local_38 = param_2;
  FUN_146b17280(local_20,param_1 + 0xd8);
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_142913f50(param_1,&local_30,local_40);
  FUN_146b1729c(local_20);
  FUN_146b178f8(param_2);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142913f50 FUN_142913f50 body=586 status=ok
// SIG undefined FUN_142913f50(void)

void FUN_142913f50(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 *local_90;
  longlong local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_40 [16];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = param_1;
  local_80 = param_3;
  local_78 = param_2;
  if (*param_2 != 0) {
    (**(code **)(*(longlong *)*param_2 + 0x18))((longlong *)*param_2,param_3);
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    FUN_142913c50(param_1,&local_30);
    FUN_146b17b70(param_1 + 0x28,param_2);
    (**(code **)(*(longlong *)*param_2 + 0x60))((longlong *)*param_2,local_40);
    uVar2 = FUN_1447addd0(local_40,0x10);
    iVar3 = FUN_146b18a6c((longlong *)(param_1 + 0x38),uVar2,local_40);
    lVar5 = 0;
    if (iVar3 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x38) + (longlong)iVar3 * 0x28;
    }
    local_98 = (longlong *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      local_98 = (longlong *)0x0;
    }
    if (local_98 != (longlong *)0x0) {
      local_90 = (undefined8 *)(*local_98 + (longlong)(int)local_98[1] * 0x10);
      local_a0 = local_98;
      for (local_a8 = (undefined8 *)*local_98; local_a8 != local_90; local_a8 = local_a8 + 2) {
        local_50 = *local_a8;
        local_48 = local_a8[1];
        if (local_48 != 0) {
          LOCK();
          *(int *)(local_48 + 0xc) = *(int *)(local_48 + 0xc) + 1;
          UNLOCK();
        }
        uVar4 = (**(code **)(*(longlong *)*param_2 + 0x38))();
        local_60 = 0;
        local_58 = local_48;
        if (local_48 != 0) {
          iVar3 = *(int *)(local_48 + 8);
          do {
            if (iVar3 == 0) {
              local_58 = 0;
              break;
            }
            LOCK();
            iVar1 = *(int *)(local_48 + 8);
            bVar6 = iVar3 == iVar1;
            if (bVar6) {
              *(int *)(local_48 + 8) = iVar3 + 1;
              iVar1 = iVar3;
            }
            iVar3 = iVar1;
            UNLOCK();
          } while (!bVar6);
        }
        if (local_58 != 0) {
          local_60 = local_50;
        }
        FUN_142913f50(param_1,&local_60,uVar4);
        FUN_146b17a62(&local_50);
      }
    }
    (**(code **)(*(longlong *)*param_2 + 0x60))((longlong *)*param_2,local_70);
    FUN_146b198cc(param_1 + 0x38,local_70);
  }
  FUN_146b178f8(param_2);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429141a0 FUN_1429141a0 body=50 status=ok
// SIG undefined FUN_1429141a0(void)

void FUN_1429141a0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x20);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1429141e0 FUN_1429141e0 body=280 status=ok
// SIG undefined FUN_1429141e0(void)

longlong * FUN_1429141e0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [39];
  byte local_41;
  int local_40;
  int local_3c;
  longlong local_38;
  longlong *local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_1;
  local_30 = param_2;
  local_20 = param_3;
  for (local_3c = 0; local_3c < *(int *)(param_1 + 0x30); local_3c = local_3c + 1) {
    local_41 = 0;
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)local_3c * 0x10);
    *param_2 = *plVar2;
    lVar1 = plVar2[1];
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    if (*param_2 == 0) {
LAB_14291428a:
      local_40 = 0;
    }
    else {
      plVar2 = (longlong *)(**(code **)(*(longlong *)*param_2 + 0x30))();
      local_28 = local_20;
      if (*plVar2 != local_20) goto LAB_14291428a;
      local_41 = 1;
      local_40 = 1;
    }
    if ((local_41 & 1) == 0) {
      FUN_146b178f8(param_2);
    }
    if (local_40 != 0) goto LAB_1429142bc;
  }
  local_40 = 2;
LAB_1429142bc:
  if (local_40 != 1) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142914300 FUN_142914300 body=134 status=ok
// SIG undefined FUN_142914300(void)

undefined8 FUN_142914300(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_1;
  local_38 = param_2;
  local_20 = param_3;
  FUN_146b17280(local_28,param_1 + 0xd8);
  local_30 = local_20;
  FUN_1429141e0(param_1,param_2,local_20);
  FUN_146b1729c(local_28);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142914388 FUN_142914388 body=112 status=ok
// SIG undefined FUN_142914388(void)

undefined8 * FUN_142914388(undefined8 *param_1)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = DAT_14c872cf0;
  _Src = DAT_14c872ce8;
  lVar2 = (longlong)DAT_14c872cf0;
  *(int *)(param_1 + 1) = DAT_14c872cf0;
  if (lVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,lVar2 * 2);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_14020fad6(param_1 + 2,L"Analytics");
  return param_1;
}



// FUNCTION 1429143f8 FUN_1429143f8 body=102 status=ok
// SIG undefined FUN_1429143f8(void)

void FUN_1429143f8(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x8000000149f273e8;
  local_14 = 9;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146283624(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142914460 FUN_142914460 body=102 status=ok
// SIG undefined FUN_142914460(void)

void FUN_142914460(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x8000000149f277ee;
  local_14 = 9;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146283744(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429144c8 FUN_1429144c8 body=91 status=ok
// SIG undefined FUN_1429144c8(void)

void FUN_1429144c8(void)

{
  if (DAT_14c990b18 != 0) {
    if (DAT_14c990b10 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c990b10)(DAT_14c990b10,0);
    FUN_1446efa72(&DAT_14c990b10,0,0,0x10);
    DAT_14c990b18 = 0;
  }
  if (DAT_14c990b10 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142914524 FUN_142914524 body=65 status=ok
// SIG undefined FUN_142914524(void)

void FUN_142914524(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_144b98550(param_2);
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar2 = 0;
    do {
      FUN_144bb4960(uVar1,*(undefined8 *)(*(longlong *)(param_1 + 8) + lVar2 * 8));
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 142914566 FUN_142914566 body=1708 status=ok
// SIG undefined FUN_142914566(void)

ulonglong FUN_142914566(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  void *_Dst;
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  undefined8 unaff_RSI;
  int iVar14;
  size_t sVar15;
  undefined1 auStack_b28 [40];
  undefined1 **local_b00;
  longlong *local_af8;
  undefined8 local_af0;
  undefined8 local_ae8;
  undefined1 local_ae0 [16];
  longlong local_ad0;
  longlong local_ac8;
  ulonglong uStack_ac0;
  longlong local_ab8;
  undefined8 uStack_ab0;
  longlong local_aa8;
  undefined8 uStack_aa0;
  undefined1 local_a90 [32];
  undefined1 *local_a70;
  int local_a68;
  undefined4 local_a64;
  undefined1 local_a60 [24];
  undefined1 *local_a48;
  undefined8 local_a40;
  longlong local_a38;
  undefined8 uStack_a30;
  longlong local_a28;
  undefined8 uStack_a20;
  undefined1 local_a18 [112];
  undefined1 local_9a8 [32];
  ulonglong local_988;
  undefined1 local_980 [256];
  undefined1 *local_880;
  undefined1 *local_878;
  int local_870;
  char local_868 [2056];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b28;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c990b24) && (FUN_144b3d300(&DAT_14c990b24), DAT_14c990b24 == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c990b20 = FUN_14054d46e(&DAT_14c846b20,L"DisableSSLCertificatePinning");
    _Init_thread_footer(&DAT_14c990b24);
  }
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (DAT_14c990b20 != '\0') goto LAB_142914b75;
  uVar5 = FUN_144bafb90(param_2);
  iVar3 = FUN_144babbf0(uVar5);
  if (iVar3 < 1) {
    uVar9 = 0;
    goto LAB_142914b75;
  }
  local_aa8 = 0;
  uStack_aa0 = 0;
  local_ab8 = 0;
  uStack_ab0 = 0;
  cVar2 = '\0';
  local_af8 = param_1;
  local_af0 = param_3;
  local_ae8 = param_2;
  if (DAT_14c990b10 != (longlong *)0x0 && DAT_14c990b18 != 0) {
    cVar2 = (**(code **)(*DAT_14c990b10 + 0x30))();
  }
  local_b00 = &local_880;
  iVar13 = 0;
  do {
    uVar6 = FUN_144babc00(uVar5,iVar13);
    uVar7 = FUN_144bb6070(uVar6);
    uVar4 = FUN_144bb64a0(uVar7,0);
    if (0 < (int)uVar4) {
      local_ac8 = 0;
      uStack_ac0 = (ulonglong)uVar4;
      FUN_1447403be(&local_ac8,0);
      local_ad0 = local_ac8;
      uVar7 = FUN_144bb6070(uVar6);
      FUN_144bb64a0(uVar7,&local_ad0);
      local_988 = 0x2000000020;
      FUN_144baee60(local_a18);
      FUN_144baeed0(local_a18,local_ac8,(longlong)(int)uStack_ac0);
      FUN_144baf000(local_9a8,local_a18);
      uVar9 = uStack_aa0;
      lVar11 = (longlong)(int)uStack_aa0;
      uVar4 = (int)uStack_aa0 + 1;
      uStack_aa0 = CONCAT44(uStack_aa0._4_4_,uVar4);
      if (uStack_aa0._4_4_ < uVar4) {
        FUN_14172385c(&local_aa8,uVar9 & 0xffffffff);
      }
      _Dst = (void *)(local_aa8 + lVar11 * 0x28);
      sVar15 = (size_t)(int)local_988;
      *(int *)((longlong)_Dst + 0x20) = (int)local_988;
      if (sVar15 == 0) {
        *(undefined4 *)((longlong)_Dst + 0x24) = 0x20;
      }
      else {
        FUN_142915928(_Dst);
        memcpy(_Dst,local_9a8,sVar15);
      }
      if (cVar2 != '\0') {
        local_a70 = (undefined1 *)0x0;
        local_a64 = 0x20;
        local_a48 = (undefined1 *)0x0;
        local_a40 = 0x1400000000;
        local_a28 = 0;
        uStack_a20 = 0;
        local_a38 = 0;
        uStack_a30 = 0;
        sVar15 = (size_t)(int)local_988;
        local_a68 = (int)local_988;
        FUN_146b1a9b2(local_a90,local_988 & 0xffffffff,0x20);
        if (sVar15 != 0) {
          puVar8 = local_a70;
          if (local_a70 == (undefined1 *)0x0) {
            puVar8 = local_a90;
          }
          memcpy(puVar8,local_9a8,sVar15);
        }
        uVar7 = FUN_144bb4f40(uVar6);
        FUN_144baf340(uVar7,local_868,0x800);
        local_880 = (undefined1 *)0x0;
        sVar15 = strlen(local_868);
        iVar14 = (int)sVar15;
        uVar4 = iVar14 + 1;
        local_870 = iVar14;
        if (uVar4 < 0x81) {
          puVar8 = (undefined1 *)0x0;
        }
        else {
          FUN_1446efa72(local_b00,0,uVar4,2);
          puVar8 = local_880;
        }
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = local_980;
        }
        local_878 = puVar8;
        if (-1 < iVar14) {
          uVar9 = 0;
          do {
            *(short *)(puVar8 + uVar9 * 2) = (short)local_868[uVar9];
            uVar9 = uVar9 + 1;
          } while (uVar4 != uVar9);
        }
        FUN_140056680(local_ae0,local_878);
        if (local_880 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (local_a38 != 0) {
          FUN_1400020a8();
        }
        uVar7 = FUN_144bb4f50(uVar6);
        FUN_144baf340(uVar7,local_868,0x800);
        local_880 = (undefined1 *)0x0;
        sVar15 = strlen(local_868);
        iVar14 = (int)sVar15;
        uVar4 = iVar14 + 1;
        local_870 = iVar14;
        if (uVar4 < 0x81) {
          puVar8 = (undefined1 *)0x0;
        }
        else {
          FUN_1446efa72(local_b00,0,uVar4,2);
          puVar8 = local_880;
        }
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = local_980;
        }
        local_878 = puVar8;
        if (-1 < iVar14) {
          uVar9 = 0;
          do {
            *(short *)(puVar8 + uVar9 * 2) = (short)local_868[uVar9];
            uVar9 = uVar9 + 1;
          } while (uVar4 != uVar9);
        }
        FUN_140056680(local_ae0,local_878);
        if (local_880 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (local_a28 != 0) {
          FUN_1400020a8();
        }
        lVar11 = FUN_144baab30(&DAT_149f278fa);
        uVar9 = local_a40;
        if (lVar11 != 0) {
          local_868[0] = '\0';
          local_868[1] = '\0';
          local_868[2] = '\0';
          local_868[3] = '\0';
          iVar14 = (int)local_a40;
          lVar12 = (longlong)(int)local_a40;
          local_a40 = CONCAT44(local_a40._4_4_,(int)local_a40 + 0x14);
          if ((uint)(local_a40._4_4_ - iVar14) < 0x14) {
            FUN_146b1aa10(local_a60,uVar9 & 0xffffffff);
          }
          puVar8 = local_a48;
          if (local_a48 == (undefined1 *)0x0) {
            puVar8 = local_a60;
          }
          *(undefined8 *)(puVar8 + lVar12) = 0;
          *(undefined8 *)((longlong)(puVar8 + lVar12) + 8) = 0;
          *(undefined4 *)(puVar8 + lVar12 + 0x10) = 0;
          puVar8 = local_a48;
          if (local_a48 == (undefined1 *)0x0) {
            puVar8 = local_a60;
          }
          FUN_144bb5900(uVar6,lVar11,puVar8,local_868);
        }
        uVar9 = uStack_ab0;
        lVar11 = (longlong)(int)uStack_ab0;
        uVar4 = (int)uStack_ab0 + 1;
        uStack_ab0 = CONCAT44(uStack_ab0._4_4_,uVar4);
        if (uStack_ab0._4_4_ < uVar4) {
          FUN_146b1ac44(&local_ab8,uVar9 & 0xffffffff);
        }
        FUN_146b1aaf4(lVar11 * 0x78 + local_ab8,local_a90);
        FUN_146b1a814(local_a90);
      }
      if (local_ac8 != 0) {
        FUN_1400020a8();
      }
    }
    uVar7 = local_ae8;
    uVar6 = local_af0;
    plVar1 = local_af8;
    iVar13 = iVar13 + 1;
  } while (iVar13 != iVar3);
  if ((DAT_14c990b10 == (longlong *)0x0 || DAT_14c990b18 == 0) ||
     (cVar2 = (**(code **)(*DAT_14c990b10 + 0x30))(), cVar2 == '\0')) {
LAB_142914b1c:
    cVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,&local_aa8,uVar6);
    uVar9 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    if (cVar2 == '\0') goto LAB_142914b37;
  }
  else {
    plVar10 = DAT_14c990b10;
    if (DAT_14c990b18 == 0) {
      plVar10 = (longlong *)0x0;
    }
    cVar2 = (**(code **)(*plVar10 + 0x58))(plVar10,uVar6,&local_ab8);
    if (cVar2 != '\0') goto LAB_142914b1c;
LAB_142914b37:
    FUN_144bafb60(uVar7,0x1b);
    uVar9 = 0;
  }
  FUN_142915930(local_ab8,uStack_ab0 & 0xffffffff);
  if (local_ab8 != 0) {
    FUN_1400020a8();
  }
  if (local_aa8 != 0) {
    FUN_1400020a8();
  }
LAB_142914b75:
  if ((local_60 ^ (ulonglong)auStack_b28) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 142914c14 FUN_142914c14 body=505 status=ok
// SIG undefined FUN_142914c14(void)

undefined8 FUN_142914c14(longlong param_1,longlong *param_2,longlong *param_3)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  ushort uVar6;
  short *psVar7;
  ulonglong uVar8;
  longlong *plVar9;
  void *_Buf1;
  longlong lVar10;
  void *_Buf2;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c990b2c) && (FUN_144b3d300(&DAT_14c990b2c), DAT_14c990b2c == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32);
    }
    DAT_14c990b28 = FUN_14054d46e(&DAT_14c846b20,L"DisableSSLCertificatePinning");
    _Init_thread_footer(&DAT_14c990b2c);
  }
  if ((DAT_14c990b28 != '\0') || ((longlong)*(int *)(param_1 + 0x20) == 0)) {
    return 1;
  }
  plVar9 = *(longlong **)(param_1 + 0x18);
  plVar14 = plVar9 + (longlong)*(int *)(param_1 + 0x20) * 4;
LAB_142914c88:
  psVar7 = (short *)*plVar9;
  if (*psVar7 == 0x2e) {
    iVar2 = (int)plVar9[1] + -1;
    if ((int)plVar9[1] == 0) {
      psVar7 = &DAT_149dfb77a;
      iVar2 = 0;
    }
    cVar4 = FUN_144a38768(param_3,psVar7,iVar2,1);
    if (cVar4 != '\0') goto LAB_142914d3b;
  }
  iVar2 = (int)param_3[1];
  if (iVar2 == (int)plVar9[1]) {
    if (1 < iVar2) {
      lVar11 = 0;
      do {
        uVar6 = *(ushort *)(*param_3 + lVar11);
        uVar8 = (ulonglong)uVar6;
        uVar12 = *(ushort *)(*plVar9 + lVar11);
        if (uVar6 == uVar12) {
          if (uVar6 == 0) break;
        }
        else {
          if (0x7f < (uVar12 | uVar6)) goto LAB_142914d0b;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar13 = (ulonglong)uVar12;
          uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
          if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar13]) goto LAB_142914d0b;
        }
        lVar11 = lVar11 + 2;
      } while( true );
    }
    goto LAB_142914d3b;
  }
  if ((int)plVar9[1] + iVar2 == 1) goto LAB_142914d3b;
  goto LAB_142914d1b;
LAB_142914d0b:
  if (uVar6 == uVar12) {
LAB_142914d3b:
    if ((longlong)(int)param_2[1] == 0) {
      return 0;
    }
    _Buf2 = (void *)*param_2;
    pvVar1 = (void *)((longlong)_Buf2 + (longlong)(int)param_2[1] * 0x28);
    pvVar3 = (void *)plVar9[2];
    lVar11 = plVar9[3];
    do {
      if ((int)lVar11 != 0) {
        iVar2 = *(int *)((longlong)_Buf2 + 0x20);
        _Buf1 = pvVar3;
        lVar10 = (longlong)(int)lVar11 * 0x28;
        do {
          if (*(int *)((longlong)_Buf1 + 0x20) == iVar2) {
            if (iVar2 == 0) {
              return 1;
            }
            iVar5 = memcmp(_Buf1,_Buf2,(longlong)iVar2);
            if (iVar5 == 0) {
              return 1;
            }
          }
          _Buf1 = (void *)((longlong)_Buf1 + 0x28);
          lVar10 = lVar10 + -0x28;
        } while (lVar10 != 0);
      }
      _Buf2 = (void *)((longlong)_Buf2 + 0x28);
      if (_Buf2 == pvVar1) {
        return 0;
      }
    } while( true );
  }
LAB_142914d1b:
  plVar9 = plVar9 + 4;
  if (plVar9 == plVar14) {
    return 1;
  }
  goto LAB_142914c88;
}



// FUNCTION 142914e0e FUN_142914e0e body=1583 status=ok
// SIG undefined FUN_142914e0e(void)

void FUN_142914e0e(undefined8 param_1)

{
  int iVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  char *_Str;
  char *_Str_00;
  char *_Str_01;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  undefined2 *puVar12;
  longlong lVar13;
  int iVar14;
  undefined1 local_1d8 [32];
  undefined8 *local_1b8;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  undefined8 local_190;
  undefined1 local_188 [16];
  void *local_178;
  uint local_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  longlong local_148;
  int local_140;
  int local_13c;
  longlong local_138;
  int local_130;
  int local_12c;
  longlong local_58;
  undefined1 *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)local_1d8;
  local_168 = ZEXT816(0);
  local_50 = local_158;
  local_58 = 0;
  local_48 = 7;
  local_158 = pmovsxbw(local_168,(char  [8])0x73776f646e6957);
  FUN_140002266(&local_178,L"Certificates/%s/cacert.pem",local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1410f2562();
  pvVar2 = local_178;
  auVar3 = local_188;
  uVar4 = local_188._8_4_;
  if ((int)local_188._8_4_ < 2) {
    auVar3._4_4_ = local_158._12_4_;
    auVar3._0_4_ = local_170;
    auVar3._8_8_ = 0;
    local_158 = auVar3 << 0x40;
    if ((longlong)(int)local_170 == 0) {
      local_158 = ZEXT416(local_170) << 0x40;
    }
    else {
      FUN_1446dd670(local_158,local_170,0);
      memcpy((void *)local_158._0_8_,pvVar2,(longlong)(int)local_170 * 2);
    }
  }
  else {
    iVar14 = local_170 - 1;
    if (local_170 == 0) {
      iVar14 = 0;
    }
    uVar5 = local_188._12_4_;
    local_188 = (undefined1  [16])0x0;
    local_158 = auVar3;
    iVar1 = iVar14 + uVar4;
    if (iVar1 < (int)uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar14);
    }
    if ((int)uVar5 < iVar1) {
      FUN_1446f8c06(local_158);
    }
    FUN_1400020e8(local_158,local_178,iVar14);
  }
  FUN_1410f2562(&local_198);
  iVar14 = (int)local_190;
  iVar7 = ((int)local_190 == 0) + 0x17;
  local_148 = local_198;
  local_198 = 0;
  local_140 = (int)local_190;
  iVar1 = local_190._4_4_;
  local_13c = local_190._4_4_;
  local_190 = 0;
  iVar11 = iVar7 + iVar14;
  if (iVar11 < iVar14) {
LAB_1429153cb:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  if (iVar11 < 0) {
LAB_1429153d2:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  if (iVar1 < iVar11) {
    FUN_1446f8c06(&local_148);
  }
  FUN_1400020e8(&local_148,L"Certificates/cacert.pem",0x17);
  FUN_1414927bc(&local_1a8);
  iVar14 = (int)local_1a0;
  iVar7 = ((int)local_1a0 == 0) + 0x22;
  local_138 = local_1a8;
  local_1a8 = 0;
  local_130 = (int)local_1a0;
  iVar1 = local_1a0._4_4_;
  local_12c = local_1a0._4_4_;
  local_1a0 = 0;
  iVar11 = iVar7 + iVar14;
  if (iVar11 < iVar14) goto LAB_1429153cb;
  if (iVar11 < 0) goto LAB_1429153d2;
  if (iVar1 < iVar11) {
    FUN_1446f8c06(&local_138);
  }
  FUN_1400020e8(&local_138,L"Certificates/ThirdParty/cacert.pem",0x22);
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  if (local_188._0_8_ != 0) {
    FUN_1400020a8();
  }
  lVar13 = 0;
  do {
    plVar8 = (longlong *)FUN_14054d1d4();
    puVar12 = &DAT_149dfb77a;
    if (*(int *)(local_158 + lVar13 + 8) != 0) {
      puVar12 = *(undefined2 **)(local_158 + lVar13);
    }
    cVar6 = (**(code **)(*plVar8 + 0x48))(plVar8,puVar12);
    if (cVar6 != '\0') {
      if (local_158 + lVar13 != local_168) {
        iVar14 = *(int *)(local_158 + lVar13 + 8);
        pvVar2 = *(void **)(local_158 + lVar13);
        local_168._8_4_ = iVar14;
        if ((longlong)iVar14 == 0) {
          local_168._12_4_ = 0;
        }
        else {
          FUN_1446dd670(local_168,iVar14,0);
          memcpy((void *)local_168._0_8_,pvVar2,(longlong)iVar14 * 2);
        }
      }
      break;
    }
    lVar13 = lVar13 + 0x10;
  } while (lVar13 != 0x30);
  lVar13 = 0x30;
  do {
    if (*(longlong *)(local_168 + lVar13) != 0) {
      FUN_1400020a8();
    }
    lVar13 = lVar13 + -0x10;
  } while (lVar13 != 0);
  if (local_178 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((int)local_168._8_4_ < 2) goto LAB_142915233;
  plVar8 = (longlong *)FUN_14054d1d4();
  if (local_168._8_4_ == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  else {
    puVar12 = (undefined2 *)local_168._0_8_;
  }
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x18))(plVar8,puVar12,0);
  if (plVar8 == (longlong *)0x0) goto LAB_142915233;
  lVar13 = (**(code **)(*plVar8 + 0x30))(plVar8);
  _Str = (char *)FUN_14001cc68(lVar13 + 1 + (ulonglong)(lVar13 == -1),0x10);
  (**(code **)(*plVar8 + 0x170))(plVar8,_Str,lVar13);
  _Str[lVar13] = '\0';
  (**(code **)*plVar8)(plVar8,1);
  if (_Str == (char *)0x0 || lVar13 < 1) {
LAB_142915226:
    if (_Str == (char *)0x0) goto LAB_142915233;
  }
  else {
    _Str_00 = strstr(_Str,"-----BEGIN CERTIFICATE-----");
    if (_Str_00 != (char *)0x0) {
      do {
        _Str_01 = strstr(_Str_00,"-----END CERTIFICATE-----");
        if (_Str_01 != (char *)0x0) {
          uVar9 = FUN_144b9ff70(_Str_00,((int)_Str_01 - (int)_Str_00) + 0x1a);
          lVar13 = FUN_144bac680(uVar9,0,0,0);
          if (lVar13 != 0) {
            FUN_14291543e(param_1,lVar13);
          }
          FUN_144b9e7b0(uVar9);
        }
        _Str_00 = strstr(_Str_01,"-----BEGIN CERTIFICATE-----");
      } while (_Str_00 != (char *)0x0);
      goto LAB_142915226;
    }
  }
  FUN_1400020a8(_Str);
LAB_142915233:
  local_158 = (undefined1  [16])0x0;
  local_1b8 = &DAT_14c872ce8;
  cVar6 = FUN_1449da20c(DAT_14c872ce0,&DAT_149f279de,L"DebuggingCertificatePath");
  if ((cVar6 != '\0') && (local_158._8_4_ - 2 < 0x7fffffff)) {
    plVar8 = (longlong *)FUN_14054d1d4();
    if (local_158._8_4_ == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)local_158._0_8_;
    }
    cVar6 = (**(code **)(*plVar8 + 0x48))(plVar8,puVar12);
    if (cVar6 != '\0') {
      plVar8 = (longlong *)FUN_14054d1d4();
      if (local_158._8_4_ == 0) {
        puVar12 = &DAT_149dfb77a;
      }
      else {
        puVar12 = (undefined2 *)local_158._0_8_;
      }
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x18))(plVar8,puVar12,0);
      lVar13 = (**(code **)(*plVar8 + 0x30))(plVar8);
      lVar10 = FUN_14001cc68(lVar13 + 1 + (ulonglong)(lVar13 == -1),0x10);
      (**(code **)(*plVar8 + 0x170))(plVar8,lVar10,lVar13);
      *(undefined1 *)(lVar10 + lVar13) = 0;
      uVar9 = FUN_144b9ff70(lVar10,0xffffffff);
      lVar13 = FUN_144bac680(uVar9,0,0,0);
      if (lVar13 != 0) {
        FUN_14291543e(param_1,lVar13);
      }
      FUN_144b9e7b0(uVar9);
      if (lVar10 != 0) {
        FUN_1400020a8(lVar10);
      }
      if (plVar8 != (longlong *)0x0) {
        (**(code **)*plVar8)(plVar8,1);
      }
    }
  }
  if (local_158._0_8_ != 0) {
    FUN_1400020a8();
  }
  if (local_168._0_8_ != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)local_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14291543e FUN_14291543e body=261 status=ok
// SIG undefined FUN_14291543e(void)

void FUN_14291543e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = '\x01';
  local_38 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,&DAT_149f279de,L"bValidateRootCertificates",&local_29);
  if (local_29 == '\x01') {
    uVar2 = FUN_144bb6020(param_2);
    uVar3 = FUN_144bb6040(param_2);
    iVar1 = FUN_144bafe90(uVar3);
    if ((iVar1 < 0) || (iVar1 = FUN_144bafe90(uVar2), 0 < iVar1)) {
LAB_1429154ee:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    puVar5 = *(undefined8 **)(param_1 + 8);
    lVar4 = (longlong)*(int *)(param_1 + 0x10) << 3;
    do {
      iVar1 = FUN_144bb53e0(*puVar5,param_2);
      if (iVar1 == 0) {
        if (puVar5 != (undefined8 *)0x0) goto LAB_1429154ee;
        break;
      }
      puVar5 = puVar5 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_146283948((longlong *)(param_1 + 8),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) = param_2;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142915556 FUN_142915556 body=77 status=ok
// SIG undefined FUN_142915556(void)

undefined8 FUN_142915556(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar1 + 1;
  if (iVar1 == 0) {
    FUN_144babbc0();
    FUN_144ba1a00(0,0,0x30);
    FUN_144b973d0(0x200002,0);
    FUN_144b973d0(0,0);
    FUN_144bab1c0(0xc,0);
  }
  return 1;
}



// FUNCTION 1429155a8 FUN_1429155a8 body=207 status=ok
// SIG undefined FUN_1429155a8(void)

longlong FUN_1429155a8(longlong param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (((*(int *)(param_1 + 8) < 1) || (lVar5 = FUN_144b9e530(), lVar5 == 0)) ||
     (lVar5 = FUN_144b97f50(lVar5), lVar5 == 0)) {
    return 0;
  }
  bVar1 = *param_2;
  bVar2 = param_2[1];
  uVar3 = (uint)(bVar2 == 0 || 1 < bVar1) * 0x2000000;
  uVar4 = uVar3 + 0x4000000;
  if (bVar2 < 2) {
    uVar3 = uVar4;
  }
  if (2 < bVar1) {
    uVar3 = uVar4;
  }
  uVar4 = uVar3;
  if (bVar2 < 3) {
    uVar4 = uVar3 | 0x10000000;
  }
  if (3 < bVar1) {
    uVar4 = uVar3 | 0x10000000;
  }
  uVar3 = uVar4;
  if (bVar2 < 4) {
    uVar3 = uVar4 | 0x8000000;
  }
  if (4 < bVar1) {
    uVar3 = uVar4 | 0x8000000;
  }
  FUN_144b979e0(lVar5,(param_2[2] ^ 1) << 0x11 | uVar3);
  if (param_2[3] != 1) {
    return lVar5;
  }
  lVar6 = FUN_14158df5e();
  (**(code **)(**(longlong **)(lVar6 + 8) + 8))(*(longlong **)(lVar6 + 8),lVar5);
  return lVar5;
}



// FUNCTION 142915678 FUN_142915678 body=378 status=ok
// SIG undefined FUN_142915678(void)

void FUN_142915678(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  DAT_14c990b38 = param_1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = &PTR_FUN_149f27a60;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  *puVar2 = &PTR_FUN_149f27b50;
  *(undefined8 **)(param_1 + 8) = puVar2;
  FUN_1429157f4(puVar2);
  local_58 = 0;
  uStack_50 = 0;
  local_78 = &DAT_14c872ce8;
  iVar1 = FUN_14105aa76(DAT_14c872ce0,&DAT_149f279de,L"PinnedPublicKeys",&local_58);
  uVar3 = uStack_50 & 0xffffffff;
  if (iVar1 != 0) {
    if ((int)uStack_50 == 0) {
      uVar3 = 0;
    }
    else {
      lVar5 = (longlong)(int)uStack_50 << 4;
      lVar4 = local_58;
      do {
        local_68 = 0;
        uStack_60 = 0;
        FUN_1403de9f2(lVar4,&local_68,&DAT_149e31048,1);
        if ((int)uStack_60 == 2) {
          (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                    (*(longlong **)(param_1 + 8),local_68,local_68 + 0x10);
        }
        FUN_1447a1747(local_68,(int)uStack_60);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        lVar4 = lVar4 + 0x10;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
      uVar3 = uStack_50 & 0xffffffff;
    }
  }
  FUN_1447a1747(local_58,uVar3);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429157f4 FUN_1429157f4 body=307 status=ok
// SIG undefined FUN_1429157f4(void)

void FUN_1429157f4(undefined8 param_1)

{
  HCERTSTORE hCertStore;
  PCCERT_CONTEXT pCertContext;
  longlong lVar1;
  undefined1 auStackY_178 [32];
  WCHAR local_138 [128];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStackY_178;
  FUN_142914e0e();
  FUN_14052bb08(DAT_14c872ce0,&DAT_149f279de,L"bUsePlatformProvidedCertificates");
  hCertStore = CertOpenSystemStoreW(0,L"ROOT");
  if (hCertStore != (HCERTSTORE)0x0) {
    pCertContext = CertEnumCertificatesInStore(hCertStore,(PCCERT_CONTEXT)0x0);
    if (pCertContext != (PCCERT_CONTEXT)0x0) {
      do {
        if (((pCertContext->dwCertEncodingType & 1) == 0) ||
           (lVar1 = FUN_144bb5d50(0,&pCertContext->pbCertEncoded,pCertContext->cbCertEncoded),
           lVar1 == 0)) {
          CertGetNameStringW(pCertContext,4,0,(void *)0x0,local_138,0x80);
        }
        else {
          FUN_14291543e(param_1,lVar1);
        }
        pCertContext = CertEnumCertificatesInStore(hCertStore,pCertContext);
      } while (pCertContext != (PCCERT_CONTEXT)0x0);
    }
    CertCloseStore(hCertStore,0);
  }
  if ((local_38 ^ (ulonglong)auStackY_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142915928 FUN_142915928 body=8 status=ok
// SIG undefined FUN_142915928(void)

void FUN_142915928(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0x20;
  return;
}



// FUNCTION 142915930 FUN_142915930 body=40 status=ok
// SIG undefined FUN_142915930(void)

void FUN_142915930(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_146b1a814(param_1);
    param_1 = param_1 + 0x78;
  }
  return;
}



// FUNCTION 142915958 FUN_142915958 body=135 status=ok
// SIG undefined FUN_142915958(void)

void FUN_142915958(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  DAT_14c990b10 = 0;
  DAT_14c990b18 = 0;
  atexit(FUN_1429144c8);
  local_28 = 0x8000000149f279de;
  local_14 = 3;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146283864(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429159e0 FUN_1429159e0 body=69 status=ok
// SIG undefined FUN_1429159e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429159e0(void)

{
  _DAT_14c990b48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142915a22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c990b50,1);
  return;
}



// FUNCTION 142915a25 FUN_142915a25 body=69 status=ok
// SIG undefined FUN_142915a25(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142915a25(void)

{
  _DAT_14c990b60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142915a67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c990b68,1);
  return;
}



// FUNCTION 142915a6a FUN_142915a6a body=69 status=ok
// SIG undefined FUN_142915a6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142915a6a(void)

{
  _DAT_14c990b78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142915aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c990b80,1);
  return;
}



// FUNCTION 142915ab0 FUN_142915ab0 body=366 status=ok
// SIG undefined FUN_142915ab0(void)

undefined8
FUN_142915ab0(undefined8 param_1,undefined4 param_2,void *param_3,ulonglong param_4,longlong param_5
             )

{
  longlong lVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  switch(param_2) {
  case 0:
    uVar5 = 0x3ff;
    if (param_4 < 0x3ff) {
      uVar5 = param_4;
    }
    pvVar3 = memchr(param_3,0,uVar5);
    uVar5 = uVar5 & 0xffffffff;
    if (pvVar3 != (void *)0x0) {
      uVar5 = (ulonglong)(uint)((int)pvVar3 - (int)param_3);
    }
    FUN_1405b4428(&local_38,uVar5,param_3);
    FUN_1448097c4(&local_38,&DAT_149e01f72,&DAT_149dfb77a,0);
    FUN_1448097c4(&local_38,&DAT_149e01ea8,&DAT_149dfb77a,0);
    EnterCriticalSection((LPCRITICAL_SECTION)(param_5 + 0x360));
    iVar4 = *(int *)(param_5 + 0x6a8);
    if (0 < iVar4) {
      iVar2 = *(int *)(param_5 + 0x358);
      lVar1 = param_5 + (longlong)iVar2 * 0x10;
      plVar6 = (longlong *)(lVar1 + 0x388);
      if (plVar6 != &local_38) {
        if (*plVar6 != 0) {
          FUN_1400020a8();
        }
        *plVar6 = local_38;
        local_38 = 0;
        *(undefined4 *)(lVar1 + 0x390) = (undefined4)local_30;
        *(undefined4 *)(lVar1 + 0x394) = local_30._4_4_;
        local_30 = 0;
        iVar2 = *(int *)(param_5 + 0x358);
        iVar4 = *(int *)(param_5 + 0x6a8);
      }
      *(int *)(param_5 + 0x358) = (iVar2 + 1) % iVar4;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_5 + 0x360));
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    FUN_140c72de2(param_5);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 142915c1f FUN_142915c1f body=86 status=ok
// SIG undefined FUN_142915c1f(void)

undefined8 FUN_142915c1f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_14158df5e();
  (**(code **)(**(longlong **)(lVar2 + 8) + 8))(*(longlong **)(lVar2 + 8),param_2);
  if (DAT_14c990b90 == '\x01') {
    uVar1 = FUN_144b98cd0(param_2);
    FUN_144b98ce0(param_2,uVar1,FUN_14291db3a);
    FUN_144b9aae0(param_2,0,param_3);
  }
  return 0;
}



// FUNCTION 142915c86 FUN_142915c86 body=156 status=ok
// SIG undefined FUN_142915c86(void)

void FUN_142915c86(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x130) != 1) {
    FUN_1400d3e84(param_2,&local_28);
    if ((longlong *)(param_1 + 0x298) == &local_28) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x298) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x298) = local_28;
      *(undefined4 *)(param_1 + 0x2a0) = local_20;
      *(undefined4 *)(param_1 + 0x2a4) = local_1c;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142915d24 FUN_142915d24 body=111 status=ok
// SIG undefined FUN_142915d24(void)

void FUN_142915d24(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  if ((*(int *)(param_1 + 0x130) != 1) &&
     (puVar1 = (undefined8 *)(param_1 + 0x288), puVar1 != param_2)) {
    iVar2 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 0x290) = iVar2;
    if (iVar2 == 0 && *(int *)(param_1 + 0x294) == 0) {
      *(undefined4 *)(param_1 + 0x294) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142915d94 FUN_142915d94 body=97 status=ok
// SIG undefined FUN_142915d94(void)

void FUN_142915d94(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x130) != 1) {
    local_20 = &local_28;
    local_28 = param_2;
    local_18 = param_3;
    FUN_146b21a24(param_1 + 0x220,local_c,&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142915df6 FUN_142915df6 body=117 status=ok
// SIG undefined FUN_142915df6(void)

void FUN_142915df6(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0x130) != 1) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar2 = &PTR_FUN_149f28db0;
    puVar2[1] = *param_2;
    *param_2 = 0;
    *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)puVar2 + 0x14) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x218);
    *(undefined8 **)(param_1 + 0x218) = puVar2;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined1 *)(param_1 + 0x2b4) = 1;
  }
  return;
}



// FUNCTION 142915e6c FUN_142915e6c body=293 status=ok
// SIG undefined FUN_142915e6c(void)

void FUN_142915e6c(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x130) != 1) {
    iVar1 = *(int *)(param_2 + 1);
    iVar8 = 0;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = iVar8;
    }
    puVar6 = &DAT_149dfb77a;
    puVar5 = &DAT_149dfb77a;
    if (iVar1 != 0) {
      puVar5 = (undefined2 *)*param_2;
    }
    uVar3 = FUN_14475aa65(0,puVar5,iVar7);
    local_38 = 0;
    uStack_30 = 0;
    FUN_140393c76(&local_38,uVar3,1);
    if (*(int *)(param_2 + 1) != 0) {
      puVar6 = (undefined2 *)*param_2;
      iVar8 = *(int *)(param_2 + 1) + -1;
    }
    FUN_14475a98a(local_38,uStack_30 & 0xffffffff,puVar6,iVar8);
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar4 = &PTR_FUN_149f28db0;
    puVar4[1] = local_38;
    local_38 = 0;
    *(undefined4 *)(puVar4 + 2) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_30._4_4_;
    uStack_30 = 0;
    puVar2 = *(undefined8 **)(param_1 + 0x218);
    *(undefined8 **)(param_1 + 0x218) = puVar4;
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined1 *)(param_1 + 0x2b4) = 1;
    }
    else {
      (**(code **)*puVar2)(puVar2,1);
      *(undefined1 *)(param_1 + 0x2b4) = 1;
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142915f92 FUN_142915f92 body=277 status=ok
// SIG undefined FUN_142915f92(void)

bool FUN_142915f92(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x130);
  if (iVar1 != 1) {
    if (*(int *)(param_2 + 1) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    puVar3 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    FUN_140056680(&local_48,puVar4);
    _Src = local_48;
    *puVar3 = &PTR_FUN_149f28d70;
    puVar3[1] = 0;
    *(int *)(puVar3 + 2) = local_40;
    if ((longlong)local_40 == 0) {
      *(undefined4 *)((longlong)puVar3 + 0x14) = 0;
    }
    else {
      FUN_1446dd670(puVar3 + 1,local_40,0);
      memcpy((void *)puVar3[1],_Src,(longlong)local_40 * 2);
    }
    puVar3[3] = 0;
    puVar3[4] = 0;
    *(undefined1 *)(puVar3 + 5) = 0;
    if (local_48 != (void *)0x0) {
      FUN_1400020a8(local_48);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x218);
    *(undefined8 **)(param_1 + 0x218) = puVar3;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar1 != 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429160a8 FUN_1429160a8 body=213 status=ok
// SIG undefined FUN_1429160a8(void)

bool FUN_1429160a8(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = *(int *)(param_1 + 0x130);
  if (iVar3 != 1) {
    uVar6 = FUN_14001cc68(0x30,0x10);
    local_38 = *param_2;
    local_30 = param_2[1];
    if (local_30 != 0) {
      LOCK();
      *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
      UNLOCK();
    }
    FUN_146b1cdee(uVar6,&local_38);
    puVar5 = *(undefined8 **)(param_1 + 0x218);
    *(undefined8 *)(param_1 + 0x218) = uVar6;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)*puVar5)(puVar5,1);
    }
    *(undefined1 *)(param_1 + 0x2b4) = 0;
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar3 != 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14291617e FUN_14291617e body=90 status=ok
// SIG undefined FUN_14291617e(void)

void FUN_14291617e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0x130) != 1) {
    local_20 = param_2;
    local_18 = param_3;
    FUN_140ac5c08(param_1 + 0x2b8,local_c,&local_20,0);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429161da FUN_1429161da body=437 status=ok
// SIG undefined FUN_1429161da(void)

void FUN_1429161da(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  ushort uVar1;
  void *_Src;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((int)param_1[0x26] == 1) || ((int)param_2[1] < 2)) || (*(int *)(param_3 + 1) < 2))
  goto LAB_142916369;
  lVar5 = 0;
  uVar3 = 0;
  do {
    uVar1 = *(ushort *)(*param_2 + lVar5 * 2);
    uVar4 = ((uint)(0x19 < uVar1 - 0x61) * 0x20 + (uint)uVar1) - 0x20;
    uVar6 = (uint)(uVar3 >> 8) ^
            *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar3 ^ uVar4) & 0xff) * 4);
    uVar3 = (ulonglong)
            (uVar6 >> 8 ^
            *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar6 & 0xff ^ uVar4 >> 8 & 0xff) * 4));
    lVar5 = lVar5 + 1;
  } while ((int)param_2[1] + -1 != (int)lVar5);
  iVar2 = FUN_1457511aa(param_1 + 0x57,uVar3,param_2);
  if (iVar2 == -1) {
    uVar7 = 0;
    uVar8 = 0;
    uVar4 = 0;
    uStack_5c = 0;
LAB_142916326:
    local_58 = CONCAT44(uVar8,uVar7);
    uStack_50 = CONCAT44(uStack_5c,uVar4);
  }
  else {
    lVar5 = param_1[0x57] + (longlong)iVar2 * 0x28;
    local_58 = 0;
    uStack_50 = 0;
    if ((undefined8 *)(lVar5 + 0x10) != (undefined8 *)0x0 && lVar5 != 0) {
      uVar4 = *(uint *)(lVar5 + 0x18);
      if (1 < (int)uVar4) {
        local_68 = (void *)0x0;
        _Src = *(void **)(lVar5 + 0x10);
        uStack_60 = uVar4;
        FUN_1446dd670(&local_68,uVar4 + 2,0);
        memcpy(local_68,_Src,(ulonglong)uVar4 * 2);
        FUN_1400020e8(&local_68,&DAT_149e19f34,2);
        uVar7 = (undefined4)local_68;
        uVar8 = local_68._4_4_;
        uVar4 = uStack_60;
        goto LAB_142916326;
      }
    }
  }
  iVar2 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar2 = 0;
  }
  FUN_1400020e8(&local_58,*param_3,iVar2);
  (**(code **)(*param_1 + 0xb0))(param_1,param_2,&local_58);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_142916369:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142916390 FUN_142916390 body=85 status=ok
// SIG undefined FUN_142916390(void)

void FUN_142916390(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  
  FUN_140c72de2(param_4);
  lVar1 = (**(code **)(**(longlong **)(param_4 + 0x218) + 0x28))
                    (*(longlong **)(param_4 + 0x218),param_1,param_3 * param_2,
                     *(undefined8 *)(param_4 + 0x330));
  LOCK();
  *(longlong *)(param_4 + 0x330) = *(longlong *)(param_4 + 0x330) + lVar1;
  UNLOCK();
  LOCK();
  *(longlong *)(param_4 + 0x338) = *(longlong *)(param_4 + 0x338) + lVar1;
  UNLOCK();
  return;
}



// FUNCTION 142916412 FUN_142916412 body=2607 status=ok
// SIG undefined FUN_142916412(void)

ulonglong FUN_142916412(void *param_1,int param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  undefined2 ***pppuVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  void *_Src;
  ulonglong *puVar5;
  undefined2 **ppuVar6;
  undefined8 uVar7;
  char *pcVar8;
  char cVar9;
  int iVar10;
  size_t sVar11;
  undefined2 *puVar12;
  LPCRITICAL_SECTION p_Var13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  wchar_t *pwVar17;
  ulonglong *puVar18;
  int iVar19;
  undefined2 ***pppuVar20;
  uint uVar21;
  ulonglong _Size;
  undefined ***pppuVar22;
  longlong lVar23;
  ushort uVar24;
  ushort uVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong *plVar28;
  bool bVar29;
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 local_1f0;
  ulonglong local_1e8;
  undefined8 uStack_1e0;
  int iStack_1dc;
  wchar_t *local_1d8;
  undefined8 uStack_1d0;
  undefined2 *local_1c8;
  undefined8 uStack_1c0;
  undefined2 **local_1b8;
  ulonglong *puStack_1b0;
  char *local_1a8;
  ulonglong uStack_1a0;
  undefined1 local_18c [4];
  undefined2 **local_188;
  ulonglong *puStack_180;
  undefined ***local_178;
  undefined **local_168;
  longlong local_160;
  ulonglong *puStack_158;
  int local_150;
  code **local_88;
  code **local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_141107776(param_4);
  FUN_140c72de2(param_4);
  uVar21 = param_2 * param_3;
  if (0x18fff < uVar21 - 1) {
    _Size = 0;
    goto LAB_142916b4c;
  }
  local_1a8 = (char *)0x0;
  uStack_1a0 = (ulonglong)(uVar21 + 1);
  FUN_144761492(&local_1a8,0);
  _Size = (ulonglong)uVar21;
  memcpy(local_1a8,param_1,_Size);
  pcVar8 = local_1a8;
  local_1a8[_Size] = '\0';
  local_88 = (code **)0x0;
  if (local_1a8 == (char *)0x0) {
    local_80 = (code **)0x0;
    local_78 = 0;
  }
  else {
    sVar11 = strlen(local_1a8);
    iVar14 = (int)sVar11;
    uVar21 = iVar14 + 1;
    local_78 = iVar14;
    if (uVar21 < 0x81) {
      pppuVar20 = (undefined2 ***)0x0;
    }
    else {
      FUN_1446efa72(&local_88,0,uVar21,2);
      pppuVar20 = (undefined2 ***)local_88;
    }
    if (pppuVar20 == (undefined2 ***)0x0) {
      pppuVar20 = &local_188;
    }
    local_80 = (code **)pppuVar20;
    if (-1 < iVar14) {
      uVar15 = 0;
      do {
        *(short *)((longlong)pppuVar20 + uVar15 * 2) = (short)pcVar8[uVar15];
        uVar15 = uVar15 + 1;
      } while (uVar21 != uVar15);
    }
  }
  FUN_140056680(&local_1b8,local_80);
  if ((undefined2 ***)local_88 != (undefined2 ***)0x0) {
    FUN_1400020a8();
  }
  local_1f8 = 1;
  FUN_140807d8e(&local_1b8,&local_188,&DAT_149e01f72,&DAT_149dfb77a);
  if (local_1b8 != (undefined2 **)0x0) {
    FUN_1400020a8();
  }
  local_1b8 = local_188;
  local_1f8 = 1;
  FUN_140807d8e(&local_1b8,&local_188,&DAT_149e01ea8,&DAT_149dfb77a);
  if (local_1b8 != (undefined2 **)0x0) {
    FUN_1400020a8();
  }
  local_1b8 = local_188;
  puStack_1b0 = puStack_180;
  local_1c8 = (undefined2 *)0x0;
  uStack_1c0 = 0;
  local_1d8 = (wchar_t *)0x0;
  uStack_1d0 = 0;
  FUN_140056680(&local_188,&DAT_149e31048);
  local_1f0 = 0;
  local_1f8 = 1;
  cVar9 = FUN_1407cdbc6(&local_1b8,&local_188,&local_1c8,&local_1d8);
  if (local_188 != (undefined2 **)0x0) {
    FUN_1400020a8();
  }
  if (cVar9 == '\0') {
    if ((int)puStack_1b0 < 2) {
      local_1e8 = 0;
      iVar14 = FUN_144b46310(param_4[0x4f],0x100001,&local_1e8);
      if (local_1e8 != 0 && iVar14 == 0) {
        FUN_1400b22c2(&local_188);
        ppuVar6 = local_188;
        pppuVar20 = (undefined2 ***)(param_4 + 0x37);
        if (pppuVar20 != &local_188) {
          iVar14 = (int)puStack_180;
          lVar23 = (longlong)(int)puStack_180;
          *(int *)(param_4 + 0x38) = (int)puStack_180;
          if ((int)puStack_180 == 0 && *(int *)((longlong)param_4 + 0x1c4) == 0) {
            *(undefined4 *)((longlong)param_4 + 0x1c4) = 0;
          }
          else {
            FUN_1446dd670(pppuVar20,(ulonglong)puStack_180 & 0xffffffff);
            if (iVar14 != 0) {
              memcpy(*pppuVar20,ppuVar6,lVar23 * 2);
            }
          }
        }
        lVar23 = param_4[0x39];
        if ((lVar23 != 0) && (pppuVar2 = (undefined2 ***)(lVar23 + 0x18), pppuVar2 != pppuVar20)) {
          iVar14 = (int)param_4[0x38];
          _Src = (void *)param_4[0x37];
          *(int *)(lVar23 + 0x20) = iVar14;
          if (iVar14 == 0 && *(int *)(lVar23 + 0x24) == 0) {
            *(undefined4 *)(lVar23 + 0x24) = 0;
          }
          else {
            FUN_1446dd670(pppuVar2,iVar14);
            if (iVar14 != 0) {
              memcpy(*pppuVar2,_Src,(longlong)iVar14 * 2);
            }
          }
        }
        if (local_188 != (undefined2 **)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      local_1e8 = local_1e8 & 0xffffffff00000000;
      iVar14 = FUN_144b46310(param_4[0x4f],0x200002);
      uVar15 = local_1e8;
      if (iVar14 == 0) {
        iVar14 = (int)local_1e8;
        bVar29 = (int)local_1e8 - 300U < 100;
        *(bool *)((longlong)param_4 + 0x2a9) = bVar29;
        if (!bVar29) {
          cVar9 = *(char *)((longlong)param_4 + 0x135);
          p_Var13 = (LPCRITICAL_SECTION)(**(code **)(*param_4 + 0x110))(param_4);
          if (cVar9 == '\x01') {
            puVar18 = (ulonglong *)param_4[2];
            if (puVar18 == (ulonglong *)0x0) {
LAB_142916cda:
              local_188 = (undefined2 **)0x0;
              puStack_180 = (ulonglong *)0x0;
              FUN_146b1cc4c(p_Var13,&local_188,uVar15 & 0xffffffff);
            }
            else {
              iVar14 = (int)puVar18[1];
              do {
                if (iVar14 == 0) goto LAB_142916cda;
                LOCK();
                iVar10 = (int)puVar18[1];
                bVar29 = iVar14 == iVar10;
                if (bVar29) {
                  *(int *)(puVar18 + 1) = iVar14 + 1;
                  iVar10 = iVar14;
                }
                iVar14 = iVar10;
                UNLOCK();
              } while (!bVar29);
              ppuVar6 = (undefined2 **)param_4[1];
              LOCK();
              *(int *)(puVar18 + 1) = (int)puVar18[1] + 1;
              UNLOCK();
              LOCK();
              puVar5 = puVar18 + 1;
              *(int *)puVar5 = (int)*puVar5 + -1;
              UNLOCK();
              if ((int)*puVar5 == 0) {
                (**(code **)*puVar18)(puVar18);
                LOCK();
                piVar1 = (int *)((longlong)puVar18 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*puVar18 + 0x10))(puVar18);
                }
              }
              LOCK();
              *(int *)(puVar18 + 1) = (int)puVar18[1] + 1;
              UNLOCK();
              local_188 = ppuVar6;
              puStack_180 = puVar18;
              FUN_146b1cc4c(p_Var13,&local_188,uVar15 & 0xffffffff);
              LOCK();
              puVar5 = puVar18 + 1;
              *(int *)puVar5 = (int)*puVar5 + -1;
              UNLOCK();
              if ((int)*puVar5 == 0) {
                (**(code **)*puVar18)(puVar18);
                LOCK();
                piVar1 = (int *)((longlong)puVar18 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  uVar15 = *puVar18;
LAB_142916a92:
                  (**(code **)(uVar15 + 0x10))(puVar18);
                }
              }
            }
          }
          else {
            EnterCriticalSection(p_Var13);
            if (p_Var13[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0 ||
                p_Var13[1].LockCount == 0) {
              cVar9 = '\0';
            }
            else {
              cVar9 = (**(code **)(*(longlong *)p_Var13[1].DebugInfo + 0x30))();
            }
            if (p_Var13 != (LPCRITICAL_SECTION)0x0) {
              LeaveCriticalSection(p_Var13);
            }
            if (cVar9 != '\0') {
              lVar23 = FUN_141054386();
              uVar4 = *(undefined8 *)(lVar23 + 0x20);
              puStack_158 = (ulonglong *)param_4[2];
              if (puStack_158 == (ulonglong *)0x0) {
LAB_142916847:
                local_160 = 0;
                puStack_158 = (ulonglong *)0x0;
                bVar29 = true;
              }
              else {
                iVar10 = (int)puStack_158[1];
                do {
                  if (iVar10 == 0) goto LAB_142916847;
                  LOCK();
                  iVar19 = (int)puStack_158[1];
                  bVar29 = iVar10 == iVar19;
                  if (bVar29) {
                    *(int *)(puStack_158 + 1) = iVar10 + 1;
                    iVar19 = iVar10;
                  }
                  iVar10 = iVar19;
                  UNLOCK();
                } while (!bVar29);
                local_160 = param_4[1];
                bVar29 = false;
                LOCK();
                *(int *)(puStack_158 + 1) = (int)puStack_158[1] + 1;
                UNLOCK();
              }
              puVar18 = puStack_158;
              local_168 = &PTR_LAB_149f2a870;
              local_178 = (undefined ***)0x0;
              local_150 = iVar14;
              local_188 = (undefined2 **)FUN_142920184;
              FUN_146b1c66e(uVar4,&local_188,0);
              if (local_188 != (undefined2 **)0x0) {
                pppuVar22 = &local_168;
                if (local_178 != (undefined ***)0x0) {
                  pppuVar22 = local_178;
                }
                (*(code *)(*pppuVar22)[2])(pppuVar22);
              }
              if (!bVar29) {
                LOCK();
                puVar5 = puVar18 + 1;
                *(int *)puVar5 = (int)*puVar5 + -1;
                UNLOCK();
                if ((int)*puVar5 == 0) {
                  (**(code **)*puVar18)(puVar18);
                  LOCK();
                  piVar1 = (int *)((longlong)puVar18 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    uVar15 = *puVar18;
                    goto LAB_142916a92;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    FUN_140ded312();
    if (((1 < (int)uStack_1c0) && (1 < (int)uStack_1d0)) &&
       (*(char *)((longlong)param_4 + 0x2a9) == '\0')) {
      lVar23 = param_4[0x39];
      puVar18 = (ulonglong *)param_4[0x3a];
      if (puVar18 != (ulonglong *)0x0) {
        LOCK();
        *(int *)(puVar18 + 1) = (int)puVar18[1] + 1;
        UNLOCK();
      }
      puVar12 = &DAT_149dfb77a;
      if ((int)uStack_1c0 != 0) {
        puVar12 = local_1c8;
      }
      lVar16 = 0;
      while( true ) {
        uVar24 = *(ushort *)((longlong)puVar12 + lVar16);
        uVar15 = (ulonglong)uVar24;
        uVar25 = *(ushort *)((longlong)L"Content-Length" + lVar16);
        if (uVar24 != uVar25) break;
        if (uVar24 == 0) goto LAB_1429166ce;
LAB_14291669e:
        lVar16 = lVar16 + 2;
      }
      if ((uVar25 | uVar24) < 0x80) {
        uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
        uVar26 = (ulonglong)uVar25;
        uVar25 = (ushort)(byte)(&DAT_149e05da0)[uVar26];
        if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar26]) goto LAB_14291669e;
      }
      if (uVar24 != uVar25) goto LAB_14291688b;
LAB_1429166ce:
      pwVar17 = local_1d8;
      if ((int)uStack_1d0 == 0) {
        pwVar17 = L"";
      }
      lVar16 = _wtoi64(pwVar17);
      *(longlong *)(lVar23 + 0xa8) = lVar16;
LAB_14291688b:
      plVar28 = (longlong *)(lVar23 + 0x58);
      local_1e8 = 0;
      uStack_1e0 = 0;
      uVar15 = 0;
      iVar14 = (int)uStack_1c0 + -1;
      if ((int)uStack_1c0 == 0) {
        iVar14 = 0;
      }
      if (0 < iVar14) {
        puVar12 = local_1c8;
        if ((int)uStack_1c0 == 0) {
          puVar12 = &DAT_149dfb77a;
        }
        lVar23 = 0;
        uVar15 = 0;
        do {
          uVar21 = ((uint)(0x19 < (ushort)puVar12[lVar23] - 0x61) * 0x20 +
                   (uint)(ushort)puVar12[lVar23]) - 0x20;
          uVar27 = (uint)(uVar15 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar15 ^ uVar21) & 0xff) * 4);
          uVar15 = (ulonglong)
                   (uVar27 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar27 & 0xff ^ uVar21 >> 8 & 0xff) * 4));
          lVar23 = lVar23 + 1;
        } while (iVar14 != (int)lVar23);
      }
      iVar14 = FUN_1457511aa(plVar28,uVar15,&local_1c8);
      if (iVar14 != -1) {
        lVar23 = *plVar28 + (longlong)iVar14 * 0x28;
        if (((undefined8 *)(lVar23 + 0x10) != (undefined8 *)0x0 && lVar23 != 0) &&
           (iVar14 = *(int *)(lVar23 + 0x18), 1 < iVar14)) {
          iVar10 = (int)uStack_1d0 + -1;
          if ((int)uStack_1d0 == 0) {
            iVar10 = 0;
          }
          iVar19 = iVar14 + iVar10 + 1;
          if ((0 < iVar19) && (iStack_1dc <= iVar19)) {
            FUN_1446f8c06(&local_1e8,iVar14 + iVar10 + 2);
            iVar14 = *(int *)(lVar23 + 0x18);
          }
          iVar10 = iVar14 + -1;
          if (iVar14 == 0) {
            iVar10 = 0;
          }
          FUN_1402980a2(&local_1e8,*(undefined8 *)(lVar23 + 0x10),iVar10);
          FUN_1400020e8(&local_1e8,&DAT_149e19f34,2);
        }
      }
      iVar14 = (int)uStack_1d0 + -1;
      if ((int)uStack_1d0 == 0) {
        iVar14 = 0;
      }
      FUN_1400020e8(&local_1e8,local_1d8,iVar14);
      local_188 = &local_1c8;
      puStack_180 = &local_1e8;
      FUN_140dbdf0c(plVar28,local_18c,&local_188,0);
      cVar9 = *(char *)((longlong)param_4 + 0x135);
      p_Var13 = (LPCRITICAL_SECTION)(**(code **)(*param_4 + 0x108))(param_4);
      if (cVar9 == '\x01') {
        puVar5 = (ulonglong *)param_4[2];
        if (puVar5 == (ulonglong *)0x0) {
LAB_142916b99:
          local_188 = (undefined2 **)0x0;
          puStack_180 = (ulonglong *)0x0;
          FUN_146b1b0aa(p_Var13,&local_188,&local_1c8,&local_1d8);
        }
        else {
          iVar14 = (int)puVar5[1];
          do {
            if (iVar14 == 0) goto LAB_142916b99;
            LOCK();
            iVar10 = (int)puVar5[1];
            bVar29 = iVar14 == iVar10;
            if (bVar29) {
              *(int *)(puVar5 + 1) = iVar14 + 1;
              iVar10 = iVar14;
            }
            iVar14 = iVar10;
            UNLOCK();
          } while (!bVar29);
          ppuVar6 = (undefined2 **)param_4[1];
          LOCK();
          *(int *)(puVar5 + 1) = (int)puVar5[1] + 1;
          UNLOCK();
          LOCK();
          puVar3 = puVar5 + 1;
          *(int *)puVar3 = (int)*puVar3 + -1;
          UNLOCK();
          if ((int)*puVar3 == 0) {
            (**(code **)*puVar5)(puVar5);
            LOCK();
            piVar1 = (int *)((longlong)puVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*puVar5 + 0x10))(puVar5);
            }
          }
          LOCK();
          *(int *)(puVar5 + 1) = (int)puVar5[1] + 1;
          UNLOCK();
          local_188 = ppuVar6;
          puStack_180 = puVar5;
          FUN_146b1b0aa(p_Var13,&local_188,&local_1c8,&local_1d8);
          LOCK();
          puVar3 = puVar5 + 1;
          *(int *)puVar3 = (int)*puVar3 + -1;
          UNLOCK();
          if ((int)*puVar3 == 0) {
            (**(code **)*puVar5)(puVar5);
            LOCK();
            piVar1 = (int *)((longlong)puVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*puVar5 + 0x10))(puVar5);
            }
          }
        }
      }
      else {
        EnterCriticalSection(p_Var13);
        if (p_Var13[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0 || p_Var13[1].LockCount == 0) {
          cVar9 = '\0';
        }
        else {
          cVar9 = (**(code **)(*(longlong *)p_Var13[1].DebugInfo + 0x30))();
        }
        if (p_Var13 != (LPCRITICAL_SECTION)0x0) {
          LeaveCriticalSection(p_Var13);
        }
        uVar7 = uStack_1c0;
        puVar12 = local_1c8;
        uVar4 = uStack_1d0;
        pwVar17 = local_1d8;
        if (cVar9 != '\0') {
          local_1c8 = (undefined2 *)0x0;
          uStack_1c0 = 0;
          local_1d8 = (wchar_t *)0x0;
          uStack_1d0 = 0;
          lVar23 = FUN_146b215fa(param_4 + 0x62);
          *(undefined2 **)(lVar23 + 8) = puVar12;
          *(undefined8 *)(lVar23 + 0x10) = uVar7;
          *(wchar_t **)(lVar23 + 0x18) = pwVar17;
          *(undefined8 *)(lVar23 + 0x20) = uVar4;
          *(longlong *)param_4[99] = lVar23;
          param_4[99] = lVar23;
        }
      }
      if (local_1e8 != 0) {
        FUN_1400020a8();
      }
      if (puVar18 != (ulonglong *)0x0) {
        LOCK();
        puVar5 = puVar18 + 1;
        *(int *)puVar5 = (int)*puVar5 + -1;
        UNLOCK();
        if ((int)*puVar5 == 0) {
          (**(code **)*puVar18)(puVar18);
          LOCK();
          piVar1 = (int *)((longlong)puVar18 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            uVar15 = *puVar18;
            goto LAB_142916a92;
          }
        }
      }
    }
  }
  if (local_1d8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_1c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_1b8 != (undefined2 **)0x0) {
    FUN_1400020a8();
  }
  if (local_1a8 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_142916b4c:
  if ((local_70 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return _Size;
}



// FUNCTION 142916e42 FUN_142916e42 body=248 status=ok
// SIG undefined FUN_142916e42(void)

size_t FUN_142916e42(void *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  size_t _Size;
  
  FUN_141107776(param_4);
  FUN_140c72de2(param_4);
  _Size = param_2 * param_3;
  lVar4 = *(longlong *)(param_4 + 0x1c8);
  plVar5 = *(longlong **)(param_4 + 0x1d0);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if (_Size == 0) {
    _Size = 0;
  }
  else {
    if ((*(byte *)(param_4 + 0x210) & 1) == 0) {
      iVar3 = *(int *)(lVar4 + 0x40);
      *(uint *)(lVar4 + 0x40) = iVar3 + (uint)_Size;
      if ((uint)(*(int *)(lVar4 + 0x44) - iVar3) < (uint)_Size) {
        FUN_1447403be((longlong *)(lVar4 + 0x38));
      }
      memcpy((void *)(*(longlong *)(lVar4 + 0x38) + *(longlong *)(param_4 + 0x340)),param_1,_Size);
    }
    else {
      cVar6 = FUN_146b1b15e(param_4,param_1,_Size);
      if ((cVar6 == '\0') && ((*(byte *)(param_4 + 0x14a) & 1) == 0)) {
        _Size = 0;
      }
    }
    LOCK();
    *(longlong *)(param_4 + 0x340) = *(longlong *)(param_4 + 0x340) + _Size;
    UNLOCK();
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
  if (*(char *)(param_4 + 0x135) == '\x01') {
    FUN_14123f8ae(param_4);
  }
  return _Size;
}



// FUNCTION 142916f3a FUN_142916f3a body=780 status=ok
// SIG undefined FUN_142916f3a(void)

ulonglong FUN_142916f3a(longlong *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ushort uVar8;
  ushort uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60;
  int local_58;
  longlong local_50;
  int local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((undefined8 *)param_1[0x43] == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    ppuVar4 = &PTR_FUN_149f28db0;
    *puVar3 = &PTR_FUN_149f28db0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    param_1[0x43] = (longlong)puVar3;
    *(undefined1 *)((longlong)param_1 + 0x2b4) = 1;
    if (puVar3 != (undefined8 *)0x0) goto LAB_142916fa1;
LAB_1429170ab:
    LOCK();
    *(undefined1 *)(param_1 + 0x55) = 0;
    UNLOCK();
    *(undefined4 *)((longlong)param_1 + 0x2ac) = 0;
    param_1[0x6a] = 0;
    FUN_140056680(local_70,L"Content-Length");
    (**(code **)(*param_1 + 0x28))(param_1,&local_40,local_70);
    iVar1 = local_38;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    if (iVar1 < 2) {
      uVar5 = (**(code **)(*(longlong *)param_1[0x43] + 8))();
      FUN_140002266(&local_40,L"%llu",uVar5);
      FUN_140056680(local_70,L"Content-Length");
      (**(code **)(*param_1 + 0xb0))(param_1,local_70,&local_40);
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_140056680(local_70,L"Expect");
    (**(code **)(*param_1 + 0x28))(param_1,&local_40,local_70);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    uVar7 = CONCAT71((int7)((ulonglong)local_70 >> 8),1);
    if (local_38 < 2) {
      FUN_140056680(&local_40,&DAT_149dfb77a);
      FUN_140056680(local_70,L"Expect");
      (**(code **)(*param_1 + 0xb0))(param_1,local_70,&local_40);
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    ppuVar4 = *(undefined ***)param_1[0x43];
LAB_142916fa1:
    cVar2 = (*(code *)ppuVar4[6])();
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x58))(param_1,&local_40);
      iVar1 = local_38;
      if (local_38 < 2) {
LAB_14291705e:
        lVar6 = (**(code **)(*(longlong *)param_1[0x43] + 8))();
        bVar11 = lVar6 == 0;
        if (1 < iVar1) goto LAB_142917076;
      }
      else {
        (**(code **)(*param_1 + 0x58))(param_1,&local_50);
        FUN_140056680(&local_60);
        if (local_48 == local_58) {
          if (1 < local_48) {
            lVar6 = 0;
            while( true ) {
              uVar8 = *(ushort *)(local_50 + lVar6);
              uVar7 = (ulonglong)uVar8;
              uVar9 = *(ushort *)(local_60 + lVar6);
              if (uVar8 != uVar9) break;
              if (uVar8 == 0) goto LAB_14291705e;
LAB_142917025:
              lVar6 = lVar6 + 2;
            }
            if ((uVar9 | uVar8) < 0x80) {
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
              uVar10 = (ulonglong)uVar9;
              uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
              if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar10]) goto LAB_142917025;
            }
            bVar11 = true;
            if (uVar8 != uVar9) goto LAB_142917076;
          }
          goto LAB_14291705e;
        }
        bVar11 = true;
        if (local_58 + local_48 == 1) goto LAB_14291705e;
LAB_142917076:
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      if (bVar11) goto LAB_1429170ab;
    }
    uVar7 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 142917248 FUN_142917248 body=2553 status=ok
// SIG undefined FUN_142917248(void)

void FUN_142917248(longlong *param_1)

{
  int iVar1;
  size_t sVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  char *pcVar10;
  ushort uVar11;
  ulonglong uVar12;
  ushort uVar13;
  wchar_t *pwVar14;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  longlong local_100;
  uint local_f8;
  wchar_t *local_f0;
  int local_e8;
  undefined1 local_e0 [128];
  undefined1 *local_60;
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_144b472a0(param_1[0x50]);
  param_1[0x50] = 0;
  if ((int)param_1[0x52] == 0) {
    pwVar14 = L"";
LAB_1429172d7:
    local_60 = (undefined1 *)0x0;
    sVar2 = wcslen(pwVar14);
    FUN_1449b853c(local_e0,pwVar14,sVar2 & 0xffffffff,1);
  }
  else {
    pwVar14 = (wchar_t *)param_1[0x51];
    local_60 = (undefined1 *)0x0;
    if (pwVar14 != (wchar_t *)0x0) goto LAB_1429172d7;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
  }
  FUN_144b46fc0(param_1[0x4f],0x2712,local_58);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  (**(code **)(*param_1 + 0x70))(param_1,&local_f0,DAT_14c990b40);
  pwVar14 = local_f0;
  if (local_e8 - 2U < 0x7fffffff) {
    local_60 = (undefined1 *)0x0;
    if (local_f0 == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
    }
    else {
      sVar2 = wcslen(local_f0);
      FUN_1449b853c(local_e0,pwVar14,sVar2 & 0xffffffff,1);
    }
    FUN_144b46fc0(param_1[0x4f],0x27f7,local_58);
    if (local_60 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  pwVar14 = DAT_14c990b98;
  if (1 < DAT_14c990ba0) {
    local_60 = (undefined1 *)0x0;
    if (DAT_14c990b98 == (wchar_t *)0x0) {
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
    }
    else {
      sVar2 = wcslen(DAT_14c990b98);
      FUN_1449b853c(local_e0,pwVar14,sVar2 & 0xffffffff,1);
    }
    FUN_144b46fc0(param_1[0x4f],0x274e,local_58);
    if (local_60 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  iVar1 = (int)param_1[0x54];
  if (iVar1 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)param_1[0x53];
  }
  lVar6 = 0;
  while( true ) {
    uVar11 = *(ushort *)((longlong)puVar5 + lVar6);
    uVar9 = (ulonglong)uVar11;
    uVar13 = *(ushort *)((longlong)&DAT_149f280e2 + lVar6);
    if (uVar11 != uVar13) break;
    if (uVar11 == 0) goto LAB_1429174d2;
LAB_142917492:
    lVar6 = lVar6 + 2;
  }
  if ((uVar13 | uVar11) < 0x80) {
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar12 = (ulonglong)uVar13;
    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_142917492;
  }
  if (uVar11 != uVar13) {
    if (iVar1 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)param_1[0x53];
    }
    lVar6 = 0;
    goto LAB_14291784d;
  }
LAB_1429174d2:
  FUN_144b46fc0(param_1[0x4f],0x2f,1);
  lVar6 = param_1[0x4f];
  uVar7 = 0x271f;
  pcVar10 = (char *)0x0;
  goto LAB_1429174f8;
LAB_14291784d:
  uVar11 = *(ushort *)((longlong)puVar5 + lVar6);
  uVar9 = (ulonglong)uVar11;
  uVar13 = *(ushort *)((longlong)&DAT_149f280ec + lVar6);
  if (uVar11 != uVar13) {
    if ((uVar13 | uVar11) < 0x80) {
      uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
      uVar12 = (ulonglong)uVar13;
      uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
      if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_142917866;
    }
    if (uVar11 != uVar13) {
      if (iVar1 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      else {
        puVar5 = (undefined2 *)param_1[0x53];
      }
      lVar6 = 0;
      goto LAB_1429178af;
    }
    goto LAB_142917904;
  }
  if (uVar11 == 0) goto LAB_142917904;
LAB_142917866:
  lVar6 = lVar6 + 2;
  goto LAB_14291784d;
LAB_1429178af:
  uVar11 = *(ushort *)((longlong)puVar5 + lVar6);
  uVar9 = (ulonglong)uVar11;
  uVar13 = *(ushort *)((longlong)L"PATCH" + lVar6);
  if (uVar11 == uVar13) {
    if (uVar11 == 0) goto LAB_142917904;
LAB_1429178c4:
    lVar6 = lVar6 + 2;
    goto LAB_1429178af;
  }
  if ((uVar13 | uVar11) < 0x80) {
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar12 = (ulonglong)uVar13;
    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_1429178c4;
  }
  if (uVar11 != uVar13) {
    if (iVar1 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)param_1[0x53];
    }
    lVar6 = 0;
    goto LAB_142917a98;
  }
LAB_142917904:
  FUN_144b46fc0(param_1[0x4f],0x2e,1);
  uVar7 = (**(code **)(*(longlong *)param_1[0x43] + 8))();
  FUN_144b46fc0(param_1[0x4f],0xe,uVar7);
  if ((int)param_1[0x54] == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)param_1[0x53];
  }
  lVar6 = 0;
  while( true ) {
    uVar11 = *(ushort *)((longlong)puVar5 + lVar6);
    uVar9 = (ulonglong)uVar11;
    uVar13 = *(ushort *)((longlong)&DAT_149f280ec + lVar6);
    if (uVar11 != uVar13) break;
    if (uVar11 == 0) goto LAB_14291751e;
LAB_142917971:
    lVar6 = lVar6 + 2;
  }
  if ((uVar13 | uVar11) < 0x80) {
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar12 = (ulonglong)uVar13;
    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_142917971;
  }
  if (uVar11 != uVar13) {
    if ((int)param_1[0x54] == 0) {
      pwVar14 = L"";
LAB_1429179e1:
      local_60 = (undefined1 *)0x0;
      sVar2 = wcslen(pwVar14);
      local_50 = FUN_14475aa65(0,pwVar14,sVar2 & 0xffffffff);
      uVar8 = local_50 + 1;
      puVar4 = (undefined1 *)0x0;
      if (0x80 < uVar8) {
        FUN_1446efa72(&local_60,0,uVar8,1);
        puVar4 = local_60;
      }
      local_58 = puVar4;
      if (puVar4 == (undefined1 *)0x0) {
        local_58 = local_e0;
      }
      FUN_14475a98a(local_58,uVar8,pwVar14,(int)sVar2 + 1);
    }
    else {
      pwVar14 = (wchar_t *)param_1[0x53];
      local_60 = (undefined1 *)0x0;
      if (pwVar14 != (wchar_t *)0x0) goto LAB_1429179e1;
      local_58 = (undefined1 *)0x0;
      local_50 = 0;
    }
    FUN_144b46fc0(param_1[0x4f],0x2734,local_58);
    if (local_60 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  goto LAB_14291751e;
LAB_142917a98:
  uVar11 = *(ushort *)((longlong)puVar5 + lVar6);
  uVar9 = (ulonglong)uVar11;
  uVar13 = *(ushort *)((longlong)&DAT_149e8e77a + lVar6);
  if (uVar11 == uVar13) {
    if (uVar11 == 0) goto LAB_142917ae6;
LAB_142917aad:
    lVar6 = lVar6 + 2;
    goto LAB_142917a98;
  }
  if ((uVar13 | uVar11) < 0x80) {
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar12 = (ulonglong)uVar13;
    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_142917aad;
  }
  if (uVar11 != uVar13) {
    if (iVar1 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)param_1[0x53];
    }
    lVar6 = 0;
    goto LAB_142917b32;
  }
LAB_142917ae6:
  lVar6 = param_1[0x4f];
  uVar7 = 0x50;
  goto LAB_142917af2;
LAB_142917b32:
  uVar11 = *(ushort *)((longlong)puVar5 + lVar6);
  uVar9 = (ulonglong)uVar11;
  uVar13 = *(ushort *)((longlong)&DAT_149f28100 + lVar6);
  if (uVar11 == uVar13) {
    if (uVar11 == 0) goto LAB_142917b80;
LAB_142917b47:
    lVar6 = lVar6 + 2;
    goto LAB_142917b32;
  }
  if ((uVar13 | uVar11) < 0x80) {
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar12 = (ulonglong)uVar13;
    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_142917b47;
  }
  if (uVar11 != uVar13) {
    if (iVar1 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)param_1[0x53];
    }
    lVar6 = 0;
    goto LAB_142917ba1;
  }
LAB_142917b80:
  lVar6 = param_1[0x4f];
  uVar7 = 0x2c;
LAB_142917af2:
  FUN_144b46fc0(lVar6,uVar7,1);
  goto LAB_14291755c;
LAB_142917ba1:
  uVar11 = *(ushort *)((longlong)puVar5 + lVar6);
  uVar9 = (ulonglong)uVar11;
  uVar13 = *(ushort *)((longlong)L"DELETE" + lVar6);
  if (uVar11 == uVar13) {
    if (uVar11 == 0) goto LAB_142917bef;
LAB_142917bb6:
    lVar6 = lVar6 + 2;
    goto LAB_142917ba1;
  }
  if ((uVar13 | uVar11) < 0x80) {
    uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    uVar12 = (ulonglong)uVar13;
    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
    if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_142917bb6;
  }
  if (uVar11 != uVar13) {
    if (iVar1 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)param_1[0x53];
    }
    FUN_140033559(".\\Runtime/Online/HTTP/Private/Curl/CurlHttp.cpp",0x3b8,
                  L"Unsupported verb \'%s\', can be perhaps added with CURLOPT_CUSTOMREQUEST",puVar5
                 );
    goto LAB_14291755c;
  }
LAB_142917bef:
  FUN_144b46fc0(param_1[0x4f],0x2f,1);
  lVar6 = param_1[0x4f];
  pcVar10 = "DELETE";
  uVar7 = 0x2734;
LAB_1429174f8:
  FUN_144b46fc0(lVar6,uVar7,pcVar10);
  uVar7 = (**(code **)(*(longlong *)param_1[0x43] + 8))();
  FUN_144b46fc0(param_1[0x4f],0x3c,uVar7);
LAB_14291751e:
  LOCK();
  param_1[0x66] = 0;
  UNLOCK();
  LOCK();
  param_1[0x67] = 0;
  UNLOCK();
  FUN_144b46fc0(param_1[0x4f],0x2719,param_1);
  FUN_144b46fc0(param_1[0x4f],0x4e2c,FUN_142916390);
LAB_14291755c:
  FUN_144b46fc0(param_1[0x4f],0x272d,param_1);
  FUN_144b46fc0(param_1[0x4f],0x4e6f,FUN_142916412);
  FUN_144b46fc0(param_1[0x4f],0x2711,param_1);
  FUN_144b46fc0(param_1[0x4f],0x4e2b,FUN_142916e42);
  if (DAT_14c990b92 == '\x01') {
    FUN_144b46fc0(param_1[0x4f],0x2776,&DAT_149e02088);
  }
  (**(code **)(*param_1 + 0x30))(param_1,&local_100);
  uVar9 = (ulonglong)(int)local_f8;
  if (0 < (longlong)uVar9) {
    lVar6 = 0;
    do {
      local_110 = 0xffffffff;
      local_118 = 0;
      FUN_1447ee042(local_100 + lVar6,L"Authorization",0xd,1);
      if (*(int *)(local_100 + 8 + lVar6) == 0) {
        pwVar14 = L"";
LAB_142917682:
        local_60 = (undefined1 *)0x0;
        sVar2 = wcslen(pwVar14);
        local_50 = FUN_14475aa65(0,pwVar14,sVar2 & 0xffffffff);
        uVar8 = local_50 + 1;
        puVar4 = (undefined1 *)0x0;
        if (0x80 < uVar8) {
          FUN_1446efa72(&local_60,0,uVar8,1);
          puVar4 = local_60;
        }
        local_58 = puVar4;
        if (puVar4 == (undefined1 *)0x0) {
          local_58 = local_e0;
        }
        FUN_14475a98a(local_58,uVar8,pwVar14,(int)sVar2 + 1);
      }
      else {
        pwVar14 = *(wchar_t **)(local_100 + lVar6);
        local_60 = (undefined1 *)0x0;
        if (pwVar14 != (wchar_t *)0x0) goto LAB_142917682;
        local_58 = (undefined1 *)0x0;
        local_50 = 0;
      }
      lVar3 = FUN_144bbed20(param_1[0x50],local_58);
      if (local_60 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (lVar3 != 0) {
        param_1[0x50] = lVar3;
      }
      lVar6 = lVar6 + 0x10;
    } while (uVar9 * 0x10 != lVar6);
    uVar9 = (ulonglong)local_f8;
  }
  FUN_1447a1747(local_100,uVar9 & 0xffffffff);
  if (local_100 != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x50] != 0) {
    FUN_144b46fc0(param_1[0x4f],0x2727);
  }
  lVar6 = FUN_141054386();
  FUN_144b46fc0(param_1[0x4f],0x4e,(int)*(float *)(lVar6 + 0x10));
  if ((DAT_14c990bac == '\x01') && (*(char *)((longlong)param_1 + 0x2b4) == '\x01')) {
    FUN_144b46fc0(param_1[0x4f],0x27b8,param_1);
    FUN_144b46fc0(param_1[0x4f],0x4ec7,&LAB_1429163e6);
  }
  if (local_f0 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_144b46fc0(param_1[0x4f],0x2774,DAT_14c990bc8);
  FUN_144b46fc0(param_1[0x4f],0x142,1);
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142917c42 FUN_142917c42 body=2164 status=ok
// SIG undefined FUN_142917c42(void)

ulonglong FUN_142917c42(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  code *pcVar4;
  longlong *plVar5;
  void *_Src;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  undefined ***pppuVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auStack_108 [36];
  int local_e4;
  uint local_e0;
  int local_dc;
  ulonglong local_d8;
  code *local_d0;
  ulonglong local_c8;
  uint *local_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  longlong local_a8;
  int local_a0;
  code *local_98;
  int local_90;
  code *local_88;
  longlong *plStack_80;
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  param_1[0x39] = 0;
  plVar20 = (longlong *)param_1[0x3a];
  if (plVar20 != (longlong *)0x0) {
    param_1[0x3a] = 0;
    LOCK();
    plVar5 = plVar20 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  param_1[0x69] = 0;
  (**(code **)(*param_1 + 0x180))(param_1);
  lVar9 = FUN_141054386();
  if ((*(char *)(lVar9 + 0x50) == '\x01') && ((int)param_1[0x26] != 1)) {
    (**(code **)*param_1)(param_1,&local_88);
    iVar7 = (int)plStack_80;
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (iVar7 < 2) goto LAB_1429180c5;
    (**(code **)(*param_1 + 0x58))(param_1,&local_88);
    iVar7 = (int)plStack_80;
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (iVar7 < 2) goto LAB_1429180c5;
    lVar9 = FUN_141054386();
    lVar9 = *(longlong *)(lVar9 + 0x20);
    (**(code **)*param_1)(param_1,&local_98);
    cVar6 = '\x01';
    if (*(int *)(lVar9 + 0xf0) != *(int *)(lVar9 + 0x11c)) {
      local_88 = local_98;
      iVar7 = local_90 + -1;
      if (local_90 == 0) {
        iVar7 = 0;
      }
      plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,iVar7);
      cVar6 = FUN_14278d920(lVar9 + 0xe8);
    }
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
    if ((cVar6 == '\0') || ((*(byte *)(param_1 + 0x29) & 1) != 0)) goto LAB_1429180c5;
    lVar9 = FUN_141054386();
    lVar9 = *(longlong *)(lVar9 + 0x20);
    (**(code **)*param_1)(param_1,&local_a8);
    lVar11 = local_a8;
    uVar19 = 0;
    uVar18 = local_a0 - 1;
    if (local_a0 == 0) {
      uVar18 = 0;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x3b8));
    iVar7 = *(int *)(lVar9 + 0x390);
    if (iVar7 == 0) {
LAB_142917df6:
      bVar22 = false;
    }
    else {
      local_c0 = (uint *)(lVar9 + 0x378);
      puVar10 = *(uint **)(lVar9 + 0x388);
      if (*(uint **)(lVar9 + 0x388) == (uint *)0x0) {
        puVar10 = local_c0;
      }
      uVar17 = *puVar10;
      local_e4 = 0;
      if (uVar17 == 0) {
        iVar8 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar8 = iVar7 + -1;
        }
        uVar19 = 0;
        uVar15 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar15 = uVar19;
        }
        local_e4 = 0;
        do {
          if (uVar15 == uVar19) goto LAB_142917df6;
          local_e4 = local_e4 + 0x20;
          uVar17 = puVar10[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar17 == 0);
      }
      local_d8 = (ulonglong)(-uVar17 & uVar17);
      uVar15 = local_d8 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar8 = (local_e4 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      if (iVar7 <= iVar8) goto LAB_142917df6;
      local_c8 = 0;
      if (0 < (int)uVar18) {
        local_c8 = (ulonglong)uVar18;
      }
      local_d0 = (code *)((lVar11 + (longlong)(int)uVar18 * 2) -
                         (ulonglong)(uint)((int)local_c8 * 2));
      local_e0 = 0xffffffff;
      bVar22 = false;
      do {
        lVar11 = *(longlong *)(lVar9 + 0x368);
        lVar21 = (longlong)iVar8 * 0x20;
        local_88 = *(code **)(lVar11 + lVar21);
        iVar8 = *(int *)(lVar11 + 8 + lVar21);
        iVar12 = iVar8 + -1;
        if (iVar8 == 0) {
          iVar12 = 0;
        }
        plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,iVar12);
        local_98 = local_d0;
        local_90 = (int)local_c8;
        iVar8 = FUN_144a08910(&local_98,&local_88,0);
        if (iVar8 != -1) {
          local_dc = *(int *)(lVar11 + lVar21 + 0x10);
          bVar22 = true;
        }
        local_e0 = local_e0 & ~(uint)local_d8;
        puVar10 = *(uint **)(lVar9 + 0x388);
        if (*(uint **)(lVar9 + 0x388) == (uint *)0x0) {
          puVar10 = local_c0;
        }
        iVar12 = *(int *)(lVar9 + 0x390);
        iVar8 = (int)uVar19;
        lVar11 = (longlong)iVar8;
        uVar18 = puVar10[lVar11] & local_e0;
        if (uVar18 == 0) {
          iVar13 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar13 = iVar12 + -1;
          }
          iVar13 = iVar13 >> 5;
          local_e4 = local_e4 + 0x20;
          iVar14 = iVar13;
          if (iVar13 < iVar8) {
            iVar14 = iVar8;
          }
          if (iVar8 < iVar13) {
            lVar21 = 0;
            do {
              uVar18 = puVar10[lVar11 + lVar21 + 1];
              if (uVar18 != 0) {
                uVar19 = (ulonglong)(iVar8 + (int)lVar21 + 1);
                local_e0 = 0xffffffff;
                goto LAB_1429182c2;
              }
              local_e4 = local_e4 + 0x20;
              lVar21 = lVar21 + 1;
            } while (iVar14 - lVar11 != lVar21);
            local_e0 = 0xffffffff;
            iVar8 = iVar14;
          }
          uVar19 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar12;
        }
        else {
LAB_1429182c2:
          local_d8 = (ulonglong)(-uVar18 & uVar18);
          uVar15 = local_d8 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar8 = (local_e4 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if (iVar12 <= iVar8) {
            iVar8 = iVar12;
          }
        }
      } while (iVar8 != iVar7);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x3b8));
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (!bVar22) {
      FUN_140056680(&local_98,L"User-Agent");
      (**(code **)(*param_1 + 0x28))(param_1,&local_88,&local_98);
      iVar7 = (int)plStack_80;
      if (local_88 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (local_98 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (iVar7 < 2) {
        FUN_141505626();
        AcquireSRWLockShared((PSRWLOCK)&DAT_14c990e78);
        _Src = DAT_14c990ee8;
        local_88 = (code *)0x0;
        lVar9 = (longlong)(int)DAT_14c990ef0;
        plStack_80 = (longlong *)CONCAT44(plStack_80._4_4_,DAT_14c990ef0);
        if (lVar9 == 0) {
          plStack_80 = (longlong *)(ulonglong)DAT_14c990ef0;
        }
        else {
          FUN_1446dd670(&local_88,DAT_14c990ef0,0);
          memcpy(local_88,_Src,lVar9 * 2);
        }
        ReleaseSRWLockShared((PSRWLOCK)&DAT_14c990e78);
        FUN_140056680(&local_98,L"User-Agent");
        (**(code **)(*param_1 + 0xb0))(param_1,&local_98,&local_88);
        if (local_98 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_88 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      cVar6 = (**(code **)(*param_1 + 0x178))(param_1);
      if (cVar6 != '\0') {
        FUN_14291a982(param_1);
        *(undefined4 *)(param_1 + 0x26) = 1;
        if (param_1[0x39] != 0) {
          *(undefined4 *)(param_1[0x39] + 0x28) = 1;
        }
        lVar9 = FUN_141054386();
        lVar9 = *(longlong *)(lVar9 + 0x20);
        plVar20 = (longlong *)param_1[2];
        if (plVar20 == (longlong *)0x0) {
LAB_142917fc3:
          local_88 = (code *)0x0;
          plStack_80 = (longlong *)0x0;
          bVar22 = true;
        }
        else {
          iVar7 = (int)plVar20[1];
          do {
            if (iVar7 == 0) goto LAB_142917fc3;
            LOCK();
            iVar8 = (int)plVar20[1];
            bVar22 = iVar7 == iVar8;
            if (bVar22) {
              *(int *)(plVar20 + 1) = iVar7 + 1;
              iVar8 = iVar7;
            }
            iVar7 = iVar8;
            UNLOCK();
          } while (!bVar22);
          pcVar4 = (code *)param_1[1];
          LOCK();
          *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
          UNLOCK();
          LOCK();
          plVar5 = plVar20 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
            }
          }
          LOCK();
          *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
          UNLOCK();
          bVar22 = false;
          local_88 = pcVar4;
          plStack_80 = plVar20;
        }
        plVar20 = plStack_80;
        pcVar4 = local_88;
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x3e0));
        iVar7 = *(int *)(lVar9 + 0x20);
        *(uint *)(lVar9 + 0x20) = iVar7 + 1U;
        if (*(uint *)(lVar9 + 0x24) < iVar7 + 1U) {
          FUN_146283e3a((longlong *)(lVar9 + 0x18),iVar7);
        }
        lVar11 = *(longlong *)(lVar9 + 0x18);
        *(code **)(lVar11 + (longlong)iVar7 * 0x10) = local_88;
        *(longlong **)(lVar11 + 8 + (longlong)iVar7 * 0x10) = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_80 + 1) = (int)plStack_80[1] + 1;
          UNLOCK();
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar9 + 0x3e0));
        if ((*(int *)(lVar9 + 0xd0) != 0) &&
           (plVar5 = *(longlong **)(lVar9 + 200), plVar5 != (longlong *)0x0)) {
          (**(code **)(*plVar5 + 0x60))(plVar5,&local_88);
        }
        plVar5 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_80 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        (**(code **)(**(longlong **)(lVar9 + 0x28) + 0x40))(*(longlong **)(lVar9 + 0x28),pcVar4);
        uVar19 = CONCAT71((int7)((ulonglong)pcVar4 >> 8),1);
        if (!bVar22) {
          LOCK();
          plVar5 = plVar20 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
            }
          }
          LOCK();
          plVar5 = plVar20 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
            }
          }
        }
        goto LAB_1429180cf;
      }
      goto LAB_1429180c5;
    }
    if (local_dc == 0) {
      lVar9 = FUN_141054386();
      fVar3 = *(float *)(lVar9 + 0x10);
      plVar20 = (longlong *)param_1[2];
      if (plVar20 == (longlong *)0x0) {
LAB_1429183cc:
        lVar9 = FUN_141054386();
        lVar11 = *(longlong *)(lVar9 + 0x20);
        bVar22 = true;
        plVar20 = (longlong *)0x0;
        lVar9 = 0;
      }
      else {
        iVar7 = (int)plVar20[1];
        do {
          if (iVar7 == 0) goto LAB_1429183cc;
          LOCK();
          iVar8 = (int)plVar20[1];
          bVar22 = iVar7 == iVar8;
          if (bVar22) {
            *(int *)(plVar20 + 1) = iVar7 + 1;
            iVar8 = iVar7;
          }
          iVar7 = iVar8;
          UNLOCK();
        } while (!bVar22);
        lVar9 = param_1[1];
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        LOCK();
        plVar5 = plVar20 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
        LOCK();
        *(int *)((longlong)plVar20 + 0xc) = *(int *)((longlong)plVar20 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar5 = plVar20 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
        lVar11 = FUN_141054386();
        lVar11 = *(longlong *)(lVar11 + 0x20);
        LOCK();
        *(int *)((longlong)plVar20 + 0xc) = *(int *)((longlong)plVar20 + 0xc) + 1;
        UNLOCK();
        bVar22 = false;
      }
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_149f2a6d0;
      local_88 = FUN_14291f8b4;
      local_60 = lVar9;
      local_58 = plVar20;
      (**(code **)(**(longlong **)(lVar11 + 0x28) + 0x60))
                (*(longlong **)(lVar11 + 0x28),local_b8,&local_88,(float)(int)fVar3);
      if (local_b0 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_b0 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)local_b0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_b0 + 0x10))(local_b0);
          }
        }
      }
      if (local_88 != (code *)0x0) {
        pppuVar16 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar16 = &local_68;
        }
        (*(code *)(*pppuVar16)[2])();
      }
      if (!bVar22) {
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
    }
    else {
      FUN_141107776(param_1);
      *(int *)(param_1[0x39] + 0x30) = local_dc;
      (**(code **)(*param_1 + 0x1a0))(param_1);
      FUN_146b1b324(param_1);
    }
    FUN_14291a982(param_1);
  }
  else {
LAB_1429180c5:
    FUN_146b1b324(param_1);
  }
  uVar19 = 0;
LAB_1429180cf:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19 & 0xffffffff;
}


