//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession;

@interface FBFeedAwesomizerHomeToolbox : NSObject
{
    BOOL _openedDirectlyToCard;
    FBUserSession *_session;
    SEL _tapAction;
}

@property(readonly, nonatomic) SEL tapAction; // @synthesize tapAction=_tapAction;
@property(readonly, nonatomic) BOOL openedDirectlyToCard; // @synthesize openedDirectlyToCard=_openedDirectlyToCard;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (id)initWithSession:(id)arg1 openedDirectlyToCard:(BOOL)arg2 tapAction:(SEL)arg3;

@end

