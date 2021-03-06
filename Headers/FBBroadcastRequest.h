//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBNetworkerRequestDelegate-Protocol.h"

@class FBFacecastBroadcastUpdater, FBGraphRequest, FBNetworkerRequest, NSString;
@protocol OS_dispatch_source;

@interface FBBroadcastRequest : NSObject <FBNetworkerRequestDelegate>
{
    FBFacecastBroadcastUpdater *_broadcastUpdater;
    unsigned long _bytesUp;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    FBNetworkerRequest *_networkerRequest;
    int _retriesRemaining;
    FBGraphRequest *_graphRequest;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
    int _broadcastRequestState;
    double _addTime;
    double _uploadStartTime;
}

@property(nonatomic) int broadcastRequestState; // @synthesize broadcastRequestState=_broadcastRequestState;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) FBGraphRequest *graphRequest; // @synthesize graphRequest=_graphRequest;
@property(nonatomic) int retriesRemaining; // @synthesize retriesRemaining=_retriesRemaining;
@property(retain, nonatomic) FBNetworkerRequest *networkerRequest; // @synthesize networkerRequest=_networkerRequest;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) unsigned long bytesUp; // @synthesize bytesUp=_bytesUp;
@property(nonatomic) double uploadStartTime; // @synthesize uploadStartTime=_uploadStartTime;
@property(nonatomic) double addTime; // @synthesize addTime=_addTime;
@property(retain, nonatomic) FBFacecastBroadcastUpdater *broadcastUpdater; // @synthesize broadcastUpdater=_broadcastUpdater;
- (void).cxx_destruct;
- (void)_updateUploadBandwidthEstimate;
- (void)_requestWrapperDone;
- (void)_cancelRequestTimeout;
@property(readonly, copy) NSString *description;
- (void)failPermanently:(id)arg1;
- (void)networkerRequest:(id)arg1 didFailWithError:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2;
- (void)networkerRequest:(id)arg1 didReceiveResponseWithStatus:(id)arg2;
- (void)networkerRequest:(id)arg1 didUploadDataWithStatus:(id)arg2;
- (void)networkerRequest:(id)arg1 didUpdateDownloadProgress:(float)arg2 complete:(BOOL)arg3;
- (void)startBroadcastRequest;
- (BOOL)isTooOldToQueue;
- (double)_requestTimeoutSeconds;
- (id)initWithCallbacks:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 retries:(int)arg4 graphRequest:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

