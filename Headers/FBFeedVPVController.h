//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBFeedRecentVPVProviding-Protocol.h"

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface FBFeedVPVController : NSObject <FBFeedRecentVPVProviding>
{
    NSString *_analyticsModule;
    NSMutableDictionary *_cellsAppearTime;
    NSMutableDictionary *_storiesTrackingInfo;
    NSMutableSet *_previouslySeenSponsorableIDs;
    unsigned int _maxMostRecentlySeenDeduplicationKeys;
    NSMutableArray *_mostRecentlySeenDeduplicationKeys;
    BOOL _vpvSeenLoggingEnabled;
    NSDictionary *_analyticsExtras;
}

@property(copy, nonatomic) NSDictionary *analyticsExtras; // @synthesize analyticsExtras=_analyticsExtras;
@property(nonatomic) BOOL vpvSeenLoggingEnabled; // @synthesize vpvSeenLoggingEnabled=_vpvSeenLoggingEnabled;
- (void).cxx_destruct;
- (id)mostRecentVPVs;
- (void)setVisibleFeedUnits:(id)arg1;
- (BOOL)isSponsorableOnScreen:(id)arg1;
- (void)feedUnitDidDisappear:(id)arg1 trackingCodes:(id)arg2;
- (void)feedUnitDidAppear:(id)arg1 trackingCodes:(id)arg2;
- (void)_logSeenStateForUnitWithTrackingCodes:(id)arg1 module:(id)arg2 extra:(id)arg3;
- (void)_logSeenStateForUnit:(id)arg1 trackingCodes:(id)arg2;
- (void)_logViewportView;
- (id)initWithAnalyticsModule:(id)arg1 maxRecentlySeenDeduplicationKeys:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

