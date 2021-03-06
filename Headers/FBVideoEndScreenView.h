//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBUserSession, NSString, UIControl, UIImageView, UILabel;

@interface FBVideoEndScreenView : UIView
{
    UIImageView *_replayImageView;
    UIView *_callToActionImageView;
    UILabel *_replayLabel;
    UILabel *_callToActionLabel;
    UILabel *_sourceLabel;
    NSString *_endScreenReplayString;
    NSString *_defaultImageName;
    FBUserSession *_session;
    UIControl *_replayControl;
    UIControl *_callToActionControl;
}

@property(readonly, nonatomic) UIControl *callToActionControl; // @synthesize callToActionControl=_callToActionControl;
@property(readonly, nonatomic) UIControl *replayControl; // @synthesize replayControl=_replayControl;
- (void).cxx_destruct;
- (void)animateEndScreenImageOut;
- (float)_calculateTextMaxWidth;
- (struct CGSize)_calculateSourceLabelSize;
- (struct CGSize)_calculateCallToActionLabelSize;
- (float)_calculateContainerWidth;
- (struct CGSize)_calculateReplayLabelSize;
- (float)_calculateMaxLabelWidth;
- (void)setCallToActionImageWithURL:(id)arg1;
- (void)setCallToActionImageWithName:(id)arg1;
- (void)setCallToActionTitle:(id)arg1 andSource:(id)arg2 andDefaultImageName:(id)arg3;
- (void)_createCallToActionImageViewWithImageURL:(id)arg1;
- (void)_createCallToActionImageViewWithImageName:(id)arg1;
- (id)_makeAttributedCTAText:(id)arg1 isTitle:(BOOL)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;

@end

