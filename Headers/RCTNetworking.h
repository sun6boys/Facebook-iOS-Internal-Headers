//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "RCTBridgeModule-Protocol.h"
#import "RCTURLRequestDelegate-Protocol.h"

@class NSMapTable, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface RCTNetworking : NSObject <RCTURLRequestDelegate, RCTBridgeModule>
{
    int _currentRequestID;
    NSMapTable *_activeRequests;
    RCTBridge *_bridge;
    NSObject<OS_dispatch_queue> *_methodQueue;
}

+ (id)__rct_export__4701;
+ (id)__rct_export__4650;
+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue; // @synthesize methodQueue=_methodQueue;
@property(nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)cancelRequest:(id)arg1;
- (void)sendRequest:(id)arg1 responseSender:(CDUnknownBlockType)arg2;
- (void)URLRequest:(id)arg1 didCompleteWithError:(id)arg2;
- (void)URLRequest:(id)arg1 didReceiveData:(id)arg2;
- (void)URLRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)sendData:(id)arg1 forRequestToken:(id)arg2;
- (void)sendRequest:(id)arg1 incrementalUpdates:(BOOL)arg2 responseSender:(CDUnknownBlockType)arg3;
- (void)processDataForHTTPQuery:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)handlerForRequest:(id)arg1;
- (void)buildRequest:(id)arg1 responseSender:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

