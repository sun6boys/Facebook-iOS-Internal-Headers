//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBNearbyPlace, FBPresenceBuiltInPlace, FBPresenceComposerActivityTypeSelection, FBPresenceIconModel, FBTaggableActivityComposition, NSString, NSURL, UIImage;

@interface FBPresenceCompositionBuilder : NSObject
{
    NSString *_authorFBID;
    NSString *_authorName;
    NSURL *_authorProfilePicURL;
    NSString *_activityQuery;
    NSURL *_activityIconURL;
    FBTaggableActivityComposition *_selectedActivity;
    UIImage *_placeImage;
    NSString *_placeImageAssetName;
    FBNearbyPlace *_selectedNearbyPlace;
    FBPresenceBuiltInPlace *_selectedBuiltInPlace;
    FBPresenceIconModel *_selectedIcon;
    FBPresenceComposerActivityTypeSelection *_currentActivityTypeSelection;
}

+ (id)presenceCompositionFromExistingPresenceComposition:(id)arg1;
+ (id)presenceComposition;
- (void).cxx_destruct;
- (id)withCurrentActivityTypeSelection:(id)arg1;
- (id)withSelectedIcon:(id)arg1;
- (id)withSelectedBuiltInPlace:(id)arg1;
- (id)withSelectedNearbyPlace:(id)arg1;
- (id)withPlaceImageAssetName:(id)arg1;
- (id)withPlaceImage:(id)arg1;
- (id)withSelectedActivity:(id)arg1;
- (id)withActivityIconURL:(id)arg1;
- (id)withActivityQuery:(id)arg1;
- (id)withAuthorProfilePicURL:(id)arg1;
- (id)withAuthorName:(id)arg1;
- (id)withAuthorFBID:(id)arg1;
- (id)build;

@end

