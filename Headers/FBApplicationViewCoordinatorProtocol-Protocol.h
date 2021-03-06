//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAppModuleManager, FBProviderMapData, FBUserSession, NSArray, UIActionSheet, UIViewController;
@protocol FBAppSessionController, FBIntentHandler, FBNavigation, FBNavigationCoordinator, FBPushHandler;

@protocol FBApplicationViewCoordinatorProtocol <NSObject>
@property(retain, nonatomic) id <FBIntentHandler> rootIntentHandler;
@property(readonly, nonatomic) id <FBNavigationCoordinator> navigationCoordinator;
@property(readonly, nonatomic) id <FBNavigation> navigation;
@property(retain, nonatomic) FBAppModuleManager *moduleManager;
@property(retain, nonatomic) FBProviderMapData *providerMapData;
- (id <FBPushHandler>)newPushHandler;
- (NSArray *)services;
- (void)applicationShouldShowLogoutActionSheet:(UIActionSheet *)arg1;
- (UIViewController *)rootViewController;
- (void)tearDownViewControllers:(id <FBAppSessionController>)arg1;
- (void)setupViewControllers:(id <FBAppSessionController>)arg1;
- (id)initWithSession:(FBUserSession *)arg1;
@end

