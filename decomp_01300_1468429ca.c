// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1468429ca FUN_1468429ca body=174 status=ok
// SIG undefined FUN_1468429ca(void)

ulonglong FUN_1468429ca(int *param_1,wchar_t *param_2)

{
  wchar_t _C;
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  ulonglong uVar4;
  
  if (*param_2 == L'\0') {
    *param_1 = 0;
  }
  else {
    lVar2 = _wtoi64(param_2);
    *param_1 = (int)lVar2;
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (((int)lVar2 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) goto LAB_146842a32;
    do {
      do {
        do {
          pwVar3 = param_2 + 1;
          _C = *param_2;
          param_2 = pwVar3;
        } while (_C == L'+');
      } while (_C == L'-');
      if (_C == L'\0') goto LAB_146842a30;
      iVar1 = iswspace(_C);
    } while (iVar1 != 0);
    if (_C != L'\0') {
      uVar4 = 0;
      do {
        iVar1 = iswspace(_C);
        if ((_C == L'.') || (iVar1 != 0)) break;
        if ((~(byte)uVar4 & _C != L'0') != 0) goto LAB_146842a30;
        _C = *pwVar3;
        pwVar3 = pwVar3 + 1;
        uVar4 = 1;
      } while (_C != L'\0');
      goto LAB_146842a32;
    }
  }
LAB_146842a30:
  uVar4 = 0;
LAB_146842a32:
  return uVar4 & 0xffffff01;
}



// FUNCTION 146842a78 FUN_146842a78 body=175 status=ok
// SIG undefined FUN_146842a78(void)

ulonglong FUN_146842a78(short *param_1,wchar_t *param_2)

{
  wchar_t _C;
  int iVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  
  if (*param_2 == L'\0') {
    *param_1 = 0;
  }
  else {
    iVar1 = _wtoi(param_2);
    *param_1 = (short)iVar1;
    uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (((short)iVar1 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) goto LAB_146842ae1;
    do {
      do {
        do {
          pwVar2 = param_2 + 1;
          _C = *param_2;
          param_2 = pwVar2;
        } while (_C == L'+');
      } while (_C == L'-');
      if (_C == L'\0') goto LAB_146842adf;
      iVar1 = iswspace(_C);
    } while (iVar1 != 0);
    if (_C != L'\0') {
      uVar3 = 0;
      do {
        iVar1 = iswspace(_C);
        if ((_C == L'.') || (iVar1 != 0)) break;
        if ((~(byte)uVar3 & _C != L'0') != 0) goto LAB_146842adf;
        _C = *pwVar2;
        pwVar2 = pwVar2 + 1;
        uVar3 = 1;
      } while (_C != L'\0');
      goto LAB_146842ae1;
    }
  }
LAB_146842adf:
  uVar3 = 0;
LAB_146842ae1:
  return uVar3 & 0xffffff01;
}



// FUNCTION 146842b27 FUN_146842b27 body=171 status=ok
// SIG undefined FUN_146842b27(void)

ulonglong FUN_146842b27(char *param_1,wchar_t *param_2)

{
  wchar_t _C;
  int iVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  
  if (*param_2 == L'\0') {
    *param_1 = '\0';
  }
  else {
    iVar1 = _wtoi(param_2);
    *param_1 = (char)iVar1;
    uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (((char)iVar1 != '\0') || (iVar1 = _finite(0.0), iVar1 == 0)) goto LAB_146842b8c;
    do {
      do {
        do {
          pwVar2 = param_2 + 1;
          _C = *param_2;
          param_2 = pwVar2;
        } while (_C == L'+');
      } while (_C == L'-');
      if (_C == L'\0') goto LAB_146842b8a;
      iVar1 = iswspace(_C);
    } while (iVar1 != 0);
    if (_C != L'\0') {
      uVar3 = 0;
      do {
        iVar1 = iswspace(_C);
        if ((_C == L'.') || (iVar1 != 0)) break;
        if ((~(byte)uVar3 & _C != L'0') != 0) goto LAB_146842b8a;
        _C = *pwVar2;
        pwVar2 = pwVar2 + 1;
        uVar3 = 1;
      } while (_C != L'\0');
      goto LAB_146842b8c;
    }
  }
LAB_146842b8a:
  uVar3 = 0;
LAB_146842b8c:
  return uVar3 & 0xffffff01;
}



// FUNCTION 146842bd2 FUN_146842bd2 body=177 status=ok
// SIG undefined FUN_146842bd2(void)

ulonglong FUN_146842bd2(longlong *param_1,wchar_t *param_2)

{
  wchar_t _C;
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  ulonglong uVar4;
  
  if (*param_2 == L'\0') {
    *param_1 = 0;
  }
  else {
    lVar2 = _wtoi64(param_2);
    *param_1 = lVar2;
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if ((lVar2 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) goto LAB_146842c3d;
    do {
      do {
        do {
          pwVar3 = param_2 + 1;
          _C = *param_2;
          param_2 = pwVar3;
        } while (_C == L'+');
      } while (_C == L'-');
      if (_C == L'\0') goto LAB_146842c3b;
      iVar1 = iswspace(_C);
    } while (iVar1 != 0);
    if (_C != L'\0') {
      uVar4 = 0;
      do {
        iVar1 = iswspace(_C);
        if ((_C == L'.') || (iVar1 != 0)) break;
        if ((~(byte)uVar4 & _C != L'0') != 0) goto LAB_146842c3b;
        _C = *pwVar3;
        pwVar3 = pwVar3 + 1;
        uVar4 = 1;
      } while (_C != L'\0');
      goto LAB_146842c3d;
    }
  }
LAB_146842c3b:
  uVar4 = 0;
LAB_146842c3d:
  return uVar4 & 0xffffff01;
}



// FUNCTION 146842c83 FUN_146842c83 body=174 status=ok
// SIG undefined FUN_146842c83(void)

ulonglong FUN_146842c83(int *param_1,wchar_t *param_2)

{
  wchar_t _C;
  int iVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  
  if (*param_2 == L'\0') {
    *param_1 = 0;
  }
  else {
    iVar1 = _wtoi(param_2);
    *param_1 = iVar1;
    uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if ((iVar1 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) goto LAB_146842ceb;
    do {
      do {
        do {
          pwVar2 = param_2 + 1;
          _C = *param_2;
          param_2 = pwVar2;
        } while (_C == L'+');
      } while (_C == L'-');
      if (_C == L'\0') goto LAB_146842ce9;
      iVar1 = iswspace(_C);
    } while (iVar1 != 0);
    if (_C != L'\0') {
      uVar3 = 0;
      do {
        iVar1 = iswspace(_C);
        if ((_C == L'.') || (iVar1 != 0)) break;
        if ((~(byte)uVar3 & _C != L'0') != 0) goto LAB_146842ce9;
        _C = *pwVar2;
        pwVar2 = pwVar2 + 1;
        uVar3 = 1;
      } while (_C != L'\0');
      goto LAB_146842ceb;
    }
  }
LAB_146842ce9:
  uVar3 = 0;
LAB_146842ceb:
  return uVar3 & 0xffffff01;
}



// FUNCTION 146842d31 FUN_146842d31 body=175 status=ok
// SIG undefined FUN_146842d31(void)

ulonglong FUN_146842d31(short *param_1,wchar_t *param_2)

{
  wchar_t _C;
  int iVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  
  if (*param_2 == L'\0') {
    *param_1 = 0;
  }
  else {
    iVar1 = _wtoi(param_2);
    *param_1 = (short)iVar1;
    uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (((short)iVar1 != 0) || (iVar1 = _finite(0.0), iVar1 == 0)) goto LAB_146842d9a;
    do {
      do {
        do {
          pwVar2 = param_2 + 1;
          _C = *param_2;
          param_2 = pwVar2;
        } while (_C == L'+');
      } while (_C == L'-');
      if (_C == L'\0') goto LAB_146842d98;
      iVar1 = iswspace(_C);
    } while (iVar1 != 0);
    if (_C != L'\0') {
      uVar3 = 0;
      do {
        iVar1 = iswspace(_C);
        if ((_C == L'.') || (iVar1 != 0)) break;
        if ((~(byte)uVar3 & _C != L'0') != 0) goto LAB_146842d98;
        _C = *pwVar2;
        pwVar2 = pwVar2 + 1;
        uVar3 = 1;
      } while (_C != L'\0');
      goto LAB_146842d9a;
    }
  }
LAB_146842d98:
  uVar3 = 0;
LAB_146842d9a:
  return uVar3 & 0xffffff01;
}



// FUNCTION 146842de0 FUN_146842de0 body=171 status=ok
// SIG undefined FUN_146842de0(void)

ulonglong FUN_146842de0(char *param_1,wchar_t *param_2)

{
  wchar_t _C;
  int iVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  
  if (*param_2 == L'\0') {
    *param_1 = '\0';
  }
  else {
    iVar1 = _wtoi(param_2);
    *param_1 = (char)iVar1;
    uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (((char)iVar1 != '\0') || (iVar1 = _finite(0.0), iVar1 == 0)) goto LAB_146842e45;
    do {
      do {
        do {
          pwVar2 = param_2 + 1;
          _C = *param_2;
          param_2 = pwVar2;
        } while (_C == L'+');
      } while (_C == L'-');
      if (_C == L'\0') goto LAB_146842e43;
      iVar1 = iswspace(_C);
    } while (iVar1 != 0);
    if (_C != L'\0') {
      uVar3 = 0;
      do {
        iVar1 = iswspace(_C);
        if ((_C == L'.') || (iVar1 != 0)) break;
        if ((~(byte)uVar3 & _C != L'0') != 0) goto LAB_146842e43;
        _C = *pwVar2;
        pwVar2 = pwVar2 + 1;
        uVar3 = 1;
      } while (_C != L'\0');
      goto LAB_146842e45;
    }
  }
LAB_146842e43:
  uVar3 = 0;
LAB_146842e45:
  return uVar3 & 0xffffff01;
}



// FUNCTION 146842e8b FUN_146842e8b body=193 status=ok
// SIG undefined FUN_146842e8b(void)

ulonglong FUN_146842e8b(float *param_1,wchar_t *param_2)

{
  wchar_t _C;
  int iVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  float fVar4;
  double dVar5;
  
  if (*param_2 == L'\0') {
    *param_1 = 0.0;
  }
  else {
    dVar5 = _wtof(param_2);
    fVar4 = (float)dVar5;
    *param_1 = fVar4;
    uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (((fVar4 != 0.0) || (NAN(fVar4))) || (iVar1 = _finite((double)fVar4), iVar1 == 0))
    goto LAB_146842f00;
    do {
      do {
        do {
          pwVar2 = param_2 + 1;
          _C = *param_2;
          param_2 = pwVar2;
        } while (_C == L'+');
      } while (_C == L'-');
      if (_C == L'\0') goto LAB_146842efe;
      iVar1 = iswspace(_C);
    } while (iVar1 != 0);
    if (_C != L'\0') {
      uVar3 = 0;
      do {
        iVar1 = iswspace(_C);
        if (iVar1 != 0) break;
        if ((((byte)uVar3 == 0) && (_C != L'0')) && (_C != L'.')) goto LAB_146842efe;
        uVar3 = (ulonglong)(byte)((byte)uVar3 | _C == L'0');
        _C = *pwVar2;
        pwVar2 = pwVar2 + 1;
      } while (_C != L'\0');
      goto LAB_146842f00;
    }
  }
LAB_146842efe:
  uVar3 = 0;
LAB_146842f00:
  return uVar3 & 0xffffff01;
}



// FUNCTION 146842f4c FUN_146842f4c body=198 status=ok
// SIG undefined FUN_146842f4c(void)

ulonglong FUN_146842f4c(double *param_1,wchar_t *param_2)

{
  wchar_t _C;
  int iVar1;
  wchar_t *pwVar2;
  ulonglong uVar3;
  double dVar4;
  
  if (*param_2 == L'\0') {
    *param_1 = 0.0;
  }
  else {
    dVar4 = wcstod(param_2,(wchar_t **)0x0);
    *param_1 = dVar4;
    uVar3 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    if (((dVar4 != 0.0) || (NAN(dVar4))) || (iVar1 = _finite((double)(float)dVar4), iVar1 == 0))
    goto LAB_146842fc6;
    do {
      do {
        do {
          pwVar2 = param_2 + 1;
          _C = *param_2;
          param_2 = pwVar2;
        } while (_C == L'+');
      } while (_C == L'-');
      if (_C == L'\0') goto LAB_146842fc4;
      iVar1 = iswspace(_C);
    } while (iVar1 != 0);
    if (_C != L'\0') {
      uVar3 = 0;
      do {
        iVar1 = iswspace(_C);
        if (iVar1 != 0) break;
        if ((((byte)uVar3 == 0) && (_C != L'0')) && (_C != L'.')) goto LAB_146842fc4;
        uVar3 = (ulonglong)(byte)((byte)uVar3 | _C == L'0');
        _C = *pwVar2;
        pwVar2 = pwVar2 + 1;
      } while (_C != L'\0');
      goto LAB_146842fc6;
    }
  }
LAB_146842fc4:
  uVar3 = 0;
LAB_146842fc6:
  return uVar3 & 0xffffff01;
}



// FUNCTION 146843012 FUN_146843012 body=213 status=ok
// SIG undefined FUN_146843012(void)

undefined8 * FUN_146843012(undefined8 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x88,0x10);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *(undefined4 *)(puVar6 + 3) = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  puVar6[7] = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = 1;
  *(undefined2 *)(puVar6 + 0xd) = 0;
  *puVar6 = &PTR_FUN_149e45060;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(puVar6 + 0xe) = *param_2;
  *(undefined4 *)((longlong)puVar6 + 0x74) = uVar3;
  *(undefined4 *)(puVar6 + 0xf) = uVar4;
  *(undefined4 *)((longlong)puVar6 + 0x7c) = uVar5;
  puVar6[0x10] = 0;
  FUN_1468430e8(puVar6);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149e45080;
  plVar7[2] = (longlong)puVar6;
  *param_1 = puVar6;
  param_1[1] = plVar7;
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
  return param_1;
}



// FUNCTION 1468430e8 FUN_1468430e8 body=250 status=ok
// SIG undefined FUN_1468430e8(void)

void FUN_1468430e8(longlong param_1)

{
  longlong **pplVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar2 = *(int *)(param_1 + 0x78);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    plVar5 = (longlong *)FUN_14001cc68(0xb0,0x10);
    FUN_144869430(plVar5);
    *plVar5 = (longlong)&PTR__purecall_149e30ac0;
    plVar5[0x12] = lVar3;
    plVar5[0x13] = 0;
    plVar5[0x14] = (longlong)iVar2 * 2;
    *(undefined1 *)(plVar5 + 0x15) = 0;
    FUN_140996f94(plVar5,1);
    (**(code **)(*plVar5 + 0xf0))(plVar5,0);
    *plVar5 = (longlong)&PTR_FUN_149e447c0;
    pplVar1 = (longlong **)(param_1 + 0x80);
    local_30 = plVar5;
    if (pplVar1 != &local_30) {
      plVar4 = *pplVar1;
      *pplVar1 = plVar5;
      local_30 = (longlong *)0x0;
      FUN_14047b1f0(pplVar1,plVar4);
    }
    FUN_14047b1f0(&local_30,local_30);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x80);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468431e4 FUN_1468431e4 body=70 status=ok
// SIG undefined FUN_1468431e4(void)

undefined8 * FUN_1468431e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e45060;
  FUN_14047b1f0(param_1 + 0x10,param_1[0x10]);
  FUN_140dc6f94(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14684322a FUN_14684322a body=24 status=ok
// SIG undefined FUN_14684322a(void)

void FUN_14684322a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014684323e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 146843242 FUN_146843242 body=29 status=ok
// SIG undefined FUN_146843242(void)

undefined8 FUN_146843242(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146843260 FUN_146843260 body=102 status=ok
// SIG undefined FUN_146843260(void)

undefined8 FUN_146843260(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  uVar2 = FUN_144a49b4a(*(undefined4 *)(param_2 + 1),*param_2);
  iVar3 = FUN_1449baa48(param_1,uVar2,param_2);
  if ((((iVar3 == -1) ||
       (lVar1 = *param_1 + (longlong)iVar3 * 0x28, plVar4 = (longlong *)(lVar1 + 0x10),
       plVar4 == (longlong *)0x0 || lVar1 == 0)) || (*plVar4 == 0)) ||
     (uVar5 = CONCAT71((int7)((ulonglong)plVar4 >> 8),1), *(int *)(*plVar4 + 8) != param_3)) {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 1468432de FUN_1468432de body=327 status=ok
// SIG undefined FUN_1468432de(void)

undefined4 * FUN_1468432de(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140c9efc4(param_1,local_48);
  FUN_146843426(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar6);
  local_58 = 0;
  cVar2 = FUN_140c9ef28(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x24) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140f2b3b6(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146843426 FUN_146843426 body=156 status=ok
// SIG undefined FUN_146843426(void)

undefined8 * FUN_146843426(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 1468434c2 FUN_1468434c2 body=138 status=ok
// SIG undefined FUN_1468434c2(void)

void FUN_1468434c2(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14684354c FUN_14684354c body=330 status=ok
// SIG undefined FUN_14684354c(void)

undefined4 * FUN_14684354c(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146843698(param_1,local_48);
  FUN_14684380a(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar6);
  local_58 = 0;
  cVar2 = FUN_14684377e(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x1c) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1468439c8(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146843698 FUN_146843698 body=229 status=ok
// SIG undefined FUN_146843698(void)

int * FUN_146843698(longlong *param_1,int *param_2)

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



// FUNCTION 14684377e FUN_14684377e body=140 status=ok
// SIG undefined FUN_14684377e(void)

void FUN_14684377e(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
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
    iVar7 = FUN_146843872();
    if (iVar7 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
      if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) != 0) {
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
      FUN_14684393e(param_1,*param_4,1);
      *param_4 = iVar7;
      uVar6 = 1;
      goto LAB_14684379f;
    }
  }
  uVar6 = 0;
LAB_14684379f:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 14684380a FUN_14684380a body=103 status=ok
// SIG undefined FUN_14684380a(void)

undefined8 * FUN_14684380a(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined4 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_2 + 2) = *puVar3;
  return param_2;
}



// FUNCTION 146843872 FUN_146843872 body=203 status=ok
// SIG undefined FUN_146843872(void)

int FUN_146843872(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1468438bc:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_146843932;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_146843932;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_146843923;
    }
  }
  return -1;
LAB_146843932:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_146843923:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1468438bc;
}



// FUNCTION 14684393e FUN_14684393e body=138 status=ok
// SIG undefined FUN_14684393e(void)

void FUN_14684393e(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1468439c8 FUN_1468439c8 body=476 status=ok
// SIG undefined FUN_1468439c8(void)

void FUN_1468439c8(longlong *param_1)

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



// FUNCTION 146843ba6 FUN_146843ba6 body=319 status=ok
// SIG undefined FUN_146843ba6(void)

undefined4 * FUN_146843ba6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146843ce6(param_1,local_48);
  FUN_146843e74(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_146843dd4(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x2c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146844030(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146843ce6 FUN_146843ce6 body=238 status=ok
// SIG undefined FUN_146843ce6(void)

int * FUN_146843ce6(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 146843dd4 FUN_146843dd4 body=160 status=ok
// SIG undefined FUN_146843dd4(void)

undefined8 FUN_146843dd4(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar11 = FUN_146843ee6(), iVar11 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x30);
    plVar2 = (longlong *)(*param_1 + (longlong)iVar11 * 0x30);
    (*(code *)(&PTR_caseD_3_149e43c90)[*(byte *)(plVar2 + 4)])(plVar2 + 2);
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_3 + 8);
    puVar1[4] = uVar7;
    puVar1[5] = uVar8;
    puVar1[6] = uVar9;
    puVar1[7] = uVar10;
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_146843fb6(param_1,*param_4);
    *param_4 = iVar11;
    return 1;
  }
  return 0;
}



// FUNCTION 146843e74 FUN_146843e74 body=114 status=ok
// SIG undefined FUN_146843e74(void)

undefined8 * FUN_146843e74(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  void *_Src;
  
  *param_1 = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar2,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
  }
  bVar1 = *(byte *)(param_3 + 0x10);
  *(byte *)(param_1 + 4) = bVar1;
  (*(code *)(&PTR_LAB_149e450a0)[bVar1])(param_1 + 2,param_3);
  return param_1;
}



// FUNCTION 146843ee6 FUN_146843ee6 body=207 status=ok
// SIG undefined FUN_146843ee6(void)

int FUN_146843ee6(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_146843f30:
      lVar10 = (longlong)iVar1 * 0x30;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_146843faa;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_146843faa;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_146843f9b;
    }
  }
  return -1;
LAB_146843faa:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_146843f9b:
  iVar1 = *(int *)(lVar4 + 0x28 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_146843f30;
}



// FUNCTION 146843fb6 FUN_146843fb6 body=122 status=ok
// SIG undefined FUN_146843fb6(void)

void FUN_146843fb6(longlong *param_1,int param_2)

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



// FUNCTION 146844030 FUN_146844030 body=480 status=ok
// SIG undefined FUN_146844030(void)

void FUN_146844030(longlong *param_1)

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
        lVar11 = (longlong)iVar12 * 0x30;
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
        *(int *)(lVar3 + 0x2c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar11) =
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



// FUNCTION 146844212 FUN_146844212 body=330 status=ok
// SIG undefined FUN_146844212(void)

void FUN_146844212(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  int local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    plVar3 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar3[1] = (longlong)&DAT_100000001;
    *plVar3 = (longlong)&PTR_FUN_149e441a0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[9] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[10] = 0;
    plVar3[0xb] = 0;
    *(undefined4 *)((longlong)plVar3 + 0x3c) = 0x80;
    *(undefined4 *)(plVar3 + 8) = 0xffffffff;
    FUN_14684435e(param_1,plVar3 + 2,param_3);
    local_50 = *param_3;
    local_48 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      local_48 = 0;
    }
    FUN_1449ba96e(plVar3 + 2,&local_40);
    if (local_40 != 0) {
      FUN_1468447ee(&local_40,param_3,param_2);
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684435e FUN_14684435e body=1167 status=ok
// SIG undefined FUN_14684435e(void)

void FUN_14684435e(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_118 [36];
  int local_f4;
  longlong *local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  int local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  int local_a0;
  longlong *local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    local_e0 = *param_3;
    local_d8 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      local_d8 = 0;
    }
    FUN_14683939c(param_2);
    goto LAB_14684473c;
  }
  local_98 = (longlong *)0x0;
  plStack_90 = (longlong *)0x0;
  local_d0 = (longlong *)0x0;
  local_a8 = *param_3;
  local_a0 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    local_a0 = 0;
  }
  bVar6 = FUN_146839966(param_2,&local_a8,&local_d0);
  plVar3 = plStack_90;
  if ((local_d0 != (longlong *)0x0 & bVar6) == 1) {
    local_98 = (longlong *)*local_d0;
    plVar9 = (longlong *)local_d0[1];
    if (plVar9 == (longlong *)0x0) {
      plStack_90 = (longlong *)0x0;
      plVar9 = plStack_90;
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      if (plStack_90 != (longlong *)0x0) {
        LOCK();
        plVar5 = plStack_90 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          puVar12 = (undefined8 *)*plStack_90;
          plStack_90 = plVar9;
          (*(code *)*puVar12)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          plVar9 = plStack_90;
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            plVar9 = plStack_90;
          }
        }
      }
    }
  }
  else {
    plVar9 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar3 = plStack_90;
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_149e441a0;
    local_98 = plVar9 + 2;
    plVar9[6] = 0;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[9] = 0;
    plVar9[2] = 0;
    plVar9[3] = 0;
    plVar9[4] = 0;
    plVar9[5] = 0;
    plVar9[10] = 0;
    plVar9[0xb] = 0;
    *(undefined4 *)((longlong)plVar9 + 0x3c) = 0x80;
    *(undefined4 *)(plVar9 + 8) = 0xffffffff;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      if (plVar9 == plStack_90) {
        LOCK();
        plVar3 = plVar9 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        plVar5 = plStack_90;
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar7 = *piVar1;
          UNLOCK();
          plVar3 = plVar9;
joined_r0x000146844791:
          plVar5 = plStack_90;
          if (iVar7 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            plVar5 = plStack_90;
          }
        }
      }
      else {
        plVar5 = plVar9;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_90 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            puVar12 = (undefined8 *)*plStack_90;
            plStack_90 = plVar9;
            (*(code *)*puVar12)(plVar3);
            LOCK();
            piVar1 = (int *)((longlong)plVar3 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar7 = *piVar1;
            UNLOCK();
            goto joined_r0x000146844791;
          }
        }
      }
      plStack_90 = plVar5;
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
    FUN_146839bec(param_2,param_3,&local_98);
    plVar9 = plStack_90;
  }
  plStack_90 = plVar9;
  if (local_98 != (longlong *)0x0) {
    local_f0 = param_1 + 2;
    local_88 = 0x100000000;
    local_78 = 0xffffffff;
    uStack_70 = 0;
    uStack_80 = local_f0;
    if ((int)param_1[5] == 0) {
      local_f4 = 0;
    }
    else {
      FUN_1449c0562(&local_88);
      local_f4 = (int)param_1[5];
    }
    uStack_b0 = CONCAT44(uStack_6c,uStack_70);
    local_b8 = local_78;
    uVar11 = local_b8;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (int)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_b8._4_4_ = (int)((ulonglong)local_78 >> 0x20);
    iVar7 = local_b8._4_4_;
    local_e8 = param_1;
    local_d0 = param_1;
    if ((local_b8._4_4_ != local_f4) || (local_b8 = uVar11, uStack_80 != local_f0)) {
      do {
        local_b8 = uVar11;
        lVar4 = *local_d0;
        lVar10 = (longlong)iVar7;
        local_88 = 0;
        uStack_80 = (longlong *)0x0;
        lVar14 = (longlong)*(int *)(lVar4 + 0x18 + lVar10 * 0x28);
        if (lVar14 != 0) {
          lVar13 = *(longlong *)(lVar4 + 0x10 + lVar10 * 0x28);
          lVar14 = lVar14 << 4;
          do {
            uVar11 = FUN_14001cc68(0x20,0x10);
            FUN_14047c0ce(uVar11,lVar13);
            puVar12 = (undefined8 *)FUN_14001cc68(0x18,0x10);
            plVar3 = uStack_80;
            puVar12[1] = &DAT_100000001;
            *puVar12 = &PTR_LAB_149e490e0;
            puVar12[2] = uVar11;
            lVar15 = (longlong)(int)uStack_80;
            uVar8 = (int)uStack_80 + 1;
            uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,uVar8);
            if (uStack_80._4_4_ < uVar8) {
              FUN_14047d050(&local_88,(ulonglong)plVar3 & 0xffffffff);
            }
            *(undefined8 *)(local_88 + lVar15 * 0x10) = uVar11;
            *(undefined8 **)(local_88 + 8 + lVar15 * 0x10) = puVar12;
            lVar13 = lVar13 + 0x10;
            lVar14 = lVar14 + -0x10;
          } while (lVar14 != 0);
        }
        FUN_14683985c(local_98,lVar4 + lVar10 * 0x28,&local_88);
        FUN_14047c710(local_88,(ulonglong)uStack_80 & 0xffffffff);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        local_b8 = CONCAT44(local_b8._4_4_,(uint)local_b8 & ~uStack_c4);
        FUN_1449c0562(&local_c8);
        iVar7 = local_b8._4_4_;
        uVar11 = local_b8;
      } while (local_d0 != local_e8 ||
               ((longlong *)CONCAT44(uStack_bc,uStack_c0) != local_f0 || local_b8._4_4_ != local_f4)
              );
    }
  }
  plVar3 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_90 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_14684473c:
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468447ee FUN_1468447ee body=193 status=ok
// SIG undefined FUN_1468447ee(void)

void FUN_1468447ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14001cc68(0x38,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149e442f0;
  FUN_145927f00(plVar3 + 2,param_2,param_1);
  local_40 = plVar3 + 2;
  local_38 = plVar3;
  FUN_145d35a58(&local_40,param_3,1);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468448b0 FUN_1468448b0 body=82 status=ok
// SIG undefined FUN_1468448b0(void)

undefined8 * FUN_1468448b0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 146844902 FUN_146844902 body=76 status=ok
// SIG undefined FUN_146844902(void)

void FUN_146844902(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  wchar_t *local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = L"Name";
  local_10 = 4;
  FUN_14047fa10(param_1,&local_18,param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146844954 FUN_146844954 body=307 status=ok
// SIG undefined FUN_146844954(void)

void FUN_146844954(longlong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(local_38,L"Name");
  FUN_145964e64(param_2,local_38,param_1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((ulonglong)*(uint *)(param_1 + 0x10) < 6) {
    puVar1 = (&PTR_u_Never_149e49cd0)[*(uint *)(param_1 + 0x10)];
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  FUN_140056680(local_38,puVar1);
  FUN_140056680(local_48,L"LoadingPolicy");
  FUN_145964f10(param_2,local_48,local_38);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((ulonglong)*(uint *)(param_1 + 0x14) < 3) {
    puVar1 = (&PTR_u_Never_149e49d00)[*(uint *)(param_1 + 0x14)];
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  FUN_140056680(local_38,puVar1);
  FUN_140056680(local_48,L"ConfigGenerationPolicy");
  FUN_145964f10(param_2,local_48,local_38);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146844a88 FUN_146844a88 body=166 status=ok
// SIG undefined FUN_146844a88(void)

void FUN_146844a88(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined1 auStack_48 [44];
  undefined2 local_1c;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146850c14(param_1,*param_2);
  local_1c = 0x20;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1c,2);
  local_1a = 0x5b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x20) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146844b30 FUN_146844b30 body=424 status=ok
// SIG undefined FUN_146844b30(void)

void FUN_146844b30(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined8 **local_b8;
  undefined8 **local_b0;
  undefined8 *local_a8;
  longlong local_98 [2];
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  puVar1 = local_68;
  local_60 = 2;
  *local_68 = &PTR_LAB_149e49370;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e49300;
  puVar1[3] = &LAB_14684494f;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  puVar1 = local_78;
  local_70 = 2;
  *local_78 = &PTR_LAB_149e49290;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e49220;
  puVar1[3] = FUN_146844902;
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  puVar1 = local_88;
  local_80 = 2;
  *local_88 = &PTR_LAB_149e491b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e49140;
  puVar1[3] = FUN_1468448b0;
  FUN_140056680(local_98,L"LocalizationTargets");
  local_b8 = &local_78;
  local_b0 = &local_68;
  local_a8 = &local_58;
  FUN_146844cda(param_1,local_98,param_2,&local_88);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146844cda FUN_146844cda body=2003 status=ok
// SIG undefined FUN_146844cda(void)

void FUN_146844cda(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7)

{
  int *piVar1;
  bool bVar2;
  longlong **pplVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_198 [40];
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  int local_150;
  longlong **local_148;
  undefined8 uStack_140;
  undefined1 *local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_118;
  undefined8 local_110;
  int local_108;
  longlong *local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined1 local_dc [4];
  longlong *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_170 = param_4;
  if ((int)param_3[1] < 1) {
    local_158 = *param_2;
    local_150 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_150 = 0;
    }
    FUN_14683939c();
  }
  else {
    local_f8 = 0;
    uStack_f0 = 0;
    local_110 = *param_2;
    local_108 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_108 = 0;
    }
    local_168 = param_2;
    local_160 = param_1;
    cVar6 = FUN_140480164(param_1,&local_110,&local_100);
    puVar10 = local_170;
    if (cVar6 == '\0') {
      if ((longlong)(int)param_3[1] != 0) {
        lVar15 = *param_3;
        lVar16 = (longlong)(int)param_3[1] * 0x18;
        do {
          puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          puVar10[4] = 0;
          *(undefined4 *)(puVar10 + 5) = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000080;
          *(undefined4 *)((longlong)puVar10 + 0x34) = 0;
          puVar10[8] = 0;
          *(undefined4 *)(puVar10 + 9) = 0;
          plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
          plVar11[1] = (longlong)&DAT_100000001;
          *plVar11 = (longlong)&PTR_FUN_149e49100;
          plVar11[2] = (longlong)puVar10;
          plVar13 = (longlong *)0x0;
          if (*(int *)(param_6 + 1) != 0) {
            plVar13 = (longlong *)*param_6;
          }
          (**(code **)(*plVar13 + 0x58))(plVar13,lVar15,puVar10);
          puVar12 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          *puVar12 = &PTR_FUN_149e440f0;
          puVar12[2] = puVar10;
          puVar12[3] = plVar11;
          *(undefined4 *)(puVar12 + 1) = 6;
          puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          uVar5 = uStack_f0;
          puVar10[1] = &DAT_100000001;
          *puVar10 = &PTR_FUN_149e49120;
          puVar10[2] = puVar12;
          lVar17 = (longlong)(int)uStack_f0;
          uVar7 = (int)uStack_f0 + 1;
          uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
          if (uStack_f0._4_4_ < uVar7) {
            FUN_14047d050(&local_f8,uVar5 & 0xffffffff);
          }
          *(undefined8 **)(local_f8 + lVar17 * 0x10) = puVar12;
          *(undefined8 **)(local_f8 + 8 + lVar17 * 0x10) = puVar10;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar11 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
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
          lVar15 = lVar15 + 0x18;
          lVar16 = lVar16 + -0x18;
        } while (lVar16 != 0);
      }
    }
    else {
      local_98 = 0;
      local_90 = 0;
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      if ((longlong)(int)param_3[1] != 0) {
        lVar15 = *param_3;
        lVar16 = (longlong)(int)param_3[1] * 0x18;
        do {
          if (*(int *)(puVar10 + 1) == 0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = (longlong *)*puVar10;
          }
          local_118 = lVar15;
          (**(code **)(*plVar13 + 0x58))(plVar13,&local_d8,lVar15);
          local_148 = &local_d8;
          uStack_140 = &local_118;
          FUN_146850d26(&local_b8,local_dc,&local_148);
          if (local_d8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          lVar15 = lVar15 + 0x18;
          lVar16 = lVar16 + -0x18;
        } while (lVar16 != 0);
      }
      if ((longlong)(int)local_100[1] != 0) {
        puVar10 = (undefined8 *)*local_100;
        puVar12 = puVar10 + (longlong)(int)local_100[1] * 2;
        do {
          plVar13 = (longlong *)*puVar10;
          plVar11 = (longlong *)puVar10[1];
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          cVar6 = (**(code **)(*plVar13 + 0x80))(plVar13,&local_d8);
          if (cVar6 != '\0') {
            local_148 = (longlong **)0x0;
            uStack_140 = (longlong *)0x0;
            if (*(int *)(param_5 + 1) == 0) {
              plVar14 = (longlong *)0x0;
            }
            else {
              plVar14 = (longlong *)*param_5;
            }
            cVar6 = (**(code **)(*plVar14 + 0x58))(plVar14,*local_d8,&local_148);
            if (cVar6 != '\0') {
              iVar9 = (int)uStack_140 + -1;
              pplVar3 = local_148;
              if ((int)uStack_140 == 0) {
                iVar9 = 0;
                pplVar3 = (longlong **)&DAT_149dfb77a;
              }
              uVar8 = FUN_144a49b4a(iVar9,pplVar3);
              iVar9 = FUN_146850fda(&local_b8,uVar8,&local_148);
              if (local_b8 + (longlong)iVar9 * 4 != (longlong *)0x0 && iVar9 != -1) {
                if (*(int *)(param_6 + 1) == 0) {
                  plVar14 = (longlong *)0x0;
                }
                else {
                  plVar14 = (longlong *)*param_6;
                }
                (**(code **)(*plVar14 + 0x58))
                          (plVar14,(local_b8 + (longlong)iVar9 * 4)[2],*local_d8);
                uVar5 = uStack_f0;
                lVar15 = (longlong)(int)uStack_f0;
                uVar7 = (int)uStack_f0 + 1;
                uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
                if (uStack_f0._4_4_ < uVar7) {
                  FUN_14047d050(&local_f8,uVar5 & 0xffffffff);
                }
                *(longlong **)(local_f8 + lVar15 * 0x10) = plVar13;
                *(longlong **)(local_f8 + 8 + lVar15 * 0x10) = plVar11;
                if (plVar11 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                  UNLOCK();
                }
                FUN_1468512f6(&local_b8,&local_148);
              }
            }
            if (local_148 != (longlong **)0x0) {
              FUN_1400020a8();
            }
          }
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar11 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
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
          puVar10 = puVar10 + 2;
        } while (puVar10 != puVar12);
      }
      local_d0 = local_a8;
      local_d8 = (longlong *)&DAT_100000000;
      local_c8 = 0xffffffff;
      local_c0 = 0;
      if (local_90 != 0) {
        FUN_1449c0562(&local_d8);
      }
      local_130 = local_c8;
      uVar4 = local_130;
      local_128 = local_c0;
      local_124 = local_bc;
      uStack_140 = local_d8;
      local_138 = local_d0;
      local_148 = &local_b8;
      local_130._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
      bVar2 = local_130._4_4_ < *(int *)(local_d0 + 0x18);
      iVar9 = local_130._4_4_;
      local_130 = uVar4;
      if (bVar2) {
        do {
          puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          puVar10[4] = 0;
          *(undefined4 *)(puVar10 + 5) = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000080;
          *(undefined4 *)((longlong)puVar10 + 0x34) = 0;
          puVar10[8] = 0;
          *(undefined4 *)(puVar10 + 9) = 0;
          plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
          plVar11[1] = (longlong)&DAT_100000001;
          *plVar11 = (longlong)&PTR_FUN_149e49100;
          plVar11[2] = (longlong)puVar10;
          plVar13 = (longlong *)0x0;
          if (*(int *)(param_6 + 1) != 0) {
            plVar13 = (longlong *)*param_6;
          }
          (**(code **)(*plVar13 + 0x58))(plVar13,(*local_148)[(longlong)iVar9 * 4 + 2],puVar10);
          puVar12 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          *puVar12 = &PTR_FUN_149e440f0;
          puVar12[2] = puVar10;
          puVar12[3] = plVar11;
          *(undefined4 *)(puVar12 + 1) = 6;
          puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          uVar5 = uStack_f0;
          puVar10[1] = &DAT_100000001;
          *puVar10 = &PTR_FUN_149e49120;
          puVar10[2] = puVar12;
          lVar15 = (longlong)(int)uStack_f0;
          uVar7 = (int)uStack_f0 + 1;
          uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
          if (uStack_f0._4_4_ < uVar7) {
            FUN_14047d050(&local_f8,uVar5 & 0xffffffff);
          }
          *(undefined8 **)(local_f8 + lVar15 * 0x10) = puVar12;
          *(undefined8 **)(local_f8 + 8 + lVar15 * 0x10) = puVar10;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar11 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
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
          local_130 = CONCAT44(local_130._4_4_,(uint)local_130 & ~uStack_140._4_4_);
          FUN_1449c0562(&uStack_140);
          bVar2 = local_130._4_4_ < *(int *)(local_138 + 0x18);
          iVar9 = local_130._4_4_;
        } while (bVar2);
      }
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_1468514bc(&local_b8);
    }
    if (((int)param_7[1] != 0) && (plVar13 = (longlong *)*param_7, plVar13 != (longlong *)0x0)) {
      (**(code **)(*plVar13 + 0x60))(plVar13,&local_f8);
    }
    FUN_14683985c(local_160,local_168,&local_f8);
    FUN_14047c710(local_f8,uStack_f0 & 0xffffffff);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1449db362(local_170);
  FUN_1449db362(param_5);
  FUN_1449db362(param_6);
  FUN_1449db362(param_7);
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468454ae FUN_1468454ae body=28 status=ok
// SIG undefined FUN_1468454ae(void)

undefined8 FUN_1468454ae(undefined8 param_1,undefined8 param_2)

{
  FUN_1400021e4(param_2,param_1);
  return param_1;
}



// FUNCTION 1468454ca FUN_1468454ca body=76 status=ok
// SIG undefined FUN_1468454ca(void)

void FUN_1468454ca(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  wchar_t *local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = L"Name";
  local_10 = 4;
  FUN_14047fa10(param_1,&local_18,param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684551c FUN_14684551c body=210 status=ok
// SIG undefined FUN_14684551c(void)

void FUN_14684551c(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_28[1] = (longlong)&DAT_100000001;
  *local_28 = (longlong)&PTR_FUN_149e441a0;
  local_30 = local_28 + 2;
  local_28[6] = 0;
  local_28[7] = 0;
  local_28[8] = 0;
  local_28[9] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = 0;
  local_28[5] = 0;
  local_28[10] = 0;
  local_28[0xb] = 0;
  *(undefined4 *)((longlong)local_28 + 0x3c) = 0x80;
  *(undefined4 *)(local_28 + 8) = 0xffffffff;
  FUN_14279ed54(param_1);
  FUN_145d35994(&local_30,param_2,1);
  plVar3 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468455f0 FUN_1468455f0 body=145 status=ok
// SIG undefined FUN_1468455f0(void)

void FUN_1468455f0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = L"Modules";
  if (0 < (int)param_2[1]) {
    FUN_146844a88(param_1,&local_28);
    if ((longlong)(int)param_2[1] != 0) {
      lVar2 = *param_2;
      lVar1 = (longlong)(int)param_2[1] * 0x168;
      do {
        FUN_14684551c(lVar2,param_1);
        lVar2 = lVar2 + 0x168;
        lVar1 = lVar1 + -0x168;
      } while (lVar1 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146845692 FUN_146845692 body=424 status=ok
// SIG undefined FUN_146845692(void)

void FUN_146845692(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined8 **local_b8;
  undefined8 **local_b0;
  undefined8 *local_a8;
  longlong local_98 [2];
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  puVar1 = local_68;
  local_60 = 2;
  *local_68 = &PTR_LAB_149e49530;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e494c0;
  puVar1[3] = &LAB_146845517;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  puVar1 = local_78;
  local_70 = 2;
  *local_78 = &PTR_LAB_149e49290;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e49220;
  puVar1[3] = FUN_1468454ca;
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  puVar1 = local_88;
  local_80 = 2;
  *local_88 = &PTR_LAB_149e49450;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e493e0;
  puVar1[3] = FUN_1468454ae;
  FUN_140056680(local_98,L"Modules");
  local_b8 = &local_78;
  local_b0 = &local_68;
  local_a8 = &local_58;
  FUN_14684583c(param_1,local_98,param_2,&local_88);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684583c FUN_14684583c body=2013 status=ok
// SIG undefined FUN_14684583c(void)

void FUN_14684583c(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7)

{
  int *piVar1;
  bool bVar2;
  longlong **pplVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_198 [40];
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  int local_150;
  longlong **local_148;
  undefined8 uStack_140;
  undefined1 *local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_118;
  undefined8 local_110;
  int local_108;
  longlong *local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined1 local_dc [4];
  longlong *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_170 = param_4;
  if ((int)param_3[1] < 1) {
    local_158 = *param_2;
    local_150 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_150 = 0;
    }
    FUN_14683939c();
  }
  else {
    local_f8 = 0;
    uStack_f0 = 0;
    local_110 = *param_2;
    local_108 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_108 = 0;
    }
    local_168 = param_2;
    local_160 = param_1;
    cVar6 = FUN_140480164(param_1,&local_110,&local_100);
    puVar10 = local_170;
    if (cVar6 == '\0') {
      if ((longlong)(int)param_3[1] != 0) {
        lVar15 = *param_3;
        lVar16 = (longlong)(int)param_3[1] * 0x168;
        do {
          puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          puVar10[4] = 0;
          *(undefined4 *)(puVar10 + 5) = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000080;
          *(undefined4 *)((longlong)puVar10 + 0x34) = 0;
          puVar10[8] = 0;
          *(undefined4 *)(puVar10 + 9) = 0;
          plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
          plVar11[1] = (longlong)&DAT_100000001;
          *plVar11 = (longlong)&PTR_FUN_149e49100;
          plVar11[2] = (longlong)puVar10;
          plVar13 = (longlong *)0x0;
          if (*(int *)(param_6 + 1) != 0) {
            plVar13 = (longlong *)*param_6;
          }
          (**(code **)(*plVar13 + 0x58))(plVar13,lVar15,puVar10);
          puVar12 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          *puVar12 = &PTR_FUN_149e440f0;
          puVar12[2] = puVar10;
          puVar12[3] = plVar11;
          *(undefined4 *)(puVar12 + 1) = 6;
          puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          uVar5 = uStack_f0;
          puVar10[1] = &DAT_100000001;
          *puVar10 = &PTR_FUN_149e49120;
          puVar10[2] = puVar12;
          lVar17 = (longlong)(int)uStack_f0;
          uVar7 = (int)uStack_f0 + 1;
          uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
          if (uStack_f0._4_4_ < uVar7) {
            FUN_14047d050(&local_f8,uVar5 & 0xffffffff);
          }
          *(undefined8 **)(local_f8 + lVar17 * 0x10) = puVar12;
          *(undefined8 **)(local_f8 + 8 + lVar17 * 0x10) = puVar10;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar11 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
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
          lVar15 = lVar15 + 0x168;
          lVar16 = lVar16 + -0x168;
        } while (lVar16 != 0);
      }
    }
    else {
      local_98 = 0;
      local_90 = 0;
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      if ((longlong)(int)param_3[1] != 0) {
        lVar15 = *param_3;
        lVar16 = (longlong)(int)param_3[1] * 0x168;
        do {
          if (*(int *)(puVar10 + 1) == 0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = (longlong *)*puVar10;
          }
          local_118 = lVar15;
          (**(code **)(*plVar13 + 0x58))(plVar13,&local_d8,lVar15);
          local_148 = &local_d8;
          uStack_140 = &local_118;
          FUN_146851bb6(&local_b8,local_dc,&local_148);
          if (local_d8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          lVar15 = lVar15 + 0x168;
          lVar16 = lVar16 + -0x168;
        } while (lVar16 != 0);
      }
      if ((longlong)(int)local_100[1] != 0) {
        puVar10 = (undefined8 *)*local_100;
        puVar12 = puVar10 + (longlong)(int)local_100[1] * 2;
        do {
          plVar13 = (longlong *)*puVar10;
          plVar11 = (longlong *)puVar10[1];
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          cVar6 = (**(code **)(*plVar13 + 0x80))(plVar13,&local_d8);
          if (cVar6 != '\0') {
            local_148 = (longlong **)0x0;
            uStack_140 = (longlong *)0x0;
            if (*(int *)(param_5 + 1) == 0) {
              plVar14 = (longlong *)0x0;
            }
            else {
              plVar14 = (longlong *)*param_5;
            }
            cVar6 = (**(code **)(*plVar14 + 0x58))(plVar14,*local_d8,&local_148);
            if (cVar6 != '\0') {
              iVar9 = (int)uStack_140 + -1;
              pplVar3 = local_148;
              if ((int)uStack_140 == 0) {
                iVar9 = 0;
                pplVar3 = (longlong **)&DAT_149dfb77a;
              }
              uVar8 = FUN_144a49b4a(iVar9,pplVar3);
              iVar9 = FUN_146851e6a(&local_b8,uVar8,&local_148);
              if (local_b8 + (longlong)iVar9 * 4 != (longlong *)0x0 && iVar9 != -1) {
                if (*(int *)(param_6 + 1) == 0) {
                  plVar14 = (longlong *)0x0;
                }
                else {
                  plVar14 = (longlong *)*param_6;
                }
                (**(code **)(*plVar14 + 0x58))
                          (plVar14,(local_b8 + (longlong)iVar9 * 4)[2],*local_d8);
                uVar5 = uStack_f0;
                lVar15 = (longlong)(int)uStack_f0;
                uVar7 = (int)uStack_f0 + 1;
                uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
                if (uStack_f0._4_4_ < uVar7) {
                  FUN_14047d050(&local_f8,uVar5 & 0xffffffff);
                }
                *(longlong **)(local_f8 + lVar15 * 0x10) = plVar13;
                *(longlong **)(local_f8 + 8 + lVar15 * 0x10) = plVar11;
                if (plVar11 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                  UNLOCK();
                }
                FUN_146852186(&local_b8,&local_148);
              }
            }
            if (local_148 != (longlong **)0x0) {
              FUN_1400020a8();
            }
          }
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar11 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
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
          puVar10 = puVar10 + 2;
        } while (puVar10 != puVar12);
      }
      local_d0 = local_a8;
      local_d8 = (longlong *)&DAT_100000000;
      local_c8 = 0xffffffff;
      local_c0 = 0;
      if (local_90 != 0) {
        FUN_1449c0562(&local_d8);
      }
      local_130 = local_c8;
      uVar4 = local_130;
      local_128 = local_c0;
      local_124 = local_bc;
      uStack_140 = local_d8;
      local_138 = local_d0;
      local_148 = &local_b8;
      local_130._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
      bVar2 = local_130._4_4_ < *(int *)(local_d0 + 0x18);
      iVar9 = local_130._4_4_;
      local_130 = uVar4;
      if (bVar2) {
        do {
          puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          puVar10[4] = 0;
          *(undefined4 *)(puVar10 + 5) = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000080;
          *(undefined4 *)((longlong)puVar10 + 0x34) = 0;
          puVar10[8] = 0;
          *(undefined4 *)(puVar10 + 9) = 0;
          plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
          plVar11[1] = (longlong)&DAT_100000001;
          *plVar11 = (longlong)&PTR_FUN_149e49100;
          plVar11[2] = (longlong)puVar10;
          plVar13 = (longlong *)0x0;
          if (*(int *)(param_6 + 1) != 0) {
            plVar13 = (longlong *)*param_6;
          }
          (**(code **)(*plVar13 + 0x58))(plVar13,(*local_148)[(longlong)iVar9 * 4 + 2],puVar10);
          puVar12 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          *puVar12 = &PTR_FUN_149e440f0;
          puVar12[2] = puVar10;
          puVar12[3] = plVar11;
          *(undefined4 *)(puVar12 + 1) = 6;
          puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          uVar5 = uStack_f0;
          puVar10[1] = &DAT_100000001;
          *puVar10 = &PTR_FUN_149e49120;
          puVar10[2] = puVar12;
          lVar15 = (longlong)(int)uStack_f0;
          uVar7 = (int)uStack_f0 + 1;
          uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
          if (uStack_f0._4_4_ < uVar7) {
            FUN_14047d050(&local_f8,uVar5 & 0xffffffff);
          }
          *(undefined8 **)(local_f8 + lVar15 * 0x10) = puVar12;
          *(undefined8 **)(local_f8 + 8 + lVar15 * 0x10) = puVar10;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar11 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
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
          local_130 = CONCAT44(local_130._4_4_,(uint)local_130 & ~uStack_140._4_4_);
          FUN_1449c0562(&uStack_140);
          bVar2 = local_130._4_4_ < *(int *)(local_138 + 0x18);
          iVar9 = local_130._4_4_;
        } while (bVar2);
      }
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_146852312(&local_b8);
    }
    if (((int)param_7[1] != 0) && (plVar13 = (longlong *)*param_7, plVar13 != (longlong *)0x0)) {
      (**(code **)(*plVar13 + 0x60))(plVar13,&local_f8);
    }
    FUN_14683985c(local_160,local_168,&local_f8);
    FUN_14047c710(local_f8,uStack_f0 & 0xffffffff);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1449db362(local_170);
  FUN_1449db362(param_5);
  FUN_1449db362(param_6);
  FUN_1449db362(param_7);
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684601a FUN_14684601a body=476 status=ok
// SIG undefined FUN_14684601a(void)

void FUN_14684601a(int param_1,undefined8 *param_2,undefined8 param_3,char param_4,
                  undefined1 param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 unaff_RBP;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_e8;
  undefined4 local_dc;
  longlong *local_d8;
  undefined4 *local_d0;
  undefined1 local_c4 [4];
  longlong *local_c0 [2];
  longlong *local_b0;
  char local_84;
  ulonglong local_60;
  
  uVar2 = DAT_14c872be8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_e8 = param_3;
  FUN_144a5dc74(&local_d8);
  local_f8 = uVar2;
  FUN_140997f46(local_c0,(float)*(int *)(param_2 + 1),&local_d8,1);
  FUN_140997a0e(local_c0);
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x10))();
  }
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    plVar5 = (longlong *)*param_2;
    lVar4 = (longlong)*(int *)(param_2 + 1) * 0x168;
    do {
      FUN_144a5dc74(&local_d8);
      FUN_140997b30(local_c0,0x3f800000,&local_d8);
      if (local_d8 != (longlong *)0x0) {
        (**(code **)(*local_d8 + 0x10))();
      }
      if (*(int *)((longlong)plVar5 + 0xc) == param_1) {
        uVar2 = FUN_144a52528();
        plVar3 = (longlong *)FUN_1401e3324(uVar2,*plVar5);
        if (plVar3 != (longlong *)0x0) {
          cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3);
          if (cVar1 == '\0') {
            local_dc = 1;
            local_d0 = &local_dc;
            local_d8 = plVar5;
            FUN_146852d10(local_e8,local_c4,&local_d8);
          }
          else if (param_4 == '\0') {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            uVar2 = FUN_144a52528();
            FUN_14156ce54(uVar2,*plVar5,0,
                          CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
          }
        }
      }
      plVar5 = plVar5 + 0x2d;
      lVar4 = lVar4 + -0x168;
    } while (lVar4 != 0);
  }
  FUN_140997a5c(local_c0);
  if (local_84 == '\x01') {
    local_84 = '\0';
  }
  if (local_b0 != (longlong *)0x0) {
    (**(code **)(*local_b0 + 0x10))();
  }
  if (local_c0[0] != (longlong *)0x0) {
    (**(code **)(*local_c0[0] + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468461f7 FUN_1468461f7 body=565 status=ok
// SIG undefined FUN_1468461f7(void)

undefined4 FUN_1468461f7(wchar_t *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 uVar5;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  longlong *local_e0 [2];
  undefined8 local_d0;
  longlong *local_c8;
  wchar_t *local_c0;
  undefined4 local_b8;
  longlong *local_b0 [2];
  longlong *local_a0 [2];
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar5 = 0;
  uVar3 = FUN_140f7cb10(param_2,param_1,0,0);
  if (param_3 != 0 && (char)uVar3 == '\0') {
    local_c0 = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar4 = wcslen(param_1);
      uVar5 = (int)sVar4;
    }
    local_b8 = uVar5;
    FUN_1417036e0(local_b0);
    local_60 = L"FailedToLoadDescriptorFile";
    local_58 = 0x1a;
    FUN_1446e940c(local_e4,&local_60);
    local_60 = L"PluginDescriptor";
    local_58 = 0x10;
    FUN_1446e940c(local_e8,&local_60);
    FUN_140208bae(local_e0,local_e8,local_e4,L"Failed to open descriptor file \'{0}\'");
    FUN_14023409e(&local_d0,local_e0,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_b0);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_d0;
    local_88 = local_c8;
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_a0,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_c8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_c8)(local_c8);
        LOCK();
        piVar2 = (int *)((longlong)local_c8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_c8 + 0x10))(local_c8);
        }
      }
    }
    if (local_b0[0] != (longlong *)0x0) {
      (**(code **)(*local_b0[0] + 0x10))();
    }
    FUN_140008f88(param_3,local_a0);
    if (local_a0[0] != (longlong *)0x0) {
      (**(code **)(*local_a0[0] + 0x10))();
    }
    if (local_e0[0] != (longlong *)0x0) {
      (**(code **)(*local_e0[0] + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684642d FUN_14684642d body=611 status=ok
// SIG undefined FUN_14684642d(void)

undefined4 FUN_14684642d(wchar_t *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  size_t sVar5;
  int iVar6;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  longlong *local_f0 [2];
  undefined8 local_e0;
  longlong *local_d8;
  wchar_t *local_d0;
  int local_c8;
  longlong *local_c0 [2];
  longlong *local_b0 [2];
  undefined8 local_a0;
  int local_98;
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar4 = FUN_14054d1d4();
  local_a0 = *param_2;
  iVar6 = 0;
  local_98 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    local_98 = iVar6;
  }
  local_108 = 0;
  uVar3 = FUN_1415d54ec(&local_a0,param_1,0,uVar4);
  if (param_3 != 0 && (char)uVar3 == '\0') {
    local_d0 = param_1;
    if (param_1 != (wchar_t *)0x0) {
      sVar5 = wcslen(param_1);
      iVar6 = (int)sVar5;
    }
    local_c8 = iVar6;
    FUN_1417036e0(local_c0);
    local_60 = L"FailedToWriteDescriptorFile";
    local_58 = 0x1b;
    FUN_1446e940c(local_f4,&local_60);
    local_60 = L"PluginDescriptor";
    local_58 = 0x10;
    FUN_1446e940c(local_f8,&local_60);
    FUN_140208bae(local_f0,local_f8,local_f4,
                  L"Failed to write plugin descriptor file \'{0}\'. Perhaps the file is Read-Only?")
    ;
    FUN_14023409e(&local_e0,local_f0,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_c0);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_e0;
    local_88 = local_d8;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_b0,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_d8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_d8)(local_d8);
        LOCK();
        piVar2 = (int *)((longlong)local_d8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_d8 + 0x10))(local_d8);
        }
      }
    }
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
    FUN_140008f88(param_3,local_b0);
    if (local_b0[0] != (longlong *)0x0) {
      (**(code **)(*local_b0[0] + 0x10))();
    }
    if (local_f0[0] != (longlong *)0x0) {
      (**(code **)(*local_f0[0] + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146846691 FUN_146846691 body=685 status=ok
// SIG undefined FUN_146846691(void)

longlong * FUN_146846691(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_128 [40];
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  longlong *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  FUN_14047afda(&local_b8);
  cVar3 = FUN_14047b282(local_b8,&local_a8,0);
  if ((cVar3 == '\0') || (local_a8 == 0)) {
    plVar4 = param_1;
    if (param_3 != 0) {
      FUN_140009b9a(local_d8,local_b8 + 0x38);
      local_60 = L"FailedToReadDescriptorFile";
      local_58 = 0x1a;
      FUN_1446e940c(local_fc,&local_60);
      local_60 = L"PluginDescriptor";
      local_58 = 0x10;
      FUN_1446e940c(local_100,&local_60);
      FUN_140208bae(local_f8,local_100,local_fc,L"Failed to read file. {0}");
      FUN_14023409e(&local_e8,local_f8,1);
      local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
      FUN_14023423e(local_50,local_d8);
      local_78 = &local_40;
      local_80 = &local_60;
      FUN_14010d304(&local_70);
      local_90 = local_e8;
      local_88 = local_e0;
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_c8,&local_90,&local_70);
      FUN_14007f2db(local_70,local_68);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      if (local_50[0] != (longlong *)0x0) {
        (**(code **)(*local_50[0] + 0x10))();
      }
      if (local_e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_e0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_e0)(local_e0);
          LOCK();
          piVar2 = (int *)((longlong)local_e0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_e0 + 0x10))(local_e0);
          }
        }
      }
      if (local_d8[0] != (longlong *)0x0) {
        (**(code **)(*local_d8[0] + 0x10))();
      }
      FUN_140008f88(param_3,local_c8);
      if (local_c8[0] != (longlong *)0x0) {
        (**(code **)(*local_c8[0] + 0x10))();
      }
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
      }
    }
  }
  else {
    *param_1 = local_a8;
    param_1[1] = (longlong)plStack_a0;
    plVar4 = &local_a8;
  }
  *plVar4 = 0;
  plVar4[1] = 0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_b0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
      }
    }
  }
  plVar4 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146846940 FUN_146846940 body=187 status=ok
// SIG undefined FUN_146846940(void)

undefined4 * FUN_146846940(undefined4 *param_1)

{
  *param_1 = 0;
  memset(param_1 + 2,0,0x110);
  *(undefined1 *)(param_1 + 0x46) = 2;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  param_1[0x58] = 0;
  *(undefined8 *)(param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 299) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x59) = 0xffffffff00000080;
  param_1[0x5b] = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  param_1[0x60] = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  param_1[0x6c] = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6d) = 0xffffffff00000080;
  param_1[0x6f] = 0;
  *(undefined8 *)(param_1 + 0x72) = 0;
  param_1[0x74] = 0;
  *(undefined8 *)(param_1 + 0x7a) = 0;
  *(undefined8 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x76) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  return param_1;
}



// FUNCTION 1468469fc FUN_1468469fc body=121 status=ok
// SIG undefined FUN_1468469fc(void)

undefined4 FUN_1468469fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  cVar1 = FUN_1468461f7(param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_146846a76(param_1,local_28,param_3);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146846a76 FUN_146846a76 body=140 status=ok
// SIG undefined FUN_146846a76(void)

ulonglong FUN_146846a76(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146846691(&local_30);
  if (local_30 != 0) {
    cVar3 = FUN_14047e3a8(param_1,local_30,param_3);
    uVar4 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
    if (cVar3 != '\0') goto LAB_146846abb;
  }
  uVar4 = 0;
LAB_146846abb:
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146846b03 FUN_146846b03 body=354 status=ok
// SIG undefined FUN_146846b03(void)

void FUN_146846b03(undefined1 *param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  lVar2 = 0;
  while( true ) {
    uVar4 = *(ushort *)(param_2 + lVar2);
    uVar3 = (ulonglong)uVar4;
    uVar5 = *(ushort *)((longlong)L"PublicAPI" + lVar2);
    if (uVar4 != uVar5) break;
    if (uVar4 == 0) goto LAB_146846c4e;
LAB_146846b31:
    lVar2 = lVar2 + 2;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_146846b31;
  }
  if (uVar4 != uVar5) {
    lVar2 = 0;
    goto LAB_146846b6a;
  }
LAB_146846c4e:
  uVar1 = 0;
  goto LAB_146846c50;
LAB_146846b6a:
  uVar4 = *(ushort *)(param_2 + lVar2);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)L"InternalAPI" + lVar2);
  if (uVar4 == uVar5) {
    if (uVar4 == 0) goto LAB_146846c59;
LAB_146846b83:
    lVar2 = lVar2 + 2;
    goto LAB_146846b6a;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_146846b83;
  }
  if (uVar4 != uVar5) {
    lVar2 = 0;
    goto LAB_146846bbc;
  }
LAB_146846c59:
  uVar1 = 1;
  goto LAB_146846c50;
LAB_146846bbc:
  uVar4 = *(ushort *)(param_2 + lVar2);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)L"PublicUser" + lVar2);
  if (uVar4 == uVar5) {
    if (uVar4 == 0) goto LAB_146846c5d;
LAB_146846bd5:
    lVar2 = lVar2 + 2;
    goto LAB_146846bbc;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_146846bd5;
  }
  if (uVar4 != uVar5) {
    lVar2 = 0;
    goto LAB_146846c0a;
  }
LAB_146846c5d:
  uVar1 = 2;
  goto LAB_146846c50;
LAB_146846c0a:
  uVar4 = *(ushort *)(param_2 + lVar2);
  uVar3 = (ulonglong)uVar4;
  uVar5 = *(ushort *)((longlong)L"InternalUser" + lVar2);
  if (uVar4 == uVar5) {
    if (uVar4 == 0) goto LAB_146846c61;
LAB_146846c1f:
    lVar2 = lVar2 + 2;
    goto LAB_146846c0a;
  }
  if ((uVar5 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
    uVar6 = (ulonglong)uVar5;
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar6]) goto LAB_146846c1f;
  }
  if (uVar4 != uVar5) {
    uVar1 = 0;
    goto LAB_146846c54;
  }
LAB_146846c61:
  uVar1 = 3;
LAB_146846c50:
  *param_1 = uVar1;
  uVar1 = 1;
LAB_146846c54:
  param_1[1] = uVar1;
  return;
}



// FUNCTION 146846c66 FUN_146846c66 body=59 status=ok
// SIG undefined FUN_146846c66(void)

longlong FUN_146846c66(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14685327c(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_146853275(lVar2);
  return lVar2;
}



// FUNCTION 146846ca2 FUN_146846ca2 body=113 status=ok
// SIG undefined FUN_146846ca2(void)

undefined4 FUN_146846ca2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_146846d14(0,local_38);
  uVar1 = FUN_14684642d(param_2,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146846d14 FUN_146846d14 body=132 status=ok
// SIG undefined FUN_146846d14(void)

void FUN_146846d14(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14619f8aa(&local_30,param_2,0);
  FUN_146846d9a(param_1,local_30);
  (**(code **)(*local_30 + 8))(local_30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146846d9a FUN_146846d9a body=326 status=ok
// SIG undefined FUN_146846d9a(void)

void FUN_146846d9a(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149e441a0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  *(undefined4 *)((longlong)plVar4 + 0x3c) = 0x80;
  *(undefined4 *)(plVar4 + 8) = 0xffffffff;
  if (plVar4 == (longlong *)0x0) {
    FUN_146846ee2(param_1,0x10);
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    FUN_146846ee2(param_1,plVar4 + 2);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_30 = plVar4;
  }
  local_38 = plVar4 + 2;
  FUN_145d35994(&local_38,param_2,1);
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146846ee2 FUN_146846ee2 body=3394 status=ok
// SIG undefined FUN_146846ee2(void)

void FUN_146846ee2(int *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  longlong *plVar9;
  undefined7 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_1c8 [32];
  int *local_1a8;
  undefined8 local_1a0;
  wchar_t *local_198;
  undefined4 local_190;
  wchar_t *local_188;
  undefined4 local_180;
  wchar_t *local_178;
  undefined4 local_170;
  wchar_t *local_168;
  undefined4 local_160;
  wchar_t *local_158;
  undefined4 local_150;
  wchar_t *local_148;
  undefined4 local_140;
  wchar_t *local_138;
  undefined4 local_130;
  wchar_t *local_128;
  undefined4 local_120;
  wchar_t *local_118;
  undefined4 local_110;
  wchar_t *local_108;
  undefined4 local_100;
  wchar_t *local_f8;
  undefined4 local_f0;
  wchar_t *local_e8;
  undefined4 local_e0;
  wchar_t *local_d8;
  undefined4 local_d0;
  wchar_t *local_c8;
  undefined4 local_c0;
  longlong local_b8 [2];
  wchar_t *local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_140056680(&local_78,L"FileVersion");
  FUN_14626eb76(param_2,&local_78,0x4008000000000000);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  iVar3 = *param_1;
  FUN_140056680(&local_78,L"Version");
  FUN_14626eb76(param_2,&local_78,(double)iVar3);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_78,L"VersionName");
  FUN_145964e64(param_2,&local_78,param_1 + 2);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_78,L"FriendlyName");
  FUN_145964e64(param_2,&local_78,param_1 + 6);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_78,L"Description");
  FUN_145964e64(param_2,&local_78,param_1 + 10);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_78,L"Category");
  FUN_145964e64(param_2,&local_78,param_1 + 0xe);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_78,L"CreatedBy");
  FUN_145964e64(param_2,&local_78,param_1 + 0x12);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_78,L"CreatedByURL");
  FUN_145964e64(param_2,&local_78,param_1 + 0x16);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_78,L"DocsURL");
  FUN_145964e64(param_2,&local_78,param_1 + 0x1a);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_78,L"MarketplaceURL");
  FUN_145964e64(param_2,&local_78,param_1 + 0x1e);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  plVar9 = (longlong *)(param_1 + 0x22);
  FUN_140056680(&local_78,L"SupportURL");
  FUN_145964e64(param_2,&local_78,plVar9);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] - 2U < 0x7fffffff) {
    plVar9 = (longlong *)(param_1 + 0x26);
    FUN_140056680(&local_78,L"EngineVersion");
    FUN_145964e64(param_2,&local_78,plVar9);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_88 = L"EngineVersion";
    local_80 = 0xd;
    FUN_14683939c(param_2);
  }
  if (param_1[0x2c] - 2U < 0x7fffffff) {
    plVar9 = (longlong *)(param_1 + 0x2a);
    FUN_140056680(&local_78,L"EditorCustomVirtualPath");
    FUN_145964e64(param_2,&local_78,plVar9);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_98 = L"EditorCustomVirtualPath";
    local_90 = 0x17;
    FUN_14683939c(param_2);
  }
  if (param_1[0x44] < 2) {
    local_a8 = L"VersePath";
    local_a0 = 9;
    FUN_14683939c(param_2);
  }
  else {
    plVar9 = (longlong *)(param_1 + 0x42);
    FUN_140056680(&local_78,L"VersePath");
    FUN_145964e64(param_2,&local_78,plVar9);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  bVar1 = *(byte *)(param_1 + 0x46);
  if ((ulonglong)bVar1 == 2) {
    local_c8 = L"VerseScope";
    local_c0 = 10;
    FUN_14683939c(param_2);
  }
  else {
    if (bVar1 < 4) {
      pwVar8 = (wchar_t *)(&PTR_u_PublicAPI_149e49d88)[bVar1];
    }
    else {
      pwVar8 = L"<unknown>";
    }
    plVar9 = &local_78;
    FUN_140056680(plVar9,pwVar8);
    FUN_140056680(local_b8,L"VerseScope");
    FUN_145964f10(param_2,local_b8,plVar9);
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((char)param_1[0x48] == '\x01') {
    uVar5 = param_1[0x47];
    plVar9 = &local_78;
    FUN_140056680(plVar9,L"VerseVersion");
    FUN_14626eb76(param_2,plVar9,(double)uVar5);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_d8 = L"VerseVersion";
    local_d0 = 0xc;
    FUN_14683939c(param_2);
  }
  if ((char)param_1[0x49] == '\x01') {
    plVar9 = &local_78;
    FUN_140056680(plVar9,L"EnableVerseAssetReflection");
    FUN_14626ec84(param_2,plVar9,1);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_e8 = L"EnableVerseAssetReflection";
    local_e0 = 0x1a;
    FUN_14683939c(param_2);
  }
  if (*(char *)((longlong)param_1 + 0x125) == '\x01') {
    plVar9 = &local_78;
    FUN_140056680(plVar9,L"EnableIAD");
    FUN_14626ec84(param_2,plVar9,1);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_f8 = L"EnableIAD";
    local_f0 = 9;
    FUN_14683939c(param_2);
  }
  if (*(char *)((longlong)param_1 + 0x126) == '\0') {
    local_108 = L"EnabledByDefault";
    local_100 = 0x10;
    FUN_14683939c(param_2);
  }
  else {
    plVar9 = (longlong *)
             CONCAT71((int7)((ulonglong)plVar9 >> 8),*(char *)((longlong)param_1 + 0x126) == '\x01')
    ;
    FUN_140056680(&local_78,L"EnabledByDefault");
    FUN_14626ec84(param_2,&local_78,(ulonglong)plVar9 & 0xffffffff);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  plVar9 = (longlong *)
           CONCAT71((int7)((ulonglong)plVar9 >> 8),*(undefined1 *)((longlong)param_1 + 0x127));
  FUN_140056680(&local_78,L"CanContainContent");
  FUN_14626ec84(param_2,&local_78,(ulonglong)plVar9 & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((char)param_1[0x4a] == '\x01') {
    plVar9 = &local_78;
    FUN_140056680(plVar9,L"CanContainVerse");
    FUN_14626ec84(param_2,plVar9,1);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_118 = L"CanContainVerse";
    local_110 = 0xf;
    FUN_14683939c(param_2);
  }
  if (*(char *)((longlong)param_1 + 0x12f) == '\x01') {
    plVar9 = &local_78;
    FUN_140056680(plVar9,L"NoCode");
    FUN_14626ec84(param_2,plVar9,1);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  uVar2 = *(undefined1 *)((longlong)param_1 + 0x129);
  uVar10 = (undefined7)((ulonglong)plVar9 >> 8);
  FUN_140056680(&local_78,L"IsBetaVersion");
  FUN_14626ec84(param_2,&local_78,CONCAT71(uVar10,uVar2) & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined1 *)((longlong)param_1 + 0x12a);
  FUN_140056680(&local_78,L"IsExperimentalVersion");
  FUN_14626ec84(param_2,&local_78,CONCAT71(uVar10,uVar2) & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined1 *)((longlong)param_1 + 299);
  FUN_140056680(&local_78,L"Installed");
  FUN_14626ec84(param_2,&local_78,CONCAT71(uVar10,uVar2) & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  local_1a8 = param_1;
  local_1a0 = param_2;
  if ((longlong)param_1[0x30] < 1) {
    local_128 = L"SupportedTargetPlatforms";
    local_120 = 0x18;
    FUN_14683939c(param_2);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    lVar13 = *(longlong *)(param_1 + 0x2e);
    lVar11 = (longlong)param_1[0x30] << 4;
    do {
      uVar6 = FUN_14001cc68(0x20,0x10);
      FUN_14047c0ce(uVar6,lVar13);
      puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar4 = uStack_70;
      puVar7[1] = &DAT_100000001;
      *puVar7 = &PTR_LAB_149e490e0;
      puVar7[2] = uVar6;
      lVar12 = (longlong)(int)uStack_70;
      uVar5 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
      if (uStack_70._4_4_ < uVar5) {
        FUN_14047d050(&local_78,uVar4 & 0xffffffff);
      }
      *(undefined8 *)(local_78 + lVar12 * 0x10) = uVar6;
      *(undefined8 **)(local_78 + 8 + lVar12 * 0x10) = puVar7;
      lVar13 = lVar13 + 0x10;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
    FUN_140056680(local_b8,L"SupportedTargetPlatforms");
    param_2 = local_1a0;
    FUN_14609b57c(local_1a0,local_b8,&local_78);
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_78,uStack_70 & 0xffffffff);
    param_1 = local_1a8;
    if (local_78 != 0) {
      FUN_1400020a8();
      param_1 = local_1a8;
    }
  }
  if ((longlong)param_1[0x34] < 1) {
    local_138 = L"SupportedPrograms";
    local_130 = 0x11;
    FUN_14683939c(param_2);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    lVar13 = *(longlong *)(param_1 + 0x32);
    lVar11 = (longlong)param_1[0x34] << 4;
    do {
      uVar6 = FUN_14001cc68(0x20,0x10);
      FUN_14047c0ce(uVar6,lVar13);
      puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar4 = uStack_70;
      puVar7[1] = &DAT_100000001;
      *puVar7 = &PTR_LAB_149e490e0;
      puVar7[2] = uVar6;
      lVar12 = (longlong)(int)uStack_70;
      uVar5 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
      if (uStack_70._4_4_ < uVar5) {
        FUN_14047d050(&local_78,uVar4 & 0xffffffff);
      }
      *(undefined8 *)(local_78 + lVar12 * 0x10) = uVar6;
      *(undefined8 **)(local_78 + 8 + lVar12 * 0x10) = puVar7;
      lVar13 = lVar13 + 0x10;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
    FUN_140056680(local_b8,L"SupportedPrograms");
    param_2 = local_1a0;
    FUN_14609b57c(local_1a0,local_b8,&local_78);
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_78,uStack_70 & 0xffffffff);
    param_1 = local_1a8;
    if (local_78 != 0) {
      FUN_1400020a8();
      param_1 = local_1a8;
    }
  }
  if (*(char *)((longlong)param_1 + 0x132) == '\x01') {
    FUN_140056680(&local_78,L"bIsPluginExtension");
    FUN_14626ec84(param_2,&local_78,1);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_148 = L"bIsPluginExtension";
    local_140 = 0x12;
    FUN_14683939c(param_2);
  }
  FUN_146845692(param_2,param_1 + 0x3a);
  FUN_146844b30(param_2,param_1 + 0x3e);
  if ((char)param_1[0x4b] == '\x01') {
    FUN_140056680(&local_78,L"RequiresBuildPlatform");
    FUN_14626ec84(param_2,&local_78,1);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_158 = L"RequiresBuildPlatform";
    local_150 = 0x15;
    FUN_14683939c(param_2);
  }
  if (*(char *)((longlong)param_1 + 0x12d) == '\x01') {
    FUN_140056680(&local_78,L"Hidden");
    FUN_14626ec84(param_2,&local_78,1);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_168 = L"Hidden";
    local_160 = 6;
    FUN_14683939c(param_2);
  }
  if (*(char *)((longlong)param_1 + 0x12e) == '\x01') {
    FUN_140056680(&local_78,L"Sealed");
    FUN_14626ec84(param_2,&local_78,1);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_178 = L"Sealed";
    local_170 = 6;
    FUN_14683939c(param_2);
  }
  if ((char)param_1[0x4c] == '\x01') {
    FUN_140056680(&local_78,L"ExplicitlyLoaded");
    FUN_14626ec84(param_2,&local_78,1);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_188 = L"ExplicitlyLoaded";
    local_180 = 0x10;
    FUN_14683939c(param_2);
  }
  if (*(char *)((longlong)param_1 + 0x131) == '\x01') {
    FUN_140056680(&local_78,L"HasExplicitPlatforms");
    FUN_14626ec84(param_2,&local_78,1);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_198 = L"HasExplicitPlatforms";
    local_190 = 0x14;
    FUN_14683939c(param_2);
  }
  FUN_140056680(&local_78,L"PreBuildSteps");
  FUN_14684435e(param_1 + 0x4e,param_2,&local_78);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_78,L"PostBuildSteps");
  FUN_14684435e(param_1 + 0x62,param_2,&local_78);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_146847c26(param_2,param_1 + 0x76);
  FUN_146847e12(param_2,param_1 + 0x7a);
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146847c26 FUN_146847c26 body=491 status=ok
// SIG undefined FUN_146847c26(void)

void FUN_146847c26(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined8 **local_b8;
  undefined8 **local_b0;
  undefined8 **local_a8;
  longlong local_98 [2];
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  puVar1 = local_58;
  local_50 = 2;
  *local_58 = &PTR_LAB_149e49b80;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e49b10;
  puVar1[3] = param_2;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  puVar1 = local_68;
  local_60 = 2;
  *local_68 = &PTR_LAB_149e49aa0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e49a30;
  puVar1[3] = &LAB_14684ba7c;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  puVar1 = local_78;
  local_70 = 2;
  *local_78 = &PTR_LAB_149e49290;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e49220;
  puVar1[3] = FUN_14684ba2f;
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  puVar1 = local_88;
  local_80 = 2;
  *local_88 = &PTR_LAB_149e499c0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e49950;
  puVar1[3] = FUN_14684b9dd;
  FUN_140056680(local_98,L"Plugins");
  local_b8 = &local_78;
  local_b0 = &local_68;
  local_a8 = &local_58;
  FUN_14684cacc(param_1,local_98,param_2,&local_88);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146847e12 FUN_146847e12 body=424 status=ok
// SIG undefined FUN_146847e12(void)

void FUN_146847e12(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_d8 [32];
  undefined8 **local_b8;
  undefined8 **local_b0;
  undefined8 *local_a8;
  longlong local_98 [2];
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,2,0x10);
  puVar1 = local_68;
  local_60 = 2;
  *local_68 = &PTR_LAB_149e496f0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e49680;
  puVar1[3] = &LAB_14684830c;
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_1446efa72(&local_78,0,2,0x10);
  puVar1 = local_78;
  local_70 = 2;
  *local_78 = &PTR_LAB_149e49290;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e49220;
  puVar1[3] = FUN_1468482bf;
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  puVar1 = local_88;
  local_80 = 2;
  *local_88 = &PTR_LAB_149e49610;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149e495a0;
  puVar1[3] = FUN_14684826d;
  FUN_140056680(local_98,L"DisallowedPlugins");
  local_b8 = &local_78;
  local_b0 = &local_68;
  local_a8 = &local_58;
  FUN_14684846a(param_1,local_98,param_2,&local_88);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146847fbc FUN_146847fbc body=676 status=ok
// SIG undefined FUN_146847fbc(void)

void FUN_146847fbc(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [40];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined8 local_68;
  longlong *local_60;
  wchar_t *local_58;
  longlong *local_50;
  longlong local_48 [2];
  wchar_t *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  cVar3 = (**(code **)(*plVar4 + 0x48))(plVar4,puVar5);
  if (cVar3 != '\0') {
    local_48[0] = 0;
    local_48[1] = 0;
    if (*(int *)(param_2 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_2;
    }
    cVar3 = FUN_1468461f7(puVar5,local_48,param_3);
    if (cVar3 != '\0') {
      FUN_146846691(&local_58,local_48,param_3);
      if (local_58 != (wchar_t *)0x0) {
        FUN_146846ee2(param_1,local_58);
        FUN_14619f8aa(&local_68,local_48,0);
        local_38 = local_58;
        local_30 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        cVar3 = FUN_145d35994(&local_38,local_68,1);
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
        if (cVar3 == '\0') {
          if (param_3 != 0) {
            local_38 = L"FailedToWriteDescriptor";
            local_30._0_4_ = 0x17;
            FUN_1446e940c(local_6c,&local_38);
            local_38 = L"PluginDescriptor";
            local_30 = (longlong *)CONCAT44(local_30._4_4_,0x10);
            FUN_1446e940c(local_70,&local_38);
            FUN_140208bae(&local_38,local_70,local_6c,L"Failed to write plugin descriptor content");
            FUN_140008f88(param_3,&local_38);
            if (local_38 != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)local_38 + 0x10))();
            }
          }
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_60 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar1 = (int *)((longlong)local_60 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_60 + 0x10))(local_60);
              }
            }
          }
        }
        else {
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_60 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar1 = (int *)((longlong)local_60 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_60 + 0x10))(local_60);
              }
            }
          }
          if (*(int *)(param_2 + 1) == 0) {
            puVar5 = &DAT_149dfb77a;
          }
          else {
            puVar5 = (undefined2 *)*param_2;
          }
          FUN_14684642d(puVar5,local_48,param_3);
        }
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_50 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_50 + 0x10))(local_50);
          }
        }
      }
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98,puVar5);
  }
  FUN_146846ca2(param_1,puVar5,param_3);
  return;
}



// FUNCTION 14684826d FUN_14684826d body=82 status=ok
// SIG undefined FUN_14684826d(void)

undefined8 * FUN_14684826d(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1468482bf FUN_1468482bf body=76 status=ok
// SIG undefined FUN_1468482bf(void)

void FUN_1468482bf(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  wchar_t *local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = L"Name";
  local_10 = 4;
  FUN_14047fa10(param_1,&local_18,param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146848312 FUN_146848312 body=105 status=ok
// SIG undefined FUN_146848312(void)

void FUN_146848312(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_30,L"Name");
  FUN_145964e64(param_2,local_30,param_1);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684837c FUN_14684837c body=237 status=ok
// SIG undefined FUN_14684837c(void)

undefined4 FUN_14684837c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Name";
  local_48 = 4;
  uVar1 = FUN_14047fa10(param_2,&local_50,param_1);
  if (param_3 != 0 && (char)uVar1 == '\0') {
    local_40 = L"FPluginDisallowedWithoutName";
    local_38 = 0x1c;
    FUN_1446e940c(local_54,&local_40);
    local_40 = L"PluginDisallowedDescriptor";
    local_38 = 0x1a;
    FUN_1446e940c(local_58,&local_40);
    FUN_140208bae(&local_40,local_58,local_54,L"Disallowed plugin must have a \'Name\' field");
    FUN_140008f88(param_3,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684846a FUN_14684846a body=1991 status=ok
// SIG undefined FUN_14684846a(void)

void FUN_14684846a(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7)

{
  int *piVar1;
  bool bVar2;
  longlong **pplVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_198 [40];
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  int local_150;
  longlong **local_148;
  undefined8 uStack_140;
  undefined1 *local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_118;
  undefined8 local_110;
  int local_108;
  longlong *local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined1 local_dc [4];
  longlong *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_170 = param_4;
  if ((int)param_3[1] < 1) {
    local_158 = *param_2;
    local_150 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_150 = 0;
    }
    FUN_14683939c();
  }
  else {
    local_f8 = 0;
    uStack_f0 = 0;
    local_110 = *param_2;
    local_108 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_108 = 0;
    }
    local_168 = param_2;
    local_160 = param_1;
    cVar6 = FUN_140480164(param_1,&local_110,&local_100);
    puVar10 = local_170;
    if (cVar6 == '\0') {
      if ((longlong)(int)param_3[1] != 0) {
        lVar15 = *param_3;
        lVar17 = (longlong)(int)param_3[1] << 4;
        do {
          puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          puVar10[4] = 0;
          *(undefined4 *)(puVar10 + 5) = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000080;
          *(undefined4 *)((longlong)puVar10 + 0x34) = 0;
          puVar10[8] = 0;
          *(undefined4 *)(puVar10 + 9) = 0;
          plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
          plVar11[1] = (longlong)&DAT_100000001;
          *plVar11 = (longlong)&PTR_FUN_149e49100;
          plVar11[2] = (longlong)puVar10;
          plVar13 = (longlong *)0x0;
          if (*(int *)(param_6 + 1) != 0) {
            plVar13 = (longlong *)*param_6;
          }
          (**(code **)(*plVar13 + 0x58))(plVar13,lVar15,puVar10);
          puVar12 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          *puVar12 = &PTR_FUN_149e440f0;
          puVar12[2] = puVar10;
          puVar12[3] = plVar11;
          *(undefined4 *)(puVar12 + 1) = 6;
          puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          uVar5 = uStack_f0;
          puVar10[1] = &DAT_100000001;
          *puVar10 = &PTR_FUN_149e49120;
          puVar10[2] = puVar12;
          lVar16 = (longlong)(int)uStack_f0;
          uVar7 = (int)uStack_f0 + 1;
          uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
          if (uStack_f0._4_4_ < uVar7) {
            FUN_14047d050(&local_f8,uVar5 & 0xffffffff);
          }
          *(undefined8 **)(local_f8 + lVar16 * 0x10) = puVar12;
          *(undefined8 **)(local_f8 + 8 + lVar16 * 0x10) = puVar10;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar11 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
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
          lVar15 = lVar15 + 0x10;
          lVar17 = lVar17 + -0x10;
        } while (lVar17 != 0);
      }
    }
    else {
      local_98 = 0;
      local_90 = 0;
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      if ((longlong)(int)param_3[1] != 0) {
        lVar15 = *param_3;
        lVar17 = (longlong)(int)param_3[1] << 4;
        do {
          if (*(int *)(puVar10 + 1) == 0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = (longlong *)*puVar10;
          }
          local_118 = lVar15;
          (**(code **)(*plVar13 + 0x58))(plVar13,&local_d8,lVar15);
          local_148 = &local_d8;
          uStack_140 = &local_118;
          FUN_146853302(&local_b8,local_dc,&local_148);
          if (local_d8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          lVar15 = lVar15 + 0x10;
          lVar17 = lVar17 + -0x10;
        } while (lVar17 != 0);
      }
      if ((longlong)(int)local_100[1] != 0) {
        puVar10 = (undefined8 *)*local_100;
        puVar12 = puVar10 + (longlong)(int)local_100[1] * 2;
        do {
          plVar13 = (longlong *)*puVar10;
          plVar11 = (longlong *)puVar10[1];
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          cVar6 = (**(code **)(*plVar13 + 0x80))(plVar13,&local_d8);
          if (cVar6 != '\0') {
            local_148 = (longlong **)0x0;
            uStack_140 = (longlong *)0x0;
            if (*(int *)(param_5 + 1) == 0) {
              plVar14 = (longlong *)0x0;
            }
            else {
              plVar14 = (longlong *)*param_5;
            }
            cVar6 = (**(code **)(*plVar14 + 0x58))(plVar14,*local_d8,&local_148);
            if (cVar6 != '\0') {
              iVar9 = (int)uStack_140 + -1;
              pplVar3 = local_148;
              if ((int)uStack_140 == 0) {
                iVar9 = 0;
                pplVar3 = (longlong **)&DAT_149dfb77a;
              }
              uVar8 = FUN_144a49b4a(iVar9,pplVar3);
              iVar9 = FUN_1468535b6(&local_b8,uVar8,&local_148);
              if (local_b8 + (longlong)iVar9 * 4 != (longlong *)0x0 && iVar9 != -1) {
                if (*(int *)(param_6 + 1) == 0) {
                  plVar14 = (longlong *)0x0;
                }
                else {
                  plVar14 = (longlong *)*param_6;
                }
                (**(code **)(*plVar14 + 0x58))
                          (plVar14,(local_b8 + (longlong)iVar9 * 4)[2],*local_d8);
                uVar5 = uStack_f0;
                lVar15 = (longlong)(int)uStack_f0;
                uVar7 = (int)uStack_f0 + 1;
                uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
                if (uStack_f0._4_4_ < uVar7) {
                  FUN_14047d050(&local_f8,uVar5 & 0xffffffff);
                }
                *(longlong **)(local_f8 + lVar15 * 0x10) = plVar13;
                *(longlong **)(local_f8 + 8 + lVar15 * 0x10) = plVar11;
                if (plVar11 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
                  UNLOCK();
                }
                FUN_1468538d2(&local_b8,&local_148);
              }
            }
            if (local_148 != (longlong **)0x0) {
              FUN_1400020a8();
            }
          }
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar11 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
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
          puVar10 = puVar10 + 2;
        } while (puVar10 != puVar12);
      }
      local_d0 = local_a8;
      local_d8 = (longlong *)&DAT_100000000;
      local_c8 = 0xffffffff;
      local_c0 = 0;
      if (local_90 != 0) {
        FUN_1449c0562(&local_d8);
      }
      local_130 = local_c8;
      uVar4 = local_130;
      local_128 = local_c0;
      local_124 = local_bc;
      uStack_140 = local_d8;
      local_138 = local_d0;
      local_148 = &local_b8;
      local_130._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
      bVar2 = local_130._4_4_ < *(int *)(local_d0 + 0x18);
      iVar9 = local_130._4_4_;
      local_130 = uVar4;
      if (bVar2) {
        do {
          puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          puVar10[4] = 0;
          *(undefined4 *)(puVar10 + 5) = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
          *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000080;
          *(undefined4 *)((longlong)puVar10 + 0x34) = 0;
          puVar10[8] = 0;
          *(undefined4 *)(puVar10 + 9) = 0;
          plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
          plVar11[1] = (longlong)&DAT_100000001;
          *plVar11 = (longlong)&PTR_FUN_149e49100;
          plVar11[2] = (longlong)puVar10;
          plVar13 = (longlong *)0x0;
          if (*(int *)(param_6 + 1) != 0) {
            plVar13 = (longlong *)*param_6;
          }
          (**(code **)(*plVar13 + 0x58))(plVar13,(*local_148)[(longlong)iVar9 * 4 + 2],puVar10);
          puVar12 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
          }
          *puVar12 = &PTR_FUN_149e440f0;
          puVar12[2] = puVar10;
          puVar12[3] = plVar11;
          *(undefined4 *)(puVar12 + 1) = 6;
          puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          uVar5 = uStack_f0;
          puVar10[1] = &DAT_100000001;
          *puVar10 = &PTR_FUN_149e49120;
          puVar10[2] = puVar12;
          lVar15 = (longlong)(int)uStack_f0;
          uVar7 = (int)uStack_f0 + 1;
          uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
          if (uStack_f0._4_4_ < uVar7) {
            FUN_14047d050(&local_f8,uVar5 & 0xffffffff);
          }
          *(undefined8 **)(local_f8 + lVar15 * 0x10) = puVar12;
          *(undefined8 **)(local_f8 + 8 + lVar15 * 0x10) = puVar10;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar11 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
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
          local_130 = CONCAT44(local_130._4_4_,(uint)local_130 & ~uStack_140._4_4_);
          FUN_1449c0562(&uStack_140);
          bVar2 = local_130._4_4_ < *(int *)(local_138 + 0x18);
          iVar9 = local_130._4_4_;
        } while (bVar2);
      }
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_146853a5e(&local_b8);
    }
    if (((int)param_7[1] != 0) && (plVar13 = (longlong *)*param_7, plVar13 != (longlong *)0x0)) {
      (**(code **)(*plVar13 + 0x60))(plVar13,&local_f8);
    }
    FUN_14683985c(local_160,local_168,&local_f8);
    FUN_14047c710(local_f8,uStack_f0 & 0xffffffff);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1449db362(local_170);
  FUN_1449db362(param_5);
  FUN_1449db362(param_6);
  FUN_1449db362(param_7);
  if ((local_60 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146848c6e FUN_146848c6e body=154 status=ok
// SIG undefined FUN_146848c6e(void)

undefined4 FUN_146848c6e(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar1 = FUN_146847fbc(param_2,param_1 + 0x28);
  if ((char)uVar1 != '\0') {
    FUN_146848d08(param_1 + 0x48);
    FUN_144a8054c();
    plVar2 = (longlong *)(**(code **)(DAT_14c926ca8 + 0x128))(&DAT_14c926ca8);
    if ((longlong)(int)plVar2[1] != 0) {
      lVar4 = 0;
      do {
        if ((*(int *)(*plVar2 + 8 + lVar4) != 0) && (*(longlong *)(*plVar2 + lVar4) != 0)) {
          uVar3 = (**(code **)(DAT_14c926ca8 + 0x128))(&DAT_14c926ca8);
          FUN_146854552(uVar3,param_1);
          return uVar1;
        }
        lVar4 = lVar4 + 0x10;
      } while ((longlong)(int)plVar2[1] * 0x10 != lVar4);
    }
  }
  return uVar1;
}



// FUNCTION 146848d08 FUN_146848d08 body=450 status=ok
// SIG undefined FUN_146848d08(void)

undefined4 * FUN_146848d08(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  FUN_144a787a6(param_1 + 6,param_2 + 6);
  FUN_144a787a6(param_1 + 10,param_2 + 10);
  FUN_144a787a6(param_1 + 0xe,param_2 + 0xe);
  FUN_144a787a6(param_1 + 0x12,param_2 + 0x12);
  FUN_144a787a6(param_1 + 0x16,param_2 + 0x16);
  FUN_144a787a6(param_1 + 0x1a,param_2 + 0x1a);
  FUN_144a787a6(param_1 + 0x1e,param_2 + 0x1e);
  FUN_144a787a6(param_1 + 0x22,param_2 + 0x22);
  FUN_144a787a6(param_1 + 0x26,param_2 + 0x26);
  FUN_144a787a6(param_1 + 0x2a,param_2 + 0x2a);
  FUN_140bee9ec(param_1 + 0x2e,param_2 + 0x2e);
  FUN_140bee9ec(param_1 + 0x32,param_2 + 0x32);
  FUN_144a787a6(param_1 + 0x36,param_2 + 0x36);
  FUN_146850532(param_1 + 0x3a,param_2 + 0x3a);
  FUN_146850590(param_1 + 0x3e,param_2 + 0x3e);
  FUN_144a787a6(param_1 + 0x42,param_2 + 0x42);
  *(undefined1 *)(param_1 + 0x46) = *(undefined1 *)(param_2 + 0x46);
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x48) == '\x01') {
      param_1[0x47] = param_2[0x47];
      uVar2 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x48) != '\x01') goto LAB_146848e2a;
      uVar2 = 0;
    }
    *(undefined1 *)(param_1 + 0x48) = uVar2;
  }
LAB_146848e2a:
  uVar1 = *(undefined8 *)(param_2 + 0x49);
  *(undefined8 *)((longlong)param_1 + 299) = *(undefined8 *)((longlong)param_2 + 299);
  *(undefined8 *)(param_1 + 0x49) = uVar1;
  FUN_140b855d0(param_1 + 0x4e,param_2 + 0x4e);
  FUN_140b855d0(param_1 + 0x62,param_2 + 0x62);
  FUN_14684b478(param_1 + 0x76,param_2 + 0x76);
  FUN_1468505ee(param_1 + 0x7a,param_2 + 0x7a);
  return param_1;
}



// FUNCTION 146848eca FUN_146848eca body=505 status=ok
// SIG undefined FUN_146848eca(void)

ulonglong FUN_146848eca(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 unaff_RBX;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [4];
  undefined1 local_d4 [4];
  longlong *local_d0 [2];
  undefined8 local_c0;
  longlong *local_b8;
  longlong *local_b0 [2];
  longlong *local_a0 [2];
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar3 = *(char *)(param_1 + 0x132);
  if (cVar3 == '\x01') {
    FUN_140009b9a(local_b0,param_1 + 0x18);
    local_60 = L"PluginIsExtension";
    local_58 = 0x11;
    FUN_1446e940c(local_d4,&local_60);
    local_60 = L"PluginManager";
    local_58 = 0xd;
    FUN_1446e940c(local_d8,&local_60);
    FUN_140208bae(local_d0,local_d8,local_d4,L"Plugin \'{0}\' is a platform extension");
    FUN_14023409e(&local_c0,local_d0,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_b0);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_c0;
    local_88 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_a0,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)local_b8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b8 + 0x10))(local_b8);
        }
      }
    }
    if (local_b0[0] != (longlong *)0x0) {
      (**(code **)(*local_b0[0] + 0x10))();
    }
    FUN_140008f88(param_2,local_a0);
    if (local_a0[0] != (longlong *)0x0) {
      (**(code **)(*local_a0[0] + 0x10))();
    }
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return (CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar3) ^ 1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468490c4 FUN_1468490c4 body=1392 status=ok
// SIG undefined FUN_1468490c4(void)

ulonglong FUN_1468490c4(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  longlong *local_148;
  longlong *local_140 [2];
  longlong *local_130;
  undefined4 local_128;
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  longlong *local_e8 [2];
  longlong *local_d8;
  undefined4 local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  longlong *local_78 [2];
  undefined4 local_68 [4];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar8 = (longlong *)(param_1 + 8);
  plVar6 = (longlong *)FUN_1427a23dd(plVar8);
  if (plVar6 == (longlong *)0x0) {
    uVar9 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
    goto LAB_146849554;
  }
  lVar10 = *plVar6;
  local_c0 = (longlong *)plVar6[1];
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
  }
  local_c8 = lVar10;
  FUN_144a5dc74(&local_d8);
  if ((*(byte *)(lVar10 + 0x244) & 1) == 0) {
    cVar3 = FUN_146848eca(lVar10 + 0x48,&local_d8);
    if (cVar3 == '\0') goto LAB_1468492f5;
    iVar5 = *(int *)(lVar10 + 0x20);
    if (iVar5 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = *(undefined2 **)(lVar10 + 0x18);
    }
    iVar2 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar2 = 0;
    }
    uVar4 = FUN_144a49b4a(iVar2,puVar7);
    iVar5 = FUN_1427ae02a(plVar8,uVar4,lVar10 + 0x18);
    lVar11 = (longlong)iVar5 * 0x28 + *plVar8;
    uVar9 = CONCAT71((int7)((ulonglong)(lVar10 + 0x18) >> 8),1);
    if (lVar11 != 0 && iVar5 != -1) {
      local_88 = (wchar_t *)&local_c8;
      FUN_146850814(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x18) == 0) {
        FUN_14685091a(plVar8,uVar4,local_c8 + 0x18);
      }
    }
  }
  else {
    FUN_140009b9a(local_f8,param_2);
    local_88 = L"PluginIsEnabled";
    local_80[0] = 0xf;
    FUN_1446e940c(local_11c,&local_88);
    local_88 = L"PluginManager";
    local_80[0] = 0xd;
    FUN_1446e940c(local_120,&local_88);
    FUN_140208bae(local_118,local_120,local_11c,L"Plugin \'{0}\' is enabled");
    FUN_14023409e(&local_108,local_118,1);
    local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
    FUN_14023423e(local_78,local_f8);
    local_a0 = (ulonglong *)local_68;
    local_a8 = &local_88;
    FUN_14010d304(&local_98);
    local_b8 = local_108;
    local_b0 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_e8,&local_b8,&local_98);
    FUN_14007f2db(local_98,local_90);
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_78[0] != (longlong *)0x0) {
      (**(code **)(*local_78[0] + 0x10))();
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_100 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
    FUN_140008f88(&local_d8,local_e8);
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    if (local_118[0] != (longlong *)0x0) {
      (**(code **)(*local_118[0] + 0x10))();
    }
LAB_1468492f5:
    if (param_3 != 0) {
      local_130 = local_d8;
      if (local_d8 != (longlong *)0x0) {
        (**(code **)(*local_d8 + 8))();
      }
      local_128 = local_d0;
      FUN_140009b9a(local_140,param_2);
      local_88 = L"RemoveFromPluginsListFailed";
      local_80[0] = 0x1b;
      FUN_1446e940c(local_11c,&local_88);
      local_88 = L"PluginManager";
      local_80[0] = 0xd;
      FUN_1446e940c(local_120,&local_88);
      FUN_140208bae(local_118,local_120,local_11c,L"Failed to remove plugin \'{0}\'\n{1}");
      FUN_14023409e(&local_150,local_118,1);
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
      FUN_14023423e(local_78,local_140);
      local_68[0] = 4;
      FUN_14023423e(local_58,&local_130);
      local_a0 = &local_48;
      local_a8 = &local_88;
      FUN_14010d304(&local_98);
      local_b8 = local_150;
      local_b0 = local_148;
      if (local_148 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_148 + 1) = (int)local_148[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_e8,&local_b8,&local_98);
      FUN_14007f2db(local_98,local_90);
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      lVar10 = 0x30;
      do {
        plVar6 = *(longlong **)((longlong)local_80 + lVar10 + -8);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))();
          *(undefined8 *)((longlong)local_80 + lVar10 + -8) = 0;
          *(undefined4 *)((longlong)local_80 + lVar10) = 0;
        }
        lVar10 = lVar10 + -0x20;
      } while (lVar10 != -0x10);
      if (local_148 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_148 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_148)(local_148);
          LOCK();
          piVar1 = (int *)((longlong)local_148 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_148 + 0x10))(local_148);
          }
        }
      }
      if (local_140[0] != (longlong *)0x0) {
        (**(code **)(*local_140[0] + 0x10))();
      }
      if (local_130 != (longlong *)0x0) {
        (**(code **)(*local_130 + 0x10))();
      }
      FUN_140008f88(param_3,local_e8);
      if (local_e8[0] != (longlong *)0x0) {
        (**(code **)(*local_e8[0] + 0x10))();
      }
      if (local_118[0] != (longlong *)0x0) {
        (**(code **)(*local_118[0] + 0x10))();
      }
    }
    uVar9 = 0;
  }
  if (local_d8 != (longlong *)0x0) {
    (**(code **)(*local_d8 + 0x10))();
  }
  plVar6 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_c0 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_146849554:
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146849644 FUN_146849644 body=48 status=ok
// SIG undefined FUN_146849644(void)

void FUN_146849644(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144a787a6(param_1 + 0x268);
  FUN_144a787a6(param_1 + 0x278,param_3);
  return;
}



// FUNCTION 14684968c FUN_14684968c body=2927 status=ok
// SIG undefined FUN_14684968c(void)

ulonglong FUN_14684968c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                       undefined1 param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  int *piVar2;
  wchar_t *pwVar3;
  longlong *plVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  wchar_t ****ppppwVar13;
  int iVar14;
  undefined1 auStack_2b8 [32];
  longlong local_298;
  wchar_t **local_290;
  undefined4 *local_288;
  undefined1 local_279;
  wchar_t ***local_278;
  longlong *local_270;
  longlong *local_268 [2];
  undefined1 local_254 [4];
  longlong *local_250 [2];
  wchar_t ***local_240;
  longlong *local_238;
  longlong *local_230 [2];
  undefined1 local_21c [4];
  longlong *local_218 [2];
  wchar_t ***local_208;
  ulonglong *local_200;
  longlong *local_1f8 [2];
  wchar_t ***local_1e8;
  longlong *local_1e0;
  longlong *local_1d8 [2];
  undefined4 local_1c8 [2];
  undefined8 local_1c0;
  longlong lStack_1b8;
  undefined8 local_1b0;
  wchar_t ***local_1a8;
  longlong *local_1a0;
  wchar_t ***local_198;
  ulonglong *local_190;
  wchar_t ***local_188;
  longlong *local_180;
  wchar_t **local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined8 local_160;
  longlong lStack_158;
  undefined4 local_150;
  undefined8 local_14c;
  undefined4 local_144;
  longlong local_138;
  undefined4 local_130;
  wchar_t *local_128;
  undefined8 uStack_120;
  longlong *local_118 [2];
  longlong *local_108;
  int local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  wchar_t *local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  int local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  longlong local_98;
  undefined4 local_90;
  wchar_t **local_80;
  undefined8 uStack_78;
  longlong *local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_1c8[0] = 3;
  local_1c0 = 0;
  lStack_1b8 = 0;
  local_1b0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_d8 = (wchar_t *)0x0;
  uStack_d0 = 0;
  local_ac = 0xffffffff00000080;
  local_a4 = 0;
  local_98 = 0;
  local_90 = 0;
  local_108 = (longlong *)0x0;
  local_100 = 0;
  local_128 = (wchar_t *)0x0;
  uStack_120 = 0;
  local_fc = 0xffffffff00000080;
  local_f4 = 0;
  local_e8 = 0;
  local_279 = (undefined1)param_4;
  local_298 = param_1 + 8;
  local_290 = &local_d8;
  local_288 = local_1c8;
  cVar5 = FUN_1427a7734(param_2,param_3,param_4,param_5);
  local_e0 = 0;
  FUN_1408910a4(&local_128);
  if (cVar5 == '\0') {
    FUN_140009b9a(local_1d8,local_1c0);
    local_128 = L"TempTarget_MissingPluginForTarget";
    uStack_120._0_4_ = 0x21;
    FUN_1446e940c(local_218,&local_128);
    local_128 = L"PluginManager";
    uStack_120 = CONCAT44(uStack_120._4_4_,0xd);
    FUN_1446e940c(local_250,&local_128);
    FUN_140208bae(&local_1a8,local_250,local_218,L"{0} plugin is referenced by target but not found"
                 );
    FUN_14023409e(&local_1e8,&local_1a8,1);
    local_128 = (wchar_t *)CONCAT44(local_128._4_4_,4);
    FUN_14023423e(local_118,local_1d8);
    uStack_78 = &local_108;
    local_80 = &local_128;
    FUN_14010d304(&local_178);
    local_188 = local_1e8;
    local_180 = local_1e0;
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1e0 + 1) = (int)local_1e0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_198,&local_188,&local_178);
    FUN_14007f2db(local_178,(ulonglong)uStack_170 & 0xffffffff);
    if (local_178 != (wchar_t **)0x0) {
      FUN_1400020a8();
    }
    if (local_118[0] != (longlong *)0x0) {
      (**(code **)(*local_118[0] + 0x10))();
    }
    if (local_1e0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_1e0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_1e0)(local_1e0);
        LOCK();
        piVar2 = (int *)((longlong)local_1e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_1e0 + 0x10))(local_1e0);
        }
      }
    }
    if (local_1d8[0] != (longlong *)0x0) {
      (**(code **)(*local_1d8[0] + 0x10))();
    }
    FUN_140008f88(param_6,&local_198);
    if (local_198 != (wchar_t ***)0x0) {
      (*(code *)(*local_198)[2])();
    }
    if (local_1a8 != (wchar_t ***)0x0) {
      (*(code *)(*local_1a8)[2])();
    }
    uVar12 = CONCAT71((int7)((ulonglong)&local_1e8 >> 8),1);
  }
  else {
    local_108 = (longlong *)0x0;
    local_100 = 0;
    local_128 = (wchar_t *)0x0;
    uStack_120 = 0;
    local_fc = 0xffffffff00000080;
    local_f4 = 0;
    local_e8 = 0;
    local_e0 = 0;
    lStack_158 = 0;
    local_150 = 0;
    local_178 = (wchar_t **)0x0;
    uStack_170 = (wchar_t **)0x0;
    local_14c = 0xffffffff00000080;
    local_144 = 0;
    local_138 = 0;
    local_130 = 0;
    local_298 = param_1 + 8;
    local_290 = &local_128;
    local_288 = local_1c8;
    cVar5 = FUN_1427a7734(0,param_3,local_279,param_5);
    local_130 = 0;
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(&local_178);
    if (cVar5 == '\0') {
      FUN_140009b9a(local_1f8,local_1c0);
      local_178 = (wchar_t **)0x149e472b4;
      uStack_170._0_4_ = 0x28;
      FUN_1446e940c(local_250,&local_178);
      local_178 = (wchar_t **)0x149e46d76;
      uStack_170 = (wchar_t **)CONCAT44(uStack_170._4_4_,0xd);
      FUN_1446e940c(local_21c,&local_178);
      FUN_140208bae(local_218,local_21c,local_250,
                    L"{0} plugin is referenced by the default target but not found");
      ppppwVar13 = &local_208;
      FUN_14023409e(ppppwVar13,local_218,1);
      local_178 = (wchar_t **)CONCAT44(local_178._4_4_,4);
      FUN_14023423e(&local_168,local_1f8);
      local_180 = &lStack_158;
      local_188 = &local_178;
      FUN_14010d304(&local_80);
      local_198 = local_208;
      local_190 = local_200;
      if (local_200 != (ulonglong *)0x0) {
        LOCK();
        *(int *)(local_200 + 1) = (int)local_200[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_1a8,&local_198,&local_80);
      FUN_14007f2db(local_80,(ulonglong)uStack_78 & 0xffffffff);
      if (local_80 != (wchar_t **)0x0) {
        FUN_1400020a8();
      }
      if ((longlong *)CONCAT44(uStack_164,local_168) != (longlong *)0x0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_164,local_168) + 0x10))();
      }
      if (local_200 != (ulonglong *)0x0) {
        LOCK();
        puVar1 = local_200 + 1;
        *(int *)puVar1 = (int)*puVar1 + -1;
        UNLOCK();
        if ((int)*puVar1 == 0) {
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
      if (local_1f8[0] != (longlong *)0x0) {
        (**(code **)(*local_1f8[0] + 0x10))();
      }
      FUN_140008f88(param_6,&local_1a8);
      local_250[0] = local_218[0];
      if (local_1a8 != (wchar_t ***)0x0) {
        (*(code *)(*local_1a8)[2])();
        local_250[0] = local_218[0];
      }
LAB_146849d91:
      if (local_250[0] != (longlong *)0x0) {
        (**(code **)(*local_250[0] + 0x10))();
      }
      uVar12 = CONCAT71((int7)((ulonglong)ppppwVar13 >> 8),1);
      plVar4 = local_160;
    }
    else {
      local_80 = (wchar_t **)&DAT_100000000;
      uStack_78 = (longlong **)local_c8;
      local_70 = (longlong *)&DAT_ffffffff;
      uStack_68 = 0;
      if (local_b0 == 0) {
        iVar14 = 0;
      }
      else {
        FUN_1449c0562(&local_80);
        iVar14 = local_b0;
      }
      lStack_158 = CONCAT44(uStack_64,uStack_68);
      local_160 = local_70;
      plVar4 = local_160;
      uStack_170 = local_80;
      local_168 = (undefined4)uStack_78;
      uStack_164 = uStack_78._4_4_;
      local_160._4_4_ = (int)((ulonglong)local_70 >> 0x20);
      local_178 = &local_d8;
      if ((local_160._4_4_ != iVar14) || (uStack_78 != (longlong **)local_c8)) {
        iVar7 = local_160._4_4_;
        local_160 = plVar4;
        do {
          pwVar3 = *local_178;
          lVar8 = (longlong)iVar7;
          iVar7 = *(int *)(pwVar3 + lVar8 * 0xc + 4);
          puVar11 = &DAT_149dfb77a;
          if (iVar7 != 0) {
            puVar11 = *(undefined2 **)(pwVar3 + lVar8 * 0xc);
          }
          iVar9 = iVar7 + -1;
          if (iVar7 == 0) {
            iVar9 = 0;
          }
          uVar6 = FUN_144a49b4a(iVar9,puVar11);
          iVar7 = FUN_1456cf568(&local_128,uVar6,pwVar3 + lVar8 * 0xc);
          if (iVar7 == -1) {
            FUN_140009b9a(local_230,pwVar3 + lVar8 * 0xc);
            local_80 = (wchar_t **)0x149e47332;
            uStack_78._0_4_ = 0x18;
            FUN_1446e940c(local_21c,&local_80);
            local_80 = (wchar_t **)0x149e46d76;
            uStack_78 = (longlong **)CONCAT44(uStack_78._4_4_,0xd);
            FUN_1446e940c(local_254,&local_80);
            FUN_140208bae(local_250,local_254,local_21c,L"{0} plugin is enabled");
            ppppwVar13 = &local_240;
            FUN_14023409e(ppppwVar13,local_250,1);
            local_80 = (wchar_t **)CONCAT44(local_80._4_4_,4);
            FUN_14023423e(&local_70,local_230);
            local_190 = local_60;
            local_198 = &local_80;
            FUN_14010d304(&local_188);
            local_1a8 = local_240;
            local_1a0 = local_238;
            if (local_238 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_238 + 1) = (int)local_238[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_218,&local_1a8,&local_188);
            FUN_14007f2db(local_188,(ulonglong)local_180 & 0xffffffff);
            if (local_188 != (wchar_t ***)0x0) {
              FUN_1400020a8();
            }
            if (local_70 != (longlong *)0x0) {
              (**(code **)(*local_70 + 0x10))();
            }
            if (local_238 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_238 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*local_238)(local_238);
                LOCK();
                piVar2 = (int *)((longlong)local_238 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_238 + 0x10))(local_238);
                }
              }
            }
            goto LAB_14684a058;
          }
          local_160 = (longlong *)CONCAT44(local_160._4_4_,(uint)local_160 & ~uStack_170._4_4_);
          FUN_1449c0562(&uStack_170);
          iVar7 = local_160._4_4_;
          plVar4 = local_160;
        } while (local_178 != &local_d8 ||
                 ((undefined1 *)CONCAT44(uStack_164,local_168) != local_c8 ||
                 local_160._4_4_ != iVar14));
      }
      local_160 = plVar4;
      local_80 = (wchar_t **)&DAT_100000000;
      uStack_78 = local_118;
      local_70 = (longlong *)&DAT_ffffffff;
      uStack_68 = 0;
      if (local_100 == 0) {
        iVar14 = 0;
      }
      else {
        FUN_1449c0562(&local_80);
        iVar14 = local_100;
      }
      lStack_158 = CONCAT44(uStack_64,uStack_68);
      local_160 = local_70;
      plVar4 = local_160;
      uStack_170 = local_80;
      local_168 = (undefined4)uStack_78;
      uStack_164 = uStack_78._4_4_;
      local_160._4_4_ = (int)((ulonglong)local_70 >> 0x20);
      uVar12 = 0;
      local_178 = &local_128;
      if ((local_160._4_4_ != iVar14) || (uStack_78 != local_118)) {
        iVar7 = local_160._4_4_;
        local_160 = plVar4;
        do {
          pwVar3 = *local_178;
          lVar8 = (longlong)iVar7;
          iVar7 = *(int *)(pwVar3 + lVar8 * 0xc + 4);
          puVar11 = &DAT_149dfb77a;
          if (iVar7 != 0) {
            puVar11 = *(undefined2 **)(pwVar3 + lVar8 * 0xc);
          }
          uVar10 = (ulonglong)(iVar7 - 1);
          if (iVar7 == 0) {
            uVar10 = uVar12;
          }
          uVar6 = FUN_144a49b4a(uVar10,puVar11);
          iVar7 = FUN_1456cf568(&local_d8,uVar6,pwVar3 + lVar8 * 0xc);
          if (iVar7 == -1) {
            FUN_140009b9a(local_268,pwVar3 + lVar8 * 0xc);
            local_80 = (wchar_t **)0x149e47392;
            uStack_78._0_4_ = 0x19;
            FUN_1446e940c(local_21c,&local_80);
            local_80 = (wchar_t **)0x149e46d76;
            uStack_78 = (longlong **)CONCAT44(uStack_78._4_4_,0xd);
            FUN_1446e940c(local_254,&local_80);
            FUN_140208bae(local_250,local_254,local_21c,L"{0} plugin is disabled");
            ppppwVar13 = &local_278;
            FUN_14023409e(ppppwVar13,local_250,1);
            local_80 = (wchar_t **)CONCAT44(local_80._4_4_,4);
            FUN_14023423e(&local_70,local_268);
            local_190 = local_60;
            local_198 = &local_80;
            FUN_14010d304(&local_188);
            local_1a8 = local_278;
            local_1a0 = local_270;
            if (local_270 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_270 + 1) = (int)local_270[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_218,&local_1a8,&local_188);
            FUN_14007f2db(local_188,(ulonglong)local_180 & 0xffffffff);
            if (local_188 != (wchar_t ***)0x0) {
              FUN_1400020a8();
            }
            if (local_70 != (longlong *)0x0) {
              (**(code **)(*local_70 + 0x10))();
            }
            local_230[0] = local_268[0];
            if (local_270 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_270 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*local_270)(local_270);
                LOCK();
                piVar2 = (int *)((longlong)local_270 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                local_230[0] = local_268[0];
                if (*piVar2 == 0) {
                  (**(code **)(*local_270 + 0x10))(local_270);
                  local_230[0] = local_268[0];
                }
              }
            }
LAB_14684a058:
            if (local_230[0] != (longlong *)0x0) {
              (**(code **)(*local_230[0] + 0x10))();
            }
            FUN_140008f88(param_6,local_218);
            if (local_218[0] != (longlong *)0x0) {
              (**(code **)(*local_218[0] + 0x10))();
            }
            goto LAB_146849d91;
          }
          local_160 = (longlong *)CONCAT44(local_160._4_4_,(uint)local_160 & ~uStack_170._4_4_);
          FUN_1449c0562(&uStack_170);
          iVar7 = local_160._4_4_;
        } while (local_178 != &local_128 ||
                 ((longlong **)CONCAT44(uStack_164,local_168) != local_118 ||
                 local_160._4_4_ != iVar14));
        uVar12 = 0;
        plVar4 = local_160;
      }
    }
    local_160 = plVar4;
    local_e0 = 0;
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    FUN_1408910a4(&local_128);
  }
  local_90 = 0;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_d8);
  if (lStack_1b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60[0] ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 14684a1fc FUN_14684a1fc body=69 status=ok
// SIG undefined FUN_14684a1fc(void)

bool FUN_14684a1fc(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  cVar1 = FUN_1427a487c();
  if (cVar1 == '\0') {
    bVar4 = false;
  }
  else {
    uVar2 = FUN_144a49b4a(*(undefined4 *)(param_2 + 1),*param_2);
    iVar3 = FUN_146854af8(param_1 + 0xa8,uVar2,param_2);
    bVar4 = iVar3 != -1;
  }
  return bVar4;
}



// FUNCTION 14684a250 FUN_14684a250 body=383 status=ok
// SIG undefined FUN_14684a250(void)

undefined8 FUN_14684a250(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  wchar_t *_Str1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  wchar_t *local_50;
  int local_48;
  wchar_t *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = (wchar_t *)0x0;
  local_38 = *(int *)(param_3 + 1);
  lVar5 = (longlong)local_38;
  _Src = (void *)*param_3;
  if (lVar5 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar5 * 2);
  }
  FUN_1448097c4(&local_40,&DAT_149e01f64,&DAT_149e065c6,0);
  iVar3 = local_38;
  local_50 = local_40;
  _Str1 = L"";
  if (local_38 != 0) {
    _Str1 = local_40;
  }
  iVar1 = wcsncmp(_Str1,L"/",1);
  if (iVar1 == 0) {
    FUN_14496493a(&local_40,0,1,1);
    local_50 = local_40;
    iVar3 = local_38;
  }
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    lVar5 = (longlong)iVar3 * 2;
    lVar2 = 0;
    do {
      if (local_50[lVar2] == L'/') {
        iVar1 = (int)lVar2;
        if (iVar1 != -1) {
          iVar4 = iVar3 + -1;
          if (iVar3 == 0) {
            iVar4 = 0;
          }
          if (iVar4 <= iVar1) {
            iVar1 = iVar4;
          }
          if (iVar1 < 1) {
            iVar1 = 0;
          }
          FUN_14496493a(&local_40,iVar1,iVar4 - iVar1,1);
          local_50 = local_40;
          iVar3 = local_38;
        }
        break;
      }
      lVar2 = lVar2 + 1;
      lVar5 = lVar5 + -2;
    } while (lVar5 != 0);
  }
  local_48 = iVar3 + -1;
  if (iVar3 == 0) {
    local_48 = 0;
  }
  FUN_14143cec0(param_1,param_2);
  if (local_40 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14684a3d0 FUN_14684a3d0 body=60 status=ok
// SIG undefined FUN_14684a3d0(void)

void FUN_14684a3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  lVar2 = *plVar1;
  if (lVar2 == 0) {
    lVar2 = FUN_140e92164();
    *plVar1 = lVar2;
  }
  FUN_1427a3516(param_2,param_3,lVar2);
  return;
}



// FUNCTION 14684a40c FUN_14684a40c body=65 status=ok
// SIG undefined FUN_14684a40c(void)

undefined8 * FUN_14684a40c(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_1427ac03e(param_1 + 8,param_3);
  if (puVar2 == (undefined8 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = *puVar2;
    lVar1 = puVar2[1];
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 14684a44e FUN_14684a44e body=184 status=ok
// SIG undefined FUN_14684a44e(void)

undefined8 * FUN_14684a44e(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_14143cec0(local_38,&local_28);
  if (local_28 != (longlong *)0x0) {
    cVar3 = (**(code **)(*local_28 + 0x48))(local_28);
    if (cVar3 != '\0') {
      *param_2 = local_28;
      param_2[1] = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      goto LAB_14684a4b2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14684a4b2:
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684a50a FUN_14684a50a body=171 status=ok
// SIG undefined FUN_14684a50a(void)

undefined8 * FUN_14684a50a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14684a250(param_1,&local_28);
  if (local_28 != (longlong *)0x0) {
    cVar3 = (**(code **)(*local_28 + 0x48))(local_28);
    if (cVar3 != '\0') {
      *param_2 = local_28;
      param_2[1] = local_20;
      if (local_20 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_20 + 1) = (int)local_20[1] + 1;
        UNLOCK();
      }
      goto LAB_14684a561;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_14684a561:
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684a5b8 FUN_14684a5b8 body=138 status=ok
// SIG undefined FUN_14684a5b8(void)

longlong * FUN_14684a5b8(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_1427ac03e(param_1 + 8,param_3);
  if (plVar4 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  plVar2 = (longlong *)*plVar4;
  plVar4 = (longlong *)plVar4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((plVar2 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar2 + 0x48))(plVar2), cVar3 == '\0'))
  {
    *param_2 = 0;
    param_2[1] = 0;
    if (plVar4 == (longlong *)0x0) {
      return param_2;
    }
  }
  else {
    *param_2 = (longlong)plVar2;
    param_2[1] = (longlong)plVar4;
    if (plVar4 == (longlong *)0x0) {
      return param_2;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
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
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
  }
  return param_2;
}



// FUNCTION 14684a642 FUN_14684a642 body=457 status=ok
// SIG undefined FUN_14684a642(void)

longlong * FUN_14684a642(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 8);
  *param_2 = 0;
  param_2[1] = 0;
  iVar10 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c);
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  if (iVar10 != 0) {
    FUN_14603b672(param_2);
  }
  lVar2 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar10 = *(int *)(param_1 + 0x30);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar10) || (uStack_60 != lVar2)) {
    do {
      lVar6 = *(longlong *)(*local_90 + 0x10 + (longlong)iStack_74 * 0x28);
      lVar9 = (longlong)(*(int *)(*local_90 + 0x18 + (longlong)iStack_74 * 0x28) + -1) * 0x10;
      lVar7 = *(longlong *)(lVar6 + lVar9);
      if (((*(byte *)(lVar7 + 0x244) & 1) != 0) &&
         (((*(byte *)(lVar7 + 0x244) & 2) != 0 && (*(char *)(lVar7 + 0x170) != '\0')))) {
        plVar8 = *(longlong **)(lVar6 + lVar9 + 8);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
          FUN_146019a74(param_2,iVar5);
        }
        lVar6 = *param_2;
        *(longlong *)(lVar6 + (longlong)iVar5 * 0x10) = lVar7;
        *(longlong **)(lVar6 + 8 + (longlong)iVar5 * 0x10) = plVar8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          plVar3 = plVar8 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar4 = (int *)((longlong)plVar8 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar10));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14684a80e FUN_14684a80e body=460 status=ok
// SIG undefined FUN_14684a80e(void)

longlong * FUN_14684a80e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 8);
  *param_2 = 0;
  param_2[1] = 0;
  iVar10 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c);
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  if (iVar10 != 0) {
    FUN_14603b672(param_2);
  }
  lVar2 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar10 = *(int *)(param_1 + 0x30);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar10) || (uStack_60 != lVar2)) {
    do {
      lVar6 = *(longlong *)(*local_90 + 0x10 + (longlong)iStack_74 * 0x28);
      lVar9 = (longlong)(*(int *)(*local_90 + 0x18 + (longlong)iStack_74 * 0x28) + -1) * 0x10;
      lVar7 = *(longlong *)(lVar6 + lVar9);
      if (((*(byte *)(lVar7 + 0x244) & 1) != 0) &&
         ((*(char *)(lVar7 + 0x16f) != '\0' || (*(char *)(lVar7 + 0x170) == '\x01')))) {
        plVar8 = *(longlong **)(lVar6 + lVar9 + 8);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
        }
        iVar5 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
          FUN_146019a74(param_2,iVar5);
        }
        lVar6 = *param_2;
        *(longlong *)(lVar6 + (longlong)iVar5 * 0x10) = lVar7;
        *(longlong **)(lVar6 + 8 + (longlong)iVar5 * 0x10) = plVar8;
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          plVar3 = plVar8 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar4 = (int *)((longlong)plVar8 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar10));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14684a9dc FUN_14684a9dc body=435 status=ok
// SIG undefined FUN_14684a9dc(void)

longlong * FUN_14684a9dc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int *piVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 8);
  *param_2 = 0;
  param_2[1] = 0;
  iVar10 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c);
  if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar10);
  }
  if (iVar10 != 0) {
    FUN_14603b672(param_2);
  }
  lVar2 = param_1 + 0x18;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar10 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar10 = *(int *)(param_1 + 0x30);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar10) || (uStack_60 != lVar2)) {
    do {
      lVar6 = *(longlong *)(*local_90 + 0x10 + (longlong)iStack_74 * 0x28);
      lVar9 = (longlong)(*(int *)(*local_90 + 0x18 + (longlong)iStack_74 * 0x28) + -1) * 0x10;
      uVar7 = *(undefined8 *)(lVar6 + lVar9);
      plVar8 = *(longlong **)(lVar6 + 8 + lVar9);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
      }
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_146019a74(param_2,iVar5);
      }
      lVar6 = *param_2;
      *(undefined8 *)(lVar6 + (longlong)iVar5 * 0x10) = uVar7;
      *(longlong **)(lVar6 + 8 + (longlong)iVar5 * 0x10) = plVar8;
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        plVar3 = plVar8 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar4 = (int *)((longlong)plVar8 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar10));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14684ab92 FUN_14684ab92 body=273 status=ok
// SIG undefined FUN_14684ab92(void)

ulonglong FUN_14684ab92(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  undefined1 uVar1;
  void *_Src;
  undefined1 auStack_98 [44];
  undefined1 local_6c [4];
  void *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_49;
  void *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1401aea18(&local_48);
  _Src = local_48;
  local_49 = 0;
  local_68 = (void *)0x0;
  local_60 = local_40;
  if ((longlong)local_40 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_40,0);
    memcpy(local_68,_Src,(longlong)local_40 * 2);
  }
  local_58 = 3;
  FUN_146853f56(param_1 + 0x130,local_6c,&local_68);
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_14482b35e(param_1 + 0x180,&local_68,&local_48,&local_49);
  if ((char)(param_3 & 0xffffffff) != '\0') {
    FUN_14170d4aa(param_1);
  }
  uVar1 = local_49;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71((int7)((param_3 & 0xffffffff) >> 8),uVar1) ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684aca4 FUN_14684aca4 body=312 status=ok
// SIG undefined FUN_14684aca4(void)

bool FUN_14684aca4(longlong param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1401aea18(&local_58);
  puVar3 = local_58;
  if (local_50 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  iVar2 = local_50 + -1;
  if (local_50 == 0) {
    iVar2 = 0;
  }
  uVar1 = FUN_144a49b4a(iVar2,puVar3);
  iVar2 = FUN_1456cf568(param_1 + 0x180,uVar1,&local_58);
  puVar3 = local_58;
  local_70 = (void *)0x0;
  local_68 = local_50;
  if ((longlong)local_50 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_50,0);
    memcpy(local_70,puVar3,(longlong)local_50 * 2);
  }
  local_60 = 3;
  FUN_14684adde(param_1 + 0x130,&local_70);
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1411a58b4(param_1 + 0x180,&local_58);
  if (param_3 != '\0') {
    FUN_14170d4aa(param_1);
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar2 != -1;
}



// FUNCTION 14684adde FUN_14684adde body=178 status=ok
// SIG undefined FUN_14684adde(void)

void FUN_14684adde(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar6 = *(int *)(param_2 + 1);
    uVar1 = *(undefined4 *)(param_2 + 2);
    if (iVar6 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = (undefined2 *)*param_2;
    }
    iVar3 = iVar6 + -1;
    if (iVar6 == 0) {
      iVar3 = 0;
    }
    uVar5 = FUN_144a49b4a(iVar3,puVar8);
    iVar6 = FUN_144a78877(uVar5,uVar1);
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    uVar9 = (ulonglong)
            *(int *)((longlong)plVar7 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4);
    if (uVar9 != 0xffffffffffffffff) {
      lVar2 = *param_1;
      do {
        cVar4 = FUN_1468542ec(uVar9 * 0x20 + lVar2,param_2);
        if (cVar4 != '\0') {
          FUN_146854b9e(param_1,uVar9 & 0xffffffff);
          return;
        }
        uVar9 = (ulonglong)*(int *)(lVar2 + 0x18 + uVar9 * 0x20);
      } while (uVar9 != 0xffffffffffffffff);
    }
  }
  return;
}



// FUNCTION 14684ae98 FUN_14684ae98 body=255 status=ok
// SIG undefined FUN_14684ae98(void)

void FUN_14684ae98(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  void *_Src;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [36];
  undefined1 local_64 [4];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14684af98(param_2,param_1 + 0x130);
  plVar3 = (longlong *)FUN_1427a267a();
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x98))(plVar3);
  lVar2 = plVar3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *plVar3;
    lVar4 = 0;
    do {
      local_60 = (void *)0x0;
      local_58 = *(int *)(lVar1 + 8 + lVar4);
      lVar5 = (longlong)local_58;
      _Src = *(void **)(lVar1 + lVar4);
      if (lVar5 == 0) {
        local_54 = 0;
      }
      else {
        FUN_1446dd670(&local_60,local_58,0);
        memcpy(local_60,_Src,lVar5 * 2);
      }
      local_50 = 0;
      FUN_146853f56(param_2,local_64);
      if (local_60 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)lVar2 * 0x10 != lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684af98 FUN_14684af98 body=353 status=ok
// SIG undefined FUN_14684af98(void)

void FUN_14684af98(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
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
  uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  uVar4 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar4) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_146854c2c(param_1,uVar4);
    iVar3 = 1;
    if (3 < uVar4) {
      uVar2 = (uVar4 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar3)) {
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_146854366(param_1);
    }
  }
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar3 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar3) || (uStack_48 != plVar1)) {
    do {
      FUN_146854dca(param_1,&local_50,(longlong)iStack_5c * 0x20 + *local_78);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar3));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684b0fc FUN_14684b0fc body=81 status=ok
// SIG undefined FUN_14684b0fc(void)

undefined8 * FUN_14684b0fc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  iVar1 = *(int *)(param_1 + 0x100);
  uVar2 = *(undefined8 *)(param_1 + 0xf8);
  *(int *)(param_2 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_146854f74(param_2,iVar1);
    FUN_146854fcc(*param_2,uVar2,iVar1);
  }
  return param_2;
}



// FUNCTION 14684b176 FUN_14684b176 body=310 status=ok
// SIG undefined FUN_14684b176(void)

void FUN_14684b176(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_1427a1d95(param_1 + 8);
  if (plVar4 == (longlong *)0x0) goto LAB_14684b292;
  lVar3 = *plVar4;
  plVar4 = (longlong *)plVar4[1];
  if (plVar4 == (longlong *)0x0) {
    if (lVar3 == 0) goto LAB_14684b292;
    local_30 = (longlong *)0x0;
    local_38 = lVar3;
    FUN_1427ac142(param_1);
LAB_14684b21f:
    if ((longlong)*(int *)(param_1 + 0x1d8) != 0) {
      lVar5 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x1d0) + 8 + lVar5) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x1d0) + lVar5) != 0)) {
          FUN_146854552(param_1 + 0x1d0,lVar3);
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x1d8) * 0x10 != lVar5);
    }
    if (plVar4 == (longlong *)0x0) goto LAB_14684b292;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (lVar3 != 0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      local_38 = lVar3;
      local_30 = plVar4;
      FUN_1427ac142(param_1);
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
      goto LAB_14684b21f;
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
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
LAB_14684b292:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684b2c0 FUN_14684b2c0 body=239 status=ok
// SIG undefined FUN_14684b2c0(void)

ulonglong FUN_14684b2c0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_1427a1d95(param_1 + 8);
  if (plVar4 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *plVar4;
    plVar4 = (longlong *)plVar4[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if ((lVar3 == 0) || (*(char *)(lVar3 + 0x178) != '\x01')) {
      uVar5 = 0;
    }
    else {
      local_30 = lVar3;
      local_28 = plVar4;
      if (plVar4 == (longlong *)0x0) {
        FUN_1427ac142(param_1,&local_30);
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        FUN_1427ac142(param_1);
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
      uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    }
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684b3b0 FUN_14684b3b0 body=33 status=ok
// SIG undefined FUN_14684b3b0(void)

void FUN_14684b3b0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1427a23dd(param_1 + 8);
  FUN_1427ac768(param_1,uVar1);
  return;
}



// FUNCTION 14684b3d2 FUN_14684b3d2 body=33 status=ok
// SIG undefined FUN_14684b3d2(void)

void FUN_14684b3d2(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1427ac03e(param_1 + 8);
  FUN_1427ac768(param_1,uVar1);
  return;
}



// FUNCTION 14684b406 FUN_14684b406 body=114 status=ok
// SIG undefined FUN_14684b406(void)

ulonglong FUN_14684b406(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  
  plVar4 = (longlong *)FUN_1427a1d95(param_1 + 8);
  if (plVar4 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    lVar3 = *plVar4;
    plVar4 = (longlong *)plVar4[1];
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar3 != 0);
    if (lVar3 != 0) {
      FUN_14684b478(param_3,lVar3 + 0x220);
    }
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
  return uVar5 & 0xffffffff;
}



// FUNCTION 14684b478 FUN_14684b478 body=93 status=ok
// SIG undefined FUN_14684b478(void)

undefined8 * FUN_14684b478(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140a49df3(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140b85908(param_1,iVar1);
      FUN_140b84cc6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14684b4d6 FUN_14684b4d6 body=57 status=ok
// SIG undefined FUN_14684b4d6(void)

bool FUN_14684b4d6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1427a23dd(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    FUN_14684b478(param_3,*plVar1 + 0x220);
  }
  return plVar1 != (longlong *)0x0;
}



// FUNCTION 14684b510 FUN_14684b510 body=57 status=ok
// SIG undefined FUN_14684b510(void)

bool FUN_14684b510(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1427ac03e(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    FUN_14684b478(param_3,*plVar1 + 0x220);
  }
  return plVar1 != (longlong *)0x0;
}



// FUNCTION 14684b572 FUN_14684b572 body=708 status=ok
// SIG undefined FUN_14684b572(void)

ulonglong FUN_14684b572(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  uint local_b0;
  uint local_ac;
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = *(uint *)(param_2 + 1);
  uVar12 = 0;
  if (1 < (int)local_b0) {
    local_a8 = *param_2;
    plVar1 = (longlong *)(param_1 + 8);
    lVar2 = param_1 + 0x18;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_a0 = param_3;
    local_98 = param_4;
    local_60 = lVar2;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_1449c0562(&local_68);
      uVar12 = (ulonglong)*(uint *)(param_1 + 0x30);
    }
    local_78 = local_58;
    uVar6 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    local_90 = plVar1;
    if ((local_78._4_4_ != (uint)uVar12) || (local_60 != lVar2)) {
      local_b0 = local_b0 - 1;
      uVar7 = local_78._4_4_;
      local_ac = (uint)uVar12;
      local_78 = uVar6;
      do {
        lVar3 = *(longlong *)(*local_90 + 0x10 + (longlong)(int)uVar7 * 0x28);
        lVar14 = (longlong)(*(int *)(*local_90 + 0x18 + (longlong)(int)uVar7 * 0x28) + -1) * 0x10;
        lVar4 = *(longlong *)(lVar3 + lVar14);
        if (1 < *(int *)(lVar4 + 0x158)) {
          local_68 = 0;
          local_b8 = 1;
          uVar8 = 0;
          FUN_14125bce8(&local_68,*(undefined8 *)(lVar4 + 0x150),*(int *)(lVar4 + 0x158),0);
          FUN_140002184(&local_68,0x2f);
          lVar5 = local_68;
          uVar7 = (uint)local_60 - 1;
          if ((uint)local_60 == 0) {
            uVar7 = 0;
          }
          uVar10 = local_b0;
          if ((int)uVar7 < (int)local_b0) {
            uVar10 = uVar7;
          }
          uVar13 = 0;
          if (0 < (int)uVar10) {
            uVar13 = uVar10;
          }
          if (uVar7 == uVar13) {
            if (0 < (int)uVar10 && 1 < (uint)local_60) {
              uVar8 = FUN_144a54874(local_68,local_a8,uVar7);
            }
            uVar8 = (uint)(uVar8 == 0);
          }
          if (lVar5 != 0) {
            FUN_1400020a8();
          }
          uVar7 = local_ac;
          uVar12 = (ulonglong)local_ac;
          if ((char)uVar8 != '\0') {
            iVar9 = *(int *)(lVar4 + 0x158) + -1;
            if (*(int *)(lVar4 + 0x158) == 0) {
              iVar9 = 0;
            }
            uVar8 = local_b0 - iVar9;
            if ((int)local_b0 <= (int)(local_b0 - iVar9)) {
              uVar8 = local_b0;
            }
            if ((int)uVar8 < 1) {
              uVar8 = 0;
            }
            lVar2 = local_a8 + (ulonglong)local_b0 * 2;
            lVar3 = *(longlong *)(lVar3 + lVar14);
            if (*(int *)(lVar3 + 0x20) == 0) {
              puVar11 = &DAT_149dfb77a;
            }
            else {
              puVar11 = *(undefined2 **)(lVar3 + 0x18);
            }
            FUN_1446f470e(&local_68,puVar11,1);
            *local_a0 = local_68;
            FUN_1402980a2(local_98,lVar2 - (ulonglong)(uVar8 * 2),uVar8);
            uVar12 = CONCAT71((uint7)(uint3)(uVar7 >> 8),1);
            goto LAB_14684b653;
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        uVar7 = local_78._4_4_;
        uVar6 = local_78;
      } while (local_90 != plVar1 || (local_80 != lVar2 || local_78._4_4_ != (uint)uVar12));
    }
    local_78 = uVar6;
    uVar12 = 0;
  }
LAB_14684b653:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 14684b838 FUN_14684b838 body=303 status=ok
// SIG undefined FUN_14684b838(void)

void FUN_14684b838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  wchar_t *local_50;
  longlong local_48;
  longlong *local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400021e4(param_2,&local_38);
  FUN_14684a250(param_1,&local_48,&local_38);
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
  if ((local_48 != 0) && ((*(byte *)(local_48 + 0x244) & 2) == 0)) {
    local_58 = L"FALSE";
    local_50 = L"FALSE";
    if ((*(byte *)(local_48 + 0x244) & 1) != 0) {
      local_50 = L"TRUE";
    }
    if (*(char *)(local_48 + 0x178) != '\0') {
      local_58 = L"TRUE";
    }
    lVar3 = 0x60;
    if (*(int *)(local_48 + 0x68) < 2) {
      lVar3 = 0x18;
    }
    puVar5 = &DAT_149dfb77a;
    if (*(int *)(local_48 + 8 + lVar3) != 0) {
      puVar5 = *(undefined2 **)(local_48 + lVar3);
    }
    puVar4 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar4 = local_38;
    }
    FUN_140212e80(param_3,
                  L"Skipped package %s was expected to be found in plugin %s, however that plugin is not mounted. [ExplicitlyLoaded = %s, Enabled = %s]."
                  ,puVar4,puVar5);
  }
  FUN_14684b968();
  FUN_146854ff4(&local_38,local_48,param_3);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684b968 FUN_14684b968 body=117 status=ok
// SIG undefined FUN_14684b968(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14684b968(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c926f50) {
    FUN_144b3d300(&DAT_14c926f50);
    if (DAT_14c926f50 == -1) {
      DAT_14c926f38 = 0;
      _DAT_14c926f40 = 0;
      _DAT_14c926f48 = 2;
      atexit(FUN_1427ad0fb);
      _Init_thread_footer(&DAT_14c926f50);
    }
  }
  return &DAT_14c926f38;
}



// FUNCTION 14684b9dd FUN_14684b9dd body=82 status=ok
// SIG undefined FUN_14684b9dd(void)

undefined8 * FUN_14684b9dd(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14684ba2f FUN_14684ba2f body=76 status=ok
// SIG undefined FUN_14684ba2f(void)

void FUN_14684ba2f(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  wchar_t *local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = L"Name";
  local_10 = 4;
  FUN_14047fa10(param_1,&local_18,param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684ba82 FUN_14684ba82 body=3679 status=ok
// SIG undefined FUN_14684ba82(void)

void FUN_14684ba82(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  undefined4 local_1a0;
  wchar_t *local_198;
  undefined4 local_190;
  wchar_t *local_188;
  undefined4 local_180;
  wchar_t *local_178;
  undefined4 local_170;
  wchar_t *local_168;
  undefined4 local_160;
  wchar_t *local_158;
  undefined4 local_150;
  wchar_t *local_148;
  undefined4 local_140;
  wchar_t *local_138;
  undefined4 local_130;
  wchar_t *local_128;
  undefined4 local_120;
  wchar_t *local_118;
  undefined4 local_110;
  wchar_t *local_108;
  undefined4 local_100;
  wchar_t *local_f8;
  undefined4 local_f0;
  wchar_t *local_e8;
  undefined4 local_e0;
  wchar_t *local_d8;
  undefined4 local_d0;
  wchar_t *local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_140056680(&local_78,L"Name");
  FUN_145964e64(param_2,&local_78,param_1);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  FUN_140056680(&local_78,L"Enabled");
  FUN_14626ec84(param_2,&local_78,CONCAT71((int7)((ulonglong)&local_78 >> 8),uVar1) & 0xffffffff);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((*(char *)(param_1 + 0x10) == '\x01') && (*(char *)(param_1 + 0x11) == '\x01')) {
    FUN_140056680(&local_78,L"Optional");
    FUN_14626ec84(param_2,&local_78,1);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_88 = L"Optional";
    local_80 = 8;
    FUN_14683939c(param_2);
  }
  if (*(int *)(param_1 + 0x20) - 2U < 0x7fffffff) {
    FUN_140056680(&local_78,L"Description");
    FUN_145964e64(param_2,&local_78,param_1 + 0x18);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_98 = L"Description";
    local_90 = 0xb;
    FUN_14683939c(param_2);
  }
  if (*(int *)(param_1 + 0x30) - 2U < 0x7fffffff) {
    FUN_140056680(&local_78,L"MarketplaceURL");
    FUN_145964e64(param_2,&local_78,param_1 + 0x28);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_a8 = L"MarketplaceURL";
    local_a0 = 0xe;
    FUN_14683939c(param_2);
  }
  local_1b8 = param_1;
  if ((longlong)*(int *)(param_1 + 0x40) < 1) {
    local_c8 = L"PlatformAllowList";
    local_c0 = 0x11;
    FUN_14683939c(param_2);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    lVar13 = *(longlong *)(param_1 + 0x38);
    lVar10 = (longlong)*(int *)(param_1 + 0x40) << 4;
    do {
      uVar6 = FUN_14001cc68(0x20,0x10);
      FUN_14047c0ce(uVar6,lVar13);
      puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar4 = uStack_70;
      puVar7[1] = &DAT_100000001;
      *puVar7 = &PTR_LAB_149e490e0;
      puVar7[2] = uVar6;
      lVar12 = (longlong)(int)uStack_70;
      uVar5 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
      if (uStack_70._4_4_ < uVar5) {
        FUN_14047d050(&local_78,uVar4 & 0xffffffff);
      }
      *(undefined8 *)(local_78 + lVar12 * 0x10) = uVar6;
      *(undefined8 **)(local_78 + 8 + lVar12 * 0x10) = puVar7;
      lVar13 = lVar13 + 0x10;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
    FUN_140056680(&local_b8,L"PlatformAllowList");
    FUN_14609b57c(param_2,&local_b8,&local_78);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_78,uStack_70 & 0xffffffff);
    param_1 = local_1b8;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((longlong)*(int *)(param_1 + 0x50) < 1) {
    local_d8 = L"PlatformDenyList";
    local_d0 = 0x10;
    FUN_14683939c(param_2);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    lVar13 = *(longlong *)(param_1 + 0x48);
    lVar10 = (longlong)*(int *)(param_1 + 0x50) << 4;
    do {
      uVar6 = FUN_14001cc68(0x20,0x10);
      FUN_14047c0ce(uVar6,lVar13);
      puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar4 = uStack_70;
      puVar7[1] = &DAT_100000001;
      *puVar7 = &PTR_LAB_149e490e0;
      puVar7[2] = uVar6;
      lVar12 = (longlong)(int)uStack_70;
      uVar5 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
      if (uStack_70._4_4_ < uVar5) {
        FUN_14047d050(&local_78,uVar4 & 0xffffffff);
      }
      *(undefined8 *)(local_78 + lVar12 * 0x10) = uVar6;
      *(undefined8 **)(local_78 + 8 + lVar12 * 0x10) = puVar7;
      lVar13 = lVar13 + 0x10;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
    FUN_140056680(&local_b8,L"PlatformDenyList");
    FUN_14609b57c(param_2,&local_b8,&local_78);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_78,uStack_70 & 0xffffffff);
    param_1 = local_1b8;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  iVar3 = *(int *)(param_1 + 0x60);
  local_1b0 = param_2;
  if ((longlong)iVar3 < 1) {
    local_e8 = L"TargetConfigurationAllowList";
    local_e0 = 0x1c;
    FUN_14683939c(param_2);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    lVar13 = *(longlong *)(param_1 + 0x58);
    lVar10 = 0;
    do {
      cVar2 = *(char *)(lVar13 + lVar10);
      puVar7 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      bVar11 = cVar2 - 1;
      pwVar9 = L"Unknown";
      if (bVar11 < 5) {
        pwVar9 = (wchar_t *)(&PTR_u_Debug_149e49df8)[bVar11];
      }
      FUN_140056680(&local_b8,pwVar9);
      *puVar7 = &PTR_FUN_149e43e80;
      puVar7[2] = local_b8;
      local_b8 = 0;
      *(undefined4 *)(puVar7 + 3) = (undefined4)local_b0;
      *(undefined4 *)((longlong)puVar7 + 0x1c) = local_b0._4_4_;
      local_b0 = 0;
      *(undefined4 *)(puVar7 + 1) = 2;
      puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar4 = uStack_70;
      puVar8[1] = &DAT_100000001;
      *puVar8 = &PTR_LAB_149e490e0;
      puVar8[2] = puVar7;
      lVar12 = (longlong)(int)uStack_70;
      uVar5 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
      if (uStack_70._4_4_ < uVar5) {
        FUN_14047d050(&local_78,uVar4 & 0xffffffff);
      }
      *(undefined8 **)(local_78 + lVar12 * 0x10) = puVar7;
      *(undefined8 **)(local_78 + 8 + lVar12 * 0x10) = puVar8;
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + 1;
    } while (iVar3 != lVar10);
    FUN_140056680(&local_b8,L"TargetConfigurationAllowList");
    param_2 = local_1b0;
    FUN_14609b57c(local_1b0,&local_b8,&local_78);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_78,uStack_70 & 0xffffffff);
    param_1 = local_1b8;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  iVar3 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar3 < 1) {
    local_f8 = L"TargetConfigurationDenyList";
    local_f0 = 0x1b;
    FUN_14683939c(param_2);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    lVar13 = *(longlong *)(param_1 + 0x68);
    lVar10 = 0;
    do {
      cVar2 = *(char *)(lVar13 + lVar10);
      puVar7 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      bVar11 = cVar2 - 1;
      pwVar9 = L"Unknown";
      if (bVar11 < 5) {
        pwVar9 = (wchar_t *)(&PTR_u_Debug_149e49df8)[bVar11];
      }
      FUN_140056680(&local_b8,pwVar9);
      *puVar7 = &PTR_FUN_149e43e80;
      puVar7[2] = local_b8;
      local_b8 = 0;
      *(undefined4 *)(puVar7 + 3) = (undefined4)local_b0;
      *(undefined4 *)((longlong)puVar7 + 0x1c) = local_b0._4_4_;
      local_b0 = 0;
      *(undefined4 *)(puVar7 + 1) = 2;
      puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar4 = uStack_70;
      puVar8[1] = &DAT_100000001;
      *puVar8 = &PTR_LAB_149e490e0;
      puVar8[2] = puVar7;
      lVar12 = (longlong)(int)uStack_70;
      uVar5 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
      if (uStack_70._4_4_ < uVar5) {
        FUN_14047d050(&local_78,uVar4 & 0xffffffff);
      }
      *(undefined8 **)(local_78 + lVar12 * 0x10) = puVar7;
      *(undefined8 **)(local_78 + 8 + lVar12 * 0x10) = puVar8;
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + 1;
    } while (iVar3 != lVar10);
    FUN_140056680(&local_b8,L"TargetConfigurationDenyList");
    param_2 = local_1b0;
    FUN_14609b57c(local_1b0,&local_b8,&local_78);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_78,uStack_70 & 0xffffffff);
    param_1 = local_1b8;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  iVar3 = *(int *)(param_1 + 0x80);
  if ((longlong)iVar3 < 1) {
    local_108 = L"TargetAllowList";
    local_100 = 0xf;
    FUN_14683939c(param_2);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    lVar13 = *(longlong *)(param_1 + 0x78);
    lVar10 = 0;
    do {
      cVar2 = *(char *)(lVar13 + lVar10);
      puVar7 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      bVar11 = cVar2 - 1;
      pwVar9 = L"Unknown";
      if (bVar11 < 5) {
        pwVar9 = (wchar_t *)(&PTR_DAT_149e49e20)[bVar11];
      }
      FUN_140056680(&local_b8,pwVar9);
      *puVar7 = &PTR_FUN_149e43e80;
      puVar7[2] = local_b8;
      local_b8 = 0;
      *(undefined4 *)(puVar7 + 3) = (undefined4)local_b0;
      *(undefined4 *)((longlong)puVar7 + 0x1c) = local_b0._4_4_;
      local_b0 = 0;
      *(undefined4 *)(puVar7 + 1) = 2;
      puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar4 = uStack_70;
      puVar8[1] = &DAT_100000001;
      *puVar8 = &PTR_LAB_149e490e0;
      puVar8[2] = puVar7;
      lVar12 = (longlong)(int)uStack_70;
      uVar5 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
      if (uStack_70._4_4_ < uVar5) {
        FUN_14047d050(&local_78,uVar4 & 0xffffffff);
      }
      *(undefined8 **)(local_78 + lVar12 * 0x10) = puVar7;
      *(undefined8 **)(local_78 + 8 + lVar12 * 0x10) = puVar8;
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + 1;
    } while (iVar3 != lVar10);
    FUN_140056680(&local_b8,L"TargetAllowList");
    param_2 = local_1b0;
    FUN_14609b57c(local_1b0,&local_b8,&local_78);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_78,uStack_70 & 0xffffffff);
    param_1 = local_1b8;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  iVar3 = *(int *)(param_1 + 0x90);
  if ((longlong)iVar3 < 1) {
    local_118 = L"TargetDenyList";
    local_110 = 0xe;
    FUN_14683939c(param_2);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    lVar13 = *(longlong *)(param_1 + 0x88);
    lVar10 = 0;
    do {
      cVar2 = *(char *)(lVar13 + lVar10);
      puVar7 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      bVar11 = cVar2 - 1;
      pwVar9 = L"Unknown";
      if (bVar11 < 5) {
        pwVar9 = (wchar_t *)(&PTR_DAT_149e49e20)[bVar11];
      }
      FUN_140056680(&local_b8,pwVar9);
      *puVar7 = &PTR_FUN_149e43e80;
      puVar7[2] = local_b8;
      local_b8 = 0;
      *(undefined4 *)(puVar7 + 3) = (undefined4)local_b0;
      *(undefined4 *)((longlong)puVar7 + 0x1c) = local_b0._4_4_;
      local_b0 = 0;
      *(undefined4 *)(puVar7 + 1) = 2;
      puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar4 = uStack_70;
      puVar8[1] = &DAT_100000001;
      *puVar8 = &PTR_LAB_149e490e0;
      puVar8[2] = puVar7;
      lVar12 = (longlong)(int)uStack_70;
      uVar5 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
      if (uStack_70._4_4_ < uVar5) {
        FUN_14047d050(&local_78,uVar4 & 0xffffffff);
      }
      *(undefined8 **)(local_78 + lVar12 * 0x10) = puVar7;
      *(undefined8 **)(local_78 + 8 + lVar12 * 0x10) = puVar8;
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
      lVar10 = lVar10 + 1;
    } while (iVar3 != lVar10);
    FUN_140056680(&local_b8,L"TargetDenyList");
    param_2 = local_1b0;
    FUN_14609b57c(local_1b0,&local_b8,&local_78);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_78,uStack_70 & 0xffffffff);
    param_1 = local_1b8;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((longlong)*(int *)(param_1 + 0xa0) < 1) {
    local_128 = L"SupportedTargetPlatforms";
    local_120 = 0x18;
    FUN_14683939c(param_2);
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    lVar13 = *(longlong *)(param_1 + 0x98);
    lVar10 = (longlong)*(int *)(param_1 + 0xa0) << 4;
    do {
      uVar6 = FUN_14001cc68(0x20,0x10);
      FUN_14047c0ce(uVar6,lVar13);
      puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      uVar4 = uStack_70;
      puVar7[1] = &DAT_100000001;
      *puVar7 = &PTR_LAB_149e490e0;
      puVar7[2] = uVar6;
      lVar12 = (longlong)(int)uStack_70;
      uVar5 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
      if (uStack_70._4_4_ < uVar5) {
        FUN_14047d050(&local_78,uVar4 & 0xffffffff);
      }
      *(undefined8 *)(local_78 + lVar12 * 0x10) = uVar6;
      *(undefined8 **)(local_78 + 8 + lVar12 * 0x10) = puVar7;
      lVar13 = lVar13 + 0x10;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
    FUN_140056680(&local_b8,L"SupportedTargetPlatforms");
    FUN_14609b57c(param_2,&local_b8,&local_78);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_14047c710(local_78,uStack_70 & 0xffffffff);
    param_1 = local_1b8;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)(param_1 + 0xa8) == '\x01') {
    FUN_140056680(&local_78,L"HasExplicitPlatforms");
    FUN_14626ec84(param_2,&local_78,1);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_138 = L"HasExplicitPlatforms";
    local_130 = 0x14;
    FUN_14683939c(param_2);
  }
  if ((*(char *)(param_1 + 0x10) == '\x01') && (*(char *)(param_1 + 0xb0) == '\x01')) {
    iVar3 = *(int *)(param_1 + 0xac);
    FUN_140056680(&local_78,L"Version");
    FUN_14626eb76(param_2,&local_78,(double)iVar3);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_148 = L"Version";
    local_140 = 7;
    FUN_14683939c(param_2);
  }
  local_158 = L"WhitelistPlatforms";
  local_150 = 0x12;
  FUN_14683939c(param_2);
  local_168 = L"BlacklistPlatforms";
  local_160 = 0x12;
  FUN_14683939c(param_2);
  local_178 = L"WhitelistTargetConfigurations";
  local_170 = 0x1d;
  FUN_14683939c(param_2);
  local_188 = L"BlacklistTargetConfigurations";
  local_180 = 0x1d;
  FUN_14683939c(param_2);
  local_198 = L"WhitelistTargets";
  local_190 = 0x10;
  FUN_14683939c(param_2);
  local_1a8 = L"BlacklistTargets";
  local_1a0 = 0x10;
  FUN_14683939c(param_2);
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684c8e2 FUN_14684c8e2 body=326 status=ok
// SIG undefined FUN_14684c8e2(void)

void FUN_14684c8e2(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar4 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149e441a0;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  plVar4[9] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  plVar4[10] = 0;
  plVar4[0xb] = 0;
  *(undefined4 *)((longlong)plVar4 + 0x3c) = 0x80;
  *(undefined4 *)(plVar4 + 8) = 0xffffffff;
  if (plVar4 == (longlong *)0x0) {
    FUN_14684ba82(param_1,0x10);
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
    FUN_14684ba82(param_1,plVar4 + 2);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    local_30 = plVar4;
  }
  local_38 = plVar4 + 2;
  FUN_145d35994(&local_38,param_2,1);
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684ca2a FUN_14684ca2a body=145 status=ok
// SIG undefined FUN_14684ca2a(void)

void FUN_14684ca2a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = L"Plugins";
  if (0 < (int)param_2[1]) {
    FUN_146844a88(param_1,&local_28);
    if ((longlong)(int)param_2[1] != 0) {
      lVar2 = *param_2;
      lVar1 = (longlong)(int)param_2[1] * 0xb8;
      do {
        FUN_14684c8e2(lVar2,param_1);
        lVar2 = lVar2 + 0xb8;
        lVar1 = lVar1 + -0xb8;
      } while (lVar1 != 0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684cacc FUN_14684cacc body=2000 status=ok
// SIG undefined FUN_14684cacc(void)

void FUN_14684cacc(undefined8 param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,longlong *param_7)

{
  int *piVar1;
  bool bVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong **pplVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_198 [40];
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  int local_150;
  longlong **local_148;
  undefined8 uStack_140;
  undefined1 *local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_118;
  undefined8 local_110;
  int local_108;
  longlong *local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined1 local_dc [4];
  longlong *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_170 = param_4;
  if ((int)param_3[1] < 1) {
    local_158 = *param_2;
    local_150 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_150 = 0;
    }
    FUN_14683939c();
  }
  else {
    local_f8 = 0;
    uStack_f0 = 0;
    local_110 = *param_2;
    local_108 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_108 = 0;
    }
    local_168 = param_2;
    local_160 = param_1;
    cVar5 = FUN_140480164(param_1,&local_110,&local_100);
    if (cVar5 == '\0') {
      if ((longlong)(int)param_3[1] != 0) {
        lVar15 = *param_3;
        lVar16 = (longlong)(int)param_3[1] * 0xb8;
        do {
          puVar9 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          puVar9[4] = 0;
          *(undefined4 *)(puVar9 + 5) = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
          *(undefined8 *)((longlong)puVar9 + 0x2c) = 0xffffffff00000080;
          *(undefined4 *)((longlong)puVar9 + 0x34) = 0;
          puVar9[8] = 0;
          *(undefined4 *)(puVar9 + 9) = 0;
          plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
          plVar10[1] = (longlong)&DAT_100000001;
          *plVar10 = (longlong)&PTR_FUN_149e49100;
          plVar10[2] = (longlong)puVar9;
          plVar13 = (longlong *)0x0;
          if (*(int *)(param_6 + 1) != 0) {
            plVar13 = (longlong *)*param_6;
          }
          (**(code **)(*plVar13 + 0x58))(plVar13,lVar15,puVar9);
          puVar11 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          *puVar11 = &PTR_FUN_149e440f0;
          puVar11[2] = puVar9;
          puVar11[3] = plVar10;
          *(undefined4 *)(puVar11 + 1) = 6;
          puVar9 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          uVar4 = uStack_f0;
          puVar9[1] = &DAT_100000001;
          *puVar9 = &PTR_FUN_149e49120;
          puVar9[2] = puVar11;
          lVar17 = (longlong)(int)uStack_f0;
          uVar8 = (int)uStack_f0 + 1;
          uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar8);
          if (uStack_f0._4_4_ < uVar8) {
            FUN_14047d050(&local_f8,uVar4 & 0xffffffff);
          }
          *(undefined8 **)(local_f8 + lVar17 * 0x10) = puVar11;
          *(undefined8 **)(local_f8 + 8 + lVar17 * 0x10) = puVar9;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar10 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
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
          lVar15 = lVar15 + 0xb8;
          lVar16 = lVar16 + -0xb8;
        } while (lVar16 != 0);
      }
    }
    else {
      local_98 = 0;
      local_90 = 0;
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      local_8c = 0xffffffff00000080;
      local_84 = 0;
      local_78 = 0;
      local_70 = 0;
      if ((longlong)(int)param_3[1] != 0) {
        lVar15 = *param_3;
        lVar16 = (longlong)(int)param_3[1] * 0xb8;
        do {
          if (*(int *)(local_170 + 1) == 0) {
            plVar13 = (longlong *)0x0;
          }
          else {
            plVar13 = (longlong *)*local_170;
          }
          local_118 = lVar15;
          (**(code **)(*plVar13 + 0x58))(plVar13,&local_d8,lVar15);
          local_148 = &local_d8;
          uStack_140 = &local_118;
          FUN_1468550c4(&local_b8,local_dc,&local_148);
          if (local_d8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          lVar15 = lVar15 + 0xb8;
          lVar16 = lVar16 + -0xb8;
        } while (lVar16 != 0);
      }
      if ((longlong)(int)local_100[1] != 0) {
        puVar9 = (undefined8 *)*local_100;
        puVar11 = puVar9 + (longlong)(int)local_100[1] * 2;
        do {
          plVar13 = (longlong *)*puVar9;
          plVar10 = (longlong *)puVar9[1];
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          cVar5 = (**(code **)(*plVar13 + 0x80))(plVar13,&local_d8);
          if (cVar5 != '\0') {
            local_148 = (longlong **)0x0;
            uStack_140 = (longlong *)0x0;
            if (*(int *)(param_5 + 1) == 0) {
              plVar12 = (longlong *)0x0;
            }
            else {
              plVar12 = (longlong *)*param_5;
            }
            cVar5 = (**(code **)(*plVar12 + 0x58))(plVar12,*local_d8,&local_148);
            if (cVar5 != '\0') {
              pplVar14 = (longlong **)&DAT_149dfb77a;
              if ((int)uStack_140 != 0) {
                pplVar14 = local_148;
              }
              iVar7 = (int)uStack_140 + -1;
              if ((int)uStack_140 == 0) {
                iVar7 = 0;
              }
              uVar6 = FUN_144a49b4a(iVar7,pplVar14);
              iVar7 = FUN_140e3925c(&local_b8,uVar6,&local_148);
              if (local_b8 + (longlong)iVar7 * 4 != (longlong *)0x0 && iVar7 != -1) {
                if (*(int *)(param_6 + 1) == 0) {
                  plVar12 = (longlong *)0x0;
                }
                else {
                  plVar12 = (longlong *)*param_6;
                }
                (**(code **)(*plVar12 + 0x58))
                          (plVar12,(local_b8 + (longlong)iVar7 * 4)[2],*local_d8);
                uVar4 = uStack_f0;
                lVar15 = (longlong)(int)uStack_f0;
                uVar8 = (int)uStack_f0 + 1;
                uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar8);
                if (uStack_f0._4_4_ < uVar8) {
                  FUN_14047d050(&local_f8,uVar4 & 0xffffffff);
                }
                *(longlong **)(local_f8 + lVar15 * 0x10) = plVar13;
                *(longlong **)(local_f8 + 8 + lVar15 * 0x10) = plVar10;
                if (plVar10 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
                  UNLOCK();
                }
                FUN_14685521a(&local_b8,&local_148);
              }
            }
            if (local_148 != (longlong **)0x0) {
              FUN_1400020a8();
            }
          }
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar10 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
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
          puVar9 = puVar9 + 2;
        } while (puVar9 != puVar11);
      }
      local_d0 = local_a8;
      local_d8 = (longlong *)&DAT_100000000;
      local_c8 = 0xffffffff;
      local_c0 = 0;
      if (local_90 != 0) {
        FUN_1449c0562(&local_d8);
      }
      local_130 = local_c8;
      uVar3 = local_130;
      local_128 = local_c0;
      local_124 = local_bc;
      uStack_140 = local_d8;
      local_138 = local_d0;
      local_148 = &local_b8;
      local_130._4_4_ = (int)((ulonglong)local_c8 >> 0x20);
      bVar2 = local_130._4_4_ < *(int *)(local_d0 + 0x18);
      iVar7 = local_130._4_4_;
      local_130 = uVar3;
      if (bVar2) {
        do {
          puVar9 = (undefined8 *)FUN_14001cc68(0x50,0x10);
          puVar9[4] = 0;
          *(undefined4 *)(puVar9 + 5) = 0;
          *puVar9 = 0;
          puVar9[1] = 0;
          *(undefined8 *)((longlong)puVar9 + 0x2c) = 0xffffffff00000080;
          *(undefined4 *)((longlong)puVar9 + 0x34) = 0;
          puVar9[8] = 0;
          *(undefined4 *)(puVar9 + 9) = 0;
          plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
          plVar10[1] = (longlong)&DAT_100000001;
          *plVar10 = (longlong)&PTR_FUN_149e49100;
          plVar10[2] = (longlong)puVar9;
          plVar13 = (longlong *)0x0;
          if (*(int *)(param_6 + 1) != 0) {
            plVar13 = (longlong *)*param_6;
          }
          (**(code **)(*plVar13 + 0x58))(plVar13,(*local_148)[(longlong)iVar7 * 4 + 2],puVar9);
          puVar11 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
          }
          *puVar11 = &PTR_FUN_149e440f0;
          puVar11[2] = puVar9;
          puVar11[3] = plVar10;
          *(undefined4 *)(puVar11 + 1) = 6;
          puVar9 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          uVar4 = uStack_f0;
          puVar9[1] = &DAT_100000001;
          *puVar9 = &PTR_FUN_149e49120;
          puVar9[2] = puVar11;
          lVar15 = (longlong)(int)uStack_f0;
          uVar8 = (int)uStack_f0 + 1;
          uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar8);
          if (uStack_f0._4_4_ < uVar8) {
            FUN_14047d050(&local_f8,uVar4 & 0xffffffff);
          }
          *(undefined8 **)(local_f8 + lVar15 * 0x10) = puVar11;
          *(undefined8 **)(local_f8 + 8 + lVar15 * 0x10) = puVar9;
          if (plVar10 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar10 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
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
          local_130 = CONCAT44(local_130._4_4_,(uint)local_130 & ~uStack_140._4_4_);
          FUN_1449c0562(&uStack_140);
          bVar2 = local_130._4_4_ < *(int *)(local_138 + 0x18);
          iVar7 = local_130._4_4_;
        } while (bVar2);
      }
      local_70 = 0;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      FUN_14170e134(&local_b8);
    }
    if (((int)param_7[1] != 0) && (plVar13 = (longlong *)*param_7, plVar13 != (longlong *)0x0)) {
      (**(code **)(*plVar13 + 0x60))(plVar13,&local_f8);
    }
    FUN_14683985c(local_160,local_168,&local_f8);
    FUN_14047c710(local_f8,uStack_f0 & 0xffffffff);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1449db362(local_170);
  FUN_1449db362(param_5);
  FUN_1449db362(param_6);
  FUN_1449db362(param_7);
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14684d29e FUN_14684d29e body=164 status=ok
// SIG undefined FUN_14684d29e(void)

void FUN_14684d29e(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x27) = 0xffffffff00000080;
  param_1[0x29] = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  param_1[0x2e] = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x3a] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x3b) = 0xffffffff00000080;
  param_1[0x3d] = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_1[0x42] = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *param_1 = 3;
  param_1[0x1a] = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  return;
}



// FUNCTION 14684d342 FUN_14684d342 body=118 status=ok
// SIG undefined FUN_14684d342(void)

void FUN_14684d342(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a06ecc(&local_28);
  puVar3 = local_28;
  if (local_20 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  iVar1 = local_20 + -1;
  if (local_20 == 0) {
    iVar1 = 0;
  }
  uVar2 = FUN_144a49b4a(iVar1,puVar3);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14684d3ba FUN_14684d3ba body=122 status=ok
// SIG undefined FUN_14684d3ba(void)

bool FUN_14684d3ba(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0x68);
  FUN_144a06ecc(&local_28);
  puVar3 = local_28;
  if (local_20 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  iVar2 = local_20 + -1;
  if (local_20 == 0) {
    iVar2 = 0;
  }
  iVar2 = FUN_144a49b4a(iVar2,puVar3);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar1 == iVar2;
}



// FUNCTION 14684d436 FUN_14684d436 body=507 status=ok
// SIG undefined FUN_14684d436(void)

undefined8 FUN_14684d436(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *_Src;
  char cVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = (longlong *)FUN_14054d1d4();
  FUN_145ef8e44(&local_50);
  puVar8 = &DAT_149dfb77a;
  puVar9 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar9 = local_50;
  }
  (**(code **)(*plVar5 + 0x100))(plVar5,&local_40,puVar9);
  iVar7 = 0;
  if (local_38 != 0) {
    puVar8 = local_40;
    iVar7 = local_38 + -1;
  }
  cVar3 = FUN_144a791f8(param_2,puVar8,iVar7,1);
  cVar4 = '\x01';
  if (cVar3 == '\0') {
    plVar5 = (longlong *)FUN_14054d1d4();
    FUN_145ef8dd4(&local_70);
    puVar8 = &DAT_149dfb77a;
    puVar9 = &DAT_149dfb77a;
    if (local_68 != 0) {
      puVar9 = local_70;
    }
    (**(code **)(*plVar5 + 0x100))(plVar5,&local_60,puVar9);
    iVar7 = 0;
    if (local_58 != 0) {
      puVar8 = local_60;
      iVar7 = local_58 + -1;
    }
    cVar4 = FUN_144a791f8(param_2,puVar8,iVar7,1);
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (cVar4 == '\0') {
    plVar5 = (longlong *)(param_1 + 0x118);
    cVar3 = FUN_144a23846(plVar5,param_2);
    if (cVar3 == '\0') {
      iVar7 = *(int *)(param_1 + 0x120);
      *(uint *)(param_1 + 0x120) = iVar7 + 1U;
      if (*(uint *)(param_1 + 0x124) < iVar7 + 1U) {
        FUN_1447a1bd6(plVar5,iVar7);
      }
      lVar2 = *plVar5;
      lVar10 = (longlong)iVar7 * 0x10;
      puVar1 = (undefined8 *)(lVar2 + lVar10);
      *(undefined8 *)(lVar2 + lVar10) = 0;
      iVar7 = *(int *)(param_2 + 1);
      _Src = (void *)*param_2;
      *(int *)(lVar2 + 8 + lVar10) = iVar7;
      if ((longlong)iVar7 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar7,0);
        memcpy((void *)*puVar1,_Src,(longlong)iVar7 * 2);
      }
      uVar6 = 1;
      goto LAB_14684d503;
    }
  }
  uVar6 = 0;
LAB_14684d503:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684d632 FUN_14684d632 body=1215 status=ok
// SIG undefined FUN_14684d632(void)

undefined4 FUN_14684d632(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  longlong *local_128 [2];
  undefined8 local_118;
  longlong *local_110;
  longlong *local_108 [2];
  longlong *local_f8 [2];
  longlong *local_e8;
  int local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  longlong *local_b8 [2];
  longlong *local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar4 = (longlong *)FUN_1427a267a();
  cVar2 = (**(code **)(*plVar4 + 200))(plVar4);
  if (cVar2 == '\0') {
    local_a8 = (longlong *)0x0;
    uStack_a0 = 0;
    FUN_14619f8aa(&local_d8,&local_a8,0);
    FUN_140bee914(&local_60,param_2);
    FUN_14684daf2(param_1,local_d8,&local_60);
    if (local_60 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)(*local_d8 + 8))();
    uVar5 = FUN_14054d1d4();
    if (*(int *)(param_2 + 1) == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = (undefined2 *)*param_2;
    }
    local_e8 = local_a8;
    local_e0 = (int)uStack_a0 + -1;
    if ((int)uStack_a0 == 0) {
      local_e0 = 0;
    }
    local_138 = 0;
    uVar3 = FUN_1415d54ec(&local_e8,puVar6,0,uVar5);
    if ((char)uVar3 == '\0') {
      FUN_140009b9a(local_108,param_2);
      local_60 = L"FailedToWriteOutputFile";
      local_58 = 0x17;
      FUN_1446e940c(local_12c,&local_60);
      local_60 = L"ProjectDescriptor";
      local_58 = 0x11;
      FUN_1446e940c(local_130,&local_60);
      FUN_140208bae(local_128,local_130,local_12c,
                    L"Failed to write output file \'{0}\'. Perhaps the file is Read-Only?");
      FUN_14023409e(&local_118,local_128,1);
      local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
      FUN_14023423e(local_50,local_108);
      local_78 = &local_40;
      local_80 = &local_60;
      FUN_14010d304(&local_70);
      local_90 = local_118;
      local_88 = local_110;
      if (local_110 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_110 + 1) = (int)local_110[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_f8,&local_90,&local_70);
      FUN_14007f2db(local_70,local_68);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      if (local_50[0] != (longlong *)0x0) {
        (**(code **)(*local_50[0] + 0x10))();
      }
      if (local_110 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_110 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_110)(local_110);
          LOCK();
          piVar1 = (int *)((longlong)local_110 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_110 + 0x10))(local_110);
          }
        }
      }
      if (local_108[0] != (longlong *)0x0) {
        (**(code **)(*local_108[0] + 0x10))();
      }
      FUN_140008f88(param_3,local_f8);
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
      }
      if (local_128[0] != (longlong *)0x0) {
        (**(code **)(*local_128[0] + 0x10))();
      }
    }
    if (local_d0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_d0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_d0)(local_d0);
        LOCK();
        piVar1 = (int *)((longlong)local_d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_d0 + 0x10))(local_d0);
        }
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_140009b9a(local_b8,param_2);
    local_60 = L"FailedToWriteOutputFileSuppressed";
    local_58 = 0x21;
    FUN_1446e940c(local_f8,&local_60);
    local_60 = L"ProjectDescriptor";
    local_58 = 0x11;
    FUN_1446e940c(local_128,&local_60);
    FUN_140208bae(&local_d8,local_128,local_f8,
                  L"Failed to write output file \'{0}\'. Project file saving is suppressed. Use the \'UNSUPPRESS PROJECT\' console command to disable this."
                 );
    FUN_14023409e(&local_c8,&local_d8,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_b8);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_c8;
    local_88 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_a8,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_c0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar1 = (int *)((longlong)local_c0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_c0 + 0x10))(local_c0);
        }
      }
    }
    if (local_b8[0] != (longlong *)0x0) {
      (**(code **)(*local_b8[0] + 0x10))();
    }
    FUN_140008f88(param_3,&local_a8);
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x10))();
    }
    if (local_d8 != (longlong *)0x0) {
      (**(code **)(*local_d8 + 0x10))();
    }
    uVar3 = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684daf2 FUN_14684daf2 body=1046 status=ok
// SIG undefined FUN_14684daf2(void)

void FUN_14684daf2(longlong param_1,longlong param_2,undefined8 param_3)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145d36528(param_2);
  FUN_14684df0a(param_2);
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_1 + 0x10);
  lVar3 = (longlong)local_50;
  pvVar1 = *(void **)(param_1 + 8);
  if (lVar3 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar1,lVar3 * 2);
  }
  FUN_14684dfe6(param_2,&local_58);
  local_68 = (void *)0x0;
  local_60 = *(int *)(param_1 + 0x20);
  lVar3 = (longlong)local_60;
  pvVar1 = *(void **)(param_1 + 0x18);
  if (lVar3 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,pvVar1,lVar3 * 2);
  }
  FUN_14684e084(param_2,&local_68);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_1 + 0x30);
  lVar3 = (longlong)local_70;
  pvVar1 = *(void **)(param_1 + 0x28);
  if (lVar3 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar1,lVar3 * 2);
  }
  FUN_14684e122(param_2,&local_78);
  if (*(char *)(param_1 + 0x111) == '\x01') {
    FUN_146850c14(param_2,L"DisableEnginePluginsByDefault");
    local_48 = (undefined2 *)CONCAT62(local_48._2_6_,0x20);
    (**(code **)(**(longlong **)(param_2 + 8) + 0x170))(*(longlong **)(param_2 + 8),&local_48,2);
    local_48 = &DAT_149e06346;
    local_40 = 4;
    FUN_145d3640c(*(undefined8 *)(param_2 + 8),&local_48);
    *(undefined4 *)(param_2 + 0x20) = 9;
  }
  if (*(char *)(param_1 + 0x110) == '\x01') {
    FUN_146850c14(param_2,L"Enterprise");
    local_48 = (undefined2 *)CONCAT62(local_48._2_6_,0x20);
    (**(code **)(**(longlong **)(param_2 + 8) + 0x170))(*(longlong **)(param_2 + 8),&local_48,2);
    local_48 = &DAT_149e06346;
    local_40 = 4;
    FUN_145d3640c(*(undefined8 *)(param_2 + 8),&local_48);
    *(undefined4 *)(param_2 + 0x20) = 9;
  }
  FUN_1468455f0(param_2,param_1 + 0x38);
  FUN_14684ca2a(param_2,param_1 + 0x48);
  if (0 < *(int *)(param_1 + 0x120)) {
    FUN_14684e1c0(param_2);
    if ((longlong)*(int *)(param_1 + 0x120) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x118);
      lVar2 = (longlong)*(int *)(param_1 + 0x120) << 4;
      do {
        FUN_14684e26c(&local_48,lVar3,param_3);
        FUN_14683d42c(param_2,&local_48);
        if (local_48 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar3 = lVar3 + 0x10;
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
    FUN_14683d522(param_2);
  }
  if (0 < *(int *)(param_1 + 0x130)) {
    FUN_14684e3a0(param_2);
    if ((longlong)*(int *)(param_1 + 0x130) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x128);
      lVar2 = (longlong)*(int *)(param_1 + 0x130) << 4;
      do {
        FUN_14684e26c(&local_48,lVar3,param_3);
        FUN_14683d42c(param_2,&local_48);
        if (local_48 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar3 = lVar3 + 0x10;
        lVar2 = lVar2 + -0x10;
      } while (lVar2 != 0);
    }
    FUN_14683d522(param_2);
  }
  if (0 < *(int *)(param_1 + 0x60)) {
    FUN_14684e44c(param_2);
    if (0 < *(int *)(param_1 + 0x60)) {
      lVar3 = 0;
      lVar2 = 0;
      do {
        FUN_1400021e4(*(longlong *)(param_1 + 0x58) + lVar3,&local_48);
        FUN_14683d42c(param_2,&local_48);
        if (local_48 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar2 = lVar2 + 1;
        lVar3 = lVar3 + 8;
      } while (lVar2 < *(int *)(param_1 + 0x60));
    }
    FUN_14683d522(param_2);
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_140002266(local_88,&DAT_149e061aa);
    FUN_14684e4f8(param_2,local_88);
  }
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    FUN_140056680(&local_48,L"PreBuildSteps");
    FUN_146844212(param_1 + 0x70,param_2,&local_48);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)) {
    FUN_140056680(&local_48,L"PostBuildSteps");
    FUN_146844212(param_1 + 0xc0,param_2,&local_48);
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_145d36462(param_2);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684df0a FUN_14684df0a body=219 status=ok
// SIG undefined FUN_14684df0a(void)

void FUN_14684df0a(longlong param_1)

{
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  ulonglong *local_68;
  char local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_146850c14(param_1,L"FileVersion");
  local_78 = (undefined1 *)CONCAT62(local_78._2_6_,0x20);
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_78,2);
  local_78 = local_58;
  local_60 = '\0';
  local_68 = &local_18;
  local_70 = local_78;
  FUN_140212e80(&local_78,L"%lld",3);
  local_88 = local_78;
  local_80 = (undefined4)((ulonglong)((longlong)local_70 - (longlong)local_78) >> 1);
  FUN_145d3640c(*(undefined8 *)(param_1 + 8));
  if (local_60 == '\x01') {
    FUN_1400020a8(local_78);
  }
  *(undefined4 *)(param_1 + 0x20) = 8;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684dfe6 FUN_14684dfe6 body=156 status=ok
// SIG undefined FUN_14684dfe6(void)

void FUN_14684dfe6(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146850c14(param_1,L"EngineAssociation");
  local_30 = CONCAT62(local_30._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_30,2);
  local_28 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    local_28 = 0;
  }
  local_30 = *param_2;
  (**(code **)(*param_1 + 0x18))(param_1,&local_30);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684e084 FUN_14684e084 body=156 status=ok
// SIG undefined FUN_14684e084(void)

void FUN_14684e084(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146850c14(param_1,L"Category");
  local_30 = CONCAT62(local_30._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_30,2);
  local_28 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    local_28 = 0;
  }
  local_30 = *param_2;
  (**(code **)(*param_1 + 0x18))(param_1,&local_30);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684e122 FUN_14684e122 body=156 status=ok
// SIG undefined FUN_14684e122(void)

void FUN_14684e122(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146850c14(param_1,L"Description");
  local_30 = CONCAT62(local_30._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_30,2);
  local_28 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    local_28 = 0;
  }
  local_30 = *param_2;
  (**(code **)(*param_1 + 0x18))(param_1,&local_30);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684e1c0 FUN_14684e1c0 body=170 status=ok
// SIG undefined FUN_14684e1c0(void)

void FUN_14684e1c0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [44];
  undefined2 local_1c;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146850c14(param_1,L"AdditionalPluginDirectories");
  local_1c = 0x20;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1c,2);
  local_1a = 0x5b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x20) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684e26c FUN_14684e26c body=306 status=ok
// SIG undefined FUN_14684e26c(void)

undefined8 * FUN_14684e26c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  int local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)FUN_14054d1d4();
  local_58 = (*(int *)(param_3 + 1) == 0) + 1;
  local_50 = (undefined2 *)0x0;
  FUN_14125bce8(&local_50,*param_3,*(int *)(param_3 + 1),0);
  FUN_1401aebe8(&local_50,&DAT_149dfb77a,0);
  puVar3 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar3 = local_50;
  }
  (**(code **)(*plVar2 + 0x100))(plVar2,&local_40,puVar3);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_145a3c032(&local_40);
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  puVar3 = local_40;
  if (local_38 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_14107002a(param_1,puVar3);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14684e3a0 FUN_14684e3a0 body=170 status=ok
// SIG undefined FUN_14684e3a0(void)

void FUN_14684e3a0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [44];
  undefined2 local_1c;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146850c14(param_1,L"AdditionalRootDirectories");
  local_1c = 0x20;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1c,2);
  local_1a = 0x5b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x20) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684e44c FUN_14684e44c body=170 status=ok
// SIG undefined FUN_14684e44c(void)

void FUN_14684e44c(longlong param_1)

{
  int iVar1;
  undefined1 auStack_48 [44];
  undefined2 local_1c;
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146850c14(param_1,L"TargetPlatforms");
  local_1c = 0x20;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1c,2);
  local_1a = 0x5b;
  (**(code **)(**(longlong **)(param_1 + 8) + 0x170))(*(longlong **)(param_1 + 8),&local_1a,2);
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_14047d866(param_1 + 0x10,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = 5;
  *(undefined4 *)(param_1 + 0x20) = 4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684e4f8 FUN_14684e4f8 body=156 status=ok
// SIG undefined FUN_14684e4f8(void)

void FUN_14684e4f8(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146850c14(param_1,L"EpicSampleNameHash");
  local_30 = CONCAT62(local_30._2_6_,0x20);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_30,2);
  local_28 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    local_28 = 0;
  }
  local_30 = *param_2;
  (**(code **)(*param_1 + 0x18))(param_1,&local_30);
  *(undefined4 *)(param_1 + 4) = 7;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684e596 FUN_14684e596 body=111 status=ok
// SIG undefined FUN_14684e596(void)

bool FUN_14684e596(longlong *param_1)

{
  void *_Dst;
  longlong lVar1;
  uint uVar2;
  
  uVar2 = FUN_144a075de();
  if (uVar2 != 0xffffffff) {
    lVar1 = *param_1;
    _Dst = (void *)(lVar1 + (longlong)(int)uVar2 * 0x10);
    FUN_1447a1747(_Dst,1);
    memmove(_Dst,(void *)(lVar1 + (longlong)(int)uVar2 * 0x10 + 0x10),
            (longlong)(int)(~uVar2 + (int)param_1[1]) << 4);
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
  }
  return uVar2 != 0xffffffff;
}



// FUNCTION 14684e606 FUN_14684e606 body=245 status=ok
// SIG undefined FUN_14684e606(void)

undefined8 FUN_14684e606(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  int local_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x40), 0 < lVar2)) {
    lVar5 = 0;
    do {
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(param_2 + 1) != 0) {
        puVar4 = (undefined2 *)*param_2;
      }
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
      FUN_1446f470e(&local_50,puVar4,1);
      if ((*(int *)(lVar1 + lVar5) == local_50) && (*(int *)(lVar1 + 4 + lVar5) == iStack_4c)) {
        if (*(int *)(param_3 + 1) == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        else {
          puVar4 = (undefined2 *)*param_3;
        }
        FUN_1446f470e(&local_50,puVar4,1);
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x38);
        *(ulonglong *)(lVar2 + lVar5) = CONCAT44(iStack_4c,local_50);
        uVar3 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
        goto LAB_14684e69c;
      }
      lVar5 = lVar5 + 0x168;
    } while (lVar2 * 0x168 - lVar5 != 0);
  }
  uVar3 = 0;
LAB_14684e69c:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684e6fc FUN_14684e6fc body=250 status=ok
// SIG undefined FUN_14684e6fc(void)

undefined8 * FUN_14684e6fc(void)

{
  size_t sVar1;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  int local_40;
  wchar_t *local_38;
  undefined4 local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c926f80) && (FUN_144b3d300(&DAT_14c926f80), DAT_14c926f80 == -1)) {
    FUN_145cbe840(&local_48);
    local_38 = local_48;
    if (local_40 == 0) {
      local_38 = L"";
    }
    if (local_38 == (wchar_t *)0x0) {
      local_30 = 0;
    }
    else {
      sVar1 = wcslen(local_38);
      local_30 = (int)sVar1;
    }
    local_28 = L"AutoLoadProject.txt";
    local_20 = 0x13;
    FUN_140bee87a(&DAT_14c926f70,&local_38,2);
    if (local_48 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    atexit((_func_5014 *)&LAB_1427adfe7);
    _Init_thread_footer(&DAT_14c926f80);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return &DAT_14c926f70;
}



// FUNCTION 14684e7f8 FUN_14684e7f8 body=318 status=ok
// SIG undefined FUN_14684e7f8(void)

undefined4
FUN_14684e7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_188 [32];
  undefined4 local_168 [2];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar2 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_168[0] = 3;
  local_100 = 0;
  local_58 = 0;
  cVar1 = FUN_146246cfe(local_168,param_2,param_4);
  if (cVar1 != '\0') {
    FUN_14684d342(local_168,param_2);
    FUN_144a787a6(&local_150,param_3);
    uVar2 = FUN_14684d632(local_168,param_2,param_4);
  }
  FUN_14684e938(local_168);
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684e938 FUN_14684e938 body=282 status=ok
// SIG undefined FUN_14684e938(void)

void FUN_14684e938(longlong param_1)

{
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 0x130));
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x120));
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_140a49dbc(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_140a49dbc(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_140a49df3(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_140a49e1c(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14684ea52 FUN_14684ea52 body=309 status=ok
// SIG undefined FUN_14684ea52(void)

undefined4 FUN_14684ea52(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_188 [32];
  longlong *local_168 [2];
  undefined4 local_158 [2];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined2 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_144a5dc74(local_168);
  local_c8 = 0;
  local_c0 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_158[0] = 3;
  local_f0 = 0;
  local_48 = 0;
  uVar1 = FUN_146246cfe(local_158,param_2,local_168);
  if ((char)uVar1 != '\0') {
    FUN_14684eb88(local_158,param_2,param_3);
  }
  FUN_14684e938(local_158);
  if (local_168[0] != (longlong *)0x0) {
    (**(code **)(*local_168[0] + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684eb88 FUN_14684eb88 body=221 status=ok
// SIG undefined FUN_14684eb88(void)

void FUN_14684eb88(int *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c50e9c(&local_38,param_2,1);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  }
  FUN_144a787a6(param_3 + 2,param_1 + 10);
  FUN_144a787a6(param_3 + 4,param_1 + 6);
  *(bool *)((longlong)param_3 + 0x31) = 0 < param_1[0x10];
  uVar1 = FUN_14684d3ba(param_1,param_2);
  *(undefined1 *)(param_3 + 6) = uVar1;
  *(bool *)((longlong)param_3 + 0x32) = *param_1 < 3;
  FUN_1406fa324(param_3 + 7,param_1 + 0x16);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684ec66 FUN_14684ec66 body=120 status=ok
// SIG undefined FUN_14684ec66(void)

bool FUN_14684ec66(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_1457a1ca8(local_38);
    FUN_14684eb88(*(undefined8 *)(param_1 + 8),local_38,param_2);
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684ece0 FUN_14684ece0 body=591 status=ok
// SIG undefined FUN_14684ece0(void)

void FUN_14684ece0(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  char cVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  undefined1 auStack_1c8 [40];
  longlong local_1a0;
  int local_198;
  longlong local_190;
  int local_188;
  longlong *local_180 [2];
  undefined4 local_170 [2];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_e0 = 0;
  local_d8 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_d4 = 0xffffffff00000080;
  local_cc = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_170[0] = 3;
  local_108 = 0;
  local_60 = 0;
  FUN_144a5dc74(local_180);
  cVar1 = FUN_146246cfe(local_170,param_2,local_180);
  if (cVar1 == '\0') goto LAB_14684eeec;
  if (param_4 == '\0') {
    local_190 = param_3;
    FUN_1408ff3be(&local_118);
  }
  else {
    FUN_140721fbe(&local_118,param_3);
  }
  FUN_14684d632(local_170,param_2,local_180);
  FUN_1457a1ca8(&local_1a0);
  FUN_140aa5ef8(&local_190,&local_1a0);
  if (local_1a0 != 0) {
    FUN_1400020a8();
  }
  FUN_1401aea18(&local_1a0);
  if (local_188 == local_198) {
    if (1 < local_188) {
      lVar2 = 0;
      while( true ) {
        uVar3 = *(ushort *)(local_190 + lVar2);
        uVar4 = (ulonglong)uVar3;
        uVar5 = *(ushort *)(local_1a0 + lVar2);
        if (uVar3 != uVar5) break;
        if (uVar3 == 0) goto LAB_14684eec2;
LAB_14684ee8d:
        lVar2 = lVar2 + 2;
      }
      if ((uVar5 | uVar3) < 0x80) {
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        uVar6 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_14684ee8d;
      }
      if (uVar3 != uVar5) goto LAB_14684eece;
    }
LAB_14684eec2:
    FUN_1447f69b6(param_1 + 0x30);
  }
  else if (local_198 + local_188 == 1) goto LAB_14684eec2;
LAB_14684eece:
  if (local_1a0 != 0) {
    FUN_1400020a8();
  }
  if (local_190 != 0) {
    FUN_1400020a8();
  }
LAB_14684eeec:
  if (local_180[0] != (longlong *)0x0) {
    (**(code **)(*local_180[0] + 0x10))();
  }
  FUN_14684e938(local_170);
  if ((local_38 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14684ef30 FUN_14684ef30 body=194 status=ok
// SIG undefined FUN_14684ef30(void)

void FUN_14684ef30(longlong param_1,longlong *param_2,char param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 8) != 0) {
    if (param_3 == '\0') {
      local_38[0] = param_2;
      FUN_1408ff3be(*(longlong *)(param_1 + 8) + 0x58,local_38);
    }
    else {
      FUN_140721fbe();
    }
    FUN_144a5dc74(local_38);
    uVar1 = *(undefined8 *)(param_1 + 8);
    FUN_1457a1ca8(local_48);
    FUN_14684d632(uVar1,local_48,local_38);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1447f69b6(param_1 + 0x30);
    if (local_38[0] != (longlong *)0x0) {
      (**(code **)(*local_38[0] + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684eff4 FUN_14684eff4 body=560 status=ok
// SIG undefined FUN_14684eff4(void)

void FUN_14684eff4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  undefined1 auStack_1b8 [40];
  longlong local_190;
  int local_188;
  longlong local_180;
  int local_178;
  longlong *local_170 [2];
  undefined4 local_160 [2];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_d0 = 0;
  local_c8 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c4 = 0xffffffff00000080;
  local_bc = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_80 = 0;
  local_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_160[0] = 3;
  local_f8 = 0;
  local_50 = 0;
  FUN_144a5dc74(local_170);
  cVar1 = FUN_146246cfe(local_160,param_2,local_170);
  if (cVar1 == '\0') goto LAB_14684f1e4;
  uVar4 = uStack_100 >> 0x20;
  uStack_100 = uStack_100 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    FUN_1402191ca(&local_108,0);
  }
  FUN_14684d632(local_160,param_2,local_170);
  FUN_1457a1ca8(&local_190);
  FUN_140aa5ef8(&local_180,&local_190);
  if (local_190 != 0) {
    FUN_1400020a8();
  }
  FUN_1401aea18(&local_190);
  if (local_178 == local_188) {
    if (1 < local_178) {
      lVar2 = 0;
      while( true ) {
        uVar3 = *(ushort *)(local_180 + lVar2);
        uVar4 = (ulonglong)uVar3;
        uVar5 = *(ushort *)(local_190 + lVar2);
        if (uVar3 != uVar5) break;
        if (uVar3 == 0) goto LAB_14684f1ba;
LAB_14684f185:
        lVar2 = lVar2 + 2;
      }
      if ((uVar5 | uVar3) < 0x80) {
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        uVar6 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_14684f185;
      }
      if (uVar3 != uVar5) goto LAB_14684f1c6;
    }
LAB_14684f1ba:
    FUN_1447f69b6(param_1 + 0x30);
  }
  else if (local_188 + local_178 == 1) goto LAB_14684f1ba;
LAB_14684f1c6:
  if (local_190 != 0) {
    FUN_1400020a8();
  }
  if (local_180 != 0) {
    FUN_1400020a8();
  }
LAB_14684f1e4:
  if (local_170[0] != (longlong *)0x0) {
    (**(code **)(*local_170[0] + 0x10))();
  }
  FUN_14684e938(local_160);
  if ((local_28 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14684f226 FUN_14684f226 body=186 status=ok
// SIG undefined FUN_14684f226(void)

void FUN_14684f226(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  longlong *local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x60) = 0;
    if (*(int *)(lVar1 + 100) != 0) {
      FUN_1402191ca(lVar1 + 0x58,0);
    }
    FUN_144a5dc74(local_38);
    uVar2 = *(undefined8 *)(param_1 + 8);
    FUN_1457a1ca8(local_48);
    FUN_14684d632(uVar2,local_48,local_38);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1447f69b6(param_1 + 0x30);
    if (local_38[0] != (longlong *)0x0) {
      (**(code **)(*local_38[0] + 0x10))();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684f2e1 FUN_14684f2e1 body=681 status=ok
// SIG undefined FUN_14684f2e1(void)

ulonglong FUN_14684f2e1(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  byte bVar11;
  undefined2 *puVar12;
  undefined8 unaff_RBX;
  ulonglong uVar13;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  byte bVar18;
  undefined1 auStack_d8 [39];
  undefined1 local_b1;
  longlong local_b0;
  undefined1 *local_a8;
  undefined1 local_9c [4];
  longlong local_98 [4];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  undefined7 uVar14;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar7 = (longlong *)FUN_1427a267a();
  lVar8 = (**(code **)(*plVar7 + 8))(plVar7);
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar14 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar13 = CONCAT71(uVar14,1);
  if (lVar8 != 0) {
    uVar1 = *(undefined1 *)(lVar8 + 0x111);
    if ((longlong)*(int *)(lVar8 + 0x50) != 0) {
      lVar15 = *(longlong *)(lVar8 + 0x48);
      lVar8 = (longlong)*(int *)(lVar8 + 0x50) * 0xb8;
      do {
        local_b1 = FUN_1427a9aa8(lVar15,param_1);
        local_b0 = lVar15;
        local_a8 = &local_b1;
        FUN_1468557f4(local_98,local_9c,&local_b0);
        lVar15 = lVar15 + 0xb8;
        lVar8 = lVar8 + -0xb8;
      } while (lVar8 != 0);
    }
    uVar13 = CONCAT71(uVar14,uVar1) ^ 1;
  }
  uVar17 = 0;
  FUN_144a8054c();
  (**(code **)(DAT_14c926ca8 + 0xe0))(&DAT_14c926ca8,&local_b0);
  lVar8 = local_b0;
  lVar15 = (longlong)(int)local_a8;
  if (lVar15 != 0) {
    lVar16 = 0;
    do {
      lVar9 = (**(code **)(**(longlong **)(lVar8 + lVar16) + 0x98))();
      if ((*(char *)(lVar9 + 0x131) == '\x01') || (*(int *)(lVar9 + 0xc0) != 0)) {
        cVar3 = FUN_144a23846(lVar9 + 0xb8,param_1);
        if (cVar3 != '\0') goto LAB_14684f4af;
      }
      else {
LAB_14684f4af:
        bVar4 = (**(code **)(**(longlong **)(lVar8 + lVar16) + 0x50))
                          (*(longlong **)(lVar8 + lVar16),uVar13 & 0xffffffff);
        puVar10 = (undefined8 *)(**(code **)(**(longlong **)(lVar8 + lVar16) + 8))();
        iVar6 = *(int *)(puVar10 + 1);
        puVar12 = &DAT_149dfb77a;
        if (iVar6 != 0) {
          puVar12 = (undefined2 *)*puVar10;
        }
        iVar2 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar2 = 0;
        }
        uVar5 = FUN_144a49b4a(iVar2,puVar12);
        iVar6 = FUN_146855b16(local_98,uVar5,puVar10);
        lVar9 = (longlong)iVar6 * 0x20 + local_98[0];
        bVar18 = bVar4;
        if (lVar9 != 0 && iVar6 != -1) {
          bVar18 = *(byte *)(lVar9 + 0x10);
        }
        iVar6 = (**(code **)(**(longlong **)(lVar8 + lVar16) + 0x90))();
        bVar11 = 0;
        if ((bVar4 != 0) && (bVar11 = 0, iVar6 == 0)) {
          lVar9 = (**(code **)(**(longlong **)(lVar8 + lVar16) + 0x98))();
          bVar11 = *(byte *)(lVar9 + 299) ^ 1;
        }
        if (bVar11 != bVar18) {
          FUN_140a4981e(local_b0,(ulonglong)local_a8 & 0xffffffff);
          if (local_b0 != 0) {
            FUN_1400020a8();
          }
          uVar13 = 0;
          goto LAB_14684f40c;
        }
      }
      lVar16 = lVar16 + 0x10;
    } while (lVar15 * 0x10 != lVar16);
    uVar17 = (ulonglong)local_a8 & 0xffffffff;
  }
  FUN_140a4981e(local_b0,uVar17);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  uVar13 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
LAB_14684f40c:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_145a3ec70(local_98);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar13 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684f58c FUN_14684f58c body=95 status=ok
// SIG undefined FUN_14684f58c(void)

undefined4 FUN_14684f58c(void)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140056680(local_28,L"Win64");
  uVar1 = FUN_14684f2e1(local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684f5ec FUN_14684f5ec body=1261 status=ok
// SIG undefined FUN_14684f5ec(void)

bool FUN_14684f5ec(longlong param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  wchar_t **ppwVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  ushort uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ushort uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  wchar_t **ppwVar20;
  undefined1 auStack_158 [39];
  char local_131;
  longlong local_130;
  longlong local_128;
  ulonglong uStack_120;
  longlong local_118;
  int local_110;
  undefined1 local_104 [4];
  wchar_t *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar5 = *(longlong *)(param_1 + 8);
  if (lVar5 == 0) {
    local_100 = L"NoProjectLoaded";
    local_f8 = 0xf;
    FUN_1446e940c(&local_128,&local_100);
    local_100 = L"ProjectManager";
    local_f8 = 0xe;
    FUN_1446e940c(local_104,&local_100);
    FUN_140208bae(&local_100,local_104,&local_128,L"No project is currently loaded");
    FUN_140008f88(param_4,&local_100);
    if (local_100 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_100 + 0x10))();
    }
    goto LAB_14684f9f9;
  }
  plVar1 = (longlong *)(lVar5 + 0x48);
  local_131 = param_3;
  if ((ulonglong)*(uint *)(lVar5 + 0x50) != 0) {
    iVar15 = (int)param_2[1];
    lVar9 = *plVar1;
    uVar18 = 0;
LAB_14684f643:
    lVar13 = uVar18 * 0xb8;
    iVar8 = *(int *)(lVar9 + 8 + lVar13);
    if (iVar8 != iVar15) {
      if (iVar8 + iVar15 == 1) goto LAB_14684f7b3;
      goto LAB_14684f6c0;
    }
    if (1 < iVar15) {
      lVar17 = 0;
      do {
        uVar11 = *(ushort *)(*(longlong *)(lVar9 + lVar13) + lVar17);
        uVar14 = *(ushort *)(*param_2 + lVar17);
        if (uVar11 == uVar14) {
          if (uVar11 == 0) break;
        }
        else {
          if (0x7f < (uVar14 | uVar11)) {
            iVar8 = (uint)uVar11 - (uint)uVar14;
            goto LAB_14684f7ab;
          }
          if ((&DAT_149e05da0)[uVar11] != (&DAT_149e05da0)[(uint)uVar14]) goto LAB_14684f7a9;
        }
        lVar17 = lVar17 + 2;
      } while( true );
    }
    goto LAB_14684f7b3;
  }
LAB_14684f6cc:
  FUN_1404800ec(&local_100,param_2,param_3);
  uVar4 = *(uint *)(lVar5 + 0x50);
  uVar18 = (ulonglong)uVar4;
  *(uint *)(lVar5 + 0x50) = uVar4 + 1;
  if (*(uint *)(lVar5 + 0x54) < uVar4 + 1) {
    FUN_1404801f6(plVar1,uVar4);
  }
  FUN_146855e4a((longlong)(int)uVar4 * 0xb8 + *plVar1,&local_100);
  FUN_140a49ea0(&local_100);
LAB_14684f7cc:
  bVar10 = true;
LAB_14684f7cf:
  lVar9 = *(longlong *)(param_1 + 8);
  iVar15 = (int)uVar18;
  if (iVar15 < *(int *)(lVar9 + 0x50) + -1) {
    uVar19 = (longlong)*(int *)(lVar9 + 0x50) - 1;
    do {
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x48);
      iVar8 = *(int *)(lVar9 + 8 + uVar19 * 0xb8);
      if (iVar8 == (int)param_2[1]) {
        if (1 < iVar8) {
          lVar13 = 0;
          while( true ) {
            uVar11 = *(ushort *)(*(longlong *)(lVar9 + uVar19 * 0xb8) + lVar13);
            uVar12 = (ulonglong)uVar11;
            uVar14 = *(ushort *)(*param_2 + lVar13);
            if (uVar11 != uVar14) break;
            if (uVar11 == 0) goto LAB_14684f86c;
LAB_14684f835:
            lVar13 = lVar13 + 2;
          }
          if ((uVar14 | uVar11) < 0x80) {
            uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
            uVar16 = (ulonglong)uVar14;
            uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
            if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar16]) goto LAB_14684f835;
          }
          if (uVar11 != uVar14) goto LAB_14684f87b;
        }
LAB_14684f86c:
        FUN_14684fada(*(longlong *)(param_1 + 8) + 0x48,uVar19 & 0xffffffff);
        bVar10 = true;
      }
      else if ((int)param_2[1] + iVar8 == 1) goto LAB_14684f86c;
LAB_14684f87b:
      uVar19 = uVar19 - 1;
    } while ((longlong)iVar15 < (longlong)uVar19);
    lVar9 = *(longlong *)(param_1 + 8);
  }
  lVar9 = (longlong)iVar15 * 0xb8 + *(longlong *)(lVar9 + 0x48);
  FUN_144a8054c();
  local_118 = *param_2;
  local_110 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    local_110 = 0;
  }
  ppwVar7 = &local_100;
  (**(code **)(DAT_14c926ca8 + 0x70))(&DAT_14c926ca8,ppwVar7);
  if (local_100 != (wchar_t *)0x0) {
    lVar13 = (**(code **)(*(longlong *)local_100 + 0x98))();
    iVar15 = *(int *)(lVar9 + 0x30);
    if (iVar15 == *(int *)(lVar13 + 0x80)) {
      if (1 < iVar15) {
        lVar17 = 0;
        while( true ) {
          uVar11 = *(ushort *)(*(longlong *)(lVar9 + 0x28) + lVar17);
          uVar14 = *(ushort *)(*(longlong *)(lVar13 + 0x78) + lVar17);
          local_130 = lVar13;
          if (uVar11 != uVar14) break;
          if (uVar11 == 0) goto LAB_14684f986;
LAB_14684f931:
          lVar17 = lVar17 + 2;
        }
        if ((uVar14 | uVar11) < 0x80) {
          if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[(uint)uVar14]) goto LAB_14684f931;
          iVar15 = (uint)(byte)(&DAT_149e05da0)[uVar11] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar14]
          ;
        }
        else {
          iVar15 = (uint)uVar11 - (uint)uVar14;
        }
        if (iVar15 != 0) goto LAB_14684f978;
      }
    }
    else if (*(int *)(lVar13 + 0x80) + iVar15 != 1) {
LAB_14684f978:
      FUN_144a787a6();
      bVar10 = true;
    }
LAB_14684f986:
    ppwVar20 = (wchar_t **)(lVar13 + 0xb8);
    if (*(int *)(lVar9 + 0xa0) == *(int *)(lVar13 + 0xc0)) {
      ppwVar7 = (wchar_t **)*ppwVar20;
      cVar6 = FUN_1405d12b4(*(undefined8 *)(lVar9 + 0x98),ppwVar7);
      if (cVar6 != '\0') goto LAB_14684f9c2;
    }
    FUN_140bee9ec((undefined8 *)(lVar9 + 0x98),ppwVar20);
    bVar10 = true;
    ppwVar7 = ppwVar20;
  }
LAB_14684f9c2:
  if (((*(int *)(lVar9 + 0x40) == 0) && (*(int *)(lVar9 + 0x50) == 0)) &&
     ((local_100 == (wchar_t *)0x0 ||
      (lVar9 = (**(code **)(*(longlong *)local_100 + 0x98))(), *(char *)(lVar9 + 299) == '\0')))) {
    local_128 = 0;
    uStack_120 = 0;
    FUN_14684fb32(&local_128,
                  CONCAT71((int7)((ulonglong)ppwVar7 >> 8),
                           *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x111)) ^ 1);
    cVar6 = FUN_144a23846(&local_128,param_2);
    if (cVar6 == local_131) {
      FUN_14684fada(*(longlong *)(param_1 + 8) + 0x48,uVar18 & 0xffffffff);
      bVar10 = true;
    }
    FUN_1447a1747(local_128,uStack_120 & 0xffffffff);
    if (local_128 != 0) {
      FUN_1400020a8();
    }
  }
  if (bVar10) {
    *(undefined1 *)(param_1 + 0x28) = 1;
  }
  plVar1 = (longlong *)CONCAT44(uStack_f4,local_f8);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
LAB_14684f9f9:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5 != 0;
LAB_14684f7a9:
  iVar8 = (uint)(byte)(&DAT_149e05da0)[uVar11] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar14];
LAB_14684f7ab:
  if (iVar8 == 0) {
LAB_14684f7b3:
    if (*(char *)(lVar9 + 0x10 + lVar13) != param_3) {
      *(char *)(lVar9 + lVar13 + 0x10) = param_3;
      goto LAB_14684f7cc;
    }
    bVar10 = false;
    goto LAB_14684f7cf;
  }
LAB_14684f6c0:
  uVar18 = uVar18 + 1;
  if (uVar18 == *(uint *)(lVar5 + 0x50)) goto LAB_14684f6cc;
  goto LAB_14684f643;
}



// FUNCTION 14684fada FUN_14684fada body=88 status=ok
// SIG undefined FUN_14684fada(void)

void FUN_14684fada(longlong *param_1,uint param_2)

{
  int iVar1;
  void *_Dst;
  
  _Dst = (void *)((longlong)(int)param_2 * 0xb8 + *param_1);
  FUN_140a49ea0(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0xb8),(longlong)(int)(~param_2 + iVar1) * 0xb8);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  FUN_14685602c(param_1);
  return;
}



// FUNCTION 14684fb32 FUN_14684fb32 body=225 status=ok
// SIG undefined FUN_14684fb32(void)

void FUN_14684fb32(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a8054c();
  (**(code **)(DAT_14c926ca8 + 0xe0))(&DAT_14c926ca8,&local_40);
  lVar1 = local_40;
  lVar5 = (longlong)local_38;
  if (lVar5 == 0) {
    local_38 = 0;
  }
  else {
    lVar6 = 0;
    do {
      cVar2 = (**(code **)(**(longlong **)(lVar1 + lVar6) + 0x50))
                        (*(longlong **)(lVar1 + lVar6),param_2);
      if ((cVar2 != '\0') &&
         (lVar3 = (**(code **)(**(longlong **)(lVar1 + lVar6) + 0x98))(),
         *(char *)(lVar3 + 299) == '\0')) {
        uVar4 = (**(code **)(**(longlong **)(lVar1 + lVar6) + 8))();
        FUN_1412fabe8(param_1,uVar4);
      }
      lVar6 = lVar6 + 0x10;
    } while (lVar5 * 0x10 != lVar6);
  }
  FUN_140a4981e(local_40,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14684fc14 FUN_14684fc14 body=387 status=ok
// SIG undefined FUN_14684fc14(void)

undefined8 FUN_14684fc14(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ushort uVar8;
  ushort uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 == 0) {
    local_40 = L"NoProjectLoaded";
    local_38 = 0xf;
    FUN_1446e940c(local_44,&local_40);
    local_40 = L"ProjectManager";
    local_38 = 0xe;
    FUN_1446e940c(local_48,&local_40);
    FUN_140208bae(&local_40,local_48,local_44,L"No project is currently loaded");
    FUN_140008f88(param_3,&local_40);
    if (local_40 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_40 + 0x10))();
    }
  }
  else if (0 < (longlong)*(int *)(lVar3 + 0x50)) {
    iVar1 = (int)param_2[1];
    uVar11 = (longlong)*(int *)(lVar3 + 0x50);
LAB_14684fc5d:
    lVar5 = (uVar11 - 1) * 0xb8;
    iVar2 = *(int *)(*(longlong *)(lVar3 + 0x48) + 8 + lVar5);
    if (iVar2 != iVar1) {
      if (iVar2 + iVar1 == 1) goto LAB_14684fd8f;
      goto LAB_14684fcd2;
    }
    if (1 < iVar1) {
      lVar7 = 0;
      do {
        uVar9 = *(ushort *)(*(longlong *)(lVar5 + *(longlong *)(lVar3 + 0x48)) + lVar7);
        uVar10 = (ulonglong)uVar9;
        uVar8 = *(ushort *)(*param_2 + lVar7);
        if (uVar9 == uVar8) {
          if (uVar9 == 0) break;
        }
        else {
          if (0x7f < (uVar8 | uVar9)) goto LAB_14684fd85;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          uVar12 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar12]) goto LAB_14684fd85;
        }
        lVar7 = lVar7 + 2;
      } while( true );
    }
    goto LAB_14684fd8f;
  }
  uVar6 = 0;
LAB_14684fd63:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
LAB_14684fd85:
  if (uVar9 == uVar8) {
LAB_14684fd8f:
    FUN_14684fada(lVar3 + 0x48);
    uVar6 = 1;
    goto LAB_14684fd63;
  }
LAB_14684fcd2:
  uVar6 = 0;
  bVar4 = uVar11 < 2;
  uVar11 = uVar11 - 1;
  if (bVar4) goto LAB_14684fd63;
  goto LAB_14684fc5d;
}



// FUNCTION 14684fd98 FUN_14684fd98 body=210 status=ok
// SIG undefined FUN_14684fd98(void)

ulonglong FUN_14684fd98(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  longlong *local_40 [2];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar4 = 0;
    goto LAB_14684fdec;
  }
  FUN_1401aea18(local_30);
  lVar1 = *(longlong *)(param_1 + 8);
  if (param_3 == '\0') {
    cVar2 = FUN_1401aeb9c(local_30);
    if ((cVar2 != '\0') || (iVar3 = FUN_14684e596(lVar1 + 0x118,local_30), iVar3 == 0))
    goto LAB_14684fddb;
LAB_14684fe22:
    FUN_144a5dc74(local_40);
    FUN_14684fe6c(param_1,local_40);
    if (local_40[0] != (longlong *)0x0) {
      (**(code **)(*local_40[0] + 0x10))();
    }
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    cVar2 = FUN_14684d436(lVar1,local_30);
    if (cVar2 != '\0') goto LAB_14684fe22;
LAB_14684fddb:
    uVar4 = 0;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
LAB_14684fdec:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14684fe6c FUN_14684fe6c body=118 status=ok
// SIG undefined FUN_14684fe6c(void)

undefined4 FUN_14684fe6c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_1457a1ca8(local_38);
  uVar2 = FUN_14684d632(uVar1,local_38,param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((char)uVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684fee4 FUN_14684fee4 body=127 status=ok
// SIG undefined FUN_14684fee4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14684fee4(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    puVar1 = &DAT_14c926f88;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f98) {
      FUN_144b3d300(&DAT_14c926f98);
      if (DAT_14c926f98 == -1) {
        DAT_14c926f88 = 0;
        _DAT_14c926f90 = 0;
        atexit(FUN_1427adff8);
        _Init_thread_footer(&DAT_14c926f98);
      }
    }
  }
  else {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 8) + 0x118);
  }
  return puVar1;
}



// FUNCTION 14684ff9a FUN_14684ff9a body=66 status=ok
// SIG undefined FUN_14684ff9a(void)

void FUN_14684ff9a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_140721fbe(param_1 + 0x60,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14684ffde FUN_14684ffde body=71 status=ok
// SIG undefined FUN_14684ffde(void)

void FUN_14684ffde(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = &local_18;
  local_18 = param_2;
  FUN_1408ff3be(param_1 + 0x60);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146850026 FUN_146850026 body=38 status=ok
// SIG undefined FUN_146850026(void)

undefined8 FUN_146850026(undefined8 param_1,int param_2)

{
  FUN_140a49aca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14685005c FUN_14685005c body=85 status=ok
// SIG undefined FUN_14685005c(void)

void FUN_14685005c(longlong param_1,undefined8 *param_2)

{
  if ((undefined8 *)(param_1 + 0x150) != param_2) {
    if (*(longlong *)(param_1 + 0x150) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x150) = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return;
}



// FUNCTION 146850104 FUN_146850104 body=38 status=ok
// SIG undefined FUN_146850104(void)

undefined8 FUN_146850104(undefined8 param_1,int param_2)

{
  FUN_145766626();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14685012a FUN_14685012a body=127 status=ok
// SIG undefined FUN_14685012a(void)

undefined8 FUN_14685012a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400b22c2(&local_30,param_3);
  local_40 = local_30;
  local_38 = local_28 + -1;
  if (local_28 == 0) {
    local_38 = 0;
  }
  FUN_14684a44e(param_1,param_2);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468501aa FUN_1468501aa body=118 status=ok
// SIG undefined FUN_1468501aa(void)

undefined4 FUN_1468501aa(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400b22c2();
  local_40 = local_30;
  local_38 = local_28 + -1;
  if (local_28 == 0) {
    local_38 = 0;
  }
  uVar1 = FUN_14684a1fc(param_1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685022a FUN_14685022a body=38 status=ok
// SIG undefined FUN_14685022a(void)

undefined8 FUN_14685022a(undefined8 param_1,int param_2)

{
  FUN_14685625e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14685025c FUN_14685025c body=211 status=ok
// SIG undefined FUN_14685025c(void)

undefined8 * FUN_14685025c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_14047cde4(param_1,(ulonglong)uVar1);
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
          FUN_146850330(puVar6,puVar4);
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



// FUNCTION 146850330 FUN_146850330 body=114 status=ok
// SIG undefined FUN_146850330(void)

undefined8 * FUN_146850330(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[2] = param_2[2];
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 1468503a2 FUN_1468503a2 body=105 status=ok
// SIG undefined FUN_1468503a2(void)

undefined8 * FUN_1468503a2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_14685040c(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 14685040c FUN_14685040c body=77 status=ok
// SIG undefined FUN_14685040c(void)

undefined8 * FUN_14685040c(undefined8 *param_1,undefined8 *param_2)

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
    FUN_140b856de(param_1,iVar1,0);
    FUN_140b8566a(*param_1,uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 14685045a FUN_14685045a body=98 status=ok
// SIG undefined FUN_14685045a(void)

void FUN_14685045a(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1468504bc FUN_1468504bc body=118 status=ok
// SIG undefined FUN_1468504bc(void)

void FUN_1468504bc(undefined8 *param_1,longlong param_2,int param_3)

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
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146850532 FUN_146850532 body=93 status=ok
// SIG undefined FUN_146850532(void)

undefined8 * FUN_146850532(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140a49e1c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140b85040(param_1,iVar1);
      FUN_140b84c8a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146850590 FUN_146850590 body=93 status=ok
// SIG undefined FUN_146850590(void)

undefined8 * FUN_146850590(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140a49e72(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140b85d28(param_1,iVar1);
      FUN_140b85cab(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1468505ee FUN_1468505ee body=93 status=ok
// SIG undefined FUN_1468505ee(void)

undefined8 * FUN_1468505ee(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140a49e45(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14685045a(param_1,iVar1);
      FUN_1468504bc(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14685064c FUN_14685064c body=59 status=ok
// SIG undefined FUN_14685064c(void)

void FUN_14685064c(longlong *param_1)

{
  FUN_140a49a56(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146850688 FUN_146850688 body=62 status=ok
// SIG undefined FUN_146850688(void)

void FUN_146850688(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1468506c6(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1468506c6 FUN_1468506c6 body=93 status=ok
// SIG undefined FUN_1468506c6(void)

ulonglong FUN_1468506c6(uint param_1,uint param_2)

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



// FUNCTION 146850724 FUN_146850724 body=114 status=ok
// SIG undefined FUN_146850724(void)

void FUN_146850724(longlong *param_1,int param_2)

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



// FUNCTION 146850796 FUN_146850796 body=125 status=ok
// SIG undefined FUN_146850796(void)

uint FUN_146850796(longlong *param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14170de88(param_1,iVar1);
  }
  lVar4 = (ulonglong)param_3 * 0x10;
  memmove((void *)(*param_1 + lVar4 + 0x10),(void *)(*param_1 + lVar4),
          (ulonglong)(iVar1 - param_3) << 4);
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + lVar4) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(lVar2 + 8 + lVar4) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_3;
}



// FUNCTION 146850814 FUN_146850814 body=261 status=ok
// SIG undefined FUN_146850814(void)

void FUN_146850814(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    plVar2 = (longlong *)*param_1;
    iVar12 = 0;
    bVar7 = *plVar2 == *(longlong *)*param_2;
    iVar4 = 0;
    do {
      lVar10 = (longlong)iVar4;
      iVar8 = iVar4 + 1;
      if (iVar4 + 1 < iVar1) {
        iVar8 = iVar1;
      }
      plVar9 = plVar2 + lVar10 * 2 + 2;
      iVar5 = iVar4;
      lVar11 = lVar10;
      do {
        lVar11 = lVar11 + 1;
        iVar6 = iVar8;
        if (lVar13 <= lVar11) break;
        lVar3 = *plVar9;
        iVar5 = iVar5 + 1;
        plVar9 = plVar9 + 2;
        iVar6 = iVar5;
      } while (bVar7 == (lVar3 == *(longlong *)*param_2));
      iVar8 = iVar6 - iVar4;
      if (bVar7 == false) {
        if (iVar12 != iVar4) {
          memmove(plVar2 + (longlong)iVar12 * 2,plVar2 + lVar10 * 2,(longlong)iVar8 << 4);
        }
        iVar12 = iVar12 + iVar8;
      }
      else {
        FUN_140a49a56(plVar2 + lVar10 * 2,iVar8);
      }
      bVar7 = (bool)(bVar7 ^ 1);
      iVar4 = iVar6;
    } while (lVar11 < lVar13);
    *(int *)(param_1 + 1) = iVar12;
  }
  return;
}



// FUNCTION 14685091a FUN_14685091a body=200 status=ok
// SIG undefined FUN_14685091a(void)

void FUN_14685091a(longlong *param_1,int param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      iVar2 = (int)param_3[1];
LAB_146850964:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar1 * 0x28);
      if ((int)plVar3[1] == iVar2) {
        if (1 < iVar2) {
          lVar4 = 0;
          do {
            uVar6 = *(ushort *)(*plVar3 + lVar4);
            uVar7 = (ulonglong)uVar6;
            uVar5 = *(ushort *)(*param_3 + lVar4);
            if (uVar6 == uVar5) {
              if (uVar6 == 0) break;
            }
            else {
              if (0x7f < (uVar5 | uVar6)) goto LAB_1468509d1;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
              uVar8 = (ulonglong)uVar5;
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar8]) goto LAB_1468509d1;
            }
            lVar4 = lVar4 + 2;
          } while( true );
        }
        goto LAB_1468509d7;
      }
      if ((int)plVar3[1] + iVar2 == 1) goto LAB_1468509d7;
      goto LAB_1468509c3;
    }
  }
  return;
LAB_1468509d1:
  if (uVar6 == uVar5) {
LAB_1468509d7:
    FUN_1468509e2();
    return;
  }
LAB_1468509c3:
  iVar1 = (int)plVar3[4];
  if (iVar1 == -1) {
    return;
  }
  goto LAB_146850964;
}



// FUNCTION 1468509e2 FUN_1468509e2 body=117 status=ok
// SIG undefined FUN_1468509e2(void)

void FUN_1468509e2(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_14685064c((longlong)param_2 * 0x28 + *param_1);
  FUN_146850724(param_1,param_2);
  return;
}



// FUNCTION 146850a58 FUN_146850a58 body=95 status=ok
// SIG undefined FUN_146850a58(void)

void FUN_146850a58(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  uint param_5)

{
  if (((ulonglong)param_3 & 7) == 0 && 0xf < param_5) {
    *param_2 = &PTR_FUN_149e49060;
    *param_3 = *param_4;
    *param_4 = 0;
    *(undefined1 *)((longlong)param_3 + 0xc) = *(undefined1 *)((longlong)param_4 + 0xc);
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_4 + 1);
  }
  else {
    FUN_1427ae7fc(param_2,param_4);
  }
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return;
}



// FUNCTION 146850ab8 FUN_146850ab8 body=26 status=ok
// SIG undefined FUN_146850ab8(void)

undefined8 FUN_146850ab8(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_140080558(param_2,0);
  }
  return 0;
}



// FUNCTION 146850afc FUN_146850afc body=26 status=ok
// SIG undefined FUN_146850afc(void)

undefined8 FUN_146850afc(undefined8 param_1,undefined8 *param_2,char param_3)

{
  if (param_3 != '\0') {
    FUN_140080558(*param_2,0);
  }
  return 0;
}



// FUNCTION 146850b16 FUN_146850b16 body=70 status=ok
// SIG undefined FUN_146850b16(void)

undefined8
FUN_146850b16(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             char param_5)

{
  if (param_5 != '\0') {
    FUN_140080558(*param_3,0);
  }
  param_2[5] = &PTR_LAB_149e490a0;
  *param_2 = *param_3;
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  return 0;
}



// FUNCTION 146850b6a FUN_146850b6a body=52 status=ok
// SIG undefined FUN_146850b6a(void)

void FUN_146850b6a(longlong *param_1)

{
  FUN_146850b9e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146850b9e FUN_146850b9e body=89 status=ok
// SIG undefined FUN_146850b9e(void)

void FUN_146850b9e(longlong param_1)

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



// FUNCTION 146850c14 FUN_146850c14 body=272 status=ok
// SIG undefined FUN_146850c14(void)

void FUN_146850c14(longlong *param_1,wchar_t *param_2)

{
  longlong *plVar1;
  size_t sVar2;
  int iVar3;
  undefined1 auStack_78 [40];
  wchar_t *local_50;
  undefined4 local_48;
  undefined1 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((0xc < *(uint *)(param_1 + 4)) || ((0x1014U >> (*(uint *)(param_1 + 4) & 0x1f) & 1) == 0)) {
    local_40 = (undefined1 *)CONCAT62(local_40._2_6_,0x2c);
    (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_40,2);
  }
  local_40 = &DAT_149e02010;
  local_38 = 2;
  FUN_145d3640c(param_1[1]);
  iVar3 = *(int *)((longlong)param_1 + 0x24);
  if (0 < iVar3) {
    plVar1 = (longlong *)param_1[1];
    do {
      local_40 = (undefined1 *)CONCAT62(local_40._2_6_,9);
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_40,2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_50 = param_2;
  if (param_2 == (wchar_t *)0x0) {
    local_48 = 0;
  }
  else {
    sVar2 = wcslen(param_2);
    local_48 = (int)sVar2;
  }
  (**(code **)(*param_1 + 0x18))(param_1);
  local_40 = (undefined1 *)CONCAT62(local_40._2_6_,0x3a);
  (**(code **)(*(longlong *)param_1[1] + 0x170))((longlong *)param_1[1],&local_40,2);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146850d26 FUN_146850d26 body=347 status=ok
// SIG undefined FUN_146850d26(void)

undefined4 * FUN_146850d26(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146850e82(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_40 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[2] = *puVar2;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*local_40;
    iVar8 = *(int *)(local_40 + 1) + -1;
  }
  uVar5 = FUN_144a49b4a(iVar8,puVar9);
  cVar4 = FUN_146850f68(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x1c) = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_146851118(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146850e82 FUN_146850e82 body=229 status=ok
// SIG undefined FUN_146850e82(void)

int * FUN_146850e82(longlong *param_1,int *param_2)

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



// FUNCTION 146850f68 FUN_146850f68 body=114 status=ok
// SIG undefined FUN_146850f68(void)

undefined8 FUN_146850f68(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_146850fda(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
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
    FUN_1468510a6(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 146850fda FUN_146850fda body=203 status=ok
// SIG undefined FUN_146850fda(void)

int FUN_146850fda(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_146851024:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_14685109a;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14685109a;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14685108b;
    }
  }
  return -1;
LAB_14685109a:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14685108b:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_146851024;
}



// FUNCTION 1468510a6 FUN_1468510a6 body=114 status=ok
// SIG undefined FUN_1468510a6(void)

void FUN_1468510a6(longlong *param_1,int param_2)

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



// FUNCTION 146851118 FUN_146851118 body=476 status=ok
// SIG undefined FUN_146851118(void)

void FUN_146851118(longlong *param_1)

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



// FUNCTION 1468512f6 FUN_1468512f6 body=253 status=ok
// SIG undefined FUN_1468512f6(void)

void FUN_1468512f6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_14685136c:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x20);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x20);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_1468513db;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_1468513db;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_1468513e1;
      }
      if (iVar2 + iVar1 == 1) goto LAB_1468513e1;
      goto LAB_1468513cd;
    }
  }
  return;
LAB_1468513db:
  if (uVar7 == uVar6) {
LAB_1468513e1:
    FUN_1468513f4(param_1);
    return;
  }
LAB_1468513cd:
  iVar2 = (int)plVar3[3];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_14685136c;
}



// FUNCTION 1468513f4 FUN_1468513f4 body=90 status=ok
// SIG undefined FUN_1468513f4(void)

void FUN_1468513f4(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14685144e();
  return;
}



// FUNCTION 14685144e FUN_14685144e body=51 status=ok
// SIG undefined FUN_14685144e(void)

void FUN_14685144e(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1468510a6(param_1,param_2);
  return;
}



// FUNCTION 146851482 FUN_146851482 body=28 status=ok
// SIG undefined FUN_146851482(void)

void FUN_146851482(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014685149a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x98))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 14685149e FUN_14685149e body=29 status=ok
// SIG undefined FUN_14685149e(void)

undefined8 FUN_14685149e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468514bc FUN_1468514bc body=52 status=ok
// SIG undefined FUN_1468514bc(void)

void FUN_1468514bc(longlong *param_1)

{
  FUN_1468514f0();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468514f0 FUN_1468514f0 body=312 status=ok
// SIG undefined FUN_1468514f0(void)

void FUN_1468514f0(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14685162a FUN_14685162a body=29 status=ok
// SIG undefined FUN_14685162a(void)

undefined8 FUN_14685162a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14685166a FUN_14685166a body=93 status=ok
// SIG undefined FUN_14685166a(void)

void FUN_14685166a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e491b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e49140;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1468516c8 FUN_1468516c8 body=93 status=ok
// SIG undefined FUN_1468516c8(void)

void FUN_1468516c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e491b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e49140;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146851726 FUN_146851726 body=126 status=ok
// SIG undefined FUN_146851726(void)

void FUN_146851726(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e491b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e49140;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146851795. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1468517a4 FUN_1468517a4 body=29 status=ok
// SIG undefined FUN_1468517a4(void)

undefined8 FUN_1468517a4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return param_2;
}



// FUNCTION 1468517c2 FUN_1468517c2 body=77 status=ok
// SIG undefined FUN_1468517c2(void)

undefined8 FUN_1468517c2(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(param_1 + 0x18))(local_20);
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146851812 FUN_146851812 body=29 status=ok
// SIG undefined FUN_146851812(void)

undefined8 FUN_146851812(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146851852 FUN_146851852 body=93 status=ok
// SIG undefined FUN_146851852(void)

void FUN_146851852(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e49290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e49220;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1468518b0 FUN_1468518b0 body=93 status=ok
// SIG undefined FUN_1468518b0(void)

void FUN_1468518b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e49290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e49220;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14685190e FUN_14685190e body=126 status=ok
// SIG undefined FUN_14685190e(void)

void FUN_14685190e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e49290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e49220;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014685197d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14685199a FUN_14685199a body=23 status=ok
// SIG undefined FUN_14685199a(void)

undefined8 FUN_14685199a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 1468519b4 FUN_1468519b4 body=29 status=ok
// SIG undefined FUN_1468519b4(void)

undefined8 FUN_1468519b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468519f4 FUN_1468519f4 body=93 status=ok
// SIG undefined FUN_1468519f4(void)

void FUN_1468519f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e49370;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e49300;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146851a52 FUN_146851a52 body=93 status=ok
// SIG undefined FUN_146851a52(void)

void FUN_146851a52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e49370;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e49300;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146851ab0 FUN_146851ab0 body=126 status=ok
// SIG undefined FUN_146851ab0(void)

void FUN_146851ab0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e49370;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e49300;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146851b1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146851b3c FUN_146851b3c body=23 status=ok
// SIG undefined FUN_146851b3c(void)

undefined8 FUN_146851b3c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 146851b56 FUN_146851b56 body=48 status=ok
// SIG undefined FUN_146851b56(void)

void FUN_146851b56(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,1,1);
  }
  return;
}



// FUNCTION 146851b86 FUN_146851b86 body=48 status=ok
// SIG undefined FUN_146851b86(void)

void FUN_146851b86(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,1,1);
  }
  return;
}



// FUNCTION 146851bb6 FUN_146851bb6 body=347 status=ok
// SIG undefined FUN_146851bb6(void)

undefined4 * FUN_146851bb6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146851d12(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_40 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[2] = *puVar2;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*local_40;
    iVar8 = *(int *)(local_40 + 1) + -1;
  }
  uVar5 = FUN_144a49b4a(iVar8,puVar9);
  cVar4 = FUN_146851df8(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x1c) = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_146851fa8(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146851d12 FUN_146851d12 body=229 status=ok
// SIG undefined FUN_146851d12(void)

int * FUN_146851d12(longlong *param_1,int *param_2)

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



// FUNCTION 146851df8 FUN_146851df8 body=114 status=ok
// SIG undefined FUN_146851df8(void)

undefined8 FUN_146851df8(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_146851e6a(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
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
    FUN_146851f36(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 146851e6a FUN_146851e6a body=203 status=ok
// SIG undefined FUN_146851e6a(void)

int FUN_146851e6a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_146851eb4:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_146851f2a;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_146851f2a;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_146851f1b;
    }
  }
  return -1;
LAB_146851f2a:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_146851f1b:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_146851eb4;
}



// FUNCTION 146851f36 FUN_146851f36 body=114 status=ok
// SIG undefined FUN_146851f36(void)

void FUN_146851f36(longlong *param_1,int param_2)

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



// FUNCTION 146851fa8 FUN_146851fa8 body=476 status=ok
// SIG undefined FUN_146851fa8(void)

void FUN_146851fa8(longlong *param_1)

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



// FUNCTION 146852186 FUN_146852186 body=253 status=ok
// SIG undefined FUN_146852186(void)

void FUN_146852186(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_1468521fc:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x20);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x20);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_14685226b;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_14685226b;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_146852271;
      }
      if (iVar2 + iVar1 == 1) goto LAB_146852271;
      goto LAB_14685225d;
    }
  }
  return;
LAB_14685226b:
  if (uVar7 == uVar6) {
LAB_146852271:
    FUN_146852284(param_1);
    return;
  }
LAB_14685225d:
  iVar2 = (int)plVar3[3];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_1468521fc;
}



// FUNCTION 146852284 FUN_146852284 body=90 status=ok
// SIG undefined FUN_146852284(void)

void FUN_146852284(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1468522de();
  return;
}



// FUNCTION 1468522de FUN_1468522de body=51 status=ok
// SIG undefined FUN_1468522de(void)

void FUN_1468522de(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_146851f36(param_1,param_2);
  return;
}



// FUNCTION 146852312 FUN_146852312 body=52 status=ok
// SIG undefined FUN_146852312(void)

void FUN_146852312(longlong *param_1)

{
  FUN_146852346();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146852346 FUN_146852346 body=312 status=ok
// SIG undefined FUN_146852346(void)

void FUN_146852346(longlong *param_1)

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
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146852480 FUN_146852480 body=29 status=ok
// SIG undefined FUN_146852480(void)

undefined8 FUN_146852480(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468524c0 FUN_1468524c0 body=93 status=ok
// SIG undefined FUN_1468524c0(void)

void FUN_1468524c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e49450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e493e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14685251e FUN_14685251e body=93 status=ok
// SIG undefined FUN_14685251e(void)

void FUN_14685251e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e49450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e493e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14685257c FUN_14685257c body=126 status=ok
// SIG undefined FUN_14685257c(void)

void FUN_14685257c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e49450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e493e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001468525eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1468525fa FUN_1468525fa body=29 status=ok
// SIG undefined FUN_1468525fa(void)

undefined8 FUN_1468525fa(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return param_2;
}



// FUNCTION 146852618 FUN_146852618 body=77 status=ok
// SIG undefined FUN_146852618(void)

undefined8 FUN_146852618(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(param_1 + 0x18))(local_20);
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146852668 FUN_146852668 body=29 status=ok
// SIG undefined FUN_146852668(void)

undefined8 FUN_146852668(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468526a8 FUN_1468526a8 body=93 status=ok
// SIG undefined FUN_1468526a8(void)

void FUN_1468526a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e49530;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e494c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146852706 FUN_146852706 body=93 status=ok
// SIG undefined FUN_146852706(void)

void FUN_146852706(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e49530;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e494c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146852764 FUN_146852764 body=126 status=ok
// SIG undefined FUN_146852764(void)

void FUN_146852764(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e49530;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e494c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001468527d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1468527f0 FUN_1468527f0 body=23 status=ok
// SIG undefined FUN_1468527f0(void)

undefined8 FUN_1468527f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 14685280a FUN_14685280a body=333 status=ok
// SIG undefined FUN_14685280a(void)

undefined4 * FUN_14685280a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146852958(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_146852a3e(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)(local_40 + 2) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_146852b36(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146852958 FUN_146852958 body=230 status=ok
// SIG undefined FUN_146852958(void)

int * FUN_146852958(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 146852a3e FUN_146852a3e body=134 status=ok
// SIG undefined FUN_146852a3e(void)

undefined8 FUN_146852a3e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x14);
        if (*plVar2 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar2 + 1) = (int)param_3[1];
          *plVar2 = lVar1;
          FUN_146852ac4(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 146852ac4 FUN_146852ac4 body=114 status=ok
// SIG undefined FUN_146852ac4(void)

void FUN_146852ac4(longlong *param_1,int param_2)

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



// FUNCTION 146852b36 FUN_146852b36 body=473 status=ok
// SIG undefined FUN_146852b36(void)

void FUN_146852b36(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x14);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
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



// FUNCTION 146852d10 FUN_146852d10 body=333 status=ok
// SIG undefined FUN_146852d10(void)

undefined4 * FUN_146852d10(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146852e5e(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_146852f44(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)(local_40 + 2) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14685303c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146852e5e FUN_146852e5e body=230 status=ok
// SIG undefined FUN_146852e5e(void)

int * FUN_146852e5e(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x14);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x14) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 146852f44 FUN_146852f44 body=134 status=ok
// SIG undefined FUN_146852f44(void)

undefined8 FUN_146852f44(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x14);
        if (*plVar2 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar2 + 1) = (int)param_3[1];
          *plVar2 = lVar1;
          FUN_146852fca(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 146852fca FUN_146852fca body=114 status=ok
// SIG undefined FUN_146852fca(void)

void FUN_146852fca(longlong *param_1,int param_2)

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



// FUNCTION 14685303c FUN_14685303c body=473 status=ok
// SIG undefined FUN_14685303c(void)

void FUN_14685303c(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x14);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x10 + lVar6 * 0x14) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xc + lVar6 * 0x14) =
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



// FUNCTION 146853216 FUN_146853216 body=95 status=ok
// SIG undefined FUN_146853216(void)

void FUN_146853216(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146853275 FUN_146853275 body=7 status=ok
// SIG undefined FUN_146853275(void)

void FUN_146853275(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14685327c FUN_14685327c body=132 status=ok
// SIG undefined FUN_14685327c(void)

void FUN_14685327c(longlong param_1,int param_2)

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



// FUNCTION 146853302 FUN_146853302 body=347 status=ok
// SIG undefined FUN_146853302(void)

undefined4 * FUN_146853302(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14685345e(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  *local_40 = *puVar1;
  iVar8 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  local_40[2] = *puVar2;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  if (*(int *)(local_40 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*local_40;
    iVar8 = *(int *)(local_40 + 1) + -1;
  }
  uVar5 = FUN_144a49b4a(iVar8,puVar9);
  cVar4 = FUN_146853544(param_1,uVar5,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar6) {
      uVar7 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_40 + 0x1c) = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1468536f4(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14685345e FUN_14685345e body=229 status=ok
// SIG undefined FUN_14685345e(void)

int * FUN_14685345e(longlong *param_1,int *param_2)

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



// FUNCTION 146853544 FUN_146853544 body=114 status=ok
// SIG undefined FUN_146853544(void)

undefined8 FUN_146853544(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_1468535b6(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
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
    FUN_146853682(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 1468535b6 FUN_1468535b6 body=203 status=ok
// SIG undefined FUN_1468535b6(void)

int FUN_1468535b6(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_146853600:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_146853676;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_146853676;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_146853667;
    }
  }
  return -1;
LAB_146853676:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_146853667:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_146853600;
}



// FUNCTION 146853682 FUN_146853682 body=114 status=ok
// SIG undefined FUN_146853682(void)

void FUN_146853682(longlong *param_1,int param_2)

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



// FUNCTION 1468536f4 FUN_1468536f4 body=476 status=ok
// SIG undefined FUN_1468536f4(void)

void FUN_1468536f4(longlong *param_1)

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



// FUNCTION 1468538d2 FUN_1468538d2 body=253 status=ok
// SIG undefined FUN_1468538d2(void)

void FUN_1468538d2(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_146853948:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x20);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x20);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_1468539b7;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_1468539b7;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_1468539bd;
      }
      if (iVar2 + iVar1 == 1) goto LAB_1468539bd;
      goto LAB_1468539a9;
    }
  }
  return;
LAB_1468539b7:
  if (uVar7 == uVar6) {
LAB_1468539bd:
    FUN_1468539d0(param_1);
    return;
  }
LAB_1468539a9:
  iVar2 = (int)plVar3[3];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_146853948;
}



// FUNCTION 1468539d0 FUN_1468539d0 body=90 status=ok
// SIG undefined FUN_1468539d0(void)

void FUN_1468539d0(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_146853a2a();
  return;
}



// FUNCTION 146853a2a FUN_146853a2a body=51 status=ok
// SIG undefined FUN_146853a2a(void)

void FUN_146853a2a(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_146853682(param_1,param_2);
  return;
}


