//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString;
@protocol FBEventGuestDataSource, FBQueriedProfileFieldsProtocol;

@protocol FBEventGuestDataSourceDelegate <NSObject>
- (BOOL)dataSource:(id <FBEventGuestDataSource>)arg1 shouldPrependCurrentUserForSectionType:(int)arg2;
- (void)dataSource:(id <FBEventGuestDataSource>)arg1 didTapOnAvatar:(id <FBQueriedProfileFieldsProtocol>)arg2;

@optional
- (NSString *)dataSource:(id <FBEventGuestDataSource>)arg1 titleForSectionType:(int)arg2;
- (void)dataSource:(id <FBEventGuestDataSource>)arg1 didEndDownloadForType:(int)arg2 error:(NSError *)arg3;
- (void)dataSource:(id <FBEventGuestDataSource>)arg1 didBeginDownloadforDownloadType:(int)arg2;
@end

