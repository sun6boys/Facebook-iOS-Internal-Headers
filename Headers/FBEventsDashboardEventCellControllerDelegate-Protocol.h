//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBEventsDashboardEventCellController, FBMemEvent;

@protocol FBEventsDashboardEventCellControllerDelegate <NSObject>
- (void)cellController:(FBEventsDashboardEventCellController *)arg1 didRequestEditEvent:(FBMemEvent *)arg2;
- (void)cellController:(FBEventsDashboardEventCellController *)arg1 didRequestInvitePicker:(FBMemEvent *)arg2;
- (void)cellController:(FBEventsDashboardEventCellController *)arg1 didUpdateEvent:(FBMemEvent *)arg2;
@end

