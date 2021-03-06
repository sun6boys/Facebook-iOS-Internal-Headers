//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBVerveFactorySlideListView.h"

#import "UIScrollViewDelegate-Protocol.h"

@class FBVervePackageGroupView, FBVerveSlide, NSMapTable, NSString, UIPageControl, UIScrollView, UIView;

@interface FBVerveFactorySlideScrollView : FBVerveFactorySlideListView <UIScrollViewDelegate>
{
    FBVerveSlide *_slide;
    FBVerveSlide *_lastSelected;
    struct CGRect _visRect;
    UIScrollView *_scrollView;
    FBVervePackageGroupView *_groupView;
    FBVerveSlide *_prefetchHistory[2];
    BOOL _addedGestureRecognizer;
    BOOL _pageControlActive;
    UIPageControl *_pageControl;
    id _pageControlColor;
    NSMapTable *_slideState;
    CDStruct_48c94c23 _config;
    UIView *_headerView;
}

+ (void)_prefetchSlide:(id)arg1 container:(id)arg2 viewConfig:(const CDStruct_48c94c23 *)arg3 factory:(id)arg4 transform:(CDStruct_225388b8)arg5;
+ (void)prefetchViewResources:(id)arg1 factory:(id)arg2 transform:(CDStruct_225388b8)arg3;
- (id)headerView;
- (void).cxx_destruct;
- (void)_scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)pageControlAction:(id)arg1;
- (void)scrollViewGestureRecognizerUpdate:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGRect)_visibleRect;
- (void)_prefetchSlide:(id)arg1;
- (void)_prefetchFromFirstVisible:(id)arg1 firstHidden:(id)arg2;
- (void)_dispatchSelected;
- (void)_updatePageControl;
- (void)_updateScrollIndicator;
- (id)slideAtPoint:(struct CGPoint)arg1;
- (struct CGRect)slideRect:(id)arg1;
- (void)foreachSubview:(CDUnknownBlockType)arg1;
- (void)synchronizeSlideVisibility;
- (void)applyState:(id)arg1;
- (id)saveState;
- (void)invalidate;
- (void)renderSubviews;
- (void)_updateInteractionState;
- (void)update;
- (id)layoutForSlide:(id)arg1;
- (void)setSlide:(id)arg1 animationSpeed:(float)arg2;
- (id)slide;
- (id)scrollView;
- (void)setFactory:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

