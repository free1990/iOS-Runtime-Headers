/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class NSHashTable, NSString, UIView;

@interface FBRootWindow : FBWindow <FBSceneTransformTarget> {
    UIView *_sceneContainerView;
    NSHashTable *_transforms;
    bool_mainDisplay;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (bool)_isSecure;

- (bool)_appearsInLoupe;
- (bool)_canBecomeKeyWindow;
- (bool)_isClippedByScreenJail;
- (bool)_isConstrainedByScreenJail;
- (bool)_isOffsetByScreenJail;
- (bool)_isRotatedByScreenJail;
- (bool)_isScaledByScreenJail;
- (bool)_isWindowServerHostingManaged;
- (void)_noteScreenDidChangeMode:(id)arg1;
- (bool)_shouldApplyHorizontalPixelScaleTransform;
- (bool)_shouldPrepareScreenForWindow;
- (void)_updateTransforms;
- (bool)_usesWindowServerHitTesting;
- (void)attachSceneTransform:(id)arg1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithDisplay:(id)arg1;
- (void)removeSceneTransform:(id)arg1;
- (id)sceneContainerView;
- (void)setScreen:(id)arg1;
- (void)transformDidInvalidate:(id)arg1;
- (void)transformDidUpdate:(id)arg1;
- (void)updateSceneSettings;

@end