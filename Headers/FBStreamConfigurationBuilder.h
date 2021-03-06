//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBReachabilityAnnouncer_DEPRECATED, FBStreamAnalyticsContext, FBStreamListenerAnnouncer, FBUserSession, NSNotificationCenter, NSString;
@protocol FBPolling, FBStreamLoadBackgrounder, FBStreamScenePathProviding;

@interface FBStreamConfigurationBuilder : NSObject
{
    BOOL _shouldRefetchPagingInfoOnEnable;
    FBUserSession *_userSession;
    NSString *_graphQLRequestTargetID;
    id <FBStreamScenePathProviding> _scenePathProvider;
    NSString *_streamAnalyticsUUID;
    FBStreamAnalyticsContext *_streamAnalyticsContext;
    id <FBPolling> _pollingSource;
    FBReachabilityAnnouncer_DEPRECATED *_reachabilityAnnouncer;
    NSNotificationCenter *_notificationCenter;
    id <FBStreamLoadBackgrounder> _backgrounder;
    FBStreamListenerAnnouncer *_streamListenerAnnouncer;
    CDUnknownBlockType _streamResponseHandlerBuilder;
    CDUnknownBlockType _graphQLRequestBuilder;
    CDUnknownBlockType _pagingInfoBuilder;
    NSString *_actorFBID;
    CDStruct_fbe7cffb _fetchLimit;
}

@property(copy, nonatomic) NSString *actorFBID; // @synthesize actorFBID=_actorFBID;
@property(copy, nonatomic) CDUnknownBlockType pagingInfoBuilder; // @synthesize pagingInfoBuilder=_pagingInfoBuilder;
@property(copy, nonatomic) CDUnknownBlockType graphQLRequestBuilder; // @synthesize graphQLRequestBuilder=_graphQLRequestBuilder;
@property(copy, nonatomic) CDUnknownBlockType streamResponseHandlerBuilder; // @synthesize streamResponseHandlerBuilder=_streamResponseHandlerBuilder;
@property(retain, nonatomic) FBStreamListenerAnnouncer *streamListenerAnnouncer; // @synthesize streamListenerAnnouncer=_streamListenerAnnouncer;
@property(retain, nonatomic) id <FBStreamLoadBackgrounder> backgrounder; // @synthesize backgrounder=_backgrounder;
@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) FBReachabilityAnnouncer_DEPRECATED *reachabilityAnnouncer; // @synthesize reachabilityAnnouncer=_reachabilityAnnouncer;
@property(nonatomic) BOOL shouldRefetchPagingInfoOnEnable; // @synthesize shouldRefetchPagingInfoOnEnable=_shouldRefetchPagingInfoOnEnable;
@property(nonatomic) CDStruct_fbe7cffb fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(retain, nonatomic) id <FBPolling> pollingSource; // @synthesize pollingSource=_pollingSource;
@property(retain, nonatomic) FBStreamAnalyticsContext *streamAnalyticsContext; // @synthesize streamAnalyticsContext=_streamAnalyticsContext;
@property(copy, nonatomic) NSString *streamAnalyticsUUID; // @synthesize streamAnalyticsUUID=_streamAnalyticsUUID;
@property(retain, nonatomic) id <FBStreamScenePathProviding> scenePathProvider; // @synthesize scenePathProvider=_scenePathProvider;
@property(copy, nonatomic) NSString *graphQLRequestTargetID; // @synthesize graphQLRequestTargetID=_graphQLRequestTargetID;
@property(retain, nonatomic) FBUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (id)init;

@end

