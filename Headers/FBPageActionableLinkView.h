//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class FBItemView_DEPRECATED, FBPageBadgeView, NSString, UIColor, UIImage, UILongPressGestureRecognizer;

@interface FBPageActionableLinkView : UIView <UIGestureRecognizerDelegate>
{
    FBItemView_DEPRECATED *_itemContentSummaryView;
    id _tapTarget;
    SEL _tapAction;
    struct CGPoint _locationInViewWhenTapBegan;
    UILongPressGestureRecognizer *_longPressRecognizer;
    FBPageBadgeView *_badgeView;
    BOOL _hasDisclosureIcon;
    unsigned int _badgeValue;
    unsigned int _badgeStyle;
    NSString *_disclosureText;
    UIColor *_backgroundNormalColor;
    UIColor *_backgroundHighlightedColor;
}

+ (id)editCTALinkTraits;
+ (id)activitiesUpsellLinkTraits;
+ (id)pmaContextRowLinkTraits;
+ (id)pmaDarkTextLinkTraits;
+ (id)padLinkTraits;
+ (id)bigPaddingLinkTraits;
+ (id)videoHubCardLinkTraits;
+ (id)pageServiceRegionTraitWithDisclosure:(unsigned int)arg1;
+ (id)defaultTraits;
@property(nonatomic) BOOL hasDisclosureIcon; // @synthesize hasDisclosureIcon=_hasDisclosureIcon;
@property(retain, nonatomic) UIColor *backgroundHighlightedColor; // @synthesize backgroundHighlightedColor=_backgroundHighlightedColor;
@property(retain, nonatomic) UIColor *backgroundNormalColor; // @synthesize backgroundNormalColor=_backgroundNormalColor;
@property(copy, nonatomic) NSString *disclosureText; // @synthesize disclosureText=_disclosureText;
@property(nonatomic) unsigned int badgeStyle; // @synthesize badgeStyle=_badgeStyle;
@property(nonatomic) unsigned int badgeValue; // @synthesize badgeValue=_badgeValue;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *disclosureView;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(retain, nonatomic) UIColor *titleColor;
@property(copy, nonatomic) NSString *subtitleText;
@property(retain, nonatomic) UIImage *thumbnailImage;
@property(copy, nonatomic) NSString *titleText;
- (void)setBackgroundColor:(id)arg1;
- (void)_updateBackgroundColorForActive:(BOOL)arg1;
- (void)_viewDidLongPress:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 thumbnailImage:(id)arg2 hasDisclosureIcon:(BOOL)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)initWithTitle:(id)arg1 thumbnailImage:(id)arg2 hasDisclosureIcon:(BOOL)arg3 target:(id)arg4 action:(SEL)arg5 traits:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

