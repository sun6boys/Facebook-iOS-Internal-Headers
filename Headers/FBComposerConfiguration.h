//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface FBComposerConfiguration : FBValueObject <NSCopying, NSCoding>
{
    BOOL _audienceEnabled;
    BOOL _autoEnhanceEnabled;
    BOOL _autoEnhanceSliderEnabled;
    BOOL _autoEnhanceDefaultValue;
    BOOL _cropEnabled;
    BOOL _stickersEnabled;
    BOOL _textOnPhotosEnabled;
    BOOL _fixedAspectRatioCroppingEnabled;
    BOOL _opaquePhotoEditingButtonsEnabled;
    BOOL _swipableFilterEnabled;
    BOOL _unifiedGalleryViewEnabled;
    BOOL _loopsEnabled;
    BOOL _collageEnabled;
    int _unifiedGalleryEntryButtonNumberOfLoops;
}

@property(readonly, nonatomic) BOOL collageEnabled; // @synthesize collageEnabled=_collageEnabled;
@property(readonly, nonatomic) BOOL loopsEnabled; // @synthesize loopsEnabled=_loopsEnabled;
@property(readonly, nonatomic) int unifiedGalleryEntryButtonNumberOfLoops; // @synthesize unifiedGalleryEntryButtonNumberOfLoops=_unifiedGalleryEntryButtonNumberOfLoops;
@property(readonly, nonatomic) BOOL unifiedGalleryViewEnabled; // @synthesize unifiedGalleryViewEnabled=_unifiedGalleryViewEnabled;
@property(readonly, nonatomic) BOOL swipableFilterEnabled; // @synthesize swipableFilterEnabled=_swipableFilterEnabled;
@property(readonly, nonatomic) BOOL opaquePhotoEditingButtonsEnabled; // @synthesize opaquePhotoEditingButtonsEnabled=_opaquePhotoEditingButtonsEnabled;
@property(readonly, nonatomic) BOOL fixedAspectRatioCroppingEnabled; // @synthesize fixedAspectRatioCroppingEnabled=_fixedAspectRatioCroppingEnabled;
@property(readonly, nonatomic) BOOL textOnPhotosEnabled; // @synthesize textOnPhotosEnabled=_textOnPhotosEnabled;
@property(readonly, nonatomic) BOOL stickersEnabled; // @synthesize stickersEnabled=_stickersEnabled;
@property(readonly, nonatomic) BOOL cropEnabled; // @synthesize cropEnabled=_cropEnabled;
@property(readonly, nonatomic) BOOL autoEnhanceDefaultValue; // @synthesize autoEnhanceDefaultValue=_autoEnhanceDefaultValue;
@property(readonly, nonatomic) BOOL autoEnhanceSliderEnabled; // @synthesize autoEnhanceSliderEnabled=_autoEnhanceSliderEnabled;
@property(readonly, nonatomic) BOOL autoEnhanceEnabled; // @synthesize autoEnhanceEnabled=_autoEnhanceEnabled;
@property(readonly, nonatomic) BOOL audienceEnabled; // @synthesize audienceEnabled=_audienceEnabled;
- (id)initWithAudienceEnabled:(BOOL)arg1 autoEnhanceEnabled:(BOOL)arg2 autoEnhanceSliderEnabled:(BOOL)arg3 autoEnhanceDefaultValue:(BOOL)arg4 cropEnabled:(BOOL)arg5 stickersEnabled:(BOOL)arg6 textOnPhotosEnabled:(BOOL)arg7 fixedAspectRatioCroppingEnabled:(BOOL)arg8 opaquePhotoEditingButtonsEnabled:(BOOL)arg9 swipableFilterEnabled:(BOOL)arg10 unifiedGalleryViewEnabled:(BOOL)arg11 unifiedGalleryEntryButtonNumberOfLoops:(int)arg12 loopsEnabled:(BOOL)arg13 collageEnabled:(BOOL)arg14;

@end

