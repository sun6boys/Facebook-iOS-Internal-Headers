//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBInteractiveMediaNodeController, FBMediaAnimationConfiguration, FBMediaKeyFrame, FBScrollableMediaNode;

@protocol FBInteractiveMediaNodeControllerDelegate <NSObject>

@optional
- (struct CGSize)interactiveMediaController:(FBInteractiveMediaNodeController *)arg1 visibleSizeForInteractionMode:(int)arg2;
- (FBMediaKeyFrame *)interactiveMediaController:(FBInteractiveMediaNodeController *)arg1 keyFrameForInteractionMode:(int)arg2 default:(FBMediaKeyFrame *)arg3;
- (void)interactiveMediaController:(FBInteractiveMediaNodeController *)arg1 didEndZoomWithScrollableMediaNode:(FBScrollableMediaNode *)arg2;
- (void)interactiveMediaController:(FBInteractiveMediaNodeController *)arg1 didZoomWithScrollableMediaNode:(FBScrollableMediaNode *)arg2;
- (void)interactiveMediaController:(FBInteractiveMediaNodeController *)arg1 updatedViewportPercentageVisible:(float)arg2 percentagePanned:(float)arg3 focusPoint:(struct CGPoint)arg4;
- (void)interactiveMediaController:(FBInteractiveMediaNodeController *)arg1 didRenderInteractionMode:(int)arg2;
- (void)interactiveMediaControllerWasTapped:(FBInteractiveMediaNodeController *)arg1;
- (BOOL)interactiveMediaController:(FBInteractiveMediaNodeController *)arg1 shouldEnableInteractionForMode:(int)arg2;
- (void)interactiveMediaController:(FBInteractiveMediaNodeController *)arg1 didChangeToInteractionMode:(int)arg2 fromInteractionMode:(int)arg3 animated:(BOOL)arg4 progress:(float)arg5;
- (void)interactiveMediaController:(FBInteractiveMediaNodeController *)arg1 willChangeToInteractionMode:(int)arg2 fromInteractionMode:(int)arg3 animated:(BOOL)arg4;
- (void)interactiveMediaController:(FBInteractiveMediaNodeController *)arg1 willAnimateToKeyFrame:(FBMediaKeyFrame *)arg2 interactionMode:(int)arg3 previousInteractionMode:(int)arg4 withAnimation:(FBMediaAnimationConfiguration *)arg5;
- (void)interactiveMediaControllerPhotoWillDisappear:(FBInteractiveMediaNodeController *)arg1;
@end

