//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession, NSSet;
@protocol FBNuxAppEventManagerDataSource, FBQuickPromotionActionHandler, FBQuickPromotionInterstitialDataSource, FBQuickPromotionMegaphoneDataSource;

@interface FBNuxAppConfiguration : NSObject
{
    FBUserSession *_session;
}

+ (id)_nuxAppConfigurationClassName;
+ (BOOL)isNuxCoordinatorDisabled;
+ (id)nuxPlist;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *presentedClassesToBeIgnored;
@property(readonly, nonatomic) double embeddedNuxActionCooldown;
@property(readonly, nonatomic) double modalNuxImpressionCooldown;
@property(readonly, nonatomic) double expiryInterval;
@property(readonly, nonatomic) double minimumFetchInterval;
@property(readonly, nonatomic) id <FBNuxAppEventManagerDataSource> appEventManagerDataSource;
@property(readonly, copy, nonatomic) NSSet *serverFetchEvents;
@property(readonly, nonatomic) id <FBQuickPromotionMegaphoneDataSource> quickPromotionMegaphoneDataSource;
@property(readonly, nonatomic) id <FBQuickPromotionInterstitialDataSource> quickPromotionInterstitialDataSource;
@property(readonly, nonatomic) id <FBQuickPromotionActionHandler> quickPromotionActionHandler;
- (id)initWithSession:(id)arg1;

@end

