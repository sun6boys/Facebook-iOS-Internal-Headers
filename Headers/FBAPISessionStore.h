//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAccessTokenManaging-Protocol.h"

@class FBAPISessionHTTPCookiesManager, FBAPISessionLoggedInUserIDCache, FBAPISessionLoginUUIDManager, FBAccessToken, FBCachedCredentialsFetcher, FBCachedCredentialsPersister, FBCredentials, FBViewerInfo, NSArray, NSString;

@interface FBAPISessionStore : NSObject <FBAccessTokenManaging>
{
    FBCredentials *_cachedCredentials;
    FBAPISessionHTTPCookiesManager *_httpCookiesManager;
    FBCachedCredentialsFetcher *_credentialsFetcher;
    FBCachedCredentialsPersister *_credentialsPersister;
    FBAPISessionLoginUUIDManager *_loginUUIDManager;
    BOOL _shouldFetchCredentials;
    BOOL _sessionKeychainWasLocked;
    FBAPISessionLoggedInUserIDCache *_loggedInUserIDCache;
    NSString *_cachedLoggedInUserID;
    BOOL _shouldFetchLoggedInUserID;
    NSString *_appGroup;
    BOOL _didLogin;
    NSString *_appSecret;
}

@property(readonly, nonatomic) BOOL didLogin; // @synthesize didLogin=_didLogin;
@property(readonly, copy) NSString *appSecret; // @synthesize appSecret=_appSecret;
- (void).cxx_destruct;
- (unsigned int)expirationStatus;
- (void)_deleteSession;
- (void)_persistHTTPCookies:(id)arg1;
- (void)_emitDidChangeNotificationForLoggedInUserFBID;
- (void)_emitWillChangeNotificationForLoggedInUserFBID;
- (id)_fetchedOrCachedLoggedInUserID;
- (id)_fetchedOrCachedCredentialsWithKeychainLocked:(char *)arg1;
- (id)_fetchedOrCachedCredentials;
- (void)_updateAndPersistCredentials:(id)arg1;
- (void)resetSessionStore;
- (void)reloadSessionStoreIfWasLocked;
- (void)updateAccessToken:(id)arg1 loggedInUserFBID:(id)arg2 httpCookies:(id)arg3 actingViewerInfo:(id)arg4;
- (void)completedLoginWithAccessToken:(id)arg1 loggedInUserFBID:(id)arg2 httpCookies:(id)arg3 actingViewerInfo:(id)arg4;
- (BOOL)isSessionStale;
- (BOOL)userIsLoggedIn:(id *)arg1;
- (BOOL)updateAccessToken:(id)arg1 forFBID:(id)arg2;
- (void)_updateAccessTokenForActingViewer:(id)arg1;
- (void)updateAccessToken:(id)arg1;
@property(readonly, copy) NSArray *httpCookies;
@property(readonly, nonatomic) BOOL sessionKeychainWasLocked;
@property(readonly, copy, nonatomic) FBViewerInfo *actingViewerInfo;
@property(readonly, copy) NSString *defaultViewerFBID;
@property(readonly, copy) NSString *loggedInUserFBID;
- (id)accessTokenForFBID:(id)arg1;
@property(readonly, copy) FBAccessToken *accessToken;
- (id)initWithAppSecret:(id)arg1 httpCookiesManager:(id)arg2 credentialsFetcher:(id)arg3 credentialsPersister:(id)arg4 loginUUIDManager:(id)arg5 loggedInUserIDCache:(id)arg6;
- (id)initWithAppSecret:(id)arg1 appGroup:(id)arg2;
- (id)initWithAppSecret:(id)arg1 appGroup:(id)arg2 cacheLoggedInUserID:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

