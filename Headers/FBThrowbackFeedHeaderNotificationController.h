//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserPreferences;

@interface FBThrowbackFeedHeaderNotificationController : NSObject
{
    FBUserPreferences *_userPreference;
    int _daysInterval;
}

- (void).cxx_destruct;
- (void)dismissNotification;
- (unsigned int)getNotificationType;
- (id)initWithUserPreferences:(id)arg1 daysInterval:(int)arg2;

@end

