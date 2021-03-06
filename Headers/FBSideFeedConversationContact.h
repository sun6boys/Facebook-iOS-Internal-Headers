//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSideFeedChatPerson-Protocol.h"

@class NSString, NSURL;
@protocol FBConversationContact;

@interface FBSideFeedConversationContact : NSObject <FBSideFeedChatPerson>
{
    id <FBConversationContact> _contact;
    BOOL _online;
    long long _lastActiveTime;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *UID;
@property(readonly, nonatomic) long long lastActiveTime;
@property(readonly, nonatomic, getter=isOnline) BOOL online;
@property(readonly, copy, nonatomic) NSURL *imageURL;
@property(readonly, copy, nonatomic) NSString *displayName;
- (id)initWithConversationContact:(id)arg1 online:(BOOL)arg2 lastActiveTime:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

