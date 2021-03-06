//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PAScalableMetrics.h"

@interface FBLeadGenDialogMetrics : PAScalableMetrics
{
    float _headerProfileImageSpace;
    float _selectorNameFontSize;
    float _selectorItemFontSize;
    float _selectorItemHeight;
    float _spaceBeforeSimplyPrivacyText;
    float _descriptionTextFontSize;
    float _descriptionTextFlexBasis;
    float _profileImageSpacingBefore;
    float _descriptionTextSpacingBefore;
    float _userInfoInputSpacingBefore;
    float _textFieldSpacing;
    float _labelFontSize;
    float _privacyTextFontSize;
    float _privacyImageIconWidth;
    float _privacyImageIconHeight;
    float _leadGenModalVerticalPadding;
    float _leadGenModalHorizontalPadding;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) float leadGenModalHorizontalPadding; // @synthesize leadGenModalHorizontalPadding=_leadGenModalHorizontalPadding;
@property(readonly, nonatomic) float leadGenModalVerticalPadding; // @synthesize leadGenModalVerticalPadding=_leadGenModalVerticalPadding;
@property(readonly, nonatomic) float privacyImageIconHeight; // @synthesize privacyImageIconHeight=_privacyImageIconHeight;
@property(readonly, nonatomic) float privacyImageIconWidth; // @synthesize privacyImageIconWidth=_privacyImageIconWidth;
@property(readonly, nonatomic) float privacyTextFontSize; // @synthesize privacyTextFontSize=_privacyTextFontSize;
@property(readonly, nonatomic) float labelFontSize; // @synthesize labelFontSize=_labelFontSize;
@property(readonly, nonatomic) float textFieldSpacing; // @synthesize textFieldSpacing=_textFieldSpacing;
@property(readonly, nonatomic) float userInfoInputSpacingBefore; // @synthesize userInfoInputSpacingBefore=_userInfoInputSpacingBefore;
@property(readonly, nonatomic) float descriptionTextSpacingBefore; // @synthesize descriptionTextSpacingBefore=_descriptionTextSpacingBefore;
@property(readonly, nonatomic) float profileImageSpacingBefore; // @synthesize profileImageSpacingBefore=_profileImageSpacingBefore;
@property(readonly, nonatomic) float descriptionTextFlexBasis; // @synthesize descriptionTextFlexBasis=_descriptionTextFlexBasis;
@property(readonly, nonatomic) float descriptionTextFontSize; // @synthesize descriptionTextFontSize=_descriptionTextFontSize;
@property(readonly, nonatomic) float spaceBeforeSimplyPrivacyText; // @synthesize spaceBeforeSimplyPrivacyText=_spaceBeforeSimplyPrivacyText;
@property(readonly, nonatomic) float selectorItemHeight; // @synthesize selectorItemHeight=_selectorItemHeight;
@property(readonly, nonatomic) float selectorItemFontSize; // @synthesize selectorItemFontSize=_selectorItemFontSize;
@property(readonly, nonatomic) float selectorNameFontSize; // @synthesize selectorNameFontSize=_selectorNameFontSize;
@property(readonly, nonatomic) float headerProfileImageSpace; // @synthesize headerProfileImageSpace=_headerProfileImageSpace;
- (void)defineIntrinsicMetricsForDeviceType:(unsigned int)arg1;

@end

