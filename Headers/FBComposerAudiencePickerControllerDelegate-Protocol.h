//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBComposerPrivacySetting, NSArray, NSOrderedSet, NSSet;
@protocol FBComposerAudiencePickerController;

@protocol FBComposerAudiencePickerControllerDelegate <NSObject>
- (void)audiencePickerControllerDidTapDoneNavigationButton:(id <FBComposerAudiencePickerController>)arg1 finishedWithAvailablePrivacySettings:(NSArray *)arg2 selectedAudience:(FBComposerPrivacySetting *)arg3;
- (void)audiencePickerControllerDidTapCancelNavigationButton:(id <FBComposerAudiencePickerController>)arg1;

@optional
- (void)audiencePickerController:(id <FBComposerAudiencePickerController>)arg1 selectedPrivacyDidChange:(NSSet *)arg2 selectedPersonsDidChange:(NSOrderedSet *)arg3;
@end

