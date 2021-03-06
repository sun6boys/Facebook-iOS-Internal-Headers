//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBPreferences;

@interface FBAPISessionHTTPCookiesManager : NSObject
{
    CDUnknownBlockType _httpCookieStorageFetchBlock;
    FBPreferences *_preferences;
}

- (void).cxx_destruct;
- (void)deletePersistedHTTPCookies;
- (void)persistHTTPCookies:(id)arg1;
- (id)fetchedHTTPCookies;
- (id)cookieExpiration;
- (id)initWithHTTPCookieStorageFetchBlock:(CDUnknownBlockType)arg1 preferences:(id)arg2;
- (id)init;

@end

