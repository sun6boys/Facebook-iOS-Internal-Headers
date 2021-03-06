//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CALayer, FBStructuredSurveyUIConfig, FBStructuredSurveyUIStyleSheet, UIColor;

@interface FBStructuredSurveyUICell : UITableViewCell
{
    CALayer *_separatorLayer;
    float _separatorLineHeight;
    UIColor *_separatorLineColor;
    FBStructuredSurveyUIStyleSheet *_styleSheet;
    FBStructuredSurveyUIConfig *_config;
}

+ (float)_topBottomPaddingForStyleSheet:(id)arg1;
+ (float)heightForModelObject:(id)arg1 context:(id)arg2 frame:(struct CGRect)arg3 styleSheet:(id)arg4 config:(id)arg5;
@property(retain, nonatomic) FBStructuredSurveyUIConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) FBStructuredSurveyUIStyleSheet *styleSheet; // @synthesize styleSheet=_styleSheet;
@property(retain, nonatomic) UIColor *separatorLineColor; // @synthesize separatorLineColor=_separatorLineColor;
@property(nonatomic) float separatorLineHeight; // @synthesize separatorLineHeight=_separatorLineHeight;
- (void).cxx_destruct;
- (float)_cellContentHeight;
- (void)_layoutCellForFrame:(struct CGRect)arg1;
- (BOOL)_isChecked;
- (BOOL)_isButtonLike;
- (unsigned long long)accessibilityTraits;
- (void)configureWithModelObject:(id)arg1 context:(id)arg2;
- (void)_configureSeparatorLine;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

