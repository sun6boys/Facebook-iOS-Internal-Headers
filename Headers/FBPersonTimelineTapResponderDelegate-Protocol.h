//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CALayer, FBMemPerson, FBMemPhoto, FBMemTimelineContextListItemsConnection, FBPersonTimelineTapResponder, FBProfilePhotoUpdateInfo, NSError, NSString, UIAlertView, UIView;

@protocol FBPersonTimelineTapResponderDelegate <NSObject>
@property(copy, nonatomic) NSString *deferredNavigationSentinel;
- (void)timelineTapResponderDidReport:(FBPersonTimelineTapResponder *)arg1;
- (void)timelineTapResponder:(FBPersonTimelineTapResponder *)arg1 didTapTimelineActionButtonType:(NSString *)arg2;
- (void)timelineTapResponderUpdateSubscribeStatus:(FBPersonTimelineTapResponder *)arg1 forTargetID:(NSString *)arg2;
- (void)timelineTapResponderHandleSyncTimelineData:(FBPersonTimelineTapResponder *)arg1;
- (void)timelineTapResponderHandleResetSections:(FBPersonTimelineTapResponder *)arg1 showPTR:(BOOL)arg2;
- (NSString *)analyticsUUID;
- (void)showCoverActionSheet:(CALayer *)arg1;
- (void)showProfilePictureActionSheet:(UIView *)arg1 person:(FBMemPerson *)arg2;
- (BOOL)isViewingSelf;
- (void)timelineTapResponder:(FBPersonTimelineTapResponder *)arg1 didDeletePhoto:(FBMemPhoto *)arg2;
- (void)timelineTapResponderHandlePublishPhoto:(FBPersonTimelineTapResponder *)arg1;
- (void)timelineTapResponderHandlePublishStatus:(FBPersonTimelineTapResponder *)arg1;
- (void)timelineTapResponder:(FBPersonTimelineTapResponder *)arg1 didBlockFromConfirmationView:(UIAlertView *)arg2;

@optional
- (void)showCoverActionSheet:(CALayer *)arg1 withPhoto:(FBMemPhoto *)arg2 photosInfo:(FBProfilePhotoUpdateInfo *)arg3;
- (void)timelineTapResponder:(FBPersonTimelineTapResponder *)arg1 didLoadAllContextItems:(FBMemTimelineContextListItemsConnection *)arg2 withError:(NSError *)arg3;
@end

