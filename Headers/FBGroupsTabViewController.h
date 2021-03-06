//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "FBGroupsTabActionProviderProtocol-Protocol.h"
#import "FBGroupsTabDataLoaderDelegate-Protocol.h"
#import "FBGroupsTableViewControllerProtocol-Protocol.h"
#import "FBPullToRefreshViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class FBContentInsetTracker, FBGroupsTabDataSource, FBPullToRefreshView, FBTransientViewStateManager, FBUserSession, NSString;
@protocol FBGroupsTabActionProviderProtocol, FBGroupsTabViewConfig, FBIntentHandler, UICollectionViewDelegateFlowLayout;

@interface FBGroupsTabViewController : UICollectionViewController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate, UIScrollViewDelegate, UICollectionViewDelegateFlowLayout, FBPullToRefreshViewDelegate, FBGroupsTabDataLoaderDelegate, FBGroupsTabActionProviderProtocol, FBGroupsTableViewControllerProtocol>
{
    FBGroupsTabDataSource *_dataSource;
    id <UICollectionViewDelegateFlowLayout> _collectionViewDelegate;
    FBPullToRefreshView *_pullToRefreshView;
    FBTransientViewStateManager *_viewStateManager;
    FBContentInsetTracker *_contentInsetTracker;
    double _timeOfLastPTR;
    id <FBIntentHandler> _intentHandler;
    FBUserSession *_session;
    id <FBGroupsTabActionProviderProtocol> _actionProvider;
    id <FBGroupsTabViewConfig> _config;
}

@property(retain, nonatomic) id <FBGroupsTabViewConfig> config; // @synthesize config=_config;
@property(nonatomic) __weak id <FBGroupsTabActionProviderProtocol> actionProvider; // @synthesize actionProvider=_actionProvider;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <FBIntentHandler> intentHandler; // @synthesize intentHandler=_intentHandler;
- (void).cxx_destruct;
- (BOOL)accessibilityScroll:(int)arg1;
- (id)analyticsModule;
- (void)_updateViewerLastSeenTime;
- (void)dataLoader:(id)arg1 landingSection:(int)arg2 didEndDownloadForType:(int)arg3 error:(id)arg4;
- (void)didTapGroupsFooter;
- (void)didTapEventsFooter;
- (void)didTapGroupID:(id)arg1;
- (void)didTapEventID:(id)arg1;
- (void)didTapGroupsHeader;
- (void)didTapEventsHeader;
- (void)didTapCreateGroup;
- (void)didTapCreateEvent;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (void)scrollToTop;
- (void)pullToRefreshViewDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

