//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 12 2015 14:15:46).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBUserSession;
@protocol FBNearbyPlacesHereCardDownloaderDelegate, FBServiceTransactionMutating;

@interface FBNearbyPlacesHereCardDownloader : NSObject
{
    id <FBServiceTransactionMutating> _hereCardRequestToken;
    FBUserSession *_session;
    id <FBNearbyPlacesHereCardDownloaderDelegate> _delegate;
}

@property(nonatomic) __weak id <FBNearbyPlacesHereCardDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cancelRequest;
- (void)_logDebugInfoWithEvent:(id)arg1;
- (void)fetchHereCardWithUserLocation:(id)arg1;
- (id)initWithSession:(id)arg1;

@end

