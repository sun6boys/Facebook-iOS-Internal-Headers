//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBActionSheetButtonDelegate-Protocol.h"

@class FBActionSheetButtonMetrics, FBPopoverActionSheet, NSArray, NSMutableArray, NSString;

@interface FBActionSheetContentView : UIView <FBActionSheetButtonDelegate>
{
    NSMutableArray *_currentButtons;
    FBActionSheetButtonMetrics *_metrics;
    NSArray *_buttonItems;
    FBPopoverActionSheet *_popoverActionSheet;
}

@property(nonatomic) __weak FBPopoverActionSheet *popoverActionSheet; // @synthesize popoverActionSheet=_popoverActionSheet;
@property(copy, nonatomic) NSArray *buttonItems; // @synthesize buttonItems=_buttonItems;
- (void).cxx_destruct;
- (BOOL)shouldSelectActionSheetButton:(id)arg1;
@property(readonly, nonatomic) UIView *selectedButton;
- (id)accessibilityIdentifier;
- (void)invalidateFontSize;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 metrics:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

