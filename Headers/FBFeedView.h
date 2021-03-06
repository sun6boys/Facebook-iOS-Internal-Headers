//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBCollectionViewUpdateListener-Protocol.h"
#import "FBFeedNetworkErrorViewDelegate-Protocol.h"
#import "FBFeedScrollingContainer-Protocol.h"
#import "FBFullScreenTransitionBoundsProvider-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class FBAnalytics, FBCollectionViewUpdateListenerAnnouncer, FBFeedCollectionView, FBFeedCollectionViewFlowLayout, FBFeedFooterView, FBFeedHeaderView, FBFeedHeaderViewPositionManager, FBFeedNetworkErrorView, FBFeedShimmeringStoriesScrollView, FBFeedTableView, FBFeedTestHarnessView, FBPullToRefreshView, FBSideFeedLayoutManager, FBStickyHeader, FBTableViewUpdateListenerAnnouncer, NSString, UIActivityIndicatorView, UIScrollView, UITapGestureRecognizer;
@protocol FBCollectionViewTransitionProtocol, FBFeedViewDelegate;

@interface FBFeedView : UIView <UIGestureRecognizerDelegate, FBFullScreenTransitionBoundsProvider, FBFeedNetworkErrorViewDelegate, FBCollectionViewUpdateListener, FBFeedScrollingContainer>
{
    unsigned int _state;
    UIView *_spinnerContainer;
    UIView *_loadingHeaderView;
    FBSideFeedLayoutManager *_sideFeedLayoutManager;
    FBFeedHeaderViewPositionManager *_headerViewPositionManager;
    FBFeedTableView *_tableView;
    FBFeedCollectionView *_collectionView;
    FBFeedCollectionViewFlowLayout *_layout;
    FBFeedNetworkErrorView *_networkErrorView;
    BOOL _useCollectionView;
    CDStruct_1180ccb7 _appLayoutExperimentConfig;
    BOOL _isSideFeedEnabled;
    BOOL _preventSideFeedScrollingTap;
    BOOL _networkErrorShown;
    BOOL _firstLayoutPassOccured;
    BOOL _edgeToEdgeStories;
    FBFeedShimmeringStoriesScrollView *_shimmeringStoriesView;
    double _shimmeringStoriesBeginDisplayTimestamp;
    float _sideFeedViewPositionRestorationPreviousOriginY;
    BOOL _showInlineComposerFeedLoading;
    UIView *_floatingComposerEntryPointButton;
    int _scrollTrackingBeginSource;
    float _scrollTrackingBeginContentOffsetY;
    FBAnalytics *_analytics;
    BOOL _adjustingHeaderContainerViewEnabled;
    BOOL _hasPullToRefreshView;
    BOOL _enableShimmeringStories;
    BOOL _hasSingleStory;
    id <FBFeedViewDelegate> _delegate;
    FBFeedHeaderView *_headerContainerView;
    FBStickyHeader *_stickyHeader;
    UIActivityIndicatorView *_spinner;
    FBPullToRefreshView *_pullToRefreshView;
    FBFeedFooterView *_tableViewFooterView;
    FBFeedTestHarnessView *_testHarnessView;
    UIView *_fullscreenErrorView;
    UIView *_noContentView;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(nonatomic) BOOL hasSingleStory; // @synthesize hasSingleStory=_hasSingleStory;
@property(nonatomic) BOOL enableShimmeringStories; // @synthesize enableShimmeringStories=_enableShimmeringStories;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIView *noContentView; // @synthesize noContentView=_noContentView;
@property(retain, nonatomic) UIView *fullscreenErrorView; // @synthesize fullscreenErrorView=_fullscreenErrorView;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(retain, nonatomic) FBFeedTestHarnessView *testHarnessView; // @synthesize testHarnessView=_testHarnessView;
@property(readonly, nonatomic) FBFeedFooterView *tableViewFooterView; // @synthesize tableViewFooterView=_tableViewFooterView;
@property(readonly, nonatomic) FBPullToRefreshView *pullToRefreshView; // @synthesize pullToRefreshView=_pullToRefreshView;
@property(readonly, nonatomic) BOOL hasPullToRefreshView; // @synthesize hasPullToRefreshView=_hasPullToRefreshView;
@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(nonatomic) BOOL adjustingHeaderContainerViewEnabled; // @synthesize adjustingHeaderContainerViewEnabled=_adjustingHeaderContainerViewEnabled;
@property(retain, nonatomic) FBStickyHeader *stickyHeader; // @synthesize stickyHeader=_stickyHeader;
@property(readonly, nonatomic) FBFeedHeaderView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(nonatomic) __weak id <FBFeedViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)collectionViewDidEndUpdates:(id)arg1;
- (void)setShimmering:(BOOL)arg1;
- (void)_accessibilityVoiceOverStatusChanged:(id)arg1;
- (struct CGRect)fullScreenTransitionBoundsForView:(id)arg1;
- (void)restoreSideFeedViewPositionWithContentOffsetYDelta:(float)arg1;
- (void)saveSideFeedViewPositionForRestoration;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)feedNetworkErrorViewDidDismissNetworkError:(BOOL)arg1;
- (void)showSecondaryNetworkErrorMessage:(BOOL)arg1;
- (void)showNetworkErrorMessage:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_layoutSpinnerInBounds:(struct CGRect)arg1;
- (void)_layoutShimmeringStoriesInBounds:(struct CGRect)arg1;
- (struct CGRect)_layoutBounds;
- (void)layoutSubviews;
- (void)setNeedsLayout;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)_isHeaderContainerViewPartiallyVisible;
- (void)setHeaderContainerViewHidden:(BOOL)arg1 animated:(BOOL)arg2 programmaticallyScrolled:(BOOL)arg3;
- (void)setHeaderContainerViewHidden:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) BOOL headerContainerViewHidden;
@property(readonly, nonatomic) float headerContainerVerticalOffset;
- (float)headerContainerVisualHeight;
- (float)headerContainerVisibleHeight;
- (float)headerContainerViewHeight;
- (float)headerVisibleHeight;
- (BOOL)accessibilityScroll:(int)arg1;
- (void)_informDelegateAboutScrollingToTop;
@property(readonly, nonatomic, getter=isScrolling) BOOL scrolling;
- (BOOL)isScrollContainerShowingRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)scrollToRect:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)scrollTo:(float)arg1 animated:(BOOL)arg2;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)scrollToTopStory:(BOOL)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didPrependNewStories;
@property(nonatomic) BOOL useInlinePublisherBar;
@property(readonly, nonatomic, getter=isPullToRefreshViewPartiallyVisible) BOOL pullToRefreshViewPartiallyVisible;
- (void)setShowsTestHarness:(BOOL)arg1;
- (id)_viewForLoadingState;
- (void)_setView:(id)arg1 fromView:(id)arg2 animated:(BOOL)arg3;
- (id)_viewForState:(unsigned int)arg1;
- (void)setLoadingHeaderViewAndRelayout:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)resetDataSourceAndDelegateOfFeedScrollView;
- (id)tableViewVisibleCells;
- (void)deselectAnythingSelected;
- (void)layoutScrollViewInCaseOfResize;
@property(readonly, nonatomic) FBTableViewUpdateListenerAnnouncer *tableViewUpdateListenerAnnouncer;
@property(readonly, nonatomic) FBCollectionViewUpdateListenerAnnouncer *collectionViewUpdateListenerAnnouncer;
- (void)setCollectionViewDataSourceAndReloadData:(id)arg1;
- (void)setTableViewDataSourceAndReloadData:(id)arg1;
- (BOOL)isAtVerticalScrollLocation:(float)arg1;
- (BOOL)isFarAwayFromTop;
- (BOOL)isAtTop;
- (float)distanceFromTop;
@property(readonly, nonatomic) UIView *scrollableHeaderView;
@property(nonatomic) BOOL canAdjustHeaderContainerView;
@property(nonatomic) BOOL showsHeaderContainerViewShadowWhenNotVisible;
@property(nonatomic) float bottomLayoutGuideLength;
@property(nonatomic) float topLayoutGuideLength;
- (void)setCollectionViewFlowLayoutDelegate:(id)arg1;
@property(readonly, nonatomic) UIScrollView<FBCollectionViewTransitionProtocol> *contentScrollView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 headerContentView:(id)arg2 sideFeedLayoutManager:(id)arg3 floatingComposerEntryPointButton:(id)arg4 analytics:(id)arg5 userPreferences:(id)arg6 useCollectionView:(BOOL)arg7 shouldScrollHeaderWithFeed:(BOOL)arg8 isPadFeedRedesignEnabled:(BOOL)arg9 isSideFeedEnabled:(BOOL)arg10 preventSideFeedScrollingTap:(BOOL)arg11 hasPullToRefreshView:(BOOL)arg12 edgeToEdgeStories:(BOOL)arg13 showInlineComposerFeedLoading:(BOOL)arg14 backgroundColor:(id)arg15;
- (void)_scrollViewEndTracking:(id)arg1 fromSource:(int)arg2;
- (void)_scrollViewBeginTracking:(id)arg1 fromSource:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

