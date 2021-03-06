
//----------------------------------------
// 代码由GenlibLcl工具自动生成。
// Copyright © ying32. All Rights Reserved.
//
//----------------------------------------

function ValueListEditor_Create(AOwner: TComponent): TValueListEditor; extdecl;
begin
  Result :=  TValueListEditor.Create(AOwner);
end;

procedure ValueListEditor_Free(AObj: TValueListEditor); extdecl;
begin
  AObj.Free;
end;

procedure ValueListEditor_Refresh(AObj: TValueListEditor); extdecl;
begin
  AObj.Refresh;
end;

procedure ValueListEditor_CellRect(AObj: TValueListEditor; ACol: Integer; ARow: Integer; var Result: TRect); extdecl;
begin
  Result :=  AObj.CellRect(ACol, ARow);
end;

procedure ValueListEditor_MouseToCell(AObj: TValueListEditor; X: Integer; Y: Integer; var ACol: Integer; var ARow: Integer); extdecl;
begin
  AObj.MouseToCell(X, Y, ACol, ARow);
end;

procedure ValueListEditor_MouseCoord(AObj: TValueListEditor; X: Integer; Y: Integer; var Result: TGridCoord); extdecl;
begin
  Result :=  AObj.MouseCoord(X, Y);
end;

function ValueListEditor_CanFocus(AObj: TValueListEditor): LongBool; extdecl;
begin
  Result :=  AObj.CanFocus;
end;

function ValueListEditor_ContainsControl(AObj: TValueListEditor; Control: TControl): LongBool; extdecl;
begin
  Result :=  AObj.ContainsControl(Control);
end;

function ValueListEditor_ControlAtPos(AObj: TValueListEditor; var Pos: TPoint; AllowDisabled: LongBool; AllowWinControls: LongBool): TControl; extdecl;
begin
  Result :=  AObj.ControlAtPos(Pos, AllowDisabled, AllowWinControls);
end;

procedure ValueListEditor_DisableAlign(AObj: TValueListEditor); extdecl;
begin
  AObj.DisableAlign;
end;

procedure ValueListEditor_EnableAlign(AObj: TValueListEditor); extdecl;
begin
  AObj.EnableAlign;
end;

function ValueListEditor_FindChildControl(AObj: TValueListEditor; ControlName: PChar): TControl; extdecl;
begin
  Result :=  AObj.FindChildControl(ControlName);
end;

procedure ValueListEditor_FlipChildren(AObj: TValueListEditor; AllLevels: LongBool); extdecl;
begin
  AObj.FlipChildren(AllLevels);
end;

function ValueListEditor_Focused(AObj: TValueListEditor): LongBool; extdecl;
begin
  Result :=  AObj.Focused;
end;

function ValueListEditor_HandleAllocated(AObj: TValueListEditor): LongBool; extdecl;
begin
  Result :=  AObj.HandleAllocated;
end;

procedure ValueListEditor_InsertControl(AObj: TValueListEditor; AControl: TControl); extdecl;
begin
  AObj.InsertControl(AControl);
end;

procedure ValueListEditor_Invalidate(AObj: TValueListEditor); extdecl;
begin
  AObj.Invalidate;
end;

procedure ValueListEditor_RemoveControl(AObj: TValueListEditor; AControl: TControl); extdecl;
begin
  AObj.RemoveControl(AControl);
end;

procedure ValueListEditor_Realign(AObj: TValueListEditor); extdecl;
begin
  AObj.Realign;
end;

procedure ValueListEditor_Repaint(AObj: TValueListEditor); extdecl;
begin
  AObj.Repaint;
end;

procedure ValueListEditor_ScaleBy(AObj: TValueListEditor; M: Integer; D: Integer); extdecl;
begin
  AObj.ScaleBy(M, D);
end;

procedure ValueListEditor_ScrollBy(AObj: TValueListEditor; DeltaX: Integer; DeltaY: Integer); extdecl;
begin
  AObj.ScrollBy(DeltaX, DeltaY);
end;

procedure ValueListEditor_SetBounds(AObj: TValueListEditor; ALeft: Integer; ATop: Integer; AWidth: Integer; AHeight: Integer); extdecl;
begin
  AObj.SetBounds(ALeft, ATop, AWidth, AHeight);
end;

procedure ValueListEditor_SetFocus(AObj: TValueListEditor); extdecl;
begin
  AObj.SetFocus;
end;

procedure ValueListEditor_Update(AObj: TValueListEditor); extdecl;
begin
  AObj.Update;
end;

procedure ValueListEditor_BringToFront(AObj: TValueListEditor); extdecl;
begin
  AObj.BringToFront;
end;

procedure ValueListEditor_ClientToScreen(AObj: TValueListEditor; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToScreen(Point);
end;

procedure ValueListEditor_ClientToParent(AObj: TValueListEditor; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientToParent(Point, AParent);
end;

function ValueListEditor_Dragging(AObj: TValueListEditor): LongBool; extdecl;
begin
  Result :=  AObj.Dragging;
end;

function ValueListEditor_HasParent(AObj: TValueListEditor): LongBool; extdecl;
begin
  Result :=  AObj.HasParent;
end;

procedure ValueListEditor_Hide(AObj: TValueListEditor); extdecl;
begin
  AObj.Hide;
end;

function ValueListEditor_Perform(AObj: TValueListEditor; Msg: Cardinal; WParam: NativeUInt; LParam: NativeInt): NativeInt; extdecl;
begin
  Result :=  AObj.Perform(Msg, WParam, LParam);
end;

procedure ValueListEditor_ScreenToClient(AObj: TValueListEditor; var Point: TPoint; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ScreenToClient(Point);
end;

procedure ValueListEditor_ParentToClient(AObj: TValueListEditor; var Point: TPoint; AParent: TWinControl; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ParentToClient(Point, AParent);
end;

procedure ValueListEditor_SendToBack(AObj: TValueListEditor); extdecl;
begin
  AObj.SendToBack;
end;

procedure ValueListEditor_Show(AObj: TValueListEditor); extdecl;
begin
  AObj.Show;
end;

function ValueListEditor_GetTextBuf(AObj: TValueListEditor; Buffer: PChar; BufSize: Integer): Integer; extdecl;
begin
  Result :=  AObj.GetTextBuf(Buffer, BufSize);
end;

function ValueListEditor_GetTextLen(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.GetTextLen;
end;

procedure ValueListEditor_SetTextBuf(AObj: TValueListEditor; Buffer: PChar); extdecl;
begin
  AObj.SetTextBuf(Buffer);
end;

function ValueListEditor_FindComponent(AObj: TValueListEditor; AName: PChar): TComponent; extdecl;
begin
  Result :=  AObj.FindComponent(AName);
end;

function ValueListEditor_GetNamePath(AObj: TValueListEditor): PChar; extdecl;
begin
  Result :=  PChar(AObj.GetNamePath);
end;

procedure ValueListEditor_Assign(AObj: TValueListEditor; Source: TPersistent); extdecl;
begin
  AObj.Assign(Source);
end;

function ValueListEditor_ClassType(AObj: TValueListEditor): TClass; extdecl;
begin
  Result :=  AObj.ClassType;
end;

function ValueListEditor_ClassName(AObj: TValueListEditor): PChar; extdecl;
begin
  Result :=  ToPChar(AObj.ClassName);
end;

function ValueListEditor_InstanceSize(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.InstanceSize;
end;

function ValueListEditor_InheritsFrom(AObj: TValueListEditor; AClass: TClass): LongBool; extdecl;
begin
  Result :=  AObj.InheritsFrom(AClass);
end;

function ValueListEditor_Equals(AObj: TValueListEditor; Obj: TObject): LongBool; extdecl;
begin
  Result :=  AObj.Equals(Obj);
end;

function ValueListEditor_GetHashCode(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.GetHashCode;
end;

function ValueListEditor_ToString(AObj: TValueListEditor): PChar; extdecl;
begin
  Result :=  PChar(AObj.ToString);
end;

function ValueListEditor_GetColCount(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.ColCount;
end;

procedure ValueListEditor_SetColCount(AObj: TValueListEditor; AValue: Integer); extdecl;
begin
  AObj.ColCount := AValue;
end;

function ValueListEditor_GetRowCount(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.RowCount;
end;

function ValueListEditor_GetVisibleColCount(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.VisibleColCount;
end;

function ValueListEditor_GetVisibleRowCount(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.VisibleRowCount;
end;

function ValueListEditor_GetAlign(AObj: TValueListEditor): TAlign; extdecl;
begin
  Result :=  AObj.Align;
end;

procedure ValueListEditor_SetAlign(AObj: TValueListEditor; AValue: TAlign); extdecl;
begin
  AObj.Align := AValue;
end;

function ValueListEditor_GetAnchors(AObj: TValueListEditor): TAnchors; extdecl;
begin
  Result :=  AObj.Anchors;
end;

procedure ValueListEditor_SetAnchors(AObj: TValueListEditor; AValue: TAnchors); extdecl;
begin
  AObj.Anchors := AValue;
end;

function ValueListEditor_GetBiDiMode(AObj: TValueListEditor): TBiDiMode; extdecl;
begin
  Result :=  AObj.BiDiMode;
end;

procedure ValueListEditor_SetBiDiMode(AObj: TValueListEditor; AValue: TBiDiMode); extdecl;
begin
  AObj.BiDiMode := AValue;
end;

function ValueListEditor_GetBorderStyle(AObj: TValueListEditor): TBorderStyle; extdecl;
begin
  Result :=  AObj.BorderStyle;
end;

procedure ValueListEditor_SetBorderStyle(AObj: TValueListEditor; AValue: TBorderStyle); extdecl;
begin
  AObj.BorderStyle := AValue;
end;

function ValueListEditor_GetColor(AObj: TValueListEditor): TColor; extdecl;
begin
  Result :=  AObj.Color;
end;

procedure ValueListEditor_SetColor(AObj: TValueListEditor; AValue: TColor); extdecl;
begin
  AObj.Color := AValue;
end;

function ValueListEditor_GetDefaultColWidth(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.DefaultColWidth;
end;

procedure ValueListEditor_SetDefaultColWidth(AObj: TValueListEditor; AValue: Integer); extdecl;
begin
  AObj.DefaultColWidth := AValue;
end;

function ValueListEditor_GetDefaultDrawing(AObj: TValueListEditor): LongBool; extdecl;
begin
  Result :=  AObj.DefaultDrawing;
end;

procedure ValueListEditor_SetDefaultDrawing(AObj: TValueListEditor; AValue: LongBool); extdecl;
begin
  AObj.DefaultDrawing := AValue;
end;

function ValueListEditor_GetDefaultRowHeight(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.DefaultRowHeight;
end;

procedure ValueListEditor_SetDefaultRowHeight(AObj: TValueListEditor; AValue: Integer); extdecl;
begin
  AObj.DefaultRowHeight := AValue;
end;

function ValueListEditor_GetDoubleBuffered(AObj: TValueListEditor): LongBool; extdecl;
begin
  Result :=  AObj.DoubleBuffered;
end;

procedure ValueListEditor_SetDoubleBuffered(AObj: TValueListEditor; AValue: LongBool); extdecl;
begin
  AObj.DoubleBuffered := AValue;
end;

function ValueListEditor_GetDragCursor(AObj: TValueListEditor): TCursor; extdecl;
begin
  Result :=  AObj.DragCursor;
end;

procedure ValueListEditor_SetDragCursor(AObj: TValueListEditor; AValue: TCursor); extdecl;
begin
  AObj.DragCursor := AValue;
end;

function ValueListEditor_GetDragKind(AObj: TValueListEditor): TDragKind; extdecl;
begin
  Result :=  AObj.DragKind;
end;

procedure ValueListEditor_SetDragKind(AObj: TValueListEditor; AValue: TDragKind); extdecl;
begin
  AObj.DragKind := AValue;
end;

function ValueListEditor_GetDragMode(AObj: TValueListEditor): TDragMode; extdecl;
begin
  Result :=  AObj.DragMode;
end;

procedure ValueListEditor_SetDragMode(AObj: TValueListEditor; AValue: TDragMode); extdecl;
begin
  AObj.DragMode := AValue;
end;

function ValueListEditor_GetEnabled(AObj: TValueListEditor): LongBool; extdecl;
begin
  Result :=  AObj.Enabled;
end;

procedure ValueListEditor_SetEnabled(AObj: TValueListEditor; AValue: LongBool); extdecl;
begin
  AObj.Enabled := AValue;
end;

function ValueListEditor_GetFixedColor(AObj: TValueListEditor): TColor; extdecl;
begin
  Result :=  AObj.FixedColor;
end;

procedure ValueListEditor_SetFixedColor(AObj: TValueListEditor; AValue: TColor); extdecl;
begin
  AObj.FixedColor := AValue;
end;

function ValueListEditor_GetFixedCols(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.FixedCols;
end;

procedure ValueListEditor_SetFixedCols(AObj: TValueListEditor; AValue: Integer); extdecl;
begin
  AObj.FixedCols := AValue;
end;

function ValueListEditor_GetFont(AObj: TValueListEditor): TFont; extdecl;
begin
  Result :=  AObj.Font;
end;

procedure ValueListEditor_SetFont(AObj: TValueListEditor; AValue: TFont); extdecl;
begin
  AObj.Font := AValue;
end;

function ValueListEditor_GetGridLineWidth(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.GridLineWidth;
end;

procedure ValueListEditor_SetGridLineWidth(AObj: TValueListEditor; AValue: Integer); extdecl;
begin
  AObj.GridLineWidth := AValue;
end;

function ValueListEditor_GetOptions(AObj: TValueListEditor): TGridOptions; extdecl;
begin
  Result :=  AObj.Options;
end;

procedure ValueListEditor_SetOptions(AObj: TValueListEditor; AValue: TGridOptions); extdecl;
begin
  AObj.Options := AValue;
end;

function ValueListEditor_GetParentColor(AObj: TValueListEditor): LongBool; extdecl;
begin
  Result :=  AObj.ParentColor;
end;

procedure ValueListEditor_SetParentColor(AObj: TValueListEditor; AValue: LongBool); extdecl;
begin
  AObj.ParentColor := AValue;
end;

function ValueListEditor_GetParentFont(AObj: TValueListEditor): LongBool; extdecl;
begin
  Result :=  AObj.ParentFont;
end;

procedure ValueListEditor_SetParentFont(AObj: TValueListEditor; AValue: LongBool); extdecl;
begin
  AObj.ParentFont := AValue;
end;

function ValueListEditor_GetParentShowHint(AObj: TValueListEditor): LongBool; extdecl;
begin
  Result :=  AObj.ParentShowHint;
end;

procedure ValueListEditor_SetParentShowHint(AObj: TValueListEditor; AValue: LongBool); extdecl;
begin
  AObj.ParentShowHint := AValue;
end;

function ValueListEditor_GetPopupMenu(AObj: TValueListEditor): TPopupMenu; extdecl;
begin
  Result :=  AObj.PopupMenu;
end;

procedure ValueListEditor_SetPopupMenu(AObj: TValueListEditor; AValue: TPopupMenu); extdecl;
begin
  AObj.PopupMenu := AValue;
end;

function ValueListEditor_GetScrollBars(AObj: TValueListEditor): TScrollStyle; extdecl;
begin
  Result :=  AObj.ScrollBars;
end;

procedure ValueListEditor_SetScrollBars(AObj: TValueListEditor; AValue: TScrollStyle); extdecl;
begin
  AObj.ScrollBars := AValue;
end;

function ValueListEditor_GetShowHint(AObj: TValueListEditor): LongBool; extdecl;
begin
  Result :=  AObj.ShowHint;
end;

procedure ValueListEditor_SetShowHint(AObj: TValueListEditor; AValue: LongBool); extdecl;
begin
  AObj.ShowHint := AValue;
end;

function ValueListEditor_GetStrings(AObj: TValueListEditor): TStrings; extdecl;
begin
  Result :=  AObj.Strings as TValueListStrings;
end;

procedure ValueListEditor_SetStrings(AObj: TValueListEditor; AValue: TStrings); extdecl;
begin
  AObj.Strings := AValue as TValueListStrings;
end;

function ValueListEditor_GetTabOrder(AObj: TValueListEditor): TTabOrder; extdecl;
begin
  Result :=  AObj.TabOrder;
end;

procedure ValueListEditor_SetTabOrder(AObj: TValueListEditor; AValue: TTabOrder); extdecl;
begin
  AObj.TabOrder := AValue;
end;

function ValueListEditor_GetVisible(AObj: TValueListEditor): LongBool; extdecl;
begin
  Result :=  AObj.Visible;
end;

procedure ValueListEditor_SetVisible(AObj: TValueListEditor; AValue: LongBool); extdecl;
begin
  AObj.Visible := AValue;
end;

procedure ValueListEditor_SetOnClick(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnClick}
  {$DEFINE EventMethodName := OnClick}
  EventMethodCode
end;

procedure ValueListEditor_SetOnContextPopup(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnContextPopup}
  {$DEFINE EventMethodName := OnContextPopup}
  EventMethodCode
end;

procedure ValueListEditor_SetOnDblClick(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDblClick}
  {$DEFINE EventMethodName := OnDblClick}
  EventMethodCode
end;

procedure ValueListEditor_SetOnDragDrop(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragDrop}
  {$DEFINE EventMethodName := OnDragDrop}
  EventMethodCode
end;

procedure ValueListEditor_SetOnDragOver(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDragOver}
  {$DEFINE EventMethodName := OnDragOver}
  EventMethodCode
end;

procedure ValueListEditor_SetOnDrawCell(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnDrawCell}
  {$DEFINE EventMethodName := OnDrawCell}
  EventMethodCode
end;

procedure ValueListEditor_SetOnEndDock(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDock}
  {$DEFINE EventMethodName := OnEndDock}
  EventMethodCode
end;

procedure ValueListEditor_SetOnEndDrag(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEndDrag}
  {$DEFINE EventMethodName := OnEndDrag}
  EventMethodCode
end;

procedure ValueListEditor_SetOnEnter(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnEnter}
  {$DEFINE EventMethodName := OnEnter}
  EventMethodCode
end;

procedure ValueListEditor_SetOnExit(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnExit}
  {$DEFINE EventMethodName := OnExit}
  EventMethodCode
end;

procedure ValueListEditor_SetOnGetEditMask(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnGetEditMask}
  {$DEFINE EventMethodName := OnGetEditMask}
  EventMethodCode
end;

procedure ValueListEditor_SetOnGetEditText(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnGetEditText}
  {$DEFINE EventMethodName := OnGetEditText}
  EventMethodCode
end;

procedure ValueListEditor_SetOnKeyDown(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyDown}
  {$DEFINE EventMethodName := OnKeyDown}
  EventMethodCode
end;

procedure ValueListEditor_SetOnKeyPress(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyPress}
  {$DEFINE EventMethodName := OnKeyPress}
  EventMethodCode
end;

procedure ValueListEditor_SetOnKeyUp(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnKeyUp}
  {$DEFINE EventMethodName := OnKeyUp}
  EventMethodCode
end;

procedure ValueListEditor_SetOnMouseDown(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseDown}
  {$DEFINE EventMethodName := OnMouseDown}
  EventMethodCode
end;

procedure ValueListEditor_SetOnMouseEnter(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseEnter}
  {$DEFINE EventMethodName := OnMouseEnter}
  EventMethodCode
end;

procedure ValueListEditor_SetOnMouseLeave(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseLeave}
  {$DEFINE EventMethodName := OnMouseLeave}
  EventMethodCode
end;

procedure ValueListEditor_SetOnMouseMove(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseMove}
  {$DEFINE EventMethodName := OnMouseMove}
  EventMethodCode
end;

procedure ValueListEditor_SetOnMouseUp(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseUp}
  {$DEFINE EventMethodName := OnMouseUp}
  EventMethodCode
end;

procedure ValueListEditor_SetOnMouseWheelDown(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseWheelDown}
  {$DEFINE EventMethodName := OnMouseWheelDown}
  EventMethodCode
end;

procedure ValueListEditor_SetOnMouseWheelUp(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnMouseWheelUp}
  {$DEFINE EventMethodName := OnMouseWheelUp}
  EventMethodCode
end;

procedure ValueListEditor_SetOnRowMoved(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnColRowMoved}
  {$DEFINE EventMethodName := OnRowMoved}
  EventMethodCode
end;

procedure ValueListEditor_SetOnSelectCell(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnSelectCell}
  {$DEFINE EventMethodName := OnSelectCell}
  EventMethodCode
end;

procedure ValueListEditor_SetOnSetEditText(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnSetEditText}
  {$DEFINE EventMethodName := OnSetEditText}
  EventMethodCode
end;

procedure ValueListEditor_SetOnStartDock(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnStartDock}
  {$DEFINE EventMethodName := OnStartDock}
  EventMethodCode
end;

procedure ValueListEditor_SetOnTopLeftChanged(AObj: TValueListEditor; AEventId: NativeUInt); extdecl;
begin
  {$DEFINE EventName := OnTopLeftChanged}
  {$DEFINE EventMethodName := OnTopLeftChanged}
  EventMethodCode
end;

function ValueListEditor_GetCanvas(AObj: TValueListEditor): TCanvas; extdecl;
begin
  Result :=  AObj.Canvas;
end;

function ValueListEditor_GetCol(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.Col;
end;

procedure ValueListEditor_SetCol(AObj: TValueListEditor; AValue: Integer); extdecl;
begin
  AObj.Col := AValue;
end;

function ValueListEditor_GetEditorMode(AObj: TValueListEditor): LongBool; extdecl;
begin
  Result :=  AObj.EditorMode;
end;

procedure ValueListEditor_SetEditorMode(AObj: TValueListEditor; AValue: LongBool); extdecl;
begin
  AObj.EditorMode := AValue;
end;

function ValueListEditor_GetGridHeight(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.GridHeight;
end;

function ValueListEditor_GetGridWidth(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.GridWidth;
end;

function ValueListEditor_GetLeftCol(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.LeftCol;
end;

procedure ValueListEditor_SetLeftCol(AObj: TValueListEditor; AValue: Integer); extdecl;
begin
  AObj.LeftCol := AValue;
end;

procedure ValueListEditor_GetSelection(AObj: TValueListEditor; var Result: TGridRect); extdecl;
begin
  Result :=  AObj.Selection;
end;

procedure ValueListEditor_SetSelection(AObj: TValueListEditor; var AValue: TGridRect); extdecl;
begin
  AObj.Selection := AValue;
end;

function ValueListEditor_GetRow(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.Row;
end;

procedure ValueListEditor_SetRow(AObj: TValueListEditor; AValue: Integer); extdecl;
begin
  AObj.Row := AValue;
end;

function ValueListEditor_GetTopRow(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.TopRow;
end;

procedure ValueListEditor_SetTopRow(AObj: TValueListEditor; AValue: Integer); extdecl;
begin
  AObj.TopRow := AValue;
end;

function ValueListEditor_GetTabStop(AObj: TValueListEditor): LongBool; extdecl;
begin
  Result :=  AObj.TabStop;
end;

procedure ValueListEditor_SetTabStop(AObj: TValueListEditor; AValue: LongBool); extdecl;
begin
  AObj.TabStop := AValue;
end;

function ValueListEditor_GetDockClientCount(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.DockClientCount;
end;

function ValueListEditor_GetDockSite(AObj: TValueListEditor): LongBool; extdecl;
begin
  Result :=  AObj.DockSite;
end;

procedure ValueListEditor_SetDockSite(AObj: TValueListEditor; AValue: LongBool); extdecl;
begin
  AObj.DockSite := AValue;
end;

function ValueListEditor_GetVisibleDockClientCount(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.VisibleDockClientCount;
end;

function ValueListEditor_GetBrush(AObj: TValueListEditor): TBrush; extdecl;
begin
  Result :=  AObj.Brush;
end;

function ValueListEditor_GetControlCount(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.ControlCount;
end;

function ValueListEditor_GetHandle(AObj: TValueListEditor): HWND; extdecl;
begin
  Result :=  AObj.Handle;
end;

function ValueListEditor_GetParentWindow(AObj: TValueListEditor): HWND; extdecl;
begin
  Result :=  AObj.ParentWindow;
end;

procedure ValueListEditor_SetParentWindow(AObj: TValueListEditor; AValue: HWND); extdecl;
begin
  AObj.ParentWindow := AValue;
end;

function ValueListEditor_GetUseDockManager(AObj: TValueListEditor): LongBool; extdecl;
begin
  Result :=  AObj.UseDockManager;
end;

procedure ValueListEditor_SetUseDockManager(AObj: TValueListEditor; AValue: LongBool); extdecl;
begin
  AObj.UseDockManager := AValue;
end;

function ValueListEditor_GetAction(AObj: TValueListEditor): TBasicAction; extdecl;
begin
  Result :=  AObj.Action;
end;

procedure ValueListEditor_SetAction(AObj: TValueListEditor; AValue: TBasicAction); extdecl;
begin
  AObj.Action := AValue;
end;

procedure ValueListEditor_GetBoundsRect(AObj: TValueListEditor; var Result: TRect); extdecl;
begin
  Result :=  AObj.BoundsRect;
end;

procedure ValueListEditor_SetBoundsRect(AObj: TValueListEditor; var AValue: TRect); extdecl;
begin
  AObj.BoundsRect := AValue;
end;

function ValueListEditor_GetClientHeight(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.ClientHeight;
end;

procedure ValueListEditor_SetClientHeight(AObj: TValueListEditor; AValue: Integer); extdecl;
begin
  AObj.ClientHeight := AValue;
end;

procedure ValueListEditor_GetClientOrigin(AObj: TValueListEditor; var Result: TPoint); extdecl;
begin
  Result :=  AObj.ClientOrigin;
end;

procedure ValueListEditor_GetClientRect(AObj: TValueListEditor; var Result: TRect); extdecl;
begin
  Result :=  AObj.ClientRect;
end;

function ValueListEditor_GetClientWidth(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.ClientWidth;
end;

procedure ValueListEditor_SetClientWidth(AObj: TValueListEditor; AValue: Integer); extdecl;
begin
  AObj.ClientWidth := AValue;
end;

function ValueListEditor_GetControlState(AObj: TValueListEditor): TControlState; extdecl;
begin
  Result :=  AObj.ControlState;
end;

procedure ValueListEditor_SetControlState(AObj: TValueListEditor; AValue: TControlState); extdecl;
begin
  AObj.ControlState := AValue;
end;

function ValueListEditor_GetControlStyle(AObj: TValueListEditor): TControlStyle; extdecl;
begin
  Result :=  AObj.ControlStyle;
end;

procedure ValueListEditor_SetControlStyle(AObj: TValueListEditor; AValue: TControlStyle); extdecl;
begin
  AObj.ControlStyle := AValue;
end;

function ValueListEditor_GetFloating(AObj: TValueListEditor): LongBool; extdecl;
begin
  Result :=  AObj.Floating;
end;

function ValueListEditor_GetParent(AObj: TValueListEditor): TWinControl; extdecl;
begin
  Result :=  AObj.Parent;
end;

procedure ValueListEditor_SetParent(AObj: TValueListEditor; AValue: TWinControl); extdecl;
begin
  AObj.Parent := AValue;
end;

function ValueListEditor_GetLeft(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.Left;
end;

procedure ValueListEditor_SetLeft(AObj: TValueListEditor; AValue: Integer); extdecl;
begin
  AObj.Left := AValue;
end;

function ValueListEditor_GetTop(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.Top;
end;

procedure ValueListEditor_SetTop(AObj: TValueListEditor; AValue: Integer); extdecl;
begin
  AObj.Top := AValue;
end;

function ValueListEditor_GetWidth(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.Width;
end;

procedure ValueListEditor_SetWidth(AObj: TValueListEditor; AValue: Integer); extdecl;
begin
  AObj.Width := AValue;
end;

function ValueListEditor_GetHeight(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.Height;
end;

procedure ValueListEditor_SetHeight(AObj: TValueListEditor; AValue: Integer); extdecl;
begin
  AObj.Height := AValue;
end;

function ValueListEditor_GetCursor(AObj: TValueListEditor): TCursor; extdecl;
begin
  Result :=  AObj.Cursor;
end;

procedure ValueListEditor_SetCursor(AObj: TValueListEditor; AValue: TCursor); extdecl;
begin
  AObj.Cursor := AValue;
end;

function ValueListEditor_GetHint(AObj: TValueListEditor): PChar; extdecl;
begin
  Result :=  PChar(AObj.Hint);
end;

procedure ValueListEditor_SetHint(AObj: TValueListEditor; AValue: PChar); extdecl;
begin
  AObj.Hint := AValue;
end;

function ValueListEditor_GetComponentCount(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.ComponentCount;
end;

function ValueListEditor_GetComponentIndex(AObj: TValueListEditor): Integer; extdecl;
begin
  Result :=  AObj.ComponentIndex;
end;

procedure ValueListEditor_SetComponentIndex(AObj: TValueListEditor; AValue: Integer); extdecl;
begin
  AObj.ComponentIndex := AValue;
end;

function ValueListEditor_GetOwner(AObj: TValueListEditor): TComponent; extdecl;
begin
  Result :=  AObj.Owner;
end;

function ValueListEditor_GetName(AObj: TValueListEditor): PChar; extdecl;
begin
  Result :=  PChar(AObj.Name);
end;

procedure ValueListEditor_SetName(AObj: TValueListEditor; AValue: PChar); extdecl;
begin
  AObj.Name := AValue;
end;

function ValueListEditor_GetTag(AObj: TValueListEditor): NativeInt; extdecl;
begin
  Result :=  AObj.Tag;
end;

procedure ValueListEditor_SetTag(AObj: TValueListEditor; AValue: NativeInt); extdecl;
begin
  AObj.Tag := AValue;
end;

function ValueListEditor_GetCells(AObj: TValueListEditor; ACol: Integer; ARow: Integer): PChar; extdecl;
begin
  Result :=  PChar(AObj.Cells[ACol, ARow]);
end;

procedure ValueListEditor_SetCells(AObj: TValueListEditor; ACol: Integer; ARow: Integer; AValue: PChar); extdecl;
begin
  AObj.Cells[ACol, ARow] := AValue;
end;

function ValueListEditor_GetValues(AObj: TValueListEditor; Key: PChar): PChar; extdecl;
begin
  Result :=  PChar(AObj.Values[Key]);
end;

procedure ValueListEditor_SetValues(AObj: TValueListEditor; Key: string; AValue: PChar); extdecl;
begin
  AObj.Values[Key] := AValue;
end;

function ValueListEditor_GetColWidths(AObj: TValueListEditor; Index: Integer): Integer; extdecl;
begin
  Result :=  AObj.ColWidths[Index];
end;

procedure ValueListEditor_SetColWidths(AObj: TValueListEditor; Index: Integer; AValue: Integer); extdecl;
begin
  AObj.ColWidths[Index] := AValue;
end;

function ValueListEditor_GetRowHeights(AObj: TValueListEditor; Index: Integer): Integer; extdecl;
begin
  Result :=  AObj.RowHeights[Index];
end;

procedure ValueListEditor_SetRowHeights(AObj: TValueListEditor; Index: Integer; AValue: Integer); extdecl;
begin
  AObj.RowHeights[Index] := AValue;
end;

function ValueListEditor_GetDockClients(AObj: TValueListEditor; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.DockClients[Index];
end;

function ValueListEditor_GetControls(AObj: TValueListEditor; Index: Integer): TControl; extdecl;
begin
  Result :=  AObj.Controls[Index];
end;

function ValueListEditor_GetComponents(AObj: TValueListEditor; AIndex: Integer): TComponent; extdecl;
begin
  Result :=  AObj.Components[AIndex];
end;

function ValueListEditor_StaticClassType: TClass; extdecl;
begin
  Result := TValueListEditor;
end;

exports
  ValueListEditor_Create,
  ValueListEditor_Free,
  ValueListEditor_Refresh,
  ValueListEditor_CellRect,
  ValueListEditor_MouseToCell,
  ValueListEditor_MouseCoord,
  ValueListEditor_CanFocus,
  ValueListEditor_ContainsControl,
  ValueListEditor_ControlAtPos,
  ValueListEditor_DisableAlign,
  ValueListEditor_EnableAlign,
  ValueListEditor_FindChildControl,
  ValueListEditor_FlipChildren,
  ValueListEditor_Focused,
  ValueListEditor_HandleAllocated,
  ValueListEditor_InsertControl,
  ValueListEditor_Invalidate,
  ValueListEditor_RemoveControl,
  ValueListEditor_Realign,
  ValueListEditor_Repaint,
  ValueListEditor_ScaleBy,
  ValueListEditor_ScrollBy,
  ValueListEditor_SetBounds,
  ValueListEditor_SetFocus,
  ValueListEditor_Update,
  ValueListEditor_BringToFront,
  ValueListEditor_ClientToScreen,
  ValueListEditor_ClientToParent,
  ValueListEditor_Dragging,
  ValueListEditor_HasParent,
  ValueListEditor_Hide,
  ValueListEditor_Perform,
  ValueListEditor_ScreenToClient,
  ValueListEditor_ParentToClient,
  ValueListEditor_SendToBack,
  ValueListEditor_Show,
  ValueListEditor_GetTextBuf,
  ValueListEditor_GetTextLen,
  ValueListEditor_SetTextBuf,
  ValueListEditor_FindComponent,
  ValueListEditor_GetNamePath,
  ValueListEditor_Assign,
  ValueListEditor_ClassType,
  ValueListEditor_ClassName,
  ValueListEditor_InstanceSize,
  ValueListEditor_InheritsFrom,
  ValueListEditor_Equals,
  ValueListEditor_GetHashCode,
  ValueListEditor_ToString,
  ValueListEditor_GetColCount,
  ValueListEditor_SetColCount,
  ValueListEditor_GetRowCount,
  ValueListEditor_GetVisibleColCount,
  ValueListEditor_GetVisibleRowCount,
  ValueListEditor_GetAlign,
  ValueListEditor_SetAlign,
  ValueListEditor_GetAnchors,
  ValueListEditor_SetAnchors,
  ValueListEditor_GetBiDiMode,
  ValueListEditor_SetBiDiMode,
  ValueListEditor_GetBorderStyle,
  ValueListEditor_SetBorderStyle,
  ValueListEditor_GetColor,
  ValueListEditor_SetColor,
  ValueListEditor_GetDefaultColWidth,
  ValueListEditor_SetDefaultColWidth,
  ValueListEditor_GetDefaultDrawing,
  ValueListEditor_SetDefaultDrawing,
  ValueListEditor_GetDefaultRowHeight,
  ValueListEditor_SetDefaultRowHeight,
  ValueListEditor_GetDoubleBuffered,
  ValueListEditor_SetDoubleBuffered,
  ValueListEditor_GetDragCursor,
  ValueListEditor_SetDragCursor,
  ValueListEditor_GetDragKind,
  ValueListEditor_SetDragKind,
  ValueListEditor_GetDragMode,
  ValueListEditor_SetDragMode,
  ValueListEditor_GetEnabled,
  ValueListEditor_SetEnabled,
  ValueListEditor_GetFixedColor,
  ValueListEditor_SetFixedColor,
  ValueListEditor_GetFixedCols,
  ValueListEditor_SetFixedCols,
  ValueListEditor_GetFont,
  ValueListEditor_SetFont,
  ValueListEditor_GetGridLineWidth,
  ValueListEditor_SetGridLineWidth,
  ValueListEditor_GetOptions,
  ValueListEditor_SetOptions,
  ValueListEditor_GetParentColor,
  ValueListEditor_SetParentColor,
  ValueListEditor_GetParentFont,
  ValueListEditor_SetParentFont,
  ValueListEditor_GetParentShowHint,
  ValueListEditor_SetParentShowHint,
  ValueListEditor_GetPopupMenu,
  ValueListEditor_SetPopupMenu,
  ValueListEditor_GetScrollBars,
  ValueListEditor_SetScrollBars,
  ValueListEditor_GetShowHint,
  ValueListEditor_SetShowHint,
  ValueListEditor_GetStrings,
  ValueListEditor_SetStrings,
  ValueListEditor_GetTabOrder,
  ValueListEditor_SetTabOrder,
  ValueListEditor_GetVisible,
  ValueListEditor_SetVisible,
  ValueListEditor_SetOnClick,
  ValueListEditor_SetOnContextPopup,
  ValueListEditor_SetOnDblClick,
  ValueListEditor_SetOnDragDrop,
  ValueListEditor_SetOnDragOver,
  ValueListEditor_SetOnDrawCell,
  ValueListEditor_SetOnEndDock,
  ValueListEditor_SetOnEndDrag,
  ValueListEditor_SetOnEnter,
  ValueListEditor_SetOnExit,
  ValueListEditor_SetOnGetEditMask,
  ValueListEditor_SetOnGetEditText,
  ValueListEditor_SetOnKeyDown,
  ValueListEditor_SetOnKeyPress,
  ValueListEditor_SetOnKeyUp,
  ValueListEditor_SetOnMouseDown,
  ValueListEditor_SetOnMouseEnter,
  ValueListEditor_SetOnMouseLeave,
  ValueListEditor_SetOnMouseMove,
  ValueListEditor_SetOnMouseUp,
  ValueListEditor_SetOnMouseWheelDown,
  ValueListEditor_SetOnMouseWheelUp,
  ValueListEditor_SetOnRowMoved,
  ValueListEditor_SetOnSelectCell,
  ValueListEditor_SetOnSetEditText,
  ValueListEditor_SetOnStartDock,
  ValueListEditor_SetOnTopLeftChanged,
  ValueListEditor_GetCanvas,
  ValueListEditor_GetCol,
  ValueListEditor_SetCol,
  ValueListEditor_GetEditorMode,
  ValueListEditor_SetEditorMode,
  ValueListEditor_GetGridHeight,
  ValueListEditor_GetGridWidth,
  ValueListEditor_GetLeftCol,
  ValueListEditor_SetLeftCol,
  ValueListEditor_GetSelection,
  ValueListEditor_SetSelection,
  ValueListEditor_GetRow,
  ValueListEditor_SetRow,
  ValueListEditor_GetTopRow,
  ValueListEditor_SetTopRow,
  ValueListEditor_GetTabStop,
  ValueListEditor_SetTabStop,
  ValueListEditor_GetDockClientCount,
  ValueListEditor_GetDockSite,
  ValueListEditor_SetDockSite,
  ValueListEditor_GetVisibleDockClientCount,
  ValueListEditor_GetBrush,
  ValueListEditor_GetControlCount,
  ValueListEditor_GetHandle,
  ValueListEditor_GetParentWindow,
  ValueListEditor_SetParentWindow,
  ValueListEditor_GetUseDockManager,
  ValueListEditor_SetUseDockManager,
  ValueListEditor_GetAction,
  ValueListEditor_SetAction,
  ValueListEditor_GetBoundsRect,
  ValueListEditor_SetBoundsRect,
  ValueListEditor_GetClientHeight,
  ValueListEditor_SetClientHeight,
  ValueListEditor_GetClientOrigin,
  ValueListEditor_GetClientRect,
  ValueListEditor_GetClientWidth,
  ValueListEditor_SetClientWidth,
  ValueListEditor_GetControlState,
  ValueListEditor_SetControlState,
  ValueListEditor_GetControlStyle,
  ValueListEditor_SetControlStyle,
  ValueListEditor_GetFloating,
  ValueListEditor_GetParent,
  ValueListEditor_SetParent,
  ValueListEditor_GetLeft,
  ValueListEditor_SetLeft,
  ValueListEditor_GetTop,
  ValueListEditor_SetTop,
  ValueListEditor_GetWidth,
  ValueListEditor_SetWidth,
  ValueListEditor_GetHeight,
  ValueListEditor_SetHeight,
  ValueListEditor_GetCursor,
  ValueListEditor_SetCursor,
  ValueListEditor_GetHint,
  ValueListEditor_SetHint,
  ValueListEditor_GetComponentCount,
  ValueListEditor_GetComponentIndex,
  ValueListEditor_SetComponentIndex,
  ValueListEditor_GetOwner,
  ValueListEditor_GetName,
  ValueListEditor_SetName,
  ValueListEditor_GetTag,
  ValueListEditor_SetTag,
  ValueListEditor_GetCells,
  ValueListEditor_SetCells,
  ValueListEditor_GetValues,
  ValueListEditor_SetValues,
  ValueListEditor_GetColWidths,
  ValueListEditor_SetColWidths,
  ValueListEditor_GetRowHeights,
  ValueListEditor_SetRowHeights,
  ValueListEditor_GetDockClients,
  ValueListEditor_GetControls,
  ValueListEditor_GetComponents,
  ValueListEditor_StaticClassType;

