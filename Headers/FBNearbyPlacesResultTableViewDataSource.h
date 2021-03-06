//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UITableViewDataSource-Protocol.h"

@class FBNearbyPlacesResultListModel, NSArray, NSString;
@protocol FBNearbyPlacesHugeResultTableViewCellDelegate;

@interface FBNearbyPlacesResultTableViewDataSource : NSObject <UITableViewDataSource>
{
    FBNearbyPlacesResultListModel *_model;
    id <FBNearbyPlacesHugeResultTableViewCellDelegate> _cellDelegate;
    NSArray *_photosDataSources;
}

@property(copy, nonatomic) NSArray *photosDataSources; // @synthesize photosDataSources=_photosDataSources;
- (void).cxx_destruct;
- (id)dataSourcesFromModel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)setupPhotoDataSources;
- (id)initWithModel:(id)arg1 cellDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

