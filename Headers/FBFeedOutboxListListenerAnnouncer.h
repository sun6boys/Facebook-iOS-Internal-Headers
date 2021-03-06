//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAnnouncerBase.h"

#import "FBFeedOutboxListListener-Protocol.h"

@class NSString;

@interface FBFeedOutboxListListenerAnnouncer : FBAnnouncerBase <FBFeedOutboxListListener>
{
}

- (void)tappedRetryButtonForStoryRepresentingPublicationWithIdentifier:(id)arg1;
- (void)tappedPauseButtonForStoryRepresentingPublicationWithIdentifier:(id)arg1;
- (void)tappedErrorButtonForStoryRepresentingPublicationWithIdentifier:(id)arg1;
- (void)tappedCancelButtonForStoryRepresentingPublicationWithIdentifier:(id)arg1;
- (void)storyProgressNoLongerVisibleForPublicationWithIdentifier:(id)arg1;
- (void)progressAnimationFinishedForStoryRepresentingPublicationWithIdentifier:(id)arg1;
- (void)feedUpdatedAndOutboxStoriesStillBeingDisplayedForPublicationsWithIdentifiers:(id)arg1 storiesReapedFromMutationIdentifiers:(id)arg2 storiesReapedFromFeedChange:(id)arg3;
- (void)feedUpdatedAndNoOutboxStoriesStillBeingDisplayedWithStoriesReapedFromMutationIdentifiers:(id)arg1 storiesReapedFromFeedChange:(id)arg2;
- (void)reapedStoriesDueToTimeoutWithOutboxStoriesStillBeingDisplayedForCompletedPublications:(id)arg1;
- (void)reapedStoriesDueToTimeoutWithNoOutboxStoriesStillBeingDisplayedForCompletedPublications:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

