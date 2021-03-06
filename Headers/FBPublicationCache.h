//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBActivePublicationsChangeListener-Protocol.h"
#import "FBObjectCachingListener-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol FBObjectCache, FBPublicationCacheListener;

@interface FBPublicationCache : NSObject <FBActivePublicationsChangeListener, FBObjectCachingListener>
{
    NSMutableDictionary *_cacheablePublisherDataByCompositionID;
    BOOL _hasRestartedUnpublishedPublishersFromCache;
    id <FBPublicationCacheListener> _listener;
    id <FBObjectCache> _objectCache;
}

- (void).cxx_destruct;
- (void)failedToWriteObject:(id)arg1;
- (void)successfullyStoredObject:(id)arg1;
- (void)failedToLoadStoredObject;
- (void)attemptedToLoadNonExistentStoredObject;
- (void)successfullyLoadedObject:(id)arg1;
- (void)updatedPublication:(id)arg1;
- (void)removedPublicationWithPublisherData:(id)arg1;
- (void)addedPublicationWithPublisherData:(id)arg1;
- (void)scheduleCacheSave;
- (void)loadPublications;
- (void)userWillBeLoggedOut;
- (id)initWithObjectCache:(id)arg1 listener:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

