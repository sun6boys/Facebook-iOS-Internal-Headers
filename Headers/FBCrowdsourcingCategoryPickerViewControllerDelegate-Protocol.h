//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBMemEntityCategory, NSString;

@protocol FBCrowdsourcingCategoryPickerViewControllerDelegate <NSObject>
- (void)categoryPickerDidSelectCategory:(FBMemEntityCategory *)arg1;
- (void)categoryPickerDidTapCancel;

@optional
- (void)categoryPickerDidTapSuggestionWithCategoryID:(NSString *)arg1;
- (void)categoryPickerDidTapCategoryFromHierarchyWithCategoryID:(NSString *)arg1;
- (void)categoryPickerDidTapSearchResultWithCategoryID:(NSString *)arg1;
- (void)categoryPickerDidTapParentCategoryWithCategoryID:(NSString *)arg1;
- (void)categoryPickerDidShowNoResultsFoundWithQuery:(NSString *)arg1;
- (void)categoryPickerDidChangeToCategoryPicker;
- (void)categoryPickerDidStartFlow;
@end

