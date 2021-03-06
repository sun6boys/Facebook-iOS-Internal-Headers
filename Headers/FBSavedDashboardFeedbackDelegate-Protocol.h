//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemTimelineAppCollectionItem, FBSavedDashboardFeedbackManager, NSArray, UIView;

@protocol FBSavedDashboardFeedbackDelegate <NSObject>
- (BOOL)feedBackTypeSupported:(int)arg1;
- (void)saveFeedbackManager:(FBSavedDashboardFeedbackManager *)arg1 feedbackSelected:(int)arg2 forItem:(FBMemTimelineAppCollectionItem *)arg3;

@optional
- (void)feedbackManagerOpened:(FBSavedDashboardFeedbackManager *)arg1 forItem:(FBMemTimelineAppCollectionItem *)arg2 buttonLoggingOptions:(NSArray *)arg3;
- (UIView *)sourceView;
@end

