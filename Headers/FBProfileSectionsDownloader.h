//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBGraphQLConsistentLookasideCache, FBMemPagedDownloadController, FBUserSession, NSMutableArray, NSMutableDictionary;
@protocol FBProfileSectionsDownloaderDelegate;

@interface FBProfileSectionsDownloader : NSObject
{
    FBGraphQLConsistentLookasideCache *_lookasideCache;
    FBMemPagedDownloadController *_sectionsDownloadController;
    FBUserSession *_session;
    NSMutableArray *_timelineSections;
    NSMutableDictionary *_observationHandles;
    unsigned int _storyCheckCount;
    id <FBProfileSectionsDownloaderDelegate> _delegate;
}

@property(nonatomic) __weak id <FBProfileSectionsDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_sectionFieldsUpdated:(id)arg1;
- (void)_observeTimelineSection:(id)arg1;
- (void)_observe:(id)arg1;
- (id)_extractNodes:(id)arg1;
- (void)_refreshSections:(BOOL)arg1;
- (void)markAllSectionsAsOutOfDate;
- (id)sectionWithGraphQLID:(id)arg1;
- (void)_handleYoloDownloadResponse:(id)arg1 withError:(id)arg2 forSectionID:(id)arg3;
- (void)loadYoloForSectionID:(id)arg1;
- (void)loadMoreSections;
- (BOOL)hasMoreSections;
- (id)timelineSections;
- (id)initWithSession:(id)arg1 lookasideCache:(id)arg2 sectionsDownloadController:(id)arg3 storyCheckCount:(unsigned int)arg4;
- (id)initWithSession:(id)arg1 person:(id)arg2 networkRequestThreshold:(unsigned int)arg3 storyCheckCount:(unsigned int)arg4 shouldPrecheckSectionEmpty:(BOOL)arg5;

@end

