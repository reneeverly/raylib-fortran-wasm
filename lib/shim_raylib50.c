// Shim generated at 1711410832390 by reneeverly/raylib-fortran-wasm/patch_prototype.html

#include "raylib.h"

RLAPI void shim_CloseWindow (int i32) {
   return CloseWindow();
}

RLAPI bool shim_WindowShouldClose (int i32) {
   return WindowShouldClose();
}

RLAPI bool shim_IsWindowReady (int i32) {
   return IsWindowReady();
}

RLAPI bool shim_IsWindowFullscreen (int i32) {
   return IsWindowFullscreen();
}

RLAPI bool shim_IsWindowHidden (int i32) {
   return IsWindowHidden();
}

RLAPI bool shim_IsWindowMinimized (int i32) {
   return IsWindowMinimized();
}

RLAPI bool shim_IsWindowMaximized (int i32) {
   return IsWindowMaximized();
}

RLAPI bool shim_IsWindowFocused (int i32) {
   return IsWindowFocused();
}

RLAPI bool shim_IsWindowResized (int i32) {
   return IsWindowResized();
}

RLAPI void shim_ToggleFullscreen (int i32) {
   return ToggleFullscreen();
}

RLAPI void shim_ToggleBorderlessWindowed (int i32) {
   return ToggleBorderlessWindowed();
}

RLAPI void shim_MaximizeWindow (int i32) {
   return MaximizeWindow();
}

RLAPI void shim_MinimizeWindow (int i32) {
   return MinimizeWindow();
}

RLAPI void shim_RestoreWindow (int i32) {
   return RestoreWindow();
}

RLAPI void shim_SetWindowFocused (int i32) {
   return SetWindowFocused();
}

RLAPI void *shim_GetWindowHandle (int i32) {
   return GetWindowHandle();
}

RLAPI int shim_GetScreenWidth (int i32) {
   return GetScreenWidth();
}

RLAPI int shim_GetScreenHeight (int i32) {
   return GetScreenHeight();
}

RLAPI int shim_GetRenderWidth (int i32) {
   return GetRenderWidth();
}

RLAPI int shim_GetRenderHeight (int i32) {
   return GetRenderHeight();
}

RLAPI int shim_GetMonitorCount (int i32) {
   return GetMonitorCount();
}

RLAPI int shim_GetCurrentMonitor (int i32) {
   return GetCurrentMonitor();
}

RLAPI Vector2 shim_GetWindowPosition (int i32) {
   return GetWindowPosition();
}

RLAPI Vector2 shim_GetWindowScaleDPI (int i32) {
   return GetWindowScaleDPI();
}

RLAPI const char *shim_GetClipboardText (int i32) {
   return GetClipboardText();
}

RLAPI void shim_EnableEventWaiting (int i32) {
   return EnableEventWaiting();
}

RLAPI void shim_DisableEventWaiting (int i32) {
   return DisableEventWaiting();
}

RLAPI void shim_ShowCursor (int i32) {
   return ShowCursor();
}

RLAPI void shim_HideCursor (int i32) {
   return HideCursor();
}

RLAPI bool shim_IsCursorHidden (int i32) {
   return IsCursorHidden();
}

RLAPI void shim_EnableCursor (int i32) {
   return EnableCursor();
}

RLAPI void shim_DisableCursor (int i32) {
   return DisableCursor();
}

RLAPI bool shim_IsCursorOnScreen (int i32) {
   return IsCursorOnScreen();
}

RLAPI void shim_BeginDrawing (int i32) {
   return BeginDrawing();
}

RLAPI void shim_EndDrawing (int i32) {
   return EndDrawing();
}

RLAPI void shim_EndMode2D (int i32) {
   return EndMode2D();
}

RLAPI void shim_EndMode3D (int i32) {
   return EndMode3D();
}

RLAPI void shim_EndTextureMode (int i32) {
   return EndTextureMode();
}

RLAPI void shim_EndShaderMode (int i32) {
   return EndShaderMode();
}

RLAPI void shim_EndBlendMode (int i32) {
   return EndBlendMode();
}

RLAPI void shim_EndScissorMode (int i32) {
   return EndScissorMode();
}

RLAPI void shim_EndVrStereoMode (int i32) {
   return EndVrStereoMode();
}

RLAPI Vector2 shim_GetWorldToScreen (float position_1, float position_2, float position_3, Camera camera) {
   return GetWorldToScreen((Vector3){position_1, position_2, position_3},camera);
}
RLAPI Vector2 shim_GetWorldToScreenEx (float position_1, float position_2, float position_3, Camera camera, int width, int height) {
   return GetWorldToScreenEx((Vector3){position_1, position_2, position_3},camera,width,height);
}
RLAPI float shim_GetFrameTime (int i32) {
   return GetFrameTime();
}

RLAPI double shim_GetTime (int i32) {
   return GetTime();
}

RLAPI int shim_GetFPS (int i32) {
   return GetFPS();
}

RLAPI void shim_SwapScreenBuffer (int i32) {
   return SwapScreenBuffer();
}

RLAPI void shim_PollInputEvents (int i32) {
   return PollInputEvents();
}

RLAPI const char *shim_GetWorkingDirectory (int i32) {
   return GetWorkingDirectory();
}

RLAPI const char *shim_GetApplicationDirectory (int i32) {
   return GetApplicationDirectory();
}

RLAPI bool shim_IsFileDropped (int i32) {
   return IsFileDropped();
}

RLAPI FilePathList shim_LoadDroppedFiles (int i32) {
   return LoadDroppedFiles();
}

RLAPI void shim_StartAutomationEventRecording (int i32) {
   return StartAutomationEventRecording();
}

RLAPI void shim_StopAutomationEventRecording (int i32) {
   return StopAutomationEventRecording();
}

RLAPI int shim_GetKeyPressed (int i32) {
   return GetKeyPressed();
}

RLAPI int shim_GetCharPressed (int i32) {
   return GetCharPressed();
}

RLAPI int shim_GetGamepadButtonPressed (int i32) {
   return GetGamepadButtonPressed();
}

RLAPI int shim_GetMouseX (int i32) {
   return GetMouseX();
}

RLAPI int shim_GetMouseY (int i32) {
   return GetMouseY();
}

RLAPI Vector2 shim_GetMousePosition (int i32) {
   return GetMousePosition();
}

RLAPI Vector2 shim_GetMouseDelta (int i32) {
   return GetMouseDelta();
}

RLAPI float shim_GetMouseWheelMove (int i32) {
   return GetMouseWheelMove();
}

RLAPI Vector2 shim_GetMouseWheelMoveV (int i32) {
   return GetMouseWheelMoveV();
}

RLAPI int shim_GetTouchX (int i32) {
   return GetTouchX();
}

RLAPI int shim_GetTouchY (int i32) {
   return GetTouchY();
}

RLAPI int shim_GetTouchPointCount (int i32) {
   return GetTouchPointCount();
}

RLAPI int shim_GetGestureDetected (int i32) {
   return GetGestureDetected();
}

RLAPI float shim_GetGestureHoldDuration (int i32) {
   return GetGestureHoldDuration();
}

RLAPI Vector2 shim_GetGestureDragVector (int i32) {
   return GetGestureDragVector();
}

RLAPI float shim_GetGestureDragAngle (int i32) {
   return GetGestureDragAngle();
}

RLAPI Vector2 shim_GetGesturePinchVector (int i32) {
   return GetGesturePinchVector();
}

RLAPI float shim_GetGesturePinchAngle (int i32) {
   return GetGesturePinchAngle();
}

RLAPI void shim_UpdateCameraPro (Camera *camera,float movement_1, float movement_2, float movement_3,float rotation_1, float rotation_2, float rotation_3, float zoom) {
   return UpdateCameraPro(*camera,(Vector3){movement_1, movement_2, movement_3},(Vector3){rotation_1, rotation_2, rotation_3},zoom);
}
RLAPI Image shim_LoadImageFromScreen (int i32) {
   return LoadImageFromScreen();
}

RLAPI Font shim_GetFontDefault (int i32) {
   return GetFontDefault();
}

RLAPI void shim_DrawLine3D (float startPos_1, float startPos_2, float startPos_3,float endPos_1, float endPos_2, float endPos_3, Color color) {
   return DrawLine3D((Vector3){startPos_1, startPos_2, startPos_3},(Vector3){endPos_1, endPos_2, endPos_3},color);
}
RLAPI void shim_DrawPoint3D (float position_1, float position_2, float position_3, Color color) {
   return DrawPoint3D((Vector3){position_1, position_2, position_3},color);
}
RLAPI void shim_DrawCircle3D (float center_1, float center_2, float center_3, float radius,float rotationAxis_1, float rotationAxis_2, float rotationAxis_3, float rotationAngle, Color color) {
   return DrawCircle3D((Vector3){center_1, center_2, center_3},radius,(Vector3){rotationAxis_1, rotationAxis_2, rotationAxis_3},rotationAngle,color);
}
RLAPI void shim_DrawTriangle3D (float v1_1, float v1_2, float v1_3,float v2_1, float v2_2, float v2_3,float v3_1, float v3_2, float v3_3, Color color) {
   return DrawTriangle3D((Vector3){v1_1, v1_2, v1_3},(Vector3){v2_1, v2_2, v2_3},(Vector3){v3_1, v3_2, v3_3},color);
}
RLAPI void shim_DrawTriangleStrip3D (Vector3 *points, int pointCount, Color color) {
   return DrawTriangleStrip3D(*points,pointCount,color);
}
RLAPI void shim_DrawCube (float position_1, float position_2, float position_3, float width, float height, float length, Color color) {
   return DrawCube((Vector3){position_1, position_2, position_3},width,height,length,color);
}
RLAPI void shim_DrawCubeV (float position_1, float position_2, float position_3,float size_1, float size_2, float size_3, Color color) {
   return DrawCubeV((Vector3){position_1, position_2, position_3},(Vector3){size_1, size_2, size_3},color);
}
RLAPI void shim_DrawCubeWires (float position_1, float position_2, float position_3, float width, float height, float length, Color color) {
   return DrawCubeWires((Vector3){position_1, position_2, position_3},width,height,length,color);
}
RLAPI void shim_DrawCubeWiresV (float position_1, float position_2, float position_3,float size_1, float size_2, float size_3, Color color) {
   return DrawCubeWiresV((Vector3){position_1, position_2, position_3},(Vector3){size_1, size_2, size_3},color);
}
RLAPI void shim_DrawSphere (float centerPos_1, float centerPos_2, float centerPos_3, float radius, Color color) {
   return DrawSphere((Vector3){centerPos_1, centerPos_2, centerPos_3},radius,color);
}
RLAPI void shim_DrawSphereEx (float centerPos_1, float centerPos_2, float centerPos_3, float radius, int rings, int slices, Color color) {
   return DrawSphereEx((Vector3){centerPos_1, centerPos_2, centerPos_3},radius,rings,slices,color);
}
RLAPI void shim_DrawSphereWires (float centerPos_1, float centerPos_2, float centerPos_3, float radius, int rings, int slices, Color color) {
   return DrawSphereWires((Vector3){centerPos_1, centerPos_2, centerPos_3},radius,rings,slices,color);
}
RLAPI void shim_DrawCylinder (float position_1, float position_2, float position_3, float radiusTop, float radiusBottom, float height, int slices, Color color) {
   return DrawCylinder((Vector3){position_1, position_2, position_3},radiusTop,radiusBottom,height,slices,color);
}
RLAPI void shim_DrawCylinderEx (float startPos_1, float startPos_2, float startPos_3,float endPos_1, float endPos_2, float endPos_3, float startRadius, float endRadius, int sides, Color color) {
   return DrawCylinderEx((Vector3){startPos_1, startPos_2, startPos_3},(Vector3){endPos_1, endPos_2, endPos_3},startRadius,endRadius,sides,color);
}
RLAPI void shim_DrawCylinderWires (float position_1, float position_2, float position_3, float radiusTop, float radiusBottom, float height, int slices, Color color) {
   return DrawCylinderWires((Vector3){position_1, position_2, position_3},radiusTop,radiusBottom,height,slices,color);
}
RLAPI void shim_DrawCylinderWiresEx (float startPos_1, float startPos_2, float startPos_3,float endPos_1, float endPos_2, float endPos_3, float startRadius, float endRadius, int sides, Color color) {
   return DrawCylinderWiresEx((Vector3){startPos_1, startPos_2, startPos_3},(Vector3){endPos_1, endPos_2, endPos_3},startRadius,endRadius,sides,color);
}
RLAPI void shim_DrawCapsule (float startPos_1, float startPos_2, float startPos_3,float endPos_1, float endPos_2, float endPos_3, float radius, int slices, int rings, Color color) {
   return DrawCapsule((Vector3){startPos_1, startPos_2, startPos_3},(Vector3){endPos_1, endPos_2, endPos_3},radius,slices,rings,color);
}
RLAPI void shim_DrawCapsuleWires (float startPos_1, float startPos_2, float startPos_3,float endPos_1, float endPos_2, float endPos_3, float radius, int slices, int rings, Color color) {
   return DrawCapsuleWires((Vector3){startPos_1, startPos_2, startPos_3},(Vector3){endPos_1, endPos_2, endPos_3},radius,slices,rings,color);
}
RLAPI void shim_DrawPlane (float centerPos_1, float centerPos_2, float centerPos_3, Vector2 size, Color color) {
   return DrawPlane((Vector3){centerPos_1, centerPos_2, centerPos_3},size,color);
}
RLAPI void shim_DrawModel (Model model,float position_1, float position_2, float position_3, float scale, Color tint) {
   return DrawModel(model,(Vector3){position_1, position_2, position_3},scale,tint);
}
RLAPI void shim_DrawModelEx (Model model,float position_1, float position_2, float position_3,float rotationAxis_1, float rotationAxis_2, float rotationAxis_3, float rotationAngle,float scale_1, float scale_2, float scale_3, Color tint) {
   return DrawModelEx(model,(Vector3){position_1, position_2, position_3},(Vector3){rotationAxis_1, rotationAxis_2, rotationAxis_3},rotationAngle,(Vector3){scale_1, scale_2, scale_3},tint);
}
RLAPI void shim_DrawModelWires (Model model,float position_1, float position_2, float position_3, float scale, Color tint) {
   return DrawModelWires(model,(Vector3){position_1, position_2, position_3},scale,tint);
}
RLAPI void shim_DrawModelWiresEx (Model model,float position_1, float position_2, float position_3,float rotationAxis_1, float rotationAxis_2, float rotationAxis_3, float rotationAngle,float scale_1, float scale_2, float scale_3, Color tint) {
   return DrawModelWiresEx(model,(Vector3){position_1, position_2, position_3},(Vector3){rotationAxis_1, rotationAxis_2, rotationAxis_3},rotationAngle,(Vector3){scale_1, scale_2, scale_3},tint);
}
RLAPI void shim_DrawBillboard (Camera camera, Texture2D texture,float position_1, float position_2, float position_3, float size, Color tint) {
   return DrawBillboard(camera,texture,(Vector3){position_1, position_2, position_3},size,tint);
}
RLAPI void shim_DrawBillboardRec (Camera camera, Texture2D texture, Rectangle source,float position_1, float position_2, float position_3, Vector2 size, Color tint) {
   return DrawBillboardRec(camera,texture,source,(Vector3){position_1, position_2, position_3},size,tint);
}
RLAPI void shim_DrawBillboardPro (Camera camera, Texture2D texture, Rectangle source,float position_1, float position_2, float position_3,float up_1, float up_2, float up_3, Vector2 size, Vector2 origin, float rotation, Color tint) {
   return DrawBillboardPro(camera,texture,source,(Vector3){position_1, position_2, position_3},(Vector3){up_1, up_2, up_3},size,origin,rotation,tint);
}
RLAPI Mesh shim_GenMeshHeightmap (Image heightmap,float size_1, float size_2, float size_3) {
   return GenMeshHeightmap(heightmap,(Vector3){size_1, size_2, size_3});
}
RLAPI Mesh shim_GenMeshCubicmap (Image cubicmap,float cubeSize_1, float cubeSize_2, float cubeSize_3) {
   return GenMeshCubicmap(cubicmap,(Vector3){cubeSize_1, cubeSize_2, cubeSize_3});
}
RLAPI Material shim_LoadMaterialDefault (int i32) {
   return LoadMaterialDefault();
}

RLAPI bool shim_CheckCollisionSpheres (float center1_1, float center1_2, float center1_3, float radius1,float center2_1, float center2_2, float center2_3, float radius2) {
   return CheckCollisionSpheres((Vector3){center1_1, center1_2, center1_3},radius1,(Vector3){center2_1, center2_2, center2_3},radius2);
}
RLAPI bool shim_CheckCollisionBoxSphere (BoundingBox box,float center_1, float center_2, float center_3, float radius) {
   return CheckCollisionBoxSphere(box,(Vector3){center_1, center_2, center_3},radius);
}
RLAPI RayCollision shim_GetRayCollisionSphere (Ray ray,float center_1, float center_2, float center_3, float radius) {
   return GetRayCollisionSphere(ray,(Vector3){center_1, center_2, center_3},radius);
}
RLAPI RayCollision shim_GetRayCollisionTriangle (Ray ray,float p1_1, float p1_2, float p1_3,float p2_1, float p2_2, float p2_3,float p3_1, float p3_2, float p3_3) {
   return GetRayCollisionTriangle(ray,(Vector3){p1_1, p1_2, p1_3},(Vector3){p2_1, p2_2, p2_3},(Vector3){p3_1, p3_2, p3_3});
}
RLAPI RayCollision shim_GetRayCollisionQuad (Ray ray,float p1_1, float p1_2, float p1_3,float p2_1, float p2_2, float p2_3,float p3_1, float p3_2, float p3_3,float p4_1, float p4_2, float p4_3) {
   return GetRayCollisionQuad(ray,(Vector3){p1_1, p1_2, p1_3},(Vector3){p2_1, p2_2, p2_3},(Vector3){p3_1, p3_2, p3_3},(Vector3){p4_1, p4_2, p4_3});
}
RLAPI void shim_InitAudioDevice (int i32) {
   return InitAudioDevice();
}

RLAPI void shim_CloseAudioDevice (int i32) {
   return CloseAudioDevice();
}

RLAPI bool shim_IsAudioDeviceReady (int i32) {
   return IsAudioDeviceReady();
}

RLAPI float shim_GetMasterVolume (int i32) {
   return GetMasterVolume();
}


