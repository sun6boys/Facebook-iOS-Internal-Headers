//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBClassProvidable-Protocol.h"

@class FBLocationManager, FBMChatBarNearbyFriendsMiniphoneContentHelper, FBMChatBarNearbyFriendsMiniphoneLogger, FBMChatContextManager, NSArray, NSString;

@interface FBMChatBarNearbyFriendsMiniphoneController : NSObject <FBClassProvidable>
{
    BOOL _needsReloadMiniphone;
    BOOL _locationIsDisabled;
    FBMChatBarNearbyFriendsMiniphoneContentHelper *_contentHelper;
    unsigned int _currentPurpose;
    FBMChatContextManager *_chatContextManager;
    FBMChatBarNearbyFriendsMiniphoneLogger *_logger;
    NSArray *_miniphones;
    int _chatBarStyle;
    NSString *_miniphoneCellReuseID;
    id _authToken;
    FBLocationManager *_locationManager;
}

@property(nonatomic) BOOL locationIsDisabled; // @synthesize locationIsDisabled=_locationIsDisabled;
@property(retain, nonatomic) FBLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(retain, nonatomic) id authToken; // @synthesize authToken=_authToken;
@property(retain, nonatomic) NSString *miniphoneCellReuseID; // @synthesize miniphoneCellReuseID=_miniphoneCellReuseID;
@property(nonatomic) int chatBarStyle; // @synthesize chatBarStyle=_chatBarStyle;
@property(retain, nonatomic) NSArray *miniphones; // @synthesize miniphones=_miniphones;
@property(retain, nonatomic) FBMChatBarNearbyFriendsMiniphoneLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) FBMChatContextManager *chatContextManager; // @synthesize chatContextManager=_chatContextManager;
@property(nonatomic) unsigned int currentPurpose; // @synthesize currentPurpose=_currentPurpose;
@property(retain, nonatomic) FBMChatBarNearbyFriendsMiniphoneContentHelper *contentHelper; // @synthesize contentHelper=_contentHelper;
@property(nonatomic) BOOL needsReloadMiniphone; // @synthesize needsReloadMiniphone=_needsReloadMiniphone;
- (void)_checkLocationStatus:(int)arg1;
- (void)_logDisplayMiniphoneForPurpose:(unsigned int)arg1;
- (void)_updateMiniphoneCellReuseID;
- (unsigned int)_purposeForShouldShowChatContext:(BOOL)arg1;
- (id)_miniphoneForPurpose:(unsigned int)arg1;
- (void)chatBarDidDisappear;
- (void)chatBarWillAppear;
- (void)logSelectMiniphoneCell;
- (id)miniphoneCellInTableView:(id)arg1;
- (float)heightForMiniphoneCell;
- (BOOL)shouldShowMiniphoneCell;
- (void)refreshPurpose;
- (void)setInfoText:(id)arg1 bylineText:(id)arg2 forPurpose:(unsigned int)arg3;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

