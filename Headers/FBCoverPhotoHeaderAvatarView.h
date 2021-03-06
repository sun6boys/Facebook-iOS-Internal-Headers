//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class FBCoverPhotoHeaderLoadingView, NSString, UIImage, UIView, _FBCoverPhotoHeaderAvatarImageView, _FBCoverPhotoHeaderAvatarLabelView;

@interface FBCoverPhotoHeaderAvatarView : UIControl
{
    BOOL _adjustsImageWhenHighlighted;
    BOOL _loading;
    UIView *_backgroundImageView;
    _FBCoverPhotoHeaderAvatarImageView *_imageView;
    _FBCoverPhotoHeaderAvatarLabelView *_labelView;
    UIView *_highlightView;
    FBCoverPhotoHeaderLoadingView *_loadingView;
    struct CGSize _imageSize;
}

+ (BOOL)automaticallyNotifiesObserversOfLoading;
+ (BOOL)automaticallyNotifiesObserversOfImage;
@property(retain, nonatomic) FBCoverPhotoHeaderLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) _FBCoverPhotoHeaderAvatarLabelView *labelView; // @synthesize labelView=_labelView;
@property(retain, nonatomic) _FBCoverPhotoHeaderAvatarImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) BOOL loading; // @synthesize loading=_loading;
@property(nonatomic) BOOL adjustsImageWhenHighlighted; // @synthesize adjustsImageWhenHighlighted=_adjustsImageWhenHighlighted;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGRect)_contentRectForBounds:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setLoading:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setImage:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *overlayText;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

