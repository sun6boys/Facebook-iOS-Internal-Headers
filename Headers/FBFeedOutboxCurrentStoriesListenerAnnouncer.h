//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "FBFeedOutboxCurrentStoriesListener-Protocol.h"

@class NSString;

@interface FBFeedOutboxCurrentStoriesListenerAnnouncer : FBAnnouncerBase <FBFeedOutboxCurrentStoriesListener>
{
}

- (void)updatedStoryRows:(id)arg1 allStories:(id)arg2;
- (void)removedStoryRows:(id)arg1 allStories:(id)arg2;
- (void)insertedStoryRows:(id)arg1 allStories:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

