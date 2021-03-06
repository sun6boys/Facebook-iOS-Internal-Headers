//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PAScalableMetrics.h"

@class NSString, PAInterfaceGuide, UIColor;

@interface PAFancyQuickShareScalableMetrics : PAScalableMetrics
{
    float _storyTitleInset;
    float _storyTitleFontSize;
    NSString *_storyTitleFontName;
    float _storyURLInset;
    float _storyURLFontSize;
    NSString *_storyURLFontName;
    float _storyImageSize;
    float _chatHeadSize;
    float _bubbleWidth;
    float _bubbleHeight;
    float _bubbleInsetSize;
    float _bubbleSpacing;
    float _bubbleCornerRadius;
    UIColor *_blueColor;
    PAInterfaceGuide *_interfaceGuide;
}

@property(retain, nonatomic) PAInterfaceGuide *interfaceGuide; // @synthesize interfaceGuide=_interfaceGuide;
@property(readonly, nonatomic) UIColor *blueColor; // @synthesize blueColor=_blueColor;
@property(readonly, nonatomic) float bubbleCornerRadius; // @synthesize bubbleCornerRadius=_bubbleCornerRadius;
@property(readonly, nonatomic) float bubbleSpacing; // @synthesize bubbleSpacing=_bubbleSpacing;
@property(readonly, nonatomic) float bubbleInsetSize; // @synthesize bubbleInsetSize=_bubbleInsetSize;
@property(readonly, nonatomic) float bubbleHeight; // @synthesize bubbleHeight=_bubbleHeight;
@property(readonly, nonatomic) float bubbleWidth; // @synthesize bubbleWidth=_bubbleWidth;
@property(readonly, nonatomic) float chatHeadSize; // @synthesize chatHeadSize=_chatHeadSize;
@property(readonly, nonatomic) float storyImageSize; // @synthesize storyImageSize=_storyImageSize;
@property(readonly, copy, nonatomic) NSString *storyURLFontName; // @synthesize storyURLFontName=_storyURLFontName;
@property(readonly, nonatomic) float storyURLFontSize; // @synthesize storyURLFontSize=_storyURLFontSize;
@property(readonly, nonatomic) float storyURLInset; // @synthesize storyURLInset=_storyURLInset;
@property(readonly, copy, nonatomic) NSString *storyTitleFontName; // @synthesize storyTitleFontName=_storyTitleFontName;
@property(readonly, nonatomic) float storyTitleFontSize; // @synthesize storyTitleFontSize=_storyTitleFontSize;
@property(readonly, nonatomic) float storyTitleInset; // @synthesize storyTitleInset=_storyTitleInset;
- (void).cxx_destruct;
- (void)defineIntrinsicMetricsForDeviceType:(unsigned int)arg1;
- (void)addScalableMetrics;
- (id)init;

@end

