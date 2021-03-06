//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "FBFNAuraNUXDataFetcherDelegate-Protocol.h"
#import "FBPresentableViewController-Protocol.h"

@class FBFNAuraNUXDataController, FBMemFriendsSharingLocation, FBMemPrivacyOptionsLocationConnection, FBUserSession, NSString;

@interface FBFNAuraNUXViewController : UINavigationController <FBFNAuraNUXDataFetcherDelegate, FBPresentableViewController>
{
    BOOL _didFetchUserPhotos;
    BOOL _didFetchTopSharingFriends;
    BOOL _didFetchPrivacyConnection;
    CDUnknownBlockType _didCompleteBlock;
    CDUnknownBlockType _didSkipBlock;
    FBUserSession *_session;
    NSString *_mePhotoURL;
    NSString *_friendPhotoURL;
    NSString *_coverPhotoURL;
    NSString *_profilePhotoURL;
    FBMemFriendsSharingLocation *_sharingFriends;
    FBMemPrivacyOptionsLocationConnection *_privacyConnection;
    FBFNAuraNUXDataController *_dataFetcher;
}

@property(nonatomic) BOOL didFetchPrivacyConnection; // @synthesize didFetchPrivacyConnection=_didFetchPrivacyConnection;
@property(nonatomic) BOOL didFetchTopSharingFriends; // @synthesize didFetchTopSharingFriends=_didFetchTopSharingFriends;
@property(nonatomic) BOOL didFetchUserPhotos; // @synthesize didFetchUserPhotos=_didFetchUserPhotos;
@property(retain, nonatomic) FBFNAuraNUXDataController *dataFetcher; // @synthesize dataFetcher=_dataFetcher;
@property(retain, nonatomic) FBMemPrivacyOptionsLocationConnection *privacyConnection; // @synthesize privacyConnection=_privacyConnection;
@property(retain, nonatomic) FBMemFriendsSharingLocation *sharingFriends; // @synthesize sharingFriends=_sharingFriends;
@property(copy, nonatomic) NSString *profilePhotoURL; // @synthesize profilePhotoURL=_profilePhotoURL;
@property(copy, nonatomic) NSString *coverPhotoURL; // @synthesize coverPhotoURL=_coverPhotoURL;
@property(copy, nonatomic) NSString *friendPhotoURL; // @synthesize friendPhotoURL=_friendPhotoURL;
@property(copy, nonatomic) NSString *mePhotoURL; // @synthesize mePhotoURL=_mePhotoURL;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType didSkipBlock; // @synthesize didSkipBlock=_didSkipBlock;
@property(copy, nonatomic) CDUnknownBlockType didCompleteBlock; // @synthesize didCompleteBlock=_didCompleteBlock;
- (void).cxx_destruct;
- (id)_contentViewControllerForStep:(unsigned int)arg1;
- (void)_logStep:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int preferredPresentationOptions;
@property(readonly, nonatomic) unsigned int preferredPresentationMethod;
- (void)dataFetcher:(id)arg1 privacyConnection:(id)arg2;
- (void)dataFetcher:(id)arg1 sharingFriends:(id)arg2;
- (void)dataFetcher:(id)arg1 profilePhotoURL:(id)arg2 coverPhotoURL:(id)arg3 mePhotoURL:(id)arg4 friendsPhotoURL:(id)arg5;
- (void)skipWithXCloseButton:(BOOL)arg1;
- (void)completeWithPrivacyOption:(id)arg1;
- (void)navigateToPreviousStep;
- (void)navigateToNextStep;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithSession:(id)arg1 dataController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

