
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function Form_Create(AOwner: TComponent): TForm; extdecl;
begin
  Result :=  TGoForm.CreateNew(AOwner);
end;

procedure Form_Free(AObj: TForm); extdecl;
begin
  AObj.Free;
end;

procedure Form_Close(AObj: TForm); extdecl;
begin
  AObj.Close;
end;

procedure Form_Hide(AObj: TForm); extdecl;
begin
  AObj.Hide;
end;

procedure Form_SetFocus(AObj: TForm); extdecl;
begin
  AObj.SetFocus;
end;

procedure Form_Show(AObj: TForm); extdecl;
begin
  AObj.Show;
end;

function Form_ShowModal(AObj: TForm): Integer; extdecl;
begin
  Result :=  AObj.ShowModal;
end;

function Form_CanFocus(AObj: TForm): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

function Form_ContainsControl(AObj: TForm; Control: TControl): LongBool; extdecl;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function Form_ControlAtPos(AObj: TForm; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
end;

procedure Form_DisableAlign(AObj: TForm); extdecl;
begin
  AObj.DisableAlign;
end;

procedure Form_EnableAlign(AObj: TForm); extdecl;
begin
  AObj.EnableAlign;
end;

function Form_FindChildControl(AObj: TForm; ControlName: PChar): TControl; extdecl;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure Form_FlipChildren(AObj: TForm; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function Form_Focused(AObj: TForm): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function Form_HandleAllocated(AObj: TForm): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure Form_InsertControl(AObj: TForm; AControl: TControl); extdecl;
begin
  AObj.InsertControl(AControl);
end;

procedure Form_Invalidate(AObj: TForm); extdecl;
begin
  AObj.Invalidate;
end;

procedure Form_RemoveControl(AObj: TForm; AControl: TControl); extdecl;
begin
  AObj.RemoveControl(AControl);
end;

procedure Form_Realign(AObj: TForm); extdecl;
begin
  AObj.Realign;
end;

procedure Form_Repaint(AObj: TForm); extdecl;
begin
  AObj.Repaint;
end;

procedure Form_ScaleBy(AObj: TForm; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure Form_ScrollBy(AObj: TForm; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure Form_SetBounds(AObj: TForm; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure Form_Update(AObj: TForm); extdecl;
begin
  AObj.Update;
end;

procedure Form_BringToFront(AObj: TForm); extdecl;
begin
  AObj.BringToFront;
end;

procedure Form_ClientToScreen(AObj: TForm; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure Form_ClientToParent(AObj: TForm; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function Form_Dragging(AObj: TForm): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function Form_HasParent(AObj: TForm): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

function Form_Perform(AObj: TForm; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure Form_Refresh(AObj: TForm); extdecl;
begin
  AObj.Refresh;
end;

procedure Form_ScreenToClient(AObj: TForm; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure Form_ParentToClient(AObj: TForm; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure Form_SendToBack(AObj: TForm); extdecl;
begin
  AObj.SendToBack;
end;

function Form_GetTextBuf(AObj: TForm; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function Form_GetTextLen(AObj: TForm): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

procedure Form_SetTextBuf(AObj: TForm; Buffer: PChar); extdecl;
begin
  AObj.SetTextBuf(Buffer);
end;

function Form_FindComponent(AObj: TForm; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function Form_GetNamePath(AObj: TForm): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure Form_Assign(AObj: TForm; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function Form_ClassType(AObj: TForm): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function Form_ClassName(AObj: TForm): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function Form_InstanceSize(AObj: TForm): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function Form_InheritsFrom(AObj: TForm; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function Form_Equals(AObj: TForm; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function Form_GetHashCode(AObj: TForm): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function Form_ToString(AObj: TForm): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function Form_GetAction(AObj: TForm): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure Form_SetAction(AObj: TForm; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

function Form_GetAlign(AObj: TForm): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure Form_SetAlign(AObj: TForm; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function Form_GetAlphaBlend(AObj: TForm): LongBool; extdecl;
begin
  Result :=  AObj.AlphaBlend;
end;

procedure Form_SetAlphaBlend(AObj: TForm; AValue: LongBool); extdecl;
begin
  AObj.AlphaBlend := AValue;
end;

function Form_GetAlphaBlendValue(AObj: TForm): Byte; extdecl;
begin
  Result :=  AObj.AlphaBlendValue;
end;

procedure Form_SetAlphaBlendValue(AObj: TForm; AValue: Byte); extdecl;
begin
  AObj.AlphaBlendValue := AValue;
end;

function Form_GetAnchors(AObj: TForm): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure Form_SetAnchors(AObj: TForm; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function Form_GetAutoSize(AObj: TForm): LongBool; extdecl;
begin
  Result :=  AObj.AutoSize;
end;

procedure Form_SetAutoSize(AObj: TForm; AValue: LongBool); extdecl;
begin
  AObj.AutoSize := AValue;
end;

function Form_GetBiDiMode(AObj: TForm): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure Form_SetBiDiMode(AObj: TForm; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

function Form_GetBorderIcons(AObj: TForm): TBorderIcons; extdecl;
begin
  Result :=  AObj.BorderIcons;
end;

procedure Form_SetBorderIcons(AObj: TForm; AValue: TBorderIcons); extdecl;
begin
  AObj.BorderIcons := AValue;
end;

function Form_GetBorderStyle(AObj: TForm): TFormBorderStyle; extdecl;
begin
  Result :=  AObj.BorderStyle;
end;

procedure Form_SetBorderStyle(AObj: TForm; AValue: TFormBorderStyle); extdecl;
begin
  AObj.BorderStyle := AValue;
end;

function Form_GetBorderWidth(AObj: TForm): TBorderWidth; extdecl;
begin
  Result :=  AObj.BorderWidth;
end;

procedure Form_SetBorderWidth(AObj: TForm; AValue: TBorderWidth); extdecl;
begin
  AObj.BorderWidth := AValue;
end;

function Form_GetCaption(AObj: TForm): PChar; extdecl;
begin
  Result :=  PChar(AObj.Caption);
end;

procedure Form_SetCaption(AObj: TForm; AValue: PChar); extdecl;
begin
  AObj.Caption := AValue;
end;

function Form_GetClientHeight(AObj: TForm): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure Form_SetClientHeight(AObj: TForm; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

function Form_GetClientWidth(AObj: TForm): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure Form_SetClientWidth(AObj: TForm; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function Form_GetColor(AObj: TForm): TColor; extdecl;
begin
  Result :=  AObj.Color;
end;

procedure Form_SetColor(AObj: TForm; AValue: TColor); extdecl;
begin
  AObj.Color := AValue;
end;

function Form_GetUseDockManager(AObj: TForm): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure Form_SetUseDockManager(AObj: TForm; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

function Form_GetDockSite(AObj: TForm): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure Form_SetDockSite(AObj: TForm; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function Form_GetDoubleBuffered(AObj: TForm): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure Form_SetDoubleBuffered(AObj: TForm; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function Form_GetDragKind(AObj: TForm): TDragKind; extdecl;
begin
  Result :=  AObj.DragKind;
end;

procedure Form_SetDragKind(AObj: TForm; AValue: TDragKind); extdecl;
begin
  AObj.DragKind := AValue;
end;

function Form_GetDragMode(AObj: TForm): TDragMode; extdecl;
begin
  Result :=  AObj.DragMode;
end;

procedure Form_SetDragMode(AObj: TForm; AValue: TDragMode); extdecl;
begin
  AObj.DragMode := AValue;
end;

function Form_GetEnabled(AObj: TForm): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure Form_SetEnabled(AObj: TForm; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function Form_GetParentFont(AObj: TForm): LongBool; extdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure Form_SetParentFont(AObj: TForm; AValue: LongBool); extdecl;
begin
  AObj.ParentFont := AValue;
end;

function Form_GetFont(AObj: TForm): TFont; extdecl;
begin
  Result :=  AObj.Font;
end;

procedure Form_SetFont(AObj: TForm; AValue: TFont); extdecl;
begin
  AObj.Font := AValue;
end;

function Form_GetFormStyle(AObj: TForm): TFormStyle; extdecl;
begin
  Result :=  AObj.FormStyle;
end;

procedure Form_SetFormStyle(AObj: TForm; AValue: TFormStyle); extdecl;
begin
  AObj.FormStyle := AValue;
end;

function Form_GetHeight(AObj: TForm): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure Form_SetHeight(AObj: TForm; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function Form_GetIcon(AObj: TForm): TIcon; extdecl;
begin
  Result :=  AObj.Icon;
end;

procedure Form_SetIcon(AObj: TForm; AValue: TIcon); extdecl;
begin
  AObj.Icon := AValue;
end;

function Form_GetKeyPreview(AObj: TForm): LongBool; extdecl;
begin
  Result :=  AObj.KeyPreview;
end;

procedure Form_SetKeyPreview(AObj: TForm; AValue: LongBool); extdecl;
begin
  AObj.KeyPreview := AValue;
end;

function Form_GetMenu(AObj: TForm): TMainMenu; extdecl;
begin
  Result :=  AObj.Menu;
end;

procedure Form_SetMenu(AObj: TForm; AValue: TMainMenu); extdecl;
begin
  AObj.Menu := AValue;
end;

function Form_GetPixelsPerInch(AObj: TForm): Integer; extdecl;
begin
  Result :=  AObj.PixelsPerInch;
end;

procedure Form_SetPixelsPerInch(AObj: TForm; AValue: Integer); extdecl;
begin
  AObj.PixelsPerInch := AValue;
end;

function Form_GetPopupMenu(AObj: TForm): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure Form_SetPopupMenu(AObj: TForm; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function Form_GetPosition(AObj: TForm): TPosition; extdecl;
begin
  Result :=  AObj.Position;
end;

procedure Form_SetPosition(AObj: TForm; AValue: TPosition); extdecl;
begin
  AObj.Position := AValue;
end;

function Form_GetScaled(AObj: TForm): LongBool; extdecl;
begin
  Result :=  AObj.Scaled;
end;

procedure Form_SetScaled(AObj: TForm; AValue: LongBool); extdecl;
begin
  AObj.Scaled := AValue;
end;

function Form_GetShowHint(AObj: TForm): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure Form_SetShowHint(AObj: TForm; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function Form_GetVisible(AObj: TForm): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure Form_SetVisible(AObj: TForm; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

function Form_GetWidth(AObj: TForm): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure Form_SetWidth(AObj: TForm; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function Form_GetWindowState(AObj: TForm): TWindowState; extdecl;
begin
  Result :=  AObj.WindowState;
end;

procedure Form_SetWindowState(AObj: TForm; AValue: TWindowState); extdecl;
begin
  AObj.WindowState := AValue;
end;

procedure Form_SetOnClick(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnClick}
  {$DEFINE EventMethodName := OnClick}
  EventMethodCode
end;

procedure Form_SetOnClose(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnClose}
  {$DEFINE EventMethodName := FormOnClose}
  EventMethodCode
end;

procedure Form_SetOnCloseQuery(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnCloseQuery}
  {$DEFINE EventMethodName := FormOnCloseQuery}
  EventMethodCode
end;

procedure Form_SetOnContextPopup(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnContextPopup}
  {$DEFINE EventMethodName := OnContextPopup}
  EventMethodCode
end;

procedure Form_SetOnDblClick(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDblClick}
  {$DEFINE EventMethodName := OnDblClick}
  EventMethodCode
end;

procedure Form_SetOnDockDrop(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDockDrop}
  {$DEFINE EventMethodName := OnDockDrop}
  EventMethodCode
end;

procedure Form_SetOnDragDrop(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragDrop}
  {$DEFINE EventMethodName := OnDragDrop}
  EventMethodCode
end;

procedure Form_SetOnDragOver(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragOver}
  {$DEFINE EventMethodName := OnDragOver}
  EventMethodCode
end;

procedure Form_SetOnEndDock(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDock}
  {$DEFINE EventMethodName := OnEndDock}
  EventMethodCode
end;

procedure Form_SetOnGetSiteInfo(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnGetSiteInfo}
  {$DEFINE EventMethodName := OnGetSiteInfo}
  EventMethodCode
end;

procedure Form_SetOnHide(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnHide}
  {$DEFINE EventMethodName := OnHide}
  EventMethodCode
end;

procedure Form_SetOnHelp(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnHelp}
  {$DEFINE EventMethodName := OnHelp}
  EventMethodCode
end;

procedure Form_SetOnKeyDown(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyDown}
  {$DEFINE EventMethodName := OnKeyDown}
  EventMethodCode
end;

procedure Form_SetOnKeyPress(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyPress}
  {$DEFINE EventMethodName := OnKeyPress}
  EventMethodCode
end;

procedure Form_SetOnKeyUp(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyUp}
  {$DEFINE EventMethodName := OnKeyUp}
  EventMethodCode
end;

procedure Form_SetOnMouseDown(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseDown}
  {$DEFINE EventMethodName := OnMouseDown}
  EventMethodCode
end;

procedure Form_SetOnMouseEnter(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseEnter}
  {$DEFINE EventMethodName := OnMouseEnter}
  EventMethodCode
end;

procedure Form_SetOnMouseLeave(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseLeave}
  {$DEFINE EventMethodName := OnMouseLeave}
  EventMethodCode
end;

procedure Form_SetOnMouseMove(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseMove}
  {$DEFINE EventMethodName := OnMouseMove}
  EventMethodCode
end;

procedure Form_SetOnMouseUp(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseUp}
  {$DEFINE EventMethodName := OnMouseUp}
  EventMethodCode
end;

procedure Form_SetOnMouseWheel(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseWheel}
  {$DEFINE EventMethodName := OnMouseWheel}
  EventMethodCode
end;

procedure Form_SetOnMouseWheelDown(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseWheelDown}
  {$DEFINE EventMethodName := OnMouseWheelDown}
  EventMethodCode
end;

procedure Form_SetOnMouseWheelUp(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseWheelUp}
  {$DEFINE EventMethodName := OnMouseWheelUp}
  EventMethodCode
end;

procedure Form_SetOnPaint(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnPaint}
  {$DEFINE EventMethodName := OnPaint}
  EventMethodCode
end;

procedure Form_SetOnResize(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnResize}
  {$DEFINE EventMethodName := OnResize}
  EventMethodCode
end;

procedure Form_SetOnShortCut(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnShortCut}
  {$DEFINE EventMethodName := OnShortCut}
  EventMethodCode
end;

procedure Form_SetOnShow(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnShow}
  {$DEFINE EventMethodName := OnShow}
  EventMethodCode
end;

procedure Form_SetOnStartDock(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnStartDock}
  {$DEFINE EventMethodName := OnStartDock}
  EventMethodCode
end;

procedure Form_SetOnUnDock(AObj: TForm; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnUnDock}
  {$DEFINE EventMethodName := OnUnDock}
  EventMethodCode
end;

function Form_GetCanvas(AObj: TForm): TCanvas; extdecl;
begin
  Result :=  AObj.Canvas;
end;

function Form_GetModalResult(AObj: TForm): TModalResult; extdecl;
begin
  Result :=  AObj.ModalResult;
end;

procedure Form_SetModalResult(AObj: TForm; AValue: TModalResult); extdecl;
begin
  AObj.ModalResult := AValue;
end;

function Form_GetLeft(AObj: TForm): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure Form_SetLeft(AObj: TForm; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function Form_GetTop(AObj: TForm): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure Form_SetTop(AObj: TForm; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function Form_GetDockClientCount(AObj: TForm): Integer; extdecl;
begin
  Result :=  AObj.DockClientCount;
end;

function Form_GetVisibleDockClientCount(AObj: TForm): Integer; extdecl;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function Form_GetBrush(AObj: TForm): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function Form_GetControlCount(AObj: TForm): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function Form_GetHandle(AObj: TForm): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function Form_GetParentWindow(AObj: TForm): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure Form_SetParentWindow(AObj: TForm; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function Form_GetTabOrder(AObj: TForm): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure Form_SetTabOrder(AObj: TForm; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function Form_GetTabStop(AObj: TForm): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure Form_SetTabStop(AObj: TForm; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

procedure Form_GetBoundsRect(AObj: TForm; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure Form_SetBoundsRect(AObj: TForm; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

procedure Form_GetClientOrigin(AObj: TForm; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure Form_GetClientRect(AObj: TForm; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function Form_GetControlState(AObj: TForm): TControlState; extdecl;
begin
  Result :=  AObj.ControlState;
end;

procedure Form_SetControlState(AObj: TForm; AValue: TControlState); extdecl;
begin
  AObj.ControlState := AValue;
end;

function Form_GetControlStyle(AObj: TForm): TControlStyle; extdecl;
begin
  Result :=  AObj.ControlStyle;
end;

procedure Form_SetControlStyle(AObj: TForm; AValue: TControlStyle); extdecl;
begin
  AObj.ControlStyle := AValue;
end;

function Form_GetFloating(AObj: TForm): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function Form_GetParent(AObj: TForm): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure Form_SetParent(AObj: TForm; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function Form_GetCursor(AObj: TForm): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure Form_SetCursor(AObj: TForm; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function Form_GetHint(AObj: TForm): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure Form_SetHint(AObj: TForm; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function Form_GetComponentCount(AObj: TForm): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function Form_GetComponentIndex(AObj: TForm): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure Form_SetComponentIndex(AObj: TForm; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function Form_GetOwner(AObj: TForm): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function Form_GetName(AObj: TForm): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure Form_SetName(AObj: TForm; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function Form_GetTag(AObj: TForm): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure Form_SetTag(AObj: TForm; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function Form_GetDockClients(AObj: TForm; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.DockClients[Index];
end;

function Form_GetControls(AObj: TForm; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function Form_GetComponents(AObj: TForm; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function Form_StaticClassType: TClass; extdecl;
begin
  Result := TForm;
end;

exports
  Form_Create,
  Form_Free,
  Form_Close,
  Form_Hide,
  Form_SetFocus,
  Form_Show,
  Form_ShowModal,
  Form_CanFocus,
  Form_ContainsControl,
  Form_ControlAtPos,
  Form_DisableAlign,
  Form_EnableAlign,
  Form_FindChildControl,
  Form_FlipChildren,
  Form_Focused,
  Form_HandleAllocated,
  Form_InsertControl,
  Form_Invalidate,
  Form_RemoveControl,
  Form_Realign,
  Form_Repaint,
  Form_ScaleBy,
  Form_ScrollBy,
  Form_SetBounds,
  Form_Update,
  Form_BringToFront,
  Form_ClientToScreen,
  Form_ClientToParent,
  Form_Dragging,
  Form_HasParent,
  Form_Perform,
  Form_Refresh,
  Form_ScreenToClient,
  Form_ParentToClient,
  Form_SendToBack,
  Form_GetTextBuf,
  Form_GetTextLen,
  Form_SetTextBuf,
  Form_FindComponent,
  Form_GetNamePath,
  Form_Assign,
  Form_ClassType,
  Form_ClassName,
  Form_InstanceSize,
  Form_InheritsFrom,
  Form_Equals,
  Form_GetHashCode,
  Form_ToString,
  Form_GetAction,
  Form_SetAction,
  Form_GetAlign,
  Form_SetAlign,
  Form_GetAlphaBlend,
  Form_SetAlphaBlend,
  Form_GetAlphaBlendValue,
  Form_SetAlphaBlendValue,
  Form_GetAnchors,
  Form_SetAnchors,
  Form_GetAutoSize,
  Form_SetAutoSize,
  Form_GetBiDiMode,
  Form_SetBiDiMode,
  Form_GetBorderIcons,
  Form_SetBorderIcons,
  Form_GetBorderStyle,
  Form_SetBorderStyle,
  Form_GetBorderWidth,
  Form_SetBorderWidth,
  Form_GetCaption,
  Form_SetCaption,
  Form_GetClientHeight,
  Form_SetClientHeight,
  Form_GetClientWidth,
  Form_SetClientWidth,
  Form_GetColor,
  Form_SetColor,
  Form_GetUseDockManager,
  Form_SetUseDockManager,
  Form_GetDockSite,
  Form_SetDockSite,
  Form_GetDoubleBuffered,
  Form_SetDoubleBuffered,
  Form_GetDragKind,
  Form_SetDragKind,
  Form_GetDragMode,
  Form_SetDragMode,
  Form_GetEnabled,
  Form_SetEnabled,
  Form_GetParentFont,
  Form_SetParentFont,
  Form_GetFont,
  Form_SetFont,
  Form_GetFormStyle,
  Form_SetFormStyle,
  Form_GetHeight,
  Form_SetHeight,
  Form_GetIcon,
  Form_SetIcon,
  Form_GetKeyPreview,
  Form_SetKeyPreview,
  Form_GetMenu,
  Form_SetMenu,
  Form_GetPixelsPerInch,
  Form_SetPixelsPerInch,
  Form_GetPopupMenu,
  Form_SetPopupMenu,
  Form_GetPosition,
  Form_SetPosition,
  Form_GetScaled,
  Form_SetScaled,
  Form_GetShowHint,
  Form_SetShowHint,
  Form_GetVisible,
  Form_SetVisible,
  Form_GetWidth,
  Form_SetWidth,
  Form_GetWindowState,
  Form_SetWindowState,
  Form_SetOnClick,
  Form_SetOnClose,
  Form_SetOnCloseQuery,
  Form_SetOnContextPopup,
  Form_SetOnDblClick,
  Form_SetOnDockDrop,
  Form_SetOnDragDrop,
  Form_SetOnDragOver,
  Form_SetOnEndDock,
  Form_SetOnGetSiteInfo,
  Form_SetOnHide,
  Form_SetOnHelp,
  Form_SetOnKeyDown,
  Form_SetOnKeyPress,
  Form_SetOnKeyUp,
  Form_SetOnMouseDown,
  Form_SetOnMouseEnter,
  Form_SetOnMouseLeave,
  Form_SetOnMouseMove,
  Form_SetOnMouseUp,
  Form_SetOnMouseWheel,
  Form_SetOnMouseWheelDown,
  Form_SetOnMouseWheelUp,
  Form_SetOnPaint,
  Form_SetOnResize,
  Form_SetOnShortCut,
  Form_SetOnShow,
  Form_SetOnStartDock,
  Form_SetOnUnDock,
  Form_GetCanvas,
  Form_GetModalResult,
  Form_SetModalResult,
  Form_GetLeft,
  Form_SetLeft,
  Form_GetTop,
  Form_SetTop,
  Form_GetDockClientCount,
  Form_GetVisibleDockClientCount,
  Form_GetBrush,
  Form_GetControlCount,
  Form_GetHandle,
  Form_GetParentWindow,
  Form_SetParentWindow,
  Form_GetTabOrder,
  Form_SetTabOrder,
  Form_GetTabStop,
  Form_SetTabStop,
  Form_GetBoundsRect,
  Form_SetBoundsRect,
  Form_GetClientOrigin,
  Form_GetClientRect,
  Form_GetControlState,
  Form_SetControlState,
  Form_GetControlStyle,
  Form_SetControlStyle,
  Form_GetFloating,
  Form_GetParent,
  Form_SetParent,
  Form_GetCursor,
  Form_SetCursor,
  Form_GetHint,
  Form_SetHint,
  Form_GetComponentCount,
  Form_GetComponentIndex,
  Form_SetComponentIndex,
  Form_GetOwner,
  Form_GetName,
  Form_SetName,
  Form_GetTag,
  Form_SetTag,
  Form_GetDockClients,
  Form_GetControls,
  Form_GetComponents,
  Form_StaticClassType;

