//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError;
@protocol FBSyncEngine;

@protocol FBSyncEngineDelegate <NSObject>

@optional
- (void)syncEngine:(id <FBSyncEngine>)arg1 couldNotSyncWithError:(NSError *)arg2;
- (void)syncEngineDidFinishSync:(id <FBSyncEngine>)arg1;
- (void)syncEngine:(id <FBSyncEngine>)arg1 didSync:(NSArray *)arg2;
- (void)syncEngineWillSync:(id <FBSyncEngine>)arg1 isInitial:(BOOL)arg2;
@end

