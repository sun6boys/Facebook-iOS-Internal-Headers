//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface FBSearchSeeMoreFooterView : UIView
{
    int _buttonStyle;
    UILabel *_infoLabel;
    BOOL _showDivider;
    UIView *_lineView;
    UIButton *_seeMoreButton;
}

@property(retain, nonatomic) UIButton *seeMoreButton; // @synthesize seeMoreButton=_seeMoreButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithButtonStyle:(int)arg1 showDivider:(BOOL)arg2;

@end

