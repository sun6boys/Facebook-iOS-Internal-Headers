//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "_FBGraphQLConnectionstorePersistentPageLoaderOperation-Protocol.h"

@class FBGraphQLConnectionStorePersistentCache, NSString;
@protocol OS_dispatch_queue, _FBGraphQLConnectionStorePersistentPageLoaderOperationDelegate;

@interface _FBGraphQLConnectionStorePersistentPageLoaderReadOperation : NSObject <_FBGraphQLConnectionstorePersistentPageLoaderOperation>
{
    FBGraphQLConnectionStorePersistentCache *_persistentCache;
    NSString *_persistentCacheKey;
    unsigned int _options;
    CDUnknownBlockType _loadHandler;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_queue;
    id <_FBGraphQLConnectionStorePersistentPageLoaderOperationDelegate> _delegate;
    NSString *_beginningStartCursor;
    unsigned int _maxNumberOfPagesToLoad;
    unsigned int _numberOfPagesLoaded;
}

- (void).cxx_destruct;
- (void)_loadNextPageWithData:(id)arg1;
- (void)_loadNextPageWithStartCursor:(id)arg1;
- (void)_asynchronouslyLoadNextPageWithStartCursor:(id)arg1;
- (void)_synchronouslyLoadFirstPageWithStartCursor:(id)arg1;
- (void)startWithDelegate:(id)arg1;
- (id)initWithPersistentCache:(id)arg1 persistentCacheKey:(id)arg2 options:(unsigned int)arg3 loadHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5 beginningAtStartCursor:(id)arg6 maxNumberOfPagesToLoad:(unsigned int)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

