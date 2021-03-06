//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBValueObject.h"

#import "FBFIGConfig-Protocol.h"

@class NSArray, NSString, UIColor, UIFont, UIView;

@interface FBMegaphoneViewConfig : FBValueObject <FBFIGConfig>
{
    BOOL _hasDismissButton;
    NSString *_title;
    UIFont *_titleFont;
    UIColor *_titleColor;
    unsigned int _titleMaxNumberOfLines;
    NSString *_subtitle;
    UIFont *_subtitleFont;
    UIColor *_subtitleColor;
    unsigned int _subtitleMaxNumberOfLines;
    NSArray *_segmentItems;
    UIFont *_segmentsTitleFont;
    UIColor *_segmentsTitleColor;
    int _segmentSelectedIndex;
    UIFont *_segmentsHighlightedTitleFont;
    UIColor *_segmentsHighlightedTitleColor;
    UIView *_thumbnailView;
    UIView *_accessoryView;
    UIColor *_backgroundColor;
    UIColor *_separatorColor;
}

+ (id)newWithTitle:(id)arg1 titleFont:(id)arg2 titleColor:(id)arg3 titleMaxNumberOfLines:(unsigned int)arg4 subtitle:(id)arg5 subtitleFont:(id)arg6 subtitleColor:(id)arg7 subtitleMaxNumberOfLines:(unsigned int)arg8 segmentItems:(id)arg9 segmentsTitleFont:(id)arg10 segmentsTitleColor:(id)arg11 segmentSelectedIndex:(int)arg12 segmentsHighlightedTitleFont:(id)arg13 segmentsHighlightedTitleColor:(id)arg14 thumbnailView:(id)arg15 accessoryView:(id)arg16 hasDismissButton:(BOOL)arg17 backgroundColor:(id)arg18 separatorColor:(id)arg19;
@property(readonly, copy, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(readonly, copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) BOOL hasDismissButton; // @synthesize hasDismissButton=_hasDismissButton;
@property(readonly, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(readonly, nonatomic) UIView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(readonly, copy, nonatomic) UIColor *segmentsHighlightedTitleColor; // @synthesize segmentsHighlightedTitleColor=_segmentsHighlightedTitleColor;
@property(readonly, copy, nonatomic) UIFont *segmentsHighlightedTitleFont; // @synthesize segmentsHighlightedTitleFont=_segmentsHighlightedTitleFont;
@property(readonly, nonatomic) int segmentSelectedIndex; // @synthesize segmentSelectedIndex=_segmentSelectedIndex;
@property(readonly, copy, nonatomic) UIColor *segmentsTitleColor; // @synthesize segmentsTitleColor=_segmentsTitleColor;
@property(readonly, copy, nonatomic) UIFont *segmentsTitleFont; // @synthesize segmentsTitleFont=_segmentsTitleFont;
@property(readonly, copy, nonatomic) NSArray *segmentItems; // @synthesize segmentItems=_segmentItems;
@property(readonly, nonatomic) unsigned int subtitleMaxNumberOfLines; // @synthesize subtitleMaxNumberOfLines=_subtitleMaxNumberOfLines;
@property(readonly, copy, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(readonly, copy, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) unsigned int titleMaxNumberOfLines; // @synthesize titleMaxNumberOfLines=_titleMaxNumberOfLines;
@property(readonly, copy, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(readonly, copy, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)_initWithTitle:(id)arg1 titleFont:(id)arg2 titleColor:(id)arg3 titleMaxNumberOfLines:(unsigned int)arg4 subtitle:(id)arg5 subtitleFont:(id)arg6 subtitleColor:(id)arg7 subtitleMaxNumberOfLines:(unsigned int)arg8 segmentItems:(id)arg9 segmentsTitleFont:(id)arg10 segmentsTitleColor:(id)arg11 segmentSelectedIndex:(int)arg12 segmentsHighlightedTitleFont:(id)arg13 segmentsHighlightedTitleColor:(id)arg14 thumbnailView:(id)arg15 accessoryView:(id)arg16 hasDismissButton:(BOOL)arg17 backgroundColor:(id)arg18 separatorColor:(id)arg19;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

