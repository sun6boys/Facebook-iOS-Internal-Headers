//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBNetworkerRequest, FBPreferences, NSArray, NSNotification, NSObject, NSString;

@protocol FBGatekeeperConfiguration <NSObject>
- (unsigned int)actionTypeForNotification:(NSNotification *)arg1;
- (NSObject *)notificationObjectToObserve;
- (NSArray *)notificationsToObserve;
- (FBNetworkerRequest *)networkerRequest;
- (NSString *)preferencesKey;
- (FBPreferences *)preferenceStore;

@optional
- (void)logGatekeeperAccessForKey:(NSString *)arg1 value:(id)arg2;
@end

