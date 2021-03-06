//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession, NSString;
@protocol FBFacecastLiveViewerCountManagerDelegate, OS_dispatch_source;

@interface FBFacecastLiveViewerCountManager : NSObject
{
    NSString *_broadcastID;
    double _timeInterval;
    FBUserSession *_session;
    NSObject<OS_dispatch_source> *_timer;
    id <FBFacecastLiveViewerCountManagerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBFacecastLiveViewerCountManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didFailWithError:(id)arg1;
- (void)_handleGraphQLFetchSuccessWithResponse:(id)arg1;
- (void)_sendQuery;
- (void)stopPolling;
- (void)resumePolling;
- (void)dealloc;
- (id)initWithSession:(id)arg1 broadcastID:(id)arg2 fetchTimeInterval:(double)arg3;

@end

