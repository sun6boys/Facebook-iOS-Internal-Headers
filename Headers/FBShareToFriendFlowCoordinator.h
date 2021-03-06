//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBAvatarPickerControllerDelegate-Protocol.h"
#import "FBMemorializedFriendsProviderDelegate-Protocol.h"

@class FBAvatarPickerController, FBMemorializedFriendsProvider, FBUserSession, NSArray, NSString;
@protocol FBShareToFriendFlowCoordinatorDelegate, FBShareable;

@interface FBShareToFriendFlowCoordinator : NSObject <FBAvatarPickerControllerDelegate, FBMemorializedFriendsProviderDelegate>
{
    FBAvatarPickerController *_avatarPickerController;
    FBMemorializedFriendsProvider *_memorializedFriendsProvider;
    FBUserSession *_session;
    id <FBShareable> _shareable;
    NSArray *_trackingCodes;
    id <FBShareToFriendFlowCoordinatorDelegate> _delegate;
}

@property(nonatomic) __weak id <FBShareToFriendFlowCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)avatarPickerDidCancel:(id)arg1;
- (void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2;
- (void)viewerDidCancel;
- (void)memorializedFriendsProvider:(id)arg1 didFinishFetchWithMemorializedFriends:(id)arg2;
- (id)presentableViewController;
- (id)initWithSession:(id)arg1 shareable:(id)arg2 trackingCodes:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

