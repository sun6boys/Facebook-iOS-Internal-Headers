//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBMemPageCreateCTAItem, FBPhoneInputView, UILabel;

@interface FBPageCreateCTASecondaryView : UIView
{
    FBMemPageCreateCTAItem *_ctaItem;
    float _keyboardHeight;
    FBPhoneInputView *_phoneInputView;
    UILabel *_headerLabel;
    UILabel *_descriptionLabel;
}

@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) FBPhoneInputView *phoneInputView; // @synthesize phoneInputView=_phoneInputView;
- (void).cxx_destruct;
- (void)_hideKeyboard;
- (void)setKeyboardHeight:(float)arg1 animated:(BOOL)arg2 duration:(double)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 ctaItem:(id)arg2 pagePhoneNumber:(id)arg3;

@end

