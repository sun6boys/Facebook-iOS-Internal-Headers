//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSTimer;
@protocol FBFeedStablePositionPollerDelegate;

@interface FBFeedStablePositionPoller : NSObject
{
    NSTimer *_timer;
    NSMutableDictionary *_items;
    id <FBFeedStablePositionPollerDelegate> _delegate;
}

@property(readonly, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <FBFeedStablePositionPollerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_timerFired;
- (void)stopPolling:(id)arg1 identifier:(id)arg2;
- (void)startPolling:(id)arg1 identifier:(id)arg2;
- (id)init;

@end

