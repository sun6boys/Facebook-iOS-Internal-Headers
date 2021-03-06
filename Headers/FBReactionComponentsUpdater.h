//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBReactionUnitDataSourceListener-Protocol.h"

@class FBComponentTableViewDataSource, FBReactionUnitDataSource, FBReactionUnitModelLoadingIndicator, FBUserSession, NSMutableDictionary, NSString;

@interface FBReactionComponentsUpdater : NSObject <FBReactionUnitDataSourceListener>
{
    FBComponentTableViewDataSource *_componentDataSource;
    FBUserSession *_session;
    FBReactionUnitDataSource *_unitDataSource;
    NSMutableDictionary *_graphQLIDToAdapterCacheId;
    FBReactionUnitModelLoadingIndicator *_loadingMoreSpinnerModel;
    BOOL _hasLoadingMoreSpinner;
    unsigned int _numberOfStoriesInTableView;
}

- (void).cxx_destruct;
- (void)unitDataSourceLoadDidFail;
- (void)unitDataSourceAdapterReplaced:(id)arg1 byAdapter:(id)arg2 atIndexPath:(id)arg3;
- (void)unitDataSourceAdapterRemoved:(id)arg1 atIndexPath:(id)arg2;
- (void)_updateLoadMoreSpinnerWithNewIndexPathsLoaded:(id)arg1 items:(struct Items *)arg2;
- (void)_enqueueChangesetForLoadedAdapters:(id)arg1 atIndexPaths:(id)arg2;
- (void)unitDataSourceAdaptersLoaded:(id)arg1 atIndexPaths:(id)arg2;
- (void)_consistentFieldDidUpdate:(id)arg1 observationHandle:(id)arg2;
- (void)_startObservingUnit:(id)arg1;
- (id)initWithSession:(id)arg1 componentDataSource:(id)arg2 unitDataSource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

