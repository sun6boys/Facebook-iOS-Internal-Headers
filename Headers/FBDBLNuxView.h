//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBDBLPreviewView, UIButton;

@interface FBDBLNuxView : UIView
{
    UIButton *_passcodeButton;
    FBDBLPreviewView *_preview;
}

@property(retain, nonatomic) FBDBLPreviewView *preview; // @synthesize preview=_preview;
@property(retain, nonatomic) UIButton *passcodeButton; // @synthesize passcodeButton=_passcodeButton;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setProfilePictureURL:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

