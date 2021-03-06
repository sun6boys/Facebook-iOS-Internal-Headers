//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBFXBlur : NSObject
{
    struct PingPongFilter _filter;
    struct SaturationShader _saturationShader;
    struct BoxBlur1DShader _blurShader;
    struct PositionTexCoordQuad _quad;
}

- (id).cxx_construct;
- (void)motionBlurInput:(CDUnknownBlockType)arg1 angle:(float)arg2 amount:(float)arg3 output:(CDUnknownBlockType)arg4;
- (void)gaussianBlurInput:(CDUnknownBlockType)arg1 adjustSaturation:(float)arg2 blendWithColor:(struct _FBFXPremultipliedColor)arg3 output:(CDUnknownBlockType)arg4;
- (void)gaussianBlurInput:(CDUnknownBlockType)arg1 numberOfPasses:(unsigned int)arg2 adjustSaturation:(float)arg3 blendWithColor:(struct _FBFXPremultipliedColor)arg4 output:(CDUnknownBlockType)arg5;
- (void)gaussianBlurImage:(id)arg1 numberOfPasses:(unsigned int)arg2 adjustSaturation:(float)arg3 blendWithColor:(struct _FBFXPremultipliedColor)arg4 output:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (id)initWithTargetSize:(struct CGSize)arg1 glContext:(id)arg2;

@end

