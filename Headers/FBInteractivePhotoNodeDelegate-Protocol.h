//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBInteractiveMediaNodeDelegate-Protocol.h"

@class FBInteractivePhotoNode, UIImage;

@protocol FBInteractivePhotoNodeDelegate <FBInteractiveMediaNodeDelegate>

@optional
- (void)imageNodeWillDisappear:(FBInteractivePhotoNode *)arg1;
- (void)imageNode:(FBInteractivePhotoNode *)arg1 displayedImage:(UIImage *)arg2;
- (void)imageNode:(FBInteractivePhotoNode *)arg1 didUpdateImage:(UIImage *)arg2 fromImage:(UIImage *)arg3;
@end

