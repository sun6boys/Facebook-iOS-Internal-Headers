//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAuthFooterViewProtocol-Protocol.h"

@class NSString, UIButton;

@interface FBAuthPadUsernamePasswordFooterView : UIView <FBAuthFooterViewProtocol>
{
    UIButton *_backButton;
    UIButton *_signupButton;
    UIButton *_helpButton;
}

@property(readonly, nonatomic) UIButton *helpButton; // @synthesize helpButton=_helpButton;
@property(readonly, nonatomic) UIButton *signupButton; // @synthesize signupButton=_signupButton;
@property(readonly, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

