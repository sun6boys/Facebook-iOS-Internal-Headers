//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCountedSet;
@protocol OS_dispatch_queue;

@interface FBActivityAggregator : NSObject
{
    NSCountedSet *_activities;
    struct RecursiveMutex _lock;
    double _endHysteresis;
    BOOL _active;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (BOOL)automaticallyNotifiesObserversOfActive;
@property(nonatomic) double endHysteresis; // @synthesize endHysteresis=_endHysteresis;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)endActivity:(id)arg1;
- (void)beginActivity:(id)arg1;
- (void)_updateActivity:(BOOL)arg1 delay:(double)arg2;
- (void)_updateActivity:(BOOL)arg1;
- (id)debugDescription;
- (BOOL)_isActive;
- (void)dealloc;
- (id)init;

@end

