//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBCache, FBFeedbackStore, FBUserSession;

@interface FBFeedbackStoreManager : NSObject
{
    FBUserSession *_session;
    FBFeedbackStore *_feedbackStore;
    double _persistenceDelay;
    FBCache *_connectionCache;
    FBCache *_optimisitcCommentStoreCache;
}

- (void).cxx_destruct;
- (id)optimisticCommentStoreWithFeedbackID:(id)arg1;
- (id)_createConnectionWithFeedbackID:(id)arg1 focusedCommentID:(id)arg2 commentOrder:(id)arg3;
- (id)connectionWithFeedbackID:(id)arg1 focusedCommentID:(id)arg2 commentOrder:(id)arg3;
- (id)feedbackStore;
- (id)initWithSession:(id)arg1 persistenceDelay:(double)arg2;
- (id)init;

@end

