//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSArray;

@interface FBComposerMediaGalleryAnimatingEntryButton : UIButton
{
    int _currentIndex;
    int _currentNumberOfLoops;
    BOOL _finishedLoopingOnce;
    NSArray *_imagesToLoopThrough;
    int _numberOfLoops;
    BOOL _shouldAnimate;
    BOOL _shouldShowIcon;
}

- (void).cxx_destruct;
- (void)_animateImages;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)startAnimating;
- (id)initWithFrame:(struct CGRect)arg1 imagesToLoopThrough:(id)arg2 numberOfLoops:(int)arg3 shouldShowIcon:(BOOL)arg4 shouldAnimate:(BOOL)arg5;

@end

