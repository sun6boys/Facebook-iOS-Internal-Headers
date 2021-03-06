//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UINavigationBarDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface FBNavigationBarQueue : NSObject <UINavigationBarDelegate>
{
    BOOL _animationPending;
    NSMutableArray *_pendingItems;
}

- (void).cxx_destruct;
- (void)_processNextItemForNavigationBar:(id)arg1;
- (void)_delayProcessingNextItemForNavigationBar:(id)arg1;
- (void)navigationBar:(id)arg1 didPushItem:(id)arg2;
- (void)navigationBar:(id)arg1 didPopItem:(id)arg2;
- (void)processItem:(id)arg1 forNavigationBar:(id)arg2;
- (int)positionForBar:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

